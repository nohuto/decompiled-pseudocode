/*
 * XREFs of ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180078C10
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180005B4C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800775A4 (-Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008DEC8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x18008EE58 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x18008F024 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 */

__int64 __fastcall CWindowList::HandleHardwareExpressionActivation(CWindowList *this, int a2)
{
  CScreenRotation **v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CScreenRotation *v8; // rdx
  int v9; // eax
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (CScreenRotation **)((char *)this + 512);
  if ( *v4
    || (v5 = CScreenRotation::Create(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               v4),
        v6 = v5,
        v5 >= 0) )
  {
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24));
    v7 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = *v4;
      *((_DWORD *)v8 + 90) = 1065353216;
      *((float *)v8 + 87) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
      *((float *)v8 + 88) = GammaLUT_sRGB_to_scRGB[BYTE1(a2)] / 255.0;
      *((float *)v8 + 89) = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
      v9 = CScreenRotation::Capture(*v4);
      v6 = v9;
      if ( v9 >= 0 )
      {
        CScreenRotation::UpdateAngle(*v4, 360, 360);
        v10 = CScreenRotation::Start(*v4);
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x542u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x53Eu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x53Bu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x536u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
