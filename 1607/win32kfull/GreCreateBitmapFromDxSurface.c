/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C0009B98
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C0009B90 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02A70C0 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00F0964 (hsurfCreateCompatibleSurface.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreCreateBitmapFromDxSurface(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 CompatibleSurface; // rdi
  __int64 v11; // rbx
  __int64 v12; // r8
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v15; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v16[8]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v18[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v19[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v20[80]; // [rsp+E8h] [rbp-20h] BYREF
  char v21; // [rsp+160h] [rbp+58h] BYREF

  CompatibleSurface = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] && *(_DWORD *)(v17[0] + 32LL) != 1 )
    {
      v11 = *(_QWORD *)(v17[0] + 48LL);
      v15 = v11;
      if ( (*(_DWORD *)(v11 + 56) & 0x8000) == 0 )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21);
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v16, (struct XDCOBJ *)v17);
        GreAcquireSemaphoreSharedInternal(ghsemDwmState);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v15);
        if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
        {
          LODWORD(v12) = 0;
          if ( (*(_DWORD *)(v11 + 2196) & 0x100) == 0 )
            v12 = **(_QWORD **)(v11 + 1832);
          CompatibleSurface = hsurfCreateCompatibleSurface(
                                *(_QWORD *)(v17[0] + 48LL),
                                *(_DWORD *)(v11 + 2132),
                                v12,
                                a2,
                                a3,
                                1,
                                0,
                                0,
                                0,
                                1,
                                a6,
                                0,
                                a4,
                                a5,
                                a7);
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
        DCOBJ::~DCOBJ((DCOBJ *)v20);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
        GreReleaseSemaphoreInternal(ghsemDwmState);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v16);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
      }
      if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
      {
        bDeleteSurface(CompatibleSurface);
        CompatibleSurface = 0LL;
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v18);
    return CompatibleSurface;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
