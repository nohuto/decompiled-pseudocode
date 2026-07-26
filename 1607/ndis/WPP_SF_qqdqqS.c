/*
 * XREFs of WPP_SF_qqdqqS @ 0x1C0071BB4
 * Callers:
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqdqqS(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v5; // [rsp+A8h] [rbp+20h]
  __int64 v6; // [rsp+B0h] [rbp+28h]
  __int64 v7; // [rsp+B8h] [rbp+30h]
  __int64 v8; // [rsp+C0h] [rbp+38h]
  __int64 v9; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v3 = va_arg(va1, _QWORD);
  v5 = va_arg(va1, _QWORD);
  v6 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  if ( v9 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(v9 + 2 * v2) );
  }
  ndisWppFastTraceMessage(&WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, 0x18u, va);
}
