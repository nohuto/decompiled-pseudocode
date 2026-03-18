/*
 * XREFs of KsepDebugPrint @ 0x1401CCFB8
 * Callers:
 *     KsepShimDbChanged @ 0x14011BA00 (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1403B5C58 (KsepShimDbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x1403B6740 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x1403B684C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1403B6FE4 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1403B8968 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1403B8AC4 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 *     KseAddHardwareId @ 0x1404F0BC8 (KseAddHardwareId.c)
 *     KseQueryDeviceData @ 0x1404FA6D4 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140524BB0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14061DA50 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14061DDFC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14061E1F0 (KsepResolveApplicableShimsForDriver.c)
 *     KseShimDatabaseBootInitialize @ 0x140755DF0 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140755FA4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1407560AC (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140756118 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140756FC0 (KseInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x14076CABC (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x14076CB4C (KsepMatchInitBiosInfo.c)
 *     KseClearPCIDBitsInitialize @ 0x140784B48 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     vDbgPrintEx @ 0x1400E69B0 (vDbgPrintEx.c)
 */

ULONG KsepDebugPrint(__int64 a1, const CHAR *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintEx(0x65u, 0, a2, va);
}
