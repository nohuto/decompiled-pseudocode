/*
 * XREFs of DetermineInputTargetPrecedenceTransform @ 0x1C00F9A64
 * Callers:
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C00F9990 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     GetMonitorTransform @ 0x1C01E531C (GetMonitorTransform.c)
 */

__int64 __fastcall DetermineInputTargetPrecedenceTransform(__int64 a1, __int64 *a2)
{
  __int64 TopLevelWindow; // rbx
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 MonitorTransform; // rax
  __int64 v10; // rcx

  TopLevelWindow = GetTopLevelWindow(gspwndInternalCapture);
  if ( !TopLevelWindow )
    return 0LL;
  v6 = TopLevelWindow == GetTopLevelWindow(a1);
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
    v10 = *(_QWORD *)(v7 + 392);
    if ( !v10
      || v10 != *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 392LL)
      || *(_QWORD *)(v10 + 64) != gspwndInternalCapture )
    {
      return 0LL;
    }
    goto LABEL_7;
  }
  v8 = *(_QWORD **)(v7 + 600);
  if ( !v8 || *v8 != TopLevelWindow )
  {
LABEL_7:
    MonitorTransform = *(_QWORD *)(TopLevelWindow + 272);
    goto LABEL_8;
  }
  MonitorTransform = GetMonitorTransform(v8[23], a1);
LABEL_8:
  *a2 = MonitorTransform;
  return 1LL;
}
