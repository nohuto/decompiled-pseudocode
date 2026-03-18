/*
 * XREFs of ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01D36BC
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000D308 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C008F1E4 (xxxUpdateSystemCursorFromRegistry.c)
 *     SetPointerMetaVisibility @ 0x1C009409C (SetPointerMetaVisibility.c)
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
