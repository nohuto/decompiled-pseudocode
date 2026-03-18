/*
 * XREFs of xxxSendUAHMenuMessage @ 0x14020C3E0
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(struct tagWND *a1, unsigned int a2)
{
  return xxxSendMessage(a1, a2);
}
