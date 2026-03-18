/*
 * XREFs of xxxGetWindowText @ 0x1C0204530
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetWindowText(__int64 a1, _WORD *a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  unsigned int v4; // r8d
  __int64 v5; // r8
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]
  _WORD *v9; // [rsp+28h] [rbp-10h]

  v9 = a2;
  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v8 = 512;
  v7 = 0;
  if ( *(_QWORD *)(v2 + 376) == *(_QWORD *)(gptiCurrent + 376LL) )
    v3 = xxxSendMessage((struct tagWND *)a1, 0xDu, 0x100uLL, (__int64)&v7);
  else
    v3 = xxxDefWindowProc((struct tagWND *)a1, 0xDu, 256LL, (__int64)&v7);
  v4 = v7;
  if ( v7 > (unsigned __int64)(v8 & 0x7FFFFFFF) - 2 )
    v4 = (v8 & 0x7FFFFFFF) - 2;
  v5 = v4 >> 1;
  if ( v3 < (unsigned int)v5 )
    v5 = v3;
  result = (unsigned int)v5;
  v9[v5] = 0;
  return result;
}
