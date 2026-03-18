/*
 * XREFs of LockPopupMenu @ 0x1C010CEB4
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 * Callees:
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C010CFC4 (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, struct tagMENU **a2, __int64 a3)
{
  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(a1 + 8));
  if ( a3 )
    HMAssignmentLock(a3 + 72, *(_QWORD *)(a1 + 8));
  return HMAssignmentLock(a2, a3);
}
