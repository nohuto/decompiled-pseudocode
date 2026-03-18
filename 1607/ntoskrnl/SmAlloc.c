/*
 * XREFs of SmAlloc @ 0x14000215C
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1403E34A8 (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1403E3548 (SmpKeyedStoreCreate.c)
 *     SmKmStoreCreatePrepare @ 0x1403E3714 (SmKmStoreCreatePrepare.c)
 *     SmProcessCreateRequest @ 0x1403E3B50 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1403E3E78 (SmKmStoreAdd.c)
 *     SmProcessListRequest @ 0x1406968A0 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140696C6C (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140697464 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x140697E7C (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x140698598 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1406987B4 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x140699B6C (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14069A590 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14069AAD8 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14069AF68 (SmcStoreSlotReserve.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SmAlloc(SIZE_T a1, ULONG a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, a2);
}
