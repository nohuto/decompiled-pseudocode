/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180036338
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180035A94 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x1800374AC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 * Callees:
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180033B48 (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>,0>>::find(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 *v8; // r11
  __int64 *result; // rax

  v3 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  v6 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  v7 = *(_QWORD *)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 8);
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_9;
  do
  {
    if ( (unsigned __int8)std::less<std::wstring>::operator()(a1, (_QWORD *)(v7 + 32), a3) )
    {
      v7 = v8[2];
    }
    else
    {
      v6 = (__int64)v8;
      v7 = *v8;
    }
  }
  while ( !*(_BYTE *)(v7 + 25) );
  v3 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  if ( v6 == CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap )
    goto LABEL_9;
  if ( (unsigned __int8)std::less<std::wstring>::operator()(a1, a3, (_QWORD *)(v6 + 32)) )
  {
    v3 = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
LABEL_9:
    v6 = v3;
  }
  result = a2;
  *a2 = v6;
  return result;
}
