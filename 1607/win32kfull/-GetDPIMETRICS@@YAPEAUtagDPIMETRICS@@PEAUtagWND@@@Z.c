/*
 * XREFs of ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0
 * Callers:
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C01163C0 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     MNDrawArrow @ 0x1C0236A44 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

struct tagDPIMETRICS *__fastcall GetDPIMETRICS(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    W32GetCurrentThreadDpiAwarenessContext(0LL, a2, a3, a4);
  return (struct tagDPIMETRICS *)GetDPIMETRICSForDpi();
}
