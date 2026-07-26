/*
 * XREFs of ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A09FC
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A596C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 * Callees:
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C009CC28 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A0A30 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B2F28 (-ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
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
