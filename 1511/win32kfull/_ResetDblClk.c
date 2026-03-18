/*
 * XREFs of _ResetDblClk @ 0x1C0152DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ResetDblClk()
{
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 120LL) = 0;
  return 1LL;
}
