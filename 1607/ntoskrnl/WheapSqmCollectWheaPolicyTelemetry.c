/*
 * XREFs of WheapSqmCollectWheaPolicyTelemetry @ 0x1406BAEB8
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1406BB4C4 (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1406BB818 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1406BBE58 (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x140231C30 (WheapSqmDwordCommon.c)
 */

NTSTATUS WheapSqmCollectWheaPolicyTelemetry()
{
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7201, WheaRegistryKeysPresent);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7310, WheapPolicyDisableOffline != 0);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7197, WheapPolicyMemPersistOffline != 0);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7200, WheapPolicyMemPfaDisable == 0);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7199, WheapPolicyMemPfaPageCount);
  WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7198, WheapPolicyMemPfaThreshold);
  return WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, 7251, WheapPolicyMemPfaTimeout / 0x989680uLL);
}
