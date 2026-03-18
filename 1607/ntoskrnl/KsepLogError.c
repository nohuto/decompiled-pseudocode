/*
 * XREFs of KsepLogError @ 0x1401DCEA4
 * Callers:
 *     KsepShimDbChanged @ 0x140126CB0 (KsepShimDbChanged.c)
 *     KseDriverLoadImage @ 0x1404859F4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140485B50 (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     KsepGetShimCallbacksForDriver @ 0x1404E5924 (KsepGetShimCallbacksForDriver.c)
 *     KseRegisterShimEx @ 0x14057043C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140652CC8 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140653074 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140653468 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x1407B30EC (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407D03F4 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140084DF4 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
