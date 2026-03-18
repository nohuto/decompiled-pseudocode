/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520
 * Callers:
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0261C54 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     DwmAsyncDestroySprite @ 0x1C000CC54 (DwmAsyncDestroySprite.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C000CCD8 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00103B8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C009CE8C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0261F20 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C026C778 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  struct DWMSPRITE *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  void *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebp
  __int64 v15; // rbx
  __int64 v16; // rcx
  W32PIDLOCK *v17; // rdi
  __int64 v18; // rax
  struct DWMSPRITE *v19; // r8
  _BYTE v21[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-50h] BYREF
  struct DWMSPRITE *v23; // [rsp+48h] [rbp-30h]

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v22, (HWND)a2, a3);
    v8 = v23;
    if ( v23 )
    {
      v9 = *((_QWORD *)v23 + 16);
      v10 = *(_QWORD *)v23;
      v11 = (void *)UserReferenceDwmApiPort();
      v12 = DwmAsyncDestroySprite(v11, v10);
      v13 = *(_QWORD *)(v9 + 192);
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
        *((_DWORD *)v8 + 34) |= 0x10u;
        vspRemoveStateReferencesForSprite(v8);
        *(_QWORD *)(v15 + 416) = 0LL;
        *(_QWORD *)(v15 + 408) = a1;
        v18 = *(_QWORD *)v8;
        *(_DWORD *)(v15 + 116) |= 2u;
        *(_DWORD *)(v15 + 432) = 1;
        v4 = 0;
        *(_QWORD *)(v15 + 424) = v18;
      }
      W32PIDLOCK::vUnlockSingleThread(v17);
      if ( v4 )
      {
LABEL_10:
        *((_DWORD *)v8 + 16) = *((_DWORD *)v8 + 14);
        *((_DWORD *)v8 + 17) = *((_DWORD *)v8 + 15);
        v19 = v23;
        if ( v23 )
          _InterlockedDecrement((volatile signed __int32 *)v23 + 3);
        v23 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v19);
      }
      v8 = v23;
    }
    else
    {
      v14 = -2143354870;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
    v23 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v22);
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
