/*
 * XREFs of ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01D315C
 * Callers:
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01D335C (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00DB460 (UpdateCursorImageForMonitorDpi.c)
 */

void __fastcall Feedback::MoveCursor(Feedback *this, const struct tagPOINT *a2)
{
  unsigned __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0;
  GreMovePointer((HDEV)*gpDispInfo, *(unsigned int *)this, *((unsigned int *)this + 1), 8LL);
  EnterCrit(0LL, 1LL);
  v4 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v4 )
    v3 = *(_WORD *)(v4 + 154);
  if ( MonitorFromPoint(*(_QWORD *)this, 0x20u) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)this, 0x20u);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v3);
  UserSessionSwitchLeaveCrit(v6, v5);
}
