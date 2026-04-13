/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180037A48
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180034E50 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180036E70 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 * Callees:
 *     ??R?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180037DC8 (--R-$_Uhash_compare@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$hash@V-$bas.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r9
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx
  _QWORD *i; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx

  v4 = a3[2];
  if ( a3[3] < 8uLL )
    v7 = a3;
  else
    v7 = (_QWORD *)*a3;
  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  v10 = 2 * v4;
  if ( v10 )
  {
    do
    {
      v11 = *((unsigned __int8 *)v7 + v8++);
      v9 = 0x100000001B3LL * (v11 ^ v9);
    }
    while ( v8 < v10 );
  }
  v12 = a1[5];
  v13 = v12 & (v9 ^ HIDWORD(v9));
  if ( a1[6] <= v13 )
    v13 += -1LL - (v12 >> 1);
  v14 = 2 * v13;
  for ( i = *(_QWORD **)(a1[2] + 8 * v14); ; i = (_QWORD *)*i )
  {
    v16 = a1[2];
    v17 = (_QWORD *)*a1;
    if ( *(_QWORD *)(v16 + 8 * v14) != *a1 )
      v17 = **(_QWORD ***)(v16 + 8 * v14 + 8);
    if ( i == v17 )
    {
      *a2 = *a1;
      return a2;
    }
    if ( !(unsigned __int8)std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()(
                             v16,
                             i + 2,
                             a3,
                             v10) )
      break;
  }
  if ( (unsigned __int8)std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()(
                          v18,
                          a3,
                          i + 2,
                          v10) )
    i = (_QWORD *)*a1;
  *a2 = i;
  return a2;
}
