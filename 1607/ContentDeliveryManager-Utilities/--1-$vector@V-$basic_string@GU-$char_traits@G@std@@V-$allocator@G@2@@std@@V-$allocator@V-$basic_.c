/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180023500
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG@Z @ 0x180032E4C (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     _CreativeFramework::SubscribedContentStore::Details::SplitString_::_1_::dtor$0 @ 0x18005A40E (_CreativeFramework--SubscribedContentStore--Details--SplitString_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$1 @ 0x18005A452 (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$3 @ 0x18005B1A2 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$7 @ 0x18005B1D2 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<std::wstring>::~vector<std::wstring>(__int64 a1)
{
  void **v1; // rbx
  void **v3; // rsi

  v1 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(void ***)(a1 + 8);
    while ( v1 != v3 )
    {
      if ( (unsigned __int64)v1[3] >= 8 )
        operator delete(*v1);
      v1[3] = (void *)7;
      v1[2] = 0LL;
      *(_WORD *)v1 = 0;
      v1 += 4;
    }
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
