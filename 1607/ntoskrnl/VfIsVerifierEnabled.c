/*
 * XREFs of VfIsVerifierEnabled @ 0x1400822C8
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     KsepPatchDriverImportsTable @ 0x1406532A4 (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x140675208 (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x1406F2738 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F2838 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x1406FE170 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
