/*
 * XREFs of zzzActiveCursorTracking @ 0x1C01E2930
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     BoundCursor @ 0x1C00407FC (BoundCursor.c)
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 *     GetActiveTrackPwnd @ 0x1C01E1EC4 (GetActiveTrackPwnd.c)
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
  if ( (glinp[15] & 1) != 0 )
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
        MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL));
        LogicalToPhysicalDPIPoint(&v8, &v7, MonitorFlags, 0LL);
      }
      BoundCursor((LONG *)&v8, 0);
      v7 = v8;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v5 = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL));
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
