/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14012F2F0
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x14011E50C (SmAcquireReleaseResAvailForRead.c)
 *     SmFirstTimeInit @ 0x1403E4E40 (SmFirstTimeInit.c)
 * Callees:
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(MiSystemPartition, a1 + 48, 0LL) != 0;
}
