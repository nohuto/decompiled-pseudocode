/*
 * XREFs of ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB320
 * Callers:
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003A4A0 (TransitionCursorSuppressionState.c)
 *     GreInternalHidePointer @ 0x1C00E5A10 (GreInternalHidePointer.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01DB158 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DB428 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 */

void __fastcall xxxRenderCursor(const struct tagPOINTERCURSORDATA *a1, const struct tagPOINT *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  HDEV HDEV; // rax
  __int64 v9; // rdx
  Feedback *v10; // rcx

  v2 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(1LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v2 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2, 0);
    UserSessionSwitchLeaveCrit(v5, v4);
    Feedback::gfInRange = 1;
  }
  Feedback::MoveCursor((const struct tagPOINTERCURSORDATA *)((char *)a1 + 4), a2);
  if ( v2 )
  {
    EnterCrit(1LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8, 0);
    UserSessionSwitchLeaveCrit(v7, v6);
    HDEV = (HDEV)UserGetHDEV();
    GreInternalHidePointer(HDEV, 0, 0);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(1LL);
    if ( Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors )
    {
      if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
        TransitionCursorSuppressionState(2, 0);
      Feedback::xxxReplaceArrowWithNullCursor(v10);
    }
    UserSessionSwitchLeaveCrit(v10, v9);
    Feedback::gfInRange = 0;
  }
}
