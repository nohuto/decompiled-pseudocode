/*
 * XREFs of ?_Do_call@?$_Func_impl@V_lambda_c7c1c81e1b12c5b6da40af71127e61d7_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x180076F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall std::_Func_impl<_lambda_c7c1c81e1b12c5b6da40af71127e61d7_,std::allocator<int>,bool,ISaDeviceProxy *>::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  return *(_DWORD *)(a1 + 8) == ((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2) != 0);
}
