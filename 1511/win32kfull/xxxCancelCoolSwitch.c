/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C02014FC
 * Callers:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C0202370 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
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
