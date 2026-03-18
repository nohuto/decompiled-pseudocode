/*
 * XREFs of KsepRegistryCloseKey @ 0x1405785C8
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x140578550 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140578D3C (KsepDbQueryRegistryDeviceData.c)
 *     KseSetDeviceFlags @ 0x14069BDFC (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14069C2FC (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepEngineReadFlags @ 0x1407DE684 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x1407E1D2C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_14033275C);
  }
  return result;
}
