/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000B8FC
 * Callers:
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000B858 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000BE10 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000CFA8 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000EB04 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000F320 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800905F0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800AAB08, 1LL, v3, 0x3A1u);
  }
  else
  {
    v5 = CTransitionVisualController::RemoveTargetsForStoryboard(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
           a2,
           0,
           0x10000000u);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800AAB08, 1LL, v5, 0x3A4u);
    }
    else if ( *((_DWORD *)a2 + 6) <= 1u )
    {
      *((_DWORD *)a2 + 6) = 2;
      CStoryboard::_LogStoryboardEvent(a2);
    }
  }
  if ( v4 < 0 )
    CStoryboard::Abandon(a2);
  return (unsigned int)v4;
}
