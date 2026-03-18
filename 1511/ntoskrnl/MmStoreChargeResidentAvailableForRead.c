/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14011AFF4
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x140110370 (SmAcquireReleaseResAvailForRead.c)
 *     SmFirstTimeInit @ 0x1404D1E70 (SmFirstTimeInit.c)
 * Callees:
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 48;
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, a1 + 48, 0LL) )
    return 0LL;
  _InterlockedExchangeAdd64(&qword_1402FF648, v1);
  return 1LL;
}
