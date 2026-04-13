/*
 * XREFs of ?GetSubscriptionId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800363C4
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180035A94 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18002FD9C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

_QWORD *__fastcall CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetSubscriptionId(
        _QWORD *a1,
        char *lpString2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rax

  v2 = lpString2;
  v3 = 0LL;
  v5 = CompareStringOrdinal(L"SubscribedContent-", 18, (LPCWCH)lpString2, 18, 1);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( v5 == 2 )
    v2 += 36;
  if ( *(_WORD *)v2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&v2[2 * v6] );
    v3 = v6;
  }
  std::wstring::assign(a1, v2, v3);
  return a1;
}
