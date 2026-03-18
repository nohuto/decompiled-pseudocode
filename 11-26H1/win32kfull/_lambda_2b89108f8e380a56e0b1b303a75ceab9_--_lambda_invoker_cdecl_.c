/*
 * XREFs of _lambda_2b89108f8e380a56e0b1b303a75ceab9_::_lambda_invoker_cdecl_ @ 0x1401648E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator() @ 0x1401648FC (_lambda_2b89108f8e380a56e0b1b303a75ceab9_--operator().c)
 */

__int64 __fastcall lambda_2b89108f8e380a56e0b1b303a75ceab9_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator()(a1, a2, v2);
}
