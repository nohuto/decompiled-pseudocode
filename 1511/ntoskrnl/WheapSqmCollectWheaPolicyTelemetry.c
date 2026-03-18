/*
 * XREFs of WheapSqmCollectWheaPolicyTelemetry @ 0x140678780
 * Callers:
 *     WheapPfaMemoryCheck @ 0x140678D94 (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1406790E8 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapSqmWaitWorkerRoutine @ 0x14067972C (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x140217A60 (WheapSqmDwordCommon.c)
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
