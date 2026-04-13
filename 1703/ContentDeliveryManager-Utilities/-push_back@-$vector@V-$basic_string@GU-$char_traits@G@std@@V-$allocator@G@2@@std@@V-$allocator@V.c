/*
 * XREFs of ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002AA94
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x180027498 (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x180038D14 (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Xlen@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@std@@@std@@@2@@std@@IEBAXXZ @ 0x18002EF6C (-_Xlen@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$ba.c)
 *     ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18002EF80 (-_Reallocate@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator.c)
 */

__int64 __fastcall std::vector<std::wstring>::push_back(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx

  v4 = a1[1];
  if ( a2 >= v4 || *a1 > a2 )
  {
    v12 = a1[2];
    if ( v4 == v12 )
    {
      result = (__int64)(v12 - v4) >> 5;
      if ( !result )
      {
        v13 = (__int64)(v4 - *a1) >> 5;
        if ( v13 == 0x7FFFFFFFFFFFFFFLL )
          std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>>>>::_Xlen();
        v14 = v13 + 1;
        v15 = (v12 - *a1) >> 5;
        v16 = 0LL;
        if ( 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) >= v15 )
          v16 = v15 + (v15 >> 1);
        if ( v16 >= v14 )
          v14 = v16;
        result = std::vector<std::wstring>::_Reallocate(a1, v14);
      }
    }
  }
  else
  {
    v5 = a2 - *a1;
    v6 = a1[2];
    if ( v4 == v6 )
    {
      result = (__int64)(v6 - v4) >> 5;
      if ( !result )
      {
        v8 = (__int64)(v4 - *a1) >> 5;
        if ( v8 == 0x7FFFFFFFFFFFFFFLL )
          std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>>>>>>::_Xlen();
        v9 = v8 + 1;
        v10 = (v6 - *a1) >> 5;
        v11 = 0LL;
        if ( 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) >= v10 )
          v11 = v10 + (v10 >> 1);
        if ( v11 >= v9 )
          v9 = v11;
        result = std::vector<std::wstring>::_Reallocate(a1, v9);
      }
    }
    a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFE0uLL);
  }
  v17 = a1[1];
  if ( v17 )
  {
    *(_QWORD *)(v17 + 24) = 7LL;
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_WORD *)v17 = 0;
    result = std::wstring::_Assign_rv(v17, a2);
  }
  a1[1] += 32LL;
  return result;
}
