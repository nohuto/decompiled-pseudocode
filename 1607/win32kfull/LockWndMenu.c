/*
 * XREFs of LockWndMenu @ 0x1C00BB48C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x1C00BB39C (xxxGetSystemMenu.c)
 *     xxxSetMenu @ 0x1C014BA60 (xxxSetMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0152B30 (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C0234264 (xxxSetSystemMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockWndMenu(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v7; // rcx

  if ( *a2 )
  {
    v7 = (_QWORD *)(*a2 + 72LL);
    if ( *v7 == a1 )
      HMAssignmentUnlock(v7);
  }
  if ( a3 && !*(_QWORD *)(a3 + 72) )
    HMAssignmentLock(a3 + 72, a1);
  return HMAssignmentLock(a2, a3);
}
