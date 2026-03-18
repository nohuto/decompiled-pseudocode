/*
 * XREFs of _lambda_315ad92e5be98155a16179dc024b8a3c_::_lambda_invoker_cdecl_ @ 0x140163430
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_315ad92e5be98155a16179dc024b8a3c_::operator() @ 0x140164974 (_lambda_315ad92e5be98155a16179dc024b8a3c_--operator().c)
 */

__int64 __fastcall lambda_315ad92e5be98155a16179dc024b8a3c_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_315ad92e5be98155a16179dc024b8a3c_::operator()(a1, a2, v2);
}
