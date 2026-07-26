/*
 * XREFs of ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A41D4
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A42BC (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A4810 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00CEFE0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A430C (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void Ndis::BindEngine::EndBindOperation(void)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress, 0xFFFFFFFF) <= 1 )
    ndisBindEnumerateProtocolDrivers(lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_, 0LL);
}
