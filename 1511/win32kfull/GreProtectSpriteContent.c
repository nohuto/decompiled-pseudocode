/*
 * XREFs of GreProtectSpriteContent @ 0x1C02617A8
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0239364 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C007B460 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C007C138 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E94AC (DwmAsyncUpdateSprite.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rdi
  SFMLOGICALSURFACE *v8; // rbp
  unsigned int v9; // ecx
  __int64 v10; // rbp
  __int64 v11; // r14
  int v12; // ebx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // ebx
  void *v16; // rax
  int v18; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v19[4]; // [rsp+54h] [rbp-34h] BYREF
  _QWORD v20[6]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+18h] BYREF

  v21 = a1;
  v4 = 0;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v19, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v20, (HWND)a2);
    v7 = v20[0];
    if ( v20[0] )
    {
      v4 = 1;
      v8 = *(SFMLOGICALSURFACE **)(v20[0] + 128LL);
      if ( ((*(_DWORD *)(v20[0] + 136LL) >> 3) & 1) != a4 )
      {
        *(_DWORD *)(v20[0] + 136LL) ^= ((unsigned __int8)*(_DWORD *)(v20[0] + 136LL) ^ (unsigned __int8)(8 * a4)) & 8;
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v8,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v18,
          (unsigned int *)&v21,
          &v22,
          0LL,
          0LL);
        v9 = *((_DWORD *)v8 + 64);
        v10 = *(_QWORD *)v8;
        v11 = *(_QWORD *)v7;
        v12 = v9 & 1 | (8 * (*(_DWORD *)(v7 + 136) & 0xE));
        v13 = (v9 >> 1) & 0x18;
        v14 = v9 & 4;
        v15 = v14 | *(_DWORD *)(v7 + 136) & 1 | v13 | (2 * v12);
        v16 = (void *)UserReferenceDwmApiPort(v14);
        DwmAsyncUpdateSprite(v16, v11, v10, v15, (__int64 *)(v7 + 72), 0LL, v18, v21, v22);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v19);
  }
  return v4;
}
