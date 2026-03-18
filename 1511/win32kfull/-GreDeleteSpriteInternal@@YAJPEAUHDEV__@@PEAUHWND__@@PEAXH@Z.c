/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0079A6C
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A5E8 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C000B150 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0038E2C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C007C188 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C00FBF88 (DwmAsyncDestroySprite.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C00FC944 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C02608D0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C026B2E8 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  __int64 v8; // rcx
  struct DWMSPRITE *v9; // rbx
  __int64 v10; // rsi
  void *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rcx
  W32PIDLOCK *v17; // rsi
  __int64 v18; // rax
  struct DWMSPRITE *v19; // r8
  _BYTE v21[8]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v22; // [rsp+28h] [rbp-30h] BYREF

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v22, (HWND)a2, a3);
    v9 = v22;
    if ( v22 )
    {
      v10 = *((_QWORD *)v22 + 16);
      v11 = (void *)UserReferenceDwmApiPort(v8);
      v12 = DwmAsyncDestroySprite(v11);
      v13 = *(_QWORD *)(v10 + 192);
      v14 = v12;
      if ( !v13 )
        goto LABEL_10;
      v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v15) )
        goto LABEL_10;
      v17 = (W32PIDLOCK *)(v16 + 264);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v16 + 264));
      if ( *(_DWORD *)(v15 + 316) && (*(_DWORD *)(v15 + 116) & 2) == 0 )
      {
        *((_DWORD *)v9 + 34) |= 0x10u;
        vspRemoveStateReferencesForSprite(v9);
        *(_QWORD *)(v15 + 416) = 0LL;
        *(_QWORD *)(v15 + 408) = a1;
        v18 = *(_QWORD *)v9;
        *(_DWORD *)(v15 + 116) |= 2u;
        *(_DWORD *)(v15 + 432) = 1;
        v4 = 0;
        *(_QWORD *)(v15 + 424) = v18;
      }
      W32PIDLOCK::vUnlockSingleThread(v17);
      if ( v4 )
      {
LABEL_10:
        v19 = v9;
        *((_DWORD *)v9 + 16) = *((_DWORD *)v9 + 14);
        *((_DWORD *)v9 + 17) = *((_DWORD *)v9 + 15);
        _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
        v9 = 0LL;
        v22 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v19);
      }
    }
    else
    {
      v14 = -2143354870;
    }
    if ( v9 )
      _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v21);
  }
  else
  {
    return (unsigned int)GdiDeleteSprite(a1, (HWND)a2, a3);
  }
  return v14;
}
