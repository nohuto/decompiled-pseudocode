/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x14008E6FC
 * Callers:
 *     MiBuildMappedCluster @ 0x14001F140 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x14008E6C8 (MiFreeModWriterEntry.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rcx

  if ( !a3 )
  {
    if ( (int *)a1 != MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), a2);
      return;
    }
    v5 = a2;
    goto LABEL_7;
  }
  MiReturnCommit(a1, a2);
  if ( (int *)a1 == MiSystemPartition )
  {
    v5 = a2;
LABEL_7:
    MiReturnResidentAvailable(v5);
    return;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), a2);
}
