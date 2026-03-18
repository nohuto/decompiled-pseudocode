/*
 * XREFs of ?xxxSwitchCursors@@YAXH@Z @ 0x1C01D374C
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000D308 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     GreInternalHidePointer @ 0x1C010A9B0 (GreInternalHidePointer.c)
 */

void __fastcall xxxSwitchCursors(int a1)
{
  HDEV v1; // rax
  HDEV HDEV; // rax
  Feedback *v3; // rcx

  Feedback::gfUsingPenCursors = a1;
  if ( a1 )
  {
    Feedback::gfUsingTouchCursors = 0;
    EtwTraceContactVisualizationInfo(1LL);
    if ( (*(_DWORD *)UPDWORDPointer(8222LL) & 0x20) != 0 )
    {
      HDEV = (HDEV)UserGetHDEV();
      GreInternalHidePointer(HDEV, 1, 0);
      Feedback::xxxReplaceMouseCursorsWithPenCursors(v3);
    }
    else
    {
      TransitionCursorSuppressionState(3, 0);
    }
  }
  else
  {
    Feedback::gfUsingTouchCursors = 1;
    EtwTraceContactVisualizationInfo(2LL);
    v1 = (HDEV)UserGetHDEV();
    GreInternalHidePointer(v1, 1, 0);
  }
}
