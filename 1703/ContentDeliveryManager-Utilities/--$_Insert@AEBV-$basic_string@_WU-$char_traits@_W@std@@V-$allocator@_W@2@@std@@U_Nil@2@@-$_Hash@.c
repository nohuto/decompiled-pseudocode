/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x1800672B0
 * Callers:
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x180065B18 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800599AC (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ??$_Buynode@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@1@PEAU21@0AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18006787C (--$_Buynode@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_List_buy@V-$.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18006A714 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_Nil>(
        __int64 **a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 i; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // r11
  __int64 *v14; // rdi
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r12
  _WORD *v17; // r10
  __int64 v18; // r9
  bool j; // zf
  int v20; // ecx
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  _WORD *v23; // r10
  unsigned __int64 v24; // r11
  __int64 v25; // r9
  bool k; // zf
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rdx
  __int64 *v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *iter; // rax
  __int64 v45[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v47; // [rsp+70h] [rbp+18h] BYREF

  try
  {
    v5 = a3[2];
    if ( a3[3] < 8uLL )
      v6 = a3;
    else
      v6 = (_QWORD *)*a3;
    v7 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 2 * v5; ++i )
      v7 = 0x100000001B3LL * (*((unsigned __int8 *)v6 + i) ^ v7);
    v9 = HIDWORD(v7) ^ v7;
    v10 = v9 & (unsigned __int64)a1[5];
    if ( (unsigned __int64)a1[6] <= v10 )
      v10 += -1LL - ((unsigned __int64)a1[5] >> 1);
    v11 = *a1;
    v12 = 2 * v10;
    v13 = a1[2];
    if ( (__int64 *)v13[v12] == *a1 )
      v14 = *a1;
    else
      v14 = *(__int64 **)v13[v12 + 1];
  }
  catch ( ... )
  {
    throw;
  }
  while ( v14 != (__int64 *)v13[v12] )
  {
    v14 = (__int64 *)v14[1];
    v15 = v14 + 2;
    v16 = v14[4];
    if ( (unsigned __int64)v14[5] >= 8 )
      v15 = (_QWORD *)*v15;
    if ( a3[3] < 8uLL )
      v17 = a3;
    else
      v17 = (_WORD *)*a3;
    v18 = v14[4];
    if ( v5 < v16 )
      v18 = v5;
    for ( j = v18 == 0; ; j = v18 == 0 )
    {
      if ( j )
      {
        v20 = 0;
        goto LABEL_25;
      }
      if ( *v17 != *(_WORD *)v15 )
        break;
      ++v17;
      v15 = (_QWORD *)((char *)v15 + 2);
      --v18;
    }
    v20 = *v17 < *(_WORD *)v15 ? -1 : 1;
LABEL_25:
    v21 = v20;
    v9 = v5 != v16;
    if ( v5 < v16 )
      v9 = 0xFFFFFFFFLL;
    if ( v21 )
      v9 = (unsigned int)v21;
    if ( !(_DWORD)v9 )
    {
      v22 = v14 + 2;
      if ( a3[3] < 8uLL )
        v23 = a3;
      else
        v23 = (_WORD *)*a3;
      v24 = v14[4];
      if ( (unsigned __int64)v14[5] >= 8 )
        v22 = (_QWORD *)*v22;
      v25 = v5;
      if ( v24 < v5 )
        v25 = v14[4];
      for ( k = v25 == 0; ; k = v25 == 0 )
      {
        if ( k )
        {
          v27 = 0;
          goto LABEL_45;
        }
        if ( *(_WORD *)v22 != *v23 )
          break;
        v22 = (_QWORD *)((char *)v22 + 2);
        ++v23;
        --v25;
      }
      v27 = *(_WORD *)v22 < *v23 ? -1 : 1;
LABEL_45:
      v28 = v27;
      v9 = v24 != v5;
      if ( v24 < v5 )
        v9 = 0xFFFFFFFFLL;
      if ( v28 )
        v9 = (unsigned int)v28;
      if ( !(_DWORD)v9 )
      {
        *(_QWORD *)a2 = v14;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      v14 = (__int64 *)*v14;
      break;
    }
  }
  v30 = *v11;
  v31 = std::_List_buy<std::wstring>::_Buynode<std::wstring const &>(v9, *v11, *(_QWORD *)(*v11 + 8), a3, -2LL);
  v32 = a1[1];
  if ( v32 == (__int64 *)0x555555555555554LL )
    std::_Xlength_error("list<T> too long");
  a1[1] = (__int64 *)((char *)v32 + 1);
  *(_QWORD *)(v30 + 8) = v31;
  **(_QWORD **)(v31 + 8) = v31;
  v33 = **a1;
  v47 = v33;
  v34 = *(_QWORD *)v33;
  if ( v14 != *(__int64 **)v33 )
  {
    **(_QWORD **)(v33 + 8) = v34;
    **(_QWORD **)(v34 + 8) = v14;
    *(_QWORD *)v14[1] = v33;
    v35 = v14[1];
    v14[1] = *(_QWORD *)(v34 + 8);
    v36 = *(_QWORD *)(v33 + 8);
    *(_QWORD *)(v34 + 8) = v36;
    *(_QWORD *)(v33 + 8) = v35;
  }
  v37 = a1[2];
  v38 = (__int64 *)v37[v12];
  if ( v38 == *a1 )
  {
    v37[v12] = v33;
    a1[2][v12 + 1] = v33;
  }
  else if ( v38 == v14 )
  {
    v37[v12] = v33;
  }
  else
  {
    v39 = (__int64 *)v37[v12 + 1];
    v40 = *v39;
    v37[v12 + 1] = *v39;
    if ( v40 != v33 )
    {
      v41 = a1[2];
      v42 = *(_QWORD *)(v41[v12 + 1] + 8);
      v41[v12 + 1] = v42;
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size(a1);
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
             v43,
             &v47,
             v47);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      a1,
      v45,
      (_QWORD *)*iter);
    throw;
  }
  *(_QWORD *)a2 = v33;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
