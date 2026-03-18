/*
 * XREFs of KsepLogError @ 0x1401CD220
 * Callers:
 *     KsepShimDbChanged @ 0x14011BA00 (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1403B5C58 (KsepShimDbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x1403B684C (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x1403B8968 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1403B8AC4 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x1404F0BC8 (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x140524BB0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14061DA50 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14061DDFC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14061E1F0 (KsepResolveApplicableShimsForDriver.c)
 *     KseShimDatabaseBootInitialize @ 0x140755DF0 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140755FA4 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140756118 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140756FC0 (KseInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x14076CABC (KsepMatchInitMachineInfo.c)
 *     KseClearPCIDBitsInitialize @ 0x140784B48 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14000296C (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
