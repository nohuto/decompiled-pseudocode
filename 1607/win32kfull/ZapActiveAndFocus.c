/*
 * XREFs of ZapActiveAndFocus @ 0x1C023A7E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 */

__int64 ZapActiveAndFocus()
{
  __int64 v0; // rbx
  __int64 *v1; // rax

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  HMAssignmentUnlock(v0 + 88);
  v1 = (__int64 *)HMAssignmentUnlock(v0 + 80);
  if ( v1 && v0 == gpqForeground )
    xxxWindowEvent(0x80000003, v1, 0, 0, 49);
  return 1LL;
}
