/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x14021557C
 * Callers:
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402DDBE0 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 */

__m128i *__fastcall GetPrimaryMonitorRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2);
  GetMonitorRectForWindow(a1, *(_QWORD *)(DispInfo + 96), a2);
  return a1;
}
