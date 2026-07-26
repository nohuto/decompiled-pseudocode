/*
 * XREFs of ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A0A30
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A09FC (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B1894 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00B2018 (-ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ.c)
 */

char ndisIsInNetSetupMode(void)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !byte_1C0085820 )
  {
    byte_1C0085810 = ndisIsNetSetupTheBindingEngineUncached();
    _InterlockedOr(v1, 0);
    byte_1C0085820 = 1;
  }
  return byte_1C0085810;
}
