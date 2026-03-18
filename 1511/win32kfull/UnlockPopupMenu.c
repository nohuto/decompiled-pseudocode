/*
 * XREFs of UnlockPopupMenu @ 0x1C0138C68
 * Callers:
 *     MNFreePopup @ 0x1C0138BE0 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 * Callees:
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0138C9C (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, struct tagMENU **a2)
{
  if ( !*a2 )
    return 0LL;
  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(a1 + 8));
  return HMAssignmentUnlock(a2);
}
