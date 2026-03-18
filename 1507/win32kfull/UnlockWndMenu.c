/*
 * XREFs of UnlockWndMenu @ 0x1C00FA890
 * Callers:
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     VerifyChildMenu @ 0x1C02239A8 (VerifyChildMenu.c)
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
