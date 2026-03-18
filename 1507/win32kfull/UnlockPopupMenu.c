/*
 * XREFs of UnlockPopupMenu @ 0x1C010CF90
 * Callers:
 *     MNFreePopup @ 0x1C010CF08 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 * Callees:
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C010CFC4 (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, struct tagMENU **a2)
{
  if ( !*a2 )
    return 0LL;
  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(a1 + 8));
  return HMAssignmentUnlock(a2);
}
