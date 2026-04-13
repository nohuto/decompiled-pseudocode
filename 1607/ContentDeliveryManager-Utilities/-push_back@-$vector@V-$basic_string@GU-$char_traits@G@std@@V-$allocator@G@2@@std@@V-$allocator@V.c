/*
 * XREFs of ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180023580
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x18001EDF4 (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x180032A9C (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX$$QEAV12@@Z @ 0x1800273A0 (-_Assign_rv@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Xlen@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEBAXXZ @ 0x180027884 (-_Xlen@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$ba.c)
 *     ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18002789C (-_Reallocate@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator.c)
 */

void __fastcall std::vector<std::wstring>::push_back(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx

  v3 = a2;
  v4 = a1[1];
  if ( a2 >= v4 || *a1 > a2 )
  {
    v11 = a1[2];
    if ( v4 == v11 && !((__int64)(v11 - v4) >> 5) )
    {
      v12 = (__int64)(v4 - *a1) >> 5;
      if ( v12 == 0x7FFFFFFFFFFFFFFLL )
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>>>>::_Xlen();
      v13 = v12 + 1;
      v14 = (v11 - *a1) >> 5;
      if ( 0x7FFFFFFFFFFFFFFLL - (v14 >> 1) >= v14 )
        v15 = (v14 >> 1) + v14;
      else
        v15 = 0LL;
      if ( v15 < v13 )
        v15 = v13;
      std::vector<std::wstring>::_Reallocate(a1, v15);
    }
  }
  else
  {
    v5 = a2 - *a1;
    v6 = a1[2];
    if ( v4 == v6 && !((__int64)(v6 - v4) >> 5) )
    {
      v7 = (__int64)(v4 - *a1) >> 5;
      if ( v7 == 0x7FFFFFFFFFFFFFFLL )
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>>>>::_Xlen();
      v8 = v7 + 1;
      v9 = (v6 - *a1) >> 5;
      if ( 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) >= v9 )
        v10 = (v9 >> 1) + v9;
      else
        v10 = 0LL;
      if ( v10 < v8 )
        v10 = v8;
      std::vector<std::wstring>::_Reallocate(a1, v10);
    }
    v3 = *a1 + (v5 & 0xFFFFFFFFFFFFFFE0uLL);
  }
  v16 = a1[1];
  if ( v16 )
  {
    *(_QWORD *)(v16 + 24) = 7LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_WORD *)v16 = 0;
    std::wstring::_Assign_rv(v16, v3);
  }
  a1[1] += 32LL;
}
