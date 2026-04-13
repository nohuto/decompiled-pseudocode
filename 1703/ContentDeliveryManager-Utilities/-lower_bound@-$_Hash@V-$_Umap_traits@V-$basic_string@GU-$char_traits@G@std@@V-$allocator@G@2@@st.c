/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003D0A4
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x18003A5E0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18003C510 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  _QWORD *v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 i; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rbp
  _QWORD *v14; // rsi
  _QWORD *j; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _WORD *v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // rdx
  bool k; // zf
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rdx
  bool m; // zf
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax

  v4 = a3[2];
  if ( a3[3] < 8uLL )
    v6 = a3;
  else
    v6 = (_QWORD *)*a3;
  v7 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v7 < 2 * v4; i = 0x100000001B3LL * (v9 ^ i) )
    v9 = *((unsigned __int8 *)v6 + v7++);
  v10 = a1[5];
  v11 = v10 & (i ^ HIDWORD(i));
  if ( a1[6] <= v11 )
    v11 += -1LL - (v10 >> 1);
  v12 = a1[2];
  v13 = 2 * v11;
  v14 = (_QWORD *)*a1;
  for ( j = *(_QWORD **)(v12 + 16 * v11); ; j = (_QWORD *)*j )
  {
    if ( *(_QWORD **)(v12 + 8 * v13) == v14 )
      v16 = v14;
    else
      v16 = **(_QWORD ***)(v12 + 8 * v13 + 8);
    if ( j == v16 )
    {
      *a2 = v14;
      return a2;
    }
    v17 = j + 2;
    if ( a3[3] < 8uLL )
      v18 = a3;
    else
      v18 = (_WORD *)*a3;
    v19 = j[4];
    if ( j[5] >= 8uLL )
      v17 = (_QWORD *)*v17;
    v20 = a3[2];
    if ( v19 < v4 )
      v20 = j[4];
    for ( k = v20 == 0; ; k = v20 == 0 )
    {
      if ( k )
      {
        v22 = 0;
        goto LABEL_25;
      }
      if ( *(_WORD *)v17 != *v18 )
        break;
      v17 = (_QWORD *)((char *)v17 + 2);
      ++v18;
      --v20;
    }
    v22 = *(_WORD *)v17 < *v18 ? -1 : 1;
LABEL_25:
    v23 = v22;
    v24 = v19 != v4;
    if ( v19 < v4 )
      v24 = -1;
    if ( v23 )
      v24 = v23;
    if ( !v24 )
      break;
  }
  v25 = j + 2;
  v26 = j[4];
  if ( j[5] >= 8uLL )
    v25 = (_QWORD *)*v25;
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v27 = j[4];
  if ( v4 < v26 )
    v27 = v4;
  for ( m = v27 == 0; ; m = v27 == 0 )
  {
    if ( m )
    {
      v29 = 0;
      goto LABEL_43;
    }
    if ( *(_WORD *)a3 != *(_WORD *)v25 )
      break;
    a3 = (_QWORD *)((char *)a3 + 2);
    v25 = (_QWORD *)((char *)v25 + 2);
    --v27;
  }
  v29 = *(_WORD *)a3 < *(_WORD *)v25 ? -1 : 1;
LABEL_43:
  v30 = v29;
  v31 = v4 != v26;
  if ( v4 < v26 )
    v31 = -1;
  if ( v30 )
    v31 = v30;
  if ( v31 )
    j = v14;
  *a2 = j;
  return a2;
}
