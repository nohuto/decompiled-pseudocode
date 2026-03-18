/*
 * XREFs of zzzActiveCursorTracking @ 0x1C01E2DC0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 * Callees:
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     BoundCursor @ 0x1C00885BC (BoundCursor.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     GetActiveTrackPwnd @ 0x1C01E23E0 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall zzzActiveCursorTracking(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdi
  unsigned int MonitorFlags; // eax
  unsigned int v5; // eax
  int v6; // edi
  unsigned __int64 v7; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int64 v8; // [rsp+50h] [rbp+30h] BYREF

  result = *(_QWORD *)glinp;
  if ( (glinp[8] & 1) != 0 )
  {
    v3 = (_DWORD *)(a1 + 112);
    v7 = LogicalCursorPos(*(_QWORD *)(a1 + 16));
    result = PtInRect((_DWORD *)(a1 + 112), v7);
    if ( !(_DWORD)result && (!gspwndCursor || (result = GetActiveTrackPwnd(gspwndCursor, 0LL)) != 0) )
    {
      LODWORD(v7) = *v3 + (*(_DWORD *)(a1 + 120) - *v3) / 2;
      HIDWORD(v7) = *(_DWORD *)(a1 + 116) + (*(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116)) / 2;
      v8 = v7;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL));
        LogicalToPhysicalDPIPoint(&v8, &v7, MonitorFlags, 0LL);
      }
      BoundCursor((LONG *)&v8, 0);
      v7 = v8;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v5 = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL));
        PhysicalToLogicalDPIPoint(&v7, &v8, v5, 0LL);
      }
      result = PtInRect((_DWORD *)(a1 + 112), v7);
      if ( (_DWORD)result )
      {
        v6 = *(_BYTE *)(a1 + 55) & 0x10;
        if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
          SetVisible(a1, v6 + 5);
        result = zzzInternalSetCursorPos(v8, HIDWORD(v8), 2);
        if ( !v6 )
          return SetVisible(a1, 0);
      }
    }
  }
  return result;
}
