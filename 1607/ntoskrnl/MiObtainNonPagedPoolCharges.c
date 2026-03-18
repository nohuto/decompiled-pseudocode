/*
 * XREFs of MiObtainNonPagedPoolCharges @ 0x140102084
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x1400E7060 (MiFindNonPagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x140101824 (MiExpandNonPagedPool.c)
 *     MmAllocateIndependentPages @ 0x1404E6034 (MmAllocateIndependentPages.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainNonPagedPoolCharges(unsigned __int64 a1)
{
  if ( qword_1403251E8 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, a1, 1) )
    {
      ++dword_1403264BC;
      return 0LL;
    }
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, a1, 0LL) )
    {
      ++dword_1403264B8;
      MiReturnCommit((__int64)MiSystemPartition, a1);
      return 0LL;
    }
    _InterlockedExchangeAdd64(&qword_1403278D8, a1);
  }
  return 1LL;
}
