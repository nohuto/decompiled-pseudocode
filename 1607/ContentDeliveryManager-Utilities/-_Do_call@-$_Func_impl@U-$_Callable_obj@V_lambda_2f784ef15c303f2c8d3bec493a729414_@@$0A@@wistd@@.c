/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@@details@2@_NPEAX_KPEAX_KIU_Nil@2@U52@@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x180017550
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180007510 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 */

char __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_2f784ef15c303f2c8d3bec493a729414_,0>,wistd::details::function_allocator<wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>>,bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Do_call(
        __int64 a1,
        void **a2,
        size_t *a3,
        void **a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  bool v7; // al
  char v8; // dl

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16)
    || (v7 = wil::details_abi::RawUsageIndex::RecordUsage(
               *(wil::details_abi::RawUsageIndex **)(a1 + 24),
               *a2,
               *a3,
               *a4,
               *a5,
               *a6),
        v8 = 0,
        v7) )
  {
    v8 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v8;
}
