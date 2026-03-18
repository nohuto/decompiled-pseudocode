/*
 * XREFs of LockPopupMenu @ 0x1C0138B8C
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 * Callees:
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0138C9C (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, struct tagMENU **a2, __int64 a3)
{
  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(a1 + 8));
  if ( a3 )
    HMAssignmentLock(a3 + 72, *(_QWORD *)(a1 + 8));
  return HMAssignmentLock(a2, a3);
}
