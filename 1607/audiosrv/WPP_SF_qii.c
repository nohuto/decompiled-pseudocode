/*
 * XREFs of WPP_SF_qii @ 0x180077428
 * Callers:
 *     _lambda_c9062d0cc6b58ce068de574295fd0aa7_::operator() @ 0x18007688C (_lambda_c9062d0cc6b58ce068de574295fd0aa7_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, &WPP_fb4725feffd93d51989ad9d0ed5ddd21_Traceguids, 10LL, (__int64 *)va, 8LL, va1);
}
