/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C0007514
 * Callers:
 *     IoQueuesFreeResources @ 0x1C0005DA8 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C0005EFC (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C000A2F0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A460 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C000A6E0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C000AFA0 (QueryProtocolInfoCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000B620 (QueryTemperatureInfoHealthLogCompletion.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C000CDC0 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C000CF90 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return StorPortExtendedFunction(25LL, a1, a3);
  return result;
}
