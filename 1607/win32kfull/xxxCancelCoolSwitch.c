/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C01F8800
 * Callers:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F9680 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 */

void xxxCancelCoolSwitch()
{
  _QWORD *v0; // rax

  if ( gspwndAltTab && *((_QWORD *)gspwndAltTab + 2) == gptiCurrent )
  {
    xxxWindowEvent(0x15u, (__int64 *)gspwndAltTab, -4, 0, 1);
    v0 = (_QWORD *)HMAssignmentUnlock(&gspwndAltTab);
    if ( v0 )
      xxxDestroyWindow(v0);
  }
}
