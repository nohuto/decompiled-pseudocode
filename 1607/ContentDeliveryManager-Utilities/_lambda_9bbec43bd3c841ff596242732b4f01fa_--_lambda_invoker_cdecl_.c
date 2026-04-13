/*
 * XREFs of _lambda_9bbec43bd3c841ff596242732b4f01fa_::_lambda_invoker_cdecl_ @ 0x180039320
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002D20 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9bbec43bd3c841ff596242732b4f01fa_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  if ( a2 )
  {
    v4 = *(_QWORD *)(a4 + 112);
    if ( !v4 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
