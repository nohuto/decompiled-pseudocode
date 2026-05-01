/*
 * XREFs of ?_Delete_this@?$_Func_impl@V_lambda_403eb64f09a73babfd6e65f383c20483_@@V?$allocator@H@std@@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@EEAAX_N@Z @ 0x18000C710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl<_lambda_403eb64f09a73babfd6e65f383c20483_,std::allocator<int>,StartLayout::SelectionData,ParsedTaskbarLayout const &>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<StartLayout::SelectionData,ParsedTaskbarLayout const &>::`vftable';
  if ( a2 )
    operator delete(a1);
}
