/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C00B7D88
 * Callers:
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C012D944 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  if ( a3 )
    v6[0] = *(_QWORD *)a3;
  else
    v6[0] = 0LL;
  v4 = *(_DWORD *)(a3 + 40);
  v6[1] = a4;
  v7 = v4;
  return xxxSendMessage(a1, a2, 0LL, (__int64)v6);
}
