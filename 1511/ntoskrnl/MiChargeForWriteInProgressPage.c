/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x1400E56EC
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x1400E5684 (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(unsigned __int64 a1, char a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r8
  unsigned int v6; // r14d

  if ( (a2 & 2) != 0 )
  {
    v4 = 4;
    v5 = 0xFFFFFFFFLL;
  }
  else
  {
    v4 = 8;
    v5 = 0LL;
  }
  v6 = MiChargeResident((int *)a1, 1uLL, v5);
  if ( v6 )
  {
    if ( (a2 & 1) == 0 )
    {
      if ( (int *)a1 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_1402FF668, 1uLL);
      return v6;
    }
    if ( (int *)a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF678, 1uLL);
    if ( (unsigned int)MiChargeCommit(a1, 1uLL, v4) )
      return v6;
    if ( (int *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_1402FF680, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), 1uLL);
    }
  }
  return 0LL;
}
