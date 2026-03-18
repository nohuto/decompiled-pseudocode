/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C00B7568
 * Callers:
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C012D944 (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  if ( a2 )
    v6[0] = *(_QWORD *)a2;
  else
    v6[0] = 0LL;
  v4 = *(_DWORD *)(a2 + 40);
  v6[1] = a3;
  v7 = v4;
  result = xxxSendMessage(a1, 0x93u, 0LL, (__int64)v6);
  if ( (_DWORD)result )
    *(_DWORD *)(a2 + 40) |= 0x800u;
  else
    *(_DWORD *)(a2 + 40) &= ~0x800u;
  return result;
}
