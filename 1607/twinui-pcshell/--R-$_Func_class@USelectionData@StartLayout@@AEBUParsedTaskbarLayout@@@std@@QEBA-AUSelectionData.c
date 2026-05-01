/*
 * XREFs of ??R?$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z @ 0x18000C634
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18000C274 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 * Callees:
 *     ?_Do_call@?$_Func_impl@V_lambda_403eb64f09a73babfd6e65f383c20483_@@V?$allocator@H@std@@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@EEAA?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z @ 0x18000C760 (-_Do_call@-$_Func_impl@V_lambda_403eb64f09a73babfd6e65f383c20483_@@V-$allocator@H@std@@USelectio.c)
 */

__int64 __fastcall std::_Func_class<StartLayout::SelectionData,ParsedTaskbarLayout const &>::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  std::_Func_impl<_lambda_403eb64f09a73babfd6e65f383c20483_,std::allocator<int>,StartLayout::SelectionData,ParsedTaskbarLayout const &>::_Do_call(v3);
  return a2;
}
