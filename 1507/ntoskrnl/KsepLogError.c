/*
 * XREFs of KsepLogError @ 0x14020C584
 * Callers:
 *     KsepShimDbChanged @ 0x1401537EC (KsepShimDbChanged.c)
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KsepShimDbMapToMemory @ 0x140572334 (KsepShimDbMapToMemory.c)
 *     KseDriverLoadImage @ 0x1405786C4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140578AD0 (KsepGetShimCallbacksForDriver.c)
 *     KseRegisterShimEx @ 0x1405B538C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14069C630 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14069CA0C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14069CE00 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x1407C04D4 (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x1407DC8BC (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x1407DE684 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x1407E1C9C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407E77F0 (KseShimDatabaseBootInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407FB2C0 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140153D9C (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
