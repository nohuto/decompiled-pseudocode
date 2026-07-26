/*
 * XREFs of ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A0DB4
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A0EDC (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00D01B0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void Ndis::BindEngine::EndBindOperation(void)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress, 0xFFFFFFFF) <= 1 )
    ndisBindEnumerateProtocolDrivers(lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_, 0LL);
}
