/*
 * XREFs of KsepLogInfo @ 0x140153D70
 * Callers:
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x1405720AC (KseQueryDeviceData.c)
 *     KseShimDriverIoCallbacks @ 0x140576E20 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1405786C4 (KseDriverLoadImage.c)
 *     KsepGetShimCallbacksForDriver @ 0x140578AD0 (KsepGetShimCallbacksForDriver.c)
 *     KseRegisterShimEx @ 0x1405B538C (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14069C630 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14069CA0C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14069CE00 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x1407C04D4 (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1407DC850 (KseDriverScopeInitialize.c)
 *     KsepEngineReadFlags @ 0x1407DE684 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x1407E1D2C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140153D9C (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
