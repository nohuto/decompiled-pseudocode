/*
 * XREFs of std::_Func_impl__lambda_513939ef8950349a73fed03914f19a64__std::allocator_int__void_tagQMSGINPUTREPORT_const_____ptr64_::_Do_call @ 0x18006B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl__lambda_513939ef8950349a73fed03914f19a64__std::allocator_int__void_tagQMSGINPUTREPORT_const_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 48LL))(
             *(_QWORD *)(a1 + 8),
             *a2 + 80LL,
             *a2,
             120LL);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18006B524LL);
  }
  return result;
}
