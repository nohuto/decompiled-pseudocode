/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024C9C
 * Callers:
 *     ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x180021550 (--1-$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXXZ @ 0x180023894 (-IgnoreCurrentThread@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_364a226fd5edd35307100c7bdfcc0642_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x180024880 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_364a226fd5edd35307100c7bdfcc0642_@@$0A@@wistd@@.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008A54 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr, 3, (unsigned int)a4);
  return v4;
}
