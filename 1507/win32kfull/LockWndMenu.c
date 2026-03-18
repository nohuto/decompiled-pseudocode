/*
 * XREFs of LockWndMenu @ 0x1C004F214
 * Callers:
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     xxxSetSystemMenu @ 0x1C01182F8 (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C01185F4 (xxxSetMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0124610 (xxxSetDialogSystemMenu.c)
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
