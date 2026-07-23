/*
 * XREFs of TtmpTsmEvaluateTimeouts @ 0x140678320
 * Callers:
 *     TtmpTsmIterate @ 0x140678388 (TtmpTsmIterate.c)
 * Callees:
 *     TtmpTsmTestTimeout @ 0x14067844C (TtmpTsmTestTimeout.c)
 */

_QWORD *__fastcall TtmpTsmEvaluateTimeouts(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rdx
  _DWORD *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  char v9; // al
  _DWORD *v10; // r9
  _QWORD *result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0LL;
  if ( (unsigned __int8)TtmpTsmTestTimeout(a2, a3, v12) )
  {
    *v6 = 1;
  }
  else
  {
    v9 = TtmpTsmTestTimeout(v8, v5, v12);
    *v10 = 3 - (v9 != 0);
  }
  result = a5;
  if ( v12[0] )
    *a5 = v12[0] - v7;
  else
    *a5 = 0LL;
  return result;
}
