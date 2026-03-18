/*
 * XREFs of UnlockPopupMenu @ 0x1C0142DF8
 * Callers:
 *     MNFreePopup @ 0x1C0142D70 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 * Callees:
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0142E2C (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, struct tagMENU **a2)
{
  if ( !*a2 )
    return 0LL;
  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(a1 + 8));
  return HMAssignmentUnlock(a2);
}
