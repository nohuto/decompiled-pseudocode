/*
 * XREFs of MNFreePopup @ 0x1C0142D70
 * Callers:
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C014015C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     xxxMNEndMenuState @ 0x1C0142C80 (xxxMNEndMenuState.c)
 *     MNFlushDestroyedPopups @ 0x1C0142EA0 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x1C01F4A64 (xxxMNStartMenuState.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     UnlockPopupMenu @ 0x1C0142DF8 (UnlockPopupMenu.c)
 */

__int64 __fastcall MNFreePopup(__int64 a1)
{
  __int64 v2; // rax

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(a1 + 16));
  if ( v2 && a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 360) = 0LL;
    *(_QWORD *)(v2 + 368) = a1;
  }
  HMAssignmentUnlock(a1 + 24);
  HMAssignmentUnlock(a1 + 32);
  UnlockPopupMenu(a1, a1 + 40);
  UnlockPopupMenu(a1, a1 + 48);
  HMAssignmentUnlock(a1 + 8);
  HMAssignmentUnlock(a1 + 56);
  return HMAssignmentUnlock(a1 + 16);
}
