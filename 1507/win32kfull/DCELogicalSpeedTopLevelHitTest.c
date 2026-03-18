/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C01E4B20
 * Callers:
 *     <none>
 * Callees:
 *     DCELayerHitTest @ 0x1C00104D8 (DCELayerHitTest.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0045D40 (IsWindowUnderActiveLockScreen.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 */

__int64 __fastcall DCELogicalSpeedTopLevelHitTest(unsigned __int64 *a1, int a2)
{
  __int64 v4; // rdi
  __int64 i; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(_QWORD *)(v4 + 96); i; i = *(_QWORD *)(i + 72) )
  {
    v7 = (*(_BYTE *)(i + 55) & 0x10) == 0;
    v8 = *a1;
    v16 = *a1;
    if ( !v7 && !(unsigned int)GetWindowCloakState(i) && !(unsigned int)IsWindowUnderActiveLockScreen(i, v9, v10) )
    {
      v11 = *(_DWORD *)(i + 344);
      if ( a2 != v11 && (a2 > 0 || v11 > 0) )
      {
        v12 = MonitorFlagsFromDpiAwareness((unsigned int)a2);
        LogicalToPhysicalDPIMonitorPoint(&v16, &v16, v12, 0LL);
        v13 = MonitorFlagsFromDpiAwareness(*(unsigned int *)(i + 344));
        PhysicalToLogicalDPIMonitorPoint(&v16, &v16, v13, 0LL);
        v8 = v16;
      }
      v14 = *(_QWORD *)(i + 208);
      if ( v14 )
      {
        if ( !(unsigned int)GrePtInRegion(v14, (unsigned int)v8, HIDWORD(v16)) )
          continue;
        v8 = v16;
      }
      else if ( !PtInRect((_DWORD *)(i + 112), v8) )
      {
        continue;
      }
      v15 = *(_QWORD *)(i + 200);
      if ( v15 )
      {
        if ( !(unsigned int)GrePtInRegion(v15, (unsigned int)v8, HIDWORD(v16)) )
          continue;
        v8 = v16;
      }
      if ( (*(_BYTE *)(i + 50) & 8) == 0 || (*(_DWORD *)(i + 288) & 0x20) != 0 || DCELayerHitTest(i, v8) )
        return i;
    }
  }
  return i;
}
