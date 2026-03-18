/*
 * XREFs of KsepRegistryCloseKey @ 0x1403B8734
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x1403B86BC (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1404FA5A0 (KsepDbQueryRegistryDeviceData.c)
 *     KseSetDeviceFlags @ 0x14061D21C (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14061D71C (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepEngineReadFlags @ 0x140755FA4 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x14076CB4C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_1402E22FC);
  }
  return result;
}
