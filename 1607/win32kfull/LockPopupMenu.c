/*
 * XREFs of LockPopupMenu @ 0x1C0142D1C
 * Callers:
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 * Callees:
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0142E2C (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, struct tagMENU **a2, __int64 a3)
{
  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(a1 + 8));
  if ( a3 )
    HMAssignmentLock(a3 + 72, *(_QWORD *)(a1 + 8));
  return HMAssignmentLock(a2, a3);
}
