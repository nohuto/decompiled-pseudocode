/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C005425C
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     MNGetPopupFromMenu @ 0x1C006B218 (MNGetPopupFromMenu.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C014015C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 *     MNFreePopup @ 0x1C0142D70 (MNFreePopup.c)
 *     xxxMNStartMenuState @ 0x1C01F4A64 (xxxMNStartMenuState.c)
 *     ?GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z @ 0x1C020E580 (-GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C020F0B0 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDragOver @ 0x1C0233278 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C02333A4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0233768 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PMENUWND(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29C )
      return a1;
  }
  return result;
}
