/*
 * XREFs of ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B1894
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A738C (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C009C87C (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A0A30 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B2FF8 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverConfiguration(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  a1->FilterBindFlags = 0;
  return (ndisIsInNetSetupMode() && ndisBindReadFilterDriverFromV2Registry(a1)
       || ndisBindReadFilterDriverFromV1Registry(a1))
      && ((a1->FilterBindFlags & 2) != 0 || a1->FilterClass._p);
}
