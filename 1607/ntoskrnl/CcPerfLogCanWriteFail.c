/*
 * XREFs of CcPerfLogCanWriteFail @ 0x1401B28C0
 * Callers:
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogCanWriteFail(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+38h] [rbp-40h]
  int v7; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v8[3]; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+58h] [rbp-20h]

  if ( a1 )
    v8[0] = *(_QWORD *)(a1 + 24);
  else
    v8[0] = 0LL;
  v7 = 0;
  v9 = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = v8;
  v6 = 32;
  return EtwTraceKernelEvent((int)&v5, 1, 0x80020000, 5638, 4200706);
}
