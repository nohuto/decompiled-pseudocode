/*
 * XREFs of _lambda_e37b1947f29b7a065a91633a344db825_::_lambda_invoker_cdecl_ @ 0x1801425F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e37b1947f29b7a065a91633a344db825_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, 80LL) )
    return a1 + 120;
  return v1;
}
