/*
 * XREFs of ZapActiveAndFocus @ 0x1C0244700
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 */

__int64 ZapActiveAndFocus()
{
  __int64 v0; // rbx
  __int64 *v1; // rax

  v0 = *(_QWORD *)(gptiCurrent + 392LL);
  HMAssignmentUnlock(v0 + 80);
  v1 = (__int64 *)HMAssignmentUnlock(v0 + 72);
  if ( v1 && v0 == gpqForeground )
    xxxWindowEvent(0x80000003, v1, 0, 0, 49);
  return 1LL;
}
