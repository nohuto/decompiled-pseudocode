/*
 * XREFs of MiPurgeTransitionList @ 0x140144F88
 * Callers:
 *     MiFinishResume @ 0x140144E14 (MiFinishResume.c)
 *     MmPerformMemoryListCommand @ 0x1403F6CF4 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiGetNextPartition @ 0x1400FF6D4 (MiGetNextPartition.c)
 *     MiPurgePartitionStandby @ 0x140144FC0 (MiPurgePartitionStandby.c)
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
    MiPurgePartitionStandby(result, a1);
  }
  return result;
}
