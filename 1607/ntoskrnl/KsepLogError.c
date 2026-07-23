/*
 * XREFs of KsepLogError @ 0x1401DCCD0
 * Callers:
 *     KsepShimDbChanged @ 0x140127220 (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x140495B04 (KsepShimDbMapToMemory.c)
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x1405151DC (KsepGetShimCallbacksForDriver.c)
 *     KseRegisterShimEx @ 0x14057097C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140652DAC (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140653158 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14065354C (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x1407B30EC (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407D03F4 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14010B3FC (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
