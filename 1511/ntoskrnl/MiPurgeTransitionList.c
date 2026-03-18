/*
 * XREFs of MiPurgeTransitionList @ 0x1401E4210
 * Callers:
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiPurgePartitionStandby @ 0x14011236C (MiPurgePartitionStandby.c)
 *     MiGetNextPartition @ 0x14011B670 (MiGetNextPartition.c)
 */

__int64 *__fastcall MiPurgeTransitionList(unsigned int a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = MiGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiPurgePartitionStandby((__int64)result, a1);
  }
  return result;
}
