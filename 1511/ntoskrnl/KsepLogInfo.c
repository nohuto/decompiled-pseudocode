/*
 * XREFs of KsepLogInfo @ 0x140002940
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1403B6740 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x1403B684C (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1403B6FE4 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1403B8968 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x1404FA6D4 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140524BB0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14061DA50 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14061DDFC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14061E1F0 (KsepResolveApplicableShimsForDriver.c)
 *     KsepEngineReadFlags @ 0x140755FA4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1407560AC (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x140756FC0 (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x14076CB4C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14000296C (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
