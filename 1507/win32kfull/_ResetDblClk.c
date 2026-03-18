/*
 * XREFs of _ResetDblClk @ 0x1C015D5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ResetDblClk()
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 120LL) = 0;
  return 1LL;
}
