/*
 * XREFs of _SetImmersiveBackgroundWindow @ 0x1C0156828
 * Callers:
 *     NtUserSetImmersiveBackgroundWindow @ 0x1C0156790 (NtUserSetImmersiveBackgroundWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetImmersiveBackgroundWindow(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v2 + 200) )
    HMAssignmentUnlock(v2 + 200);
  HMAssignmentLock(v2 + 200, a1);
  return 1LL;
}
