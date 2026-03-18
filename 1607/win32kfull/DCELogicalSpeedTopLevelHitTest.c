/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C01DB850
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     DCELayerHitTest @ 0x1C010E858 (DCELayerHitTest.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C01282BC (IsWindowUnderActiveLockScreen.c)
 */

__int64 __fastcall DCELogicalSpeedTopLevelHitTest(unsigned __int64 *a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 i; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(_QWORD *)(v4 + 96); i; i = *(_QWORD *)(i + 72) )
  {
    v7 = (*(_BYTE *)(i + 55) & 0x10) == 0;
    v8 = *a1;
    v13 = *a1;
    if ( !v7 && !(unsigned int)GetWindowCloakState(i) && !(unsigned int)IsWindowUnderActiveLockScreen(i) )
    {
      if ( (((unsigned __int8)a2 ^ *(_BYTE *)(i + 352)) & 0xF) != 0 )
      {
        v9 = MonitorFlagsFromDpiAwarenessContext(a2);
        LogicalToPhysicalDPIMonitorPoint(&v13, &v13, v9, 0LL);
        MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(i);
        PhysicalToLogicalDPIMonitorPoint(&v13, &v13, MonitorFlagsFromWindow, 0LL);
        v8 = v13;
      }
      v11 = *(_QWORD *)(i + 208);
      if ( v11 )
      {
        if ( !(unsigned int)GrePtInRegion(v11, (unsigned int)v8, HIDWORD(v13)) )
          continue;
        v8 = v13;
      }
      else if ( !PtInRect((_DWORD *)(i + 112), v8) )
      {
        continue;
      }
      v12 = *(_QWORD *)(i + 200);
      if ( v12 )
      {
        if ( !(unsigned int)GrePtInRegion(v12, (unsigned int)v8, HIDWORD(v13)) )
          continue;
        v8 = v13;
      }
      if ( (*(_BYTE *)(i + 50) & 8) == 0 || (*(_DWORD *)(i + 288) & 0x20) != 0 || DCELayerHitTest(i, v8) )
        return i;
    }
  }
  return i;
}
