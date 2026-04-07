/*
 * XREFs of ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x18008ED84
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180005B4C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x18008E230 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E54C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::SkipAnimationDelays(CScreenRotation *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // esi
  void *v5; // rdx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)this + 72);
  *((_BYTE *)this + 313) = 1;
  if ( *((_BYTE *)this + 364) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v5 = &UdwmHardwareExpression_HintFired;
LABEL_6:
      TemplateEventDescriptor(v3, (__int64)v5);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v5 = &UdwmScreenRotation_HintFired;
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 72) == 2 && v4 == 2 )
  {
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24));
    v6 = CScreenRotation::MidDelayExpired(this);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x259u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v2;
}
