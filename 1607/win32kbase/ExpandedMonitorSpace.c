/*
 * XREFs of ExpandedMonitorSpace @ 0x1C00B93A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0059178 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     MinimumMonitorDpi @ 0x1C00591E4 (MinimumMonitorDpi.c)
 */

struct tagPOINT __fastcall ExpandedMonitorSpace(struct tagPOINT *a1)
{
  unsigned __int16 v2; // di
  char CurrentThreadDpiAwarenessContext; // al
  BOOL v4; // ebx
  struct tagPOINT result; // rax

  v2 = MinimumMonitorDpi();
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  *a1 = ExpandMonitorSpaceVertex(
          (CurrentThreadDpiAwarenessContext & 0xF) == 0,
          v2,
          *(struct tagPOINT *)(gpDispInfo + 104));
  v4 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0;
  result = ExpandMonitorSpaceVertex(v4, v2, *(struct tagPOINT *)(gpDispInfo + 112));
  a1[1] = result;
  return result;
}
