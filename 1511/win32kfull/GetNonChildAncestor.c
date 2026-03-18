/*
 * XREFs of GetNonChildAncestor @ 0x1C00905C8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C00904B8 (zzzImeSetOwnerWindow.c)
 *     _SelectPalette @ 0x1C00E4700 (_SelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C014CE1C (xxxDWP_ProcessVirtKey.c)
 *     _GetNextQueueWindow @ 0x1C0201368 (_GetNextQueueWindow.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
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
