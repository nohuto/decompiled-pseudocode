/*
 * XREFs of ??$make_pair@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@std@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@0@@Z @ 0x180036774
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180035A94 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x1800374AC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18002E944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

__int64 __fastcall std::make_pair<std::wstring const &,std::shared_ptr<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>>(
        __int64 a1,
        void **a2,
        __int64 *a3)
{
  __int64 *v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::assign((void **)a1, a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (__int64 *)(a1 + 32) != a3 )
  {
    *(_QWORD *)(a1 + 40) = a3[1];
    a3[1] = 0LL;
    v6 = *v5;
    *v5 = *a3;
    *a3 = v6;
  }
  return a1;
}
