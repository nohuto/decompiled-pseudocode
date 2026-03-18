/*
 * XREFs of ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01DB758
 * Callers:
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB920 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C008823C (UpdateCursorImageForMonitorDpi.c)
 *     GreMovePointer @ 0x1C00882C0 (GreMovePointer.c)
 */

void __fastcall Feedback::MoveCursor(Feedback *this, const struct tagPOINT *a2)
{
  unsigned __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0;
  GreMovePointer((HDEV)*gpDispInfo, *(_DWORD *)this, *((_DWORD *)this + 1), 8);
  EnterCrit(0LL, 1LL);
  v4 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v4 )
    v3 = *(_WORD *)(v4 + 152);
  if ( MonitorFromPoint(*(_QWORD *)this, 0x20u) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)this, 0x20u);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v3);
  UserSessionSwitchLeaveCrit(v6, v5);
}
