/*
 * XREFs of SortMonitorsInSpatialOrder @ 0x1400CDC20
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1400CCE14 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1400CDC50 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 */

void __fastcall SortMonitorsInSpatialOrder(__int64 a1, __int64 a2)
{
  if ( ***(_DWORD ***)(W32GetUserSessionState(a1, a2) + 56968) )
    UpdateDesktopMonitorNavigationOrder();
}
