/*
 * XREFs of ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@@Z @ 0x180038BB8
 * Callers:
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG@Z @ 0x180032E4C (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180034E50 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX$$QEAV12@@Z @ 0x1800273A0 (-_Assign_rv@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800398A8 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

__int64 __fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring,std::wstring>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  void *v8; // [rsp+50h] [rbp+18h]

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  v5 = v3;
  v8 = (void *)v3;
  *(_WORD *)(v3 + 24) = 0;
  try
  {
    v6 = v3 + 32;
    if ( v3 != -32 )
    {
      *(_QWORD *)(v3 + 56) = 7LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_WORD *)v6 = 0;
      std::wstring::_Assign_rv((_QWORD *)(v3 + 32), a2);
      *(_QWORD *)(v6 + 56) = 7LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      *(_WORD *)(v6 + 32) = 0;
      std::wstring::_Assign_rv((_QWORD *)(v6 + 32), a2 + 4);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>::deallocate(
      v4,
      v8);
    throw;
  }
  return v5;
}
