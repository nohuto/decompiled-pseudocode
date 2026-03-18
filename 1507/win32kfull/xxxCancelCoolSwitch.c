/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0201158
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C0201FD0 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 */

void xxxCancelCoolSwitch()
{
  __int64 v0; // rax

  if ( gspwndAltTab && *((_QWORD *)gspwndAltTab + 2) == gptiCurrent )
  {
    xxxWindowEvent(0x15u, (__int64 *)gspwndAltTab, -4, 0, 1);
    v0 = HMAssignmentUnlock(&gspwndAltTab);
    if ( v0 )
      xxxDestroyWindow(v0);
  }
}
