/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x1400306A4
 * Callers:
 *     MiBuildMappedCluster @ 0x14002F79C (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140030670 (MiFreeModWriterEntry.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

int *__fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  int *result; // rax

  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    result = &MiSystemPartition;
    if ( (int *)a1 == &MiSystemPartition )
    {
      result = (int *)MiReturnResidentAvailable(a2);
      _InterlockedExchangeAdd64(&qword_1402FF680, a2);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), a2);
    }
  }
  else
  {
    result = &MiSystemPartition;
    if ( (int *)a1 == &MiSystemPartition )
    {
      result = (int *)MiReturnResidentAvailable(a2);
      _InterlockedExchangeAdd64(&qword_1402FF670, a2);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), a2);
    }
  }
  return result;
}
