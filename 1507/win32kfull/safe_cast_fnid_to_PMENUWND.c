/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C005573C (MNGetPopupFromMenu.c)
 *     xxxGetMenuBarInfo @ 0x1C00856C0 (xxxGetMenuBarInfo.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 *     xxxMNFindWindowFromPoint @ 0x1C010BDD0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     MNFreePopup @ 0x1C010CF08 (MNFreePopup.c)
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     xxxMNStartMenuState @ 0x1C01FCFB8 (xxxMNStartMenuState.c)
 *     ?GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z @ 0x1C0215868 (-GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215A48 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02166B0 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDragOver @ 0x1C023B5E8 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C023B714 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BB60 (xxxMNUpdateDraggingInfo.c)
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
