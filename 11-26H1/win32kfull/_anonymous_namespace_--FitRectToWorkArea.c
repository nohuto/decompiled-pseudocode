/*
 * XREFs of _anonymous_namespace_::FitRectToWorkArea @ 0x140162230
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddds @ 0x1402EE2B4 (WPP_RECORDER_AND_TRACE_SF_dddds.c)
 */

__int64 __fastcall anonymous_namespace_::FitRectToWorkArea(unsigned int *a1, unsigned int *a2, char a3)
{
  char v3; // di
  char v6; // r15
  bool v7; // r12
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  signed int v11; // r10d
  signed int v12; // ecx
  unsigned int v13; // r9d
  signed int v14; // r8d
  unsigned int v15; // edx
  signed int v16; // r11d
  unsigned int v17; // ebx
  __int64 result; // rax
  signed int v19; // r9d
  unsigned int v20; // edx
  signed int v21; // edx

  v3 = a3;
  v6 = 1;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v6 = 0;
  if ( v7 || v6 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v7;
    WPP_RECORDER_AND_TRACE_SF_dddds(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v9, *(_QWORD *)(UserSessionState + 69152));
    v3 = a3;
  }
  v11 = a2[2];
  v12 = a1[2];
  v13 = a1[3];
  v14 = v13;
  v15 = a1[1];
  v16 = v15;
  if ( v12 > v11 )
  {
    a1[2] = v11;
    a1[3] = v13;
    *a1 += v11 - v12;
    v12 = v11;
    a1[1] = v15;
  }
  v17 = *a2;
  result = *a1;
  if ( (int)result < (int)*a2 )
  {
    *a1 = v17;
    v12 = v17 + v12 - result;
    a1[3] = v13;
    a1[2] = v12;
    result = v17;
    a1[1] = v15;
    v16 = v15;
  }
  v19 = a2[3];
  if ( v14 > v19 )
  {
    v20 = v15 - v14;
    *a1 = result;
    a1[2] = v12;
    v14 = v19;
    a1[3] = v19;
    v16 = v20 + v19;
    a1[1] = v20 + v19;
  }
  v21 = a2[1];
  if ( v16 < v21 )
  {
    *a1 = result;
    result = (unsigned int)(v21 - v16);
    a1[2] = v12;
    v14 += result;
    a1[1] = v21;
    a1[3] = v14;
  }
  if ( v3 )
  {
    if ( v12 > v11 )
      a1[2] = v11;
    if ( v14 > v19 )
      a1[3] = v19;
  }
  return result;
}
