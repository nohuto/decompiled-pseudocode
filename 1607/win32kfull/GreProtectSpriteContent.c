/*
 * XREFs of GreProtectSpriteContent @ 0x1C025F0F4
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C02313C4 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C0051ED0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00523D8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0053FF8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0063028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rdi
  SFMLOGICALSURFACE *v8; // r14
  unsigned int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // r14
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // ebx
  void *v16; // rax
  int v18; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v19[4]; // [rsp+54h] [rbp-2Ch] BYREF
  _BYTE v20[32]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+40h] BYREF

  v22 = a1;
  v4 = 0;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v19, a2, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v20, (HWND)a2);
    v7 = v21;
    if ( v21 )
    {
      v4 = 1;
      v8 = *(SFMLOGICALSURFACE **)(v21 + 128);
      if ( ((*(_DWORD *)(v21 + 136) >> 3) & 1) != a4 )
      {
        *(_DWORD *)(v21 + 136) ^= ((unsigned __int8)*(_DWORD *)(v21 + 136) ^ (unsigned __int8)(8 * a4)) & 8;
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v8,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v18,
          (unsigned int *)&v22,
          &v23,
          0LL,
          0LL);
        v9 = *((_DWORD *)v8 + 64);
        v10 = *(_QWORD *)v8;
        v11 = *(_QWORD *)v7;
        v12 = v9 & 1 | (8 * (*(_DWORD *)(v7 + 136) & 0xE));
        v13 = v9 >> 1;
        v14 = v9 & 4;
        v15 = v14 | *(_DWORD *)(v7 + 136) & 1 | v13 & 0x18 | (2 * v12);
        v16 = (void *)UserReferenceDwmApiPort(v14);
        DwmAsyncUpdateSprite(v16, v11, v10, v15, (__int64 *)(v7 + 72), 0LL, v18, v22, v23);
        v7 = v21;
      }
      if ( v7 )
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    }
    v21 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v20);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v19);
  }
  return v4;
}
