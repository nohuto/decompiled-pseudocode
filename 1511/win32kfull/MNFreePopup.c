/*
 * XREFs of MNFreePopup @ 0x1C0138BE0
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 *     MNFlushDestroyedPopups @ 0x1C013A0E0 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x1C01FD458 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02158F8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     UnlockPopupMenu @ 0x1C0138C68 (UnlockPopupMenu.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall MNFreePopup(__int64 a1)
{
  __int64 v2; // rax

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(a1 + 16));
  if ( v2 && a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 376) = 0LL;
    *(_QWORD *)(v2 + 384) = a1;
  }
  HMAssignmentUnlock(a1 + 24);
  HMAssignmentUnlock(a1 + 32);
  UnlockPopupMenu(a1, a1 + 40);
  UnlockPopupMenu(a1, a1 + 48);
  HMAssignmentUnlock(a1 + 8);
  HMAssignmentUnlock(a1 + 56);
  return HMAssignmentUnlock(a1 + 16);
}
