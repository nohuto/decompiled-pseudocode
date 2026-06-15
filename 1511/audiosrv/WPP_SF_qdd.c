/*
 * XREFs of WPP_SF_qDD @ 0x18008ED08
 * Callers:
 *     _lambda_f6263596e2cedf593a59fb7cc979efd5_::operator() @ 0x18008E114 (_lambda_f6263596e2cedf593a59fb7cc979efd5_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qDD(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_c654cfd5aeeaca479956b571394d5ce9_Traceguids, 11LL, (__int64 *)va);
}
