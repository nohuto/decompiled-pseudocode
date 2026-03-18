/*
 * XREFs of _lambda_9c8951c187b4be4d23fed8f94aee3ae8_::_lambda_invoker_cdecl_ @ 0x140241FF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator() @ 0x14024200C (_lambda_9c8951c187b4be4d23fed8f94aee3ae8_--operator().c)
 */

__int64 __fastcall lambda_9c8951c187b4be4d23fed8f94aee3ae8_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator()(a1, a2, v2);
}
