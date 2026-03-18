/*
 * XREFs of SmAlloc @ 0x1400D9FF4
 * Callers:
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 *     SmKmStoreCreatePrepare @ 0x1404F9DF0 (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x1404F9F74 (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x1404FAF38 (SmStoreSetProcessVaRanges.c)
 *     SmProcessListRequest @ 0x1406D97B8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1406DBDB4 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1406DC350 (SmcStoreSlotReserve.c)
 *     SmKmFileInfoDuplicate @ 0x1406DC9E8 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1406DD190 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1406DD3E0 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1406DE798 (SmCrEncStart.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SmAlloc(SIZE_T a1, ULONG a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, a2);
}
