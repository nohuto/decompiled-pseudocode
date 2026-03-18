/*
 * XREFs of _lambda_59a74150860c6e16662ed67d42f7ad7e_::_lambda_invoker_cdecl_ @ 0x1801395D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_59a74150860c6e16662ed67d42f7ad7e_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 81LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 82LL) )
  {
    return a1 + 120;
  }
  return v1;
}
