/*
 * XREFs of ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800814D8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800069F4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007F394 (-Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180091438 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800923C8 (-Start@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::RotationModeChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  CScreenRotation *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    if ( *((_QWORD *)this + 63)
      || (v5 = CScreenRotation::Create(
                 *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                 (struct CScreenRotation **)this + 63),
          v4 = v5,
          v5 >= 0) )
    {
      CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24));
      v6 = *((_QWORD *)this + 66);
      if ( v6 && *(_BYTE *)(v6 + 68) )
        (**(void (__fastcall ***)(_QWORD, _QWORD))v6)(*((_QWORD *)this + 66), *(unsigned int *)(v6 + 64));
      v7 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
      v4 = v7;
      if ( v7 >= 0 )
      {
        v8 = CScreenRotation::Capture(*((CScreenRotation **)this + 63));
        v4 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1887u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x1885u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x187Cu);
    }
  }
  else
  {
    v9 = (CScreenRotation *)*((_QWORD *)this + 63);
    if ( v9 && *((_QWORD *)v9 + 3) )
      CScreenRotation::Start(v9);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
