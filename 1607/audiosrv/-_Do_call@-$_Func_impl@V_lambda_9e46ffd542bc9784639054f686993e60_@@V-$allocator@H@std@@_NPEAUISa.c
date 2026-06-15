/*
 * XREFs of ?_Do_call@?$_Func_impl@V_lambda_9e46ffd542bc9784639054f686993e60_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x180076ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall std::_Func_impl<_lambda_9e46ffd542bc9784639054f686993e60_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  return (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 80LL))(*a2) != 2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2) != 3;
}
