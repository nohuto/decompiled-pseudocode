/*
 * XREFs of KsepDebugPrint @ 0x14020C31C
 * Callers:
 *     KsepShimDbChanged @ 0x1401537EC (KsepShimDbChanged.c)
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KseQueryDeviceData @ 0x1405720AC (KseQueryDeviceData.c)
 *     KsepShimDbMapToMemory @ 0x140572334 (KsepShimDbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x140576E20 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1405786C4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140578AD0 (KsepGetShimCallbacksForDriver.c)
 *     KseRegisterShimEx @ 0x1405B538C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14069C630 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14069CA0C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14069CE00 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x1407C04D4 (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1407DC850 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407DC8BC (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x1407DE684 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x1407E1C9C (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1407E1D2C (KsepMatchInitBiosInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407E77F0 (KseShimDatabaseBootInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407FB2C0 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     vDbgPrintEx @ 0x140131EE4 (vDbgPrintEx.c)
 */

ULONG KsepDebugPrint(__int64 a1, const CHAR *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintEx(0x65u, 0, a2, va);
}
