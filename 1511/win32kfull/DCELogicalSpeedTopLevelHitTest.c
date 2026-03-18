/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C01E4FB0
 * Callers:
 *     <none>
 * Callees:
 *     DCELayerHitTest @ 0x1C003C760 (DCELayerHitTest.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0090C38 (IsWindowUnderActiveLockScreen.c)
 */

__int64 __fastcall DCELogicalSpeedTopLevelHitTest(unsigned __int64 *a1, int a2)
{
  __int64 v4; // rdi
  __int64 i; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(_QWORD *)(v4 + 96); i; i = *(_QWORD *)(i + 72) )
  {
    v7 = (*(_BYTE *)(i + 55) & 0x10) == 0;
    v8 = *a1;
    v14 = *a1;
    if ( !v7 && !(unsigned int)GetWindowCloakState(i) && !(unsigned int)IsWindowUnderActiveLockScreen(i) )
    {
      v9 = *(_DWORD *)(i + 344);
      if ( a2 != v9 && (a2 > 0 || v9 > 0) )
      {
        v10 = MonitorFlagsFromDpiAwareness((unsigned int)a2);
        LogicalToPhysicalDPIMonitorPoint(&v14, &v14, v10, 0LL);
        v11 = MonitorFlagsFromDpiAwareness(*(unsigned int *)(i + 344));
        PhysicalToLogicalDPIMonitorPoint(&v14, &v14, v11, 0LL);
        v8 = v14;
      }
      v12 = *(_QWORD *)(i + 208);
      if ( v12 )
      {
        if ( !(unsigned int)GrePtInRegion(v12, (unsigned int)v8, HIDWORD(v14)) )
          continue;
        v8 = v14;
      }
      else if ( !PtInRect((_DWORD *)(i + 112), v8) )
      {
        continue;
      }
      v13 = *(_QWORD *)(i + 200);
      if ( v13 )
      {
        if ( !(unsigned int)GrePtInRegion(v13, (unsigned int)v8, HIDWORD(v14)) )
          continue;
        v8 = v14;
      }
      if ( (*(_BYTE *)(i + 50) & 8) == 0 || (*(_DWORD *)(i + 288) & 0x20) != 0 || DCELayerHitTest(i, v8) )
        return i;
    }
  }
  return i;
}
