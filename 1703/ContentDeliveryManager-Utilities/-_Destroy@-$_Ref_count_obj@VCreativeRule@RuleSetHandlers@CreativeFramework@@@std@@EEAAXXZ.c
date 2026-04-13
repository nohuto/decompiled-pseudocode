/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@EEAAXXZ @ 0x18004A130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::_Destroy(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) >= 8uLL )
    operator delete(*(void **)(a1 + 48));
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_WORD *)(a1 + 48) = 0;
  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    operator delete(*(void **)(a1 + 16));
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 16) = 0;
}
