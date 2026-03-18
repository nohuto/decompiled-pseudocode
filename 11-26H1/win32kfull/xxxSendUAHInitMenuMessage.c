/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x14020C434
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // r8d

  v3 = xxxSendMessage(a1, 0x93u);
  if ( v3 )
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) |= 0x800u;
  else
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) &= ~0x800u;
  return v3;
}
