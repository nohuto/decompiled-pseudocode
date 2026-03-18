/*
 * XREFs of MiPurgeTransitionList @ 0x1401F3960
 * Callers:
 *     MmPerformMemoryListCommand @ 0x1403D2CFC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiGetNextPartition @ 0x140001C94 (MiGetNextPartition.c)
 *     MiPurgePartitionStandby @ 0x14012093C (MiPurgePartitionStandby.c)
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
