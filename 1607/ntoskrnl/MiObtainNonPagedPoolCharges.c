/*
 * XREFs of MiObtainNonPagedPoolCharges @ 0x1400FFE04
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainNonPagedPoolCharges(unsigned __int64 a1)
{
  if ( qword_140325228 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, a1, 1) )
    {
      ++dword_1403264FC;
      return 0LL;
    }
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, a1, 0LL) )
    {
      ++dword_1403264F8;
      MiReturnCommit((__int64)MiSystemPartition, a1);
      return 0LL;
    }
    _InterlockedExchangeAdd64(&qword_140327918, a1);
  }
  return 1LL;
}
