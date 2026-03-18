/*
 * XREFs of HideAutorunCursor @ 0x1C01E6980
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 */

struct tagCURSOR *HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  return zzzUpdateCursorImage();
}
