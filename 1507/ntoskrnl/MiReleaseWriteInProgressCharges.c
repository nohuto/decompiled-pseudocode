/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x140082AE0
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140082AAC (MiFreeModWriterEntry.c)
 *     MiBuildMappedCluster @ 0x1400E4A80 (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

void __fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    if ( (__int16 *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(a2);
      _InterlockedExchangeAdd64(&qword_14034FB40, a2);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), a2);
    }
  }
  else if ( (__int16 *)a1 == MiSystemPartition )
  {
    MiReturnResidentAvailable(a2);
    _InterlockedExchangeAdd64(&qword_14034FB30, a2);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), a2);
  }
}
