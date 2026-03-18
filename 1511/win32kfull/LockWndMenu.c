/*
 * XREFs of LockWndMenu @ 0x1C00CBF10
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C01431F8 (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C01434F4 (xxxSetMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C014DA10 (xxxSetDialogSystemMenu.c)
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
