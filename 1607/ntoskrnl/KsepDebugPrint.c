/*
 * XREFs of KsepDebugPrint @ 0x1401DCA68
 * Callers:
 *     KsepShimDbChanged @ 0x140127220 (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x140495B04 (KsepShimDbMapToMemory.c)
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x1405139C0 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x1405151DC (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14051525C (KseShimDriverIoCallbacks.c)
 *     KseQueryDeviceData @ 0x140535190 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140546D94 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x14057097C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140652DAC (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140653158 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14065354C (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1407B3080 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407B30EC (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407D03F4 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     vDbgPrintEx @ 0x140084D0C (vDbgPrintEx.c)
 */

ULONG KsepDebugPrint(__int64 a1, const CHAR *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintEx(0x65u, 0, a2, va);
}
