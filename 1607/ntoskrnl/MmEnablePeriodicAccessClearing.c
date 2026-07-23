/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x1403C8460
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 * Callees:
 *     MiGetNextPartition @ 0x140001E08 (MiGetNextPartition.c)
 */

__int64 *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  __int64 *v2; // rcx
  __int64 *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = MiGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(result[781] + 55) = a1;
  }
  return result;
}
