/*
 * XREFs of GetNonChildAncestor @ 0x1C00A8D2C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C00A8C1C (zzzImeSetOwnerWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     _SelectPalette @ 0x1C01045F0 (_SelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01523EC (xxxDWP_ProcessVirtKey.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
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
