/*
 * XREFs of UsingPenCursors @ 0x1C00885A0
 * Callers:
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     _GetCursorInfo @ 0x1C008ADC8 (_GetCursorInfo.c)
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
