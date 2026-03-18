/*
 * XREFs of zzzActiveCursorTracking @ 0x1C01D9000
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     BoundCursor @ 0x1C00DB104 (BoundCursor.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     GetActiveTrackPwnd @ 0x1C01D8540 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall zzzActiveCursorTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v5; // rdi
  unsigned int MonitorFlagsFromWindow; // eax
  unsigned int v7; // eax
  int v8; // edi
  unsigned __int64 v9; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+30h] BYREF

  result = *(_QWORD *)glinp;
  if ( (glinp[15] & 1) != 0 )
  {
    v5 = (_DWORD *)(a1 + 112);
    v9 = (unsigned __int64)LogicalQmsgCursorPos(a1, 0LL, a3);
    result = PtInRect((_DWORD *)(a1 + 112), v9);
    if ( !(_DWORD)result && (!gspwndCursor || (result = GetActiveTrackPwnd(gspwndCursor, 0LL)) != 0) )
    {
      LODWORD(v9) = *v5 + (*(_DWORD *)(a1 + 120) - *v5) / 2;
      HIDWORD(v9) = *(_DWORD *)(a1 + 116) + (*(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116)) / 2;
      v10 = v9;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
        LogicalToPhysicalDPIPoint(&v10, &v9, MonitorFlagsFromWindow, 0LL);
      }
      BoundCursor((LONG *)&v10, 0);
      v9 = v10;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v7 = GetMonitorFlagsFromWindow(a1);
        PhysicalToLogicalDPIPoint(&v9, &v10, v7);
      }
      result = PtInRect((_DWORD *)(a1 + 112), v9);
      if ( (_DWORD)result )
      {
        v8 = *(_BYTE *)(a1 + 55) & 0x10;
        if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
          SetVisible((_QWORD *)a1, v8 + 5);
        result = zzzInternalSetCursorPos(v10, HIDWORD(v10), 2);
        if ( !v8 )
          return SetVisible((_QWORD *)a1, 0);
      }
    }
  }
  return result;
}
