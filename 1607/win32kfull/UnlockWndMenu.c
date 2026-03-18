/*
 * XREFs of UnlockWndMenu @ 0x1C01270C8
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x1C00BB39C (xxxGetSystemMenu.c)
 *     VerifyChildMenu @ 0x1C02245FC (VerifyChildMenu.c)
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
