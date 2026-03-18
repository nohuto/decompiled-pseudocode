/*
 * XREFs of KsepDebugPrint @ 0x1401DCC3C
 * Callers:
 *     KsepShimDbChanged @ 0x140126CB0 (KsepShimDbChanged.c)
 *     KsepGetShimsForDriver @ 0x140484638 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1404859F4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140485B50 (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x1404E5818 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x1404E5924 (KsepGetShimCallbacksForDriver.c)
 *     KseQueryDeviceData @ 0x140534C50 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140546854 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x14057043C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140652CC8 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140653074 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140653468 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1407B3080 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407B30EC (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407D03F4 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     vDbgPrintEx @ 0x140081B88 (vDbgPrintEx.c)
 */

ULONG KsepDebugPrint(__int64 a1, const CHAR *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintEx(0x65u, 0, a2, va);
}
