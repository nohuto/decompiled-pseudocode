/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C004FB68
 * Callers:
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0052F0C (xxxMNCompute.c)
 *     xxxPaintMenuBar @ 0x1C00F6114 (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = xxxSendMessage(a1, 147LL, 0LL);
  if ( (_DWORD)result )
    *(_DWORD *)(a2 + 40) |= 0x800u;
  else
    *(_DWORD *)(a2 + 40) &= ~0x800u;
  return result;
}
