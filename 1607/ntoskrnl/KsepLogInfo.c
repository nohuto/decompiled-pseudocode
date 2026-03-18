/*
 * XREFs of KsepLogInfo @ 0x140084DC8
 * Callers:
 *     KsepGetShimsForDriver @ 0x140484638 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1404859F4 (KseDriverLoadImage.c)
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
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140084DF4 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
