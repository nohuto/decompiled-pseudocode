/*
 * XREFs of UnlockWndMenu @ 0x1C0104018
 * Callers:
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockWndMenu(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx

  if ( !*a2 )
    return 0LL;
  v4 = (_QWORD *)(*a2 + 72LL);
  if ( a1 == *v4 )
    HMAssignmentUnlock(v4);
  return HMAssignmentUnlock(a2);
}
