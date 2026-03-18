/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x1403EC110
 * Callers:
 *     PfTAccessTracingStart @ 0x1403EBE7C (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 * Callees:
 *     MiGetNextPartition @ 0x1400FF6D4 (MiGetNextPartition.c)
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
    *(_BYTE *)(result[657] + 55) = a1;
  }
  return result;
}
