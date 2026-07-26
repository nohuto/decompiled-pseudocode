/*
 * XREFs of ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A8C10
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A12E0 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A8BE0 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisPnPAddDevice @ 0x1C00ACC00 (ndisPnPAddDevice.c)
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ @ 0x1C00B0688 (-ndisIsNetSetupTheBindingEngineUncached@@YA_NXZ.c)
 */

char ndisIsInNetSetupMode(void)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !byte_1C0089680 )
  {
    byte_1C0089670 = ndisIsNetSetupTheBindingEngineUncached();
    _InterlockedOr(v1, 0);
    byte_1C0089680 = 1;
  }
  return byte_1C0089670;
}
