/*
 * XREFs of KsepRegistryCloseKey @ 0x140485714
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x14048569C (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140534EA8 (KsepDbQueryRegistryDeviceData.c)
 *     KseSetDeviceFlags @ 0x140652510 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652994 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(&dword_1403073BC);
  }
  return result;
}
