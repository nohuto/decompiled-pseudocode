/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14012ED80
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x14011DF9C (SmAcquireReleaseResAvailForRead.c)
 *     SmFirstTimeInit @ 0x1403E3814 (SmFirstTimeInit.c)
 * Callees:
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(MiSystemPartition, a1 + 48, 0LL) != 0;
}
