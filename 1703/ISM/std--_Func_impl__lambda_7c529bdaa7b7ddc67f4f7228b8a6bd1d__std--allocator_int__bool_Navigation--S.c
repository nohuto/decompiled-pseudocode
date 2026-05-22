/*
 * XREFs of std::_Func_impl__lambda_7c529bdaa7b7ddc67f4f7228b8a6bd1d__std::allocator_int__bool_Navigation::Server::IServerWindow_____ptr64_::_Do_call @ 0x18002C220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl__lambda_7c529bdaa7b7ddc67f4f7228b8a6bd1d__std::allocator_int__bool_Navigation::Server::IServerWindow_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v3) < 0 )
    return 0LL;
  result = 1LL;
  if ( (unsigned int)v3 > 1 )
    return 0LL;
  return result;
}
