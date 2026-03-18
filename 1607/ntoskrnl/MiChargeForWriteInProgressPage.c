/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x140102D9C
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x140101FB8 (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x140102A50 (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2)
{
  char v4; // bp
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
  v6 = MiChargeResident(a1, 1LL, v5);
  if ( !v6 )
    return 0LL;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit(a1, 1uLL, v4) )
  {
    if ( (int *)a1 == MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), 1uLL);
    return 0LL;
  }
  return v6;
}
