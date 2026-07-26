/*
 * XREFs of ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A7A04
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A22E4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 * Callees:
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A10F0 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A7A34 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00DCE90 (-ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 */

bool __fastcall ndisBindReadProtocolDriverConfiguration(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  bool result; // al

  if ( ndisIsInNetSetupMode() && ndisBindReadProtocolDriverFromV2Registry(a1) )
    return 1;
  result = ndisBindReadProtocolDriverFromV1Registry(a1);
  if ( result )
    return 1;
  return result;
}
