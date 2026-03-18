/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14014F32C
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x140140004 (SmAcquireReleaseResAvailForRead.c)
 *     SmFirstTimeInit @ 0x1404F9AFC (SmFirstTimeInit.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 */

__int64 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx

  v4 = a1 + 48;
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, a1 + 48, 0LL, a4) )
    return 0LL;
  _InterlockedExchangeAdd64(&qword_14034FB08, v4);
  return 1LL;
}
