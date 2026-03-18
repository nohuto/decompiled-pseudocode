/*
 * XREFs of ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DB6B8
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C003A414 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C003A54C (SetPointerMetaVisibility.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01360E8 (xxxUpdateSystemCursorFromRegistry.c)
 */

void __fastcall Feedback::xxxRestoreMouseCursors(Feedback *this)
{
  __int64 v1; // rbx
  HDEV HDEV; // rax

  EtwTraceContactVisualizationInfo(3LL);
  Feedback::gfUsingPenCursors = 0;
  v1 = 0LL;
  Feedback::gfUsingTouchCursors = 0;
  if ( grpWinStaList )
    v1 = grpWinStaList + 168LL;
  if ( *(_QWORD *)(v1 + 8) )
  {
    xxxUpdateSystemCursorFromRegistry(v1, 0);
    xxxUpdateSystemCursorFromRegistry(v1, 2u);
    xxxUpdateSystemCursorFromRegistry(v1, 0xBu);
    xxxUpdateSystemCursorFromRegistry(v1, 0xCu);
  }
  if ( gCursorSuppressionState != 1 )
  {
    HDEV = (HDEV)UserGetHDEV();
    SetPointerMetaVisibility(HDEV, 1u);
  }
}
