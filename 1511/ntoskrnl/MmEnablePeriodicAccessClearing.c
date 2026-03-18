/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x1403A5F24
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403A5E98 (PfTAccessTracingStart.c)
 * Callees:
 *     MiGetNextPartition @ 0x14011B670 (MiGetNextPartition.c)
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
    *(_BYTE *)(result[702] + 55) = a1;
  }
  return result;
}
