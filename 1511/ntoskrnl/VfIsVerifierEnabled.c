/*
 * XREFs of VfIsVerifierEnabled @ 0x140001FF0
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14039F020 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     IoShutdownSystem @ 0x1403ADE5C (IoShutdownSystem.c)
 *     KsepPatchDriverImportsTable @ 0x14061E02C (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x14063CAA4 (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x1406B2000 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
