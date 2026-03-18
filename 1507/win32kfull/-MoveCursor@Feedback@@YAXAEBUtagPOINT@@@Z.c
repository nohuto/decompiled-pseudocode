/*
 * XREFs of ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01DB158
 * Callers:
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB320 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C0040B44 (UpdateCursorImageForMonitorDpi.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 */

void __fastcall Feedback::MoveCursor(Feedback *this, const struct tagPOINT *a2)
{
  unsigned __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = 0;
  GreMovePointer((HDEV)*gpDispInfo, *(_DWORD *)this, *((_DWORD *)this + 1), 8);
  EnterCrit(1LL);
  v4 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v4 )
    v3 = *(_WORD *)(v4 + 152);
  if ( MonitorFromPoint(*(_QWORD *)this, 32LL, v5) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)this, 32LL, v6);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v3);
  UserSessionSwitchLeaveCrit(v8, v7);
}
