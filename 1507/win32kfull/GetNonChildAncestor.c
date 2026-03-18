/*
 * XREFs of GetNonChildAncestor @ 0x1C0081140
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C007750C (xxxDWP_ProcessVirtKey.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C0081158 (zzzImeSetOwnerWindow.c)
 *     _SelectPalette @ 0x1C00E0AA0 (_SelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F8334 (xxxDrawMenuBarUnderlines.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C02024F4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNonChildAncestor(__int64 a1)
{
  if ( a1 )
  {
    while ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
      a1 = *(_QWORD *)(a1 + 88);
  }
  return a1;
}
