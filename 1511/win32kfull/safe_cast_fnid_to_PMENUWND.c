/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C0139460
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     MNGetPopupFromMenu @ 0x1C00723EC (MNGetPopupFromMenu.c)
 *     xxxGetMenuBarInfo @ 0x1C00740E0 (xxxGetMenuBarInfo.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 *     MNFreePopup @ 0x1C0138BE0 (MNFreePopup.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     ?GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z @ 0x1C0215718 (-GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02158F8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0216514 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDragOver @ 0x1C023B7B8 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C023B8E4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BD30 (xxxMNUpdateDraggingInfo.c)
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
