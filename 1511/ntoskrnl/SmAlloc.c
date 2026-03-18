/*
 * XREFs of SmAlloc @ 0x1400F85A0
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1404D066C (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1404D1574 (SmpKeyedStoreCreate.c)
 *     SmKmStoreCreatePrepare @ 0x1404D175C (SmKmStoreCreatePrepare.c)
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 *     SmProcessListRequest @ 0x1406574E4 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1406581B8 (SmcProcessCreateRequest.c)
 *     SmcStoreCreate @ 0x140659274 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1406597BC (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x140659C4C (SmcStoreSlotReserve.c)
 *     SmKmFileInfoDuplicate @ 0x14065A2A4 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14065A96C (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14065AB88 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14065BF44 (SmCrEncStart.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SmAlloc(SIZE_T a1, ULONG a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, a2);
}
