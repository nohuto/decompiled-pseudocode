/*
 * XREFs of SmAlloc @ 0x1400022D0
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1403E4AD4 (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1403E4B74 (SmpKeyedStoreCreate.c)
 *     SmKmStoreCreatePrepare @ 0x1403E4D40 (SmKmStoreCreatePrepare.c)
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1403E54A4 (SmKmStoreAdd.c)
 *     SmProcessListRequest @ 0x140696984 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140696D50 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140697548 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x140697F60 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14069867C (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x140698898 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x140699C50 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14069A674 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14069ABBC (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14069B04C (SmcStoreSlotReserve.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SmAlloc(SIZE_T a1, ULONG a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, a2);
}
