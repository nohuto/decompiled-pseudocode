/*
 * XREFs of UsingPenCursors @ 0x1C003DE14
 * Callers:
 *     _GetCursorInfo @ 0x1C003DD88 (_GetCursorInfo.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 UsingPenCursors()
{
  __int64 result; // rax

  result = 0LL;
  if ( Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors )
    return 1LL;
  return result;
}
