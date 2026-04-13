/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@std@@V12@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003CEA8
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003C460 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::equal_range(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r14
  _QWORD *v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rdi
  _QWORD *j; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _WORD *v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r8
  bool k; // zf
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // ecx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // r8
  unsigned __int64 v29; // rsi
  _WORD *v30; // r11
  unsigned __int64 v31; // r10
  bool m; // zf
  int v33; // edx
  __int64 v34; // r8
  int v35; // edx

  v4 = a3[2];
  if ( a3[3] < 8uLL )
    v7 = a3;
  else
    v7 = (_QWORD *)*a3;
  v8 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v8 < 2 * v4; i = 0x100000001B3LL * (v10 ^ i) )
    v10 = *((unsigned __int8 *)v7 + v8++);
  v11 = a1[5];
  v12 = v11 & (i ^ HIDWORD(i));
  if ( a1[6] <= v12 )
    v12 += -1LL - (v11 >> 1);
  v13 = a1[2];
  v14 = 2 * v12;
  v15 = *a1;
  for ( j = *(_QWORD **)(v13 + 16 * v12); ; j = (_QWORD *)*j )
  {
    v17 = *(_QWORD *)(v13 + 8 * v14) == v15 ? (_QWORD *)v15 : **(_QWORD ***)(v13 + 8 * v14 + 8);
    if ( j == v17 )
      break;
    v18 = j + 2;
    if ( a3[3] < 8uLL )
      v19 = a3;
    else
      v19 = (_WORD *)*a3;
    v20 = j[4];
    if ( j[5] >= 8uLL )
      v18 = (_QWORD *)*v18;
    v21 = v4;
    if ( v20 < v4 )
      v21 = j[4];
    for ( k = v21 == 0; ; k = v21 == 0 )
    {
      if ( k )
      {
        v23 = 0;
        goto LABEL_25;
      }
      if ( *(_WORD *)v18 != *v19 )
        break;
      v18 = (_QWORD *)((char *)v18 + 2);
      ++v19;
      --v21;
    }
    v23 = *(_WORD *)v18 < *v19 ? -1 : 1;
LABEL_25:
    v24 = v23;
    v25 = v20 != v4;
    if ( v20 < v4 )
      v25 = -1;
    if ( v24 )
      v25 = v24;
    if ( !v25 )
    {
      v26 = j;
      while ( 1 )
      {
        v27 = *(_QWORD *)(v13 + 8 * v14) == v15 ? (_QWORD *)v15 : **(_QWORD ***)(v13 + 8 * v14 + 8);
        if ( j == v27 )
          break;
        v28 = j + 2;
        v29 = j[4];
        if ( j[5] >= 8uLL )
          v28 = (_QWORD *)*v28;
        if ( a3[3] < 8uLL )
          v30 = a3;
        else
          v30 = (_WORD *)*a3;
        v31 = j[4];
        if ( v4 < v29 )
          v31 = v4;
        for ( m = v31 == 0; ; m = --v31 == 0 )
        {
          if ( m )
          {
            v33 = 0;
            goto LABEL_49;
          }
          if ( *v30 != *(_WORD *)v28 )
            break;
          ++v30;
          v28 = (_QWORD *)((char *)v28 + 2);
        }
        v33 = *v30 < *(_WORD *)v28 ? -1 : 1;
LABEL_49:
        v34 = v33;
        v35 = v4 != v29;
        if ( v4 < v29 )
          v35 = -1;
        if ( v34 )
          v35 = v34;
        if ( v35 )
          break;
        j = (_QWORD *)*j;
      }
      if ( v26 != j )
      {
        *a2 = v26;
        a2[1] = j;
        return a2;
      }
      break;
    }
  }
  *a2 = v15;
  a2[1] = v15;
  return a2;
}
