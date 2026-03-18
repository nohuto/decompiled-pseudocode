/*
 * XREFs of VfIsVerifierEnabled @ 0x140025ADC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     KsepPatchDriverImportsTable @ 0x14069CC3C (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x14072AC78 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x140732000 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
