/*
 * XREFs of _lambda_54b1615c74727b96cfd9244fd3177ed2_::__lambda_54b1615c74727b96cfd9244fd3177ed2_ @ 0x180053048
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800522D0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 *     ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_54b1615c74727b96cfd9244fd3177ed2_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XJPEAUIStorageFolder@Storage@Windows@@U_Nil@wistd@@U45@U45@U45@U45@@wistd@@@details@2@XJPEAUIStorageFolder@Storage@Windows@@U_Nil@2@U82@U82@U82@U82@@wistd@@UEAAPEAXI@Z @ 0x180054D00 (--_G-$_Func_impl@U-$_Callable_obj@V_lambda_54b1615c74727b96cfd9244fd3177ed2_@@$0A@@wistd@@V-$fun.c)
 *     ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_093e5cd604f7ab5de7acc075fbba0f63_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XJPEAUIStorageFolder@Storage@Windows@@U_Nil@wistd@@U45@U45@U45@U45@@wistd@@@details@2@XJPEAUIStorageFolder@Storage@Windows@@U_Nil@2@U82@U82@U82@U82@@wistd@@UEAAPEAXI@Z @ 0x180054D50 (--_E-$_Func_impl@U-$_Callable_obj@V_lambda_093e5cd604f7ab5de7acc075fbba0f63_@@$0A@@wistd@@V-$fun.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor$6 @ 0x18007337D (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--AddRule_--_1_--dtor$6.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::dtor$6 @ 0x18007343D (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_54b1615c74727b96cfd9244fd3177ed2_::__lambda_54b1615c74727b96cfd9244fd3177ed2_(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx

  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    operator delete(*(void **)(a1 + 16));
  result = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 16) = 0;
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return result;
}
