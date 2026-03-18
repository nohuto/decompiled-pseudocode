/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C0003FD8
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C0003FD0 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02A6450 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009921C (hsurfCreateCompatibleSurface.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
  _BYTE v15[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v17[6]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v18[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v19[80]; // [rsp+E8h] [rbp-20h] BYREF
  char v20; // [rsp+160h] [rbp+58h] BYREF

  CompatibleSurface = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] && *(_DWORD *)(v17[0] + 32LL) != 1 )
    {
      v11 = *(_QWORD *)(v17[0] + 48LL);
      v16 = v11;
      if ( (*(_DWORD *)(v11 + 56) & 0x8000) == 0 )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v20);
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v15, (struct XDCOBJ *)v17);
        GreAcquireSemaphoreSharedInternal(ghsemDwmState);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v16);
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
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
        DCOBJ::~DCOBJ((DCOBJ *)v19);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
        GreReleaseSemaphoreInternal(ghsemDwmState);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v15);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
      }
      if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
      {
        bDeleteSurface(CompatibleSurface);
        CompatibleSurface = 0LL;
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return CompatibleSurface;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
