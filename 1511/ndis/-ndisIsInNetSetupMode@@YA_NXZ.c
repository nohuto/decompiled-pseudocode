/*
 * XREFs of ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A7A34
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ndisPnPAddDevice @ 0x1C009AE5C (ndisPnPAddDevice.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A78A4 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A7A04 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00A9818 (-ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ.c)
 */

char ndisIsInNetSetupMode(void)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !byte_1C00837F8 )
  {
    byte_1C00837E8 = ndisIsNetSetupTheBindingEngineUncached();
    _InterlockedOr(v1, 0);
    byte_1C00837F8 = 1;
  }
  return byte_1C00837E8;
}
