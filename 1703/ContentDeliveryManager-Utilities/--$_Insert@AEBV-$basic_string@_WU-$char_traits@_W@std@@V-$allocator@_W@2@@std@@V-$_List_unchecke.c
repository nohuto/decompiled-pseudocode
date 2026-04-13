/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x18005A1F4
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800599AC (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800599AC (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x180059B70 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r9
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  _QWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r14
  _QWORD *v16; // rcx
  unsigned __int64 v17; // r12
  _WORD *v18; // r11
  unsigned __int64 v19; // rdx
  bool j; // zf
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rcx
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rdx
  bool k; // zf
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *iter; // rax
  __int64 v43[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v45; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v46; // [rsp+88h] [rbp+20h]

  v46 = a4;
  v5 = a3;
  try
  {
    v8 = a3[2];
    if ( a3[3] >= 8uLL )
      a3 = (_QWORD *)*a3;
    v9 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 2 * v8; ++i )
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ v9);
    v11 = HIDWORD(v9) ^ v9;
    v12 = v11 & *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 48) <= v12 )
      v12 += -1LL - (*(_QWORD *)(a1 + 40) >> 1);
  }
  catch ( ... )
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Destroy_if_not_nil(
      a1,
      v46);
    throw;
  }
  v13 = *(_QWORD **)a1;
  v14 = 2 * v12;
  v15 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 != *(_QWORD *)(v15 + 8 * v14) )
  {
    v13 = **(_QWORD ***)(v15 + 8 * v14 + 8);
    while ( v13 != *(_QWORD **)(v15 + 8 * v14) )
    {
      v13 = (_QWORD *)v13[1];
      v16 = v13 + 2;
      v17 = v13[4];
      if ( v13[5] >= 8uLL )
        v16 = (_QWORD *)*v16;
      if ( v5[3] < 8uLL )
        v18 = v5;
      else
        v18 = (_WORD *)*v5;
      v19 = v13[4];
      if ( v8 < v17 )
        v19 = v8;
      for ( j = v19 == 0; ; j = v19 == 0 )
      {
        if ( j )
        {
          v21 = 0;
          goto LABEL_23;
        }
        if ( *v18 != *(_WORD *)v16 )
          break;
        ++v18;
        v16 = (_QWORD *)((char *)v16 + 2);
        --v19;
      }
      v21 = *v18 < *(_WORD *)v16 ? -1 : 1;
LABEL_23:
      v22 = v21;
      v23 = v8 != v17;
      if ( v8 < v17 )
        v23 = -1;
      if ( v22 )
        v23 = v22;
      if ( !v23 )
      {
        v24 = v13 + 2;
        if ( v5[3] >= 8uLL )
          v5 = (_QWORD *)*v5;
        v25 = v13[4];
        if ( v13[5] >= 8uLL )
          v24 = (_QWORD *)*v24;
        v26 = v8;
        if ( v25 < v8 )
          v26 = v13[4];
        for ( k = v26 == 0; ; k = v26 == 0 )
        {
          if ( k )
          {
            v28 = 0;
            goto LABEL_42;
          }
          if ( *(_WORD *)v24 != *(_WORD *)v5 )
            break;
          v24 = (_QWORD *)((char *)v24 + 2);
          v5 = (_QWORD *)((char *)v5 + 2);
          --v26;
        }
        v28 = *(_WORD *)v24 < *(_WORD *)v5 ? -1 : 1;
LABEL_42:
        v29 = v28;
        v30 = v25 != v8;
        if ( v25 < v8 )
          v30 = -1;
        if ( v29 )
          v30 = v29;
        if ( v30 )
        {
          v13 = (_QWORD *)*v13;
          break;
        }
        std::list<std::wstring>::erase((void **)a1, &v45, a4);
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v32 = (_QWORD *)*a4;
  if ( v13 != (_QWORD *)*a4 )
  {
    *(_QWORD *)a4[1] = v32;
    *(_QWORD *)v32[1] = v13;
    *(_QWORD *)v13[1] = a4;
    v33 = v13[1];
    v13[1] = v32[1];
    v34 = a4[1];
    v32[1] = v34;
    a4[1] = v33;
  }
  v35 = *(_QWORD *)(a1 + 16);
  v36 = *(_QWORD **)(v35 + 8 * v14);
  if ( v36 == *(_QWORD **)a1 )
  {
    *(_QWORD *)(v35 + 8 * v14) = a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v14 + 8) = a4;
  }
  else if ( v36 == v13 )
  {
    *(_QWORD *)(v35 + 8 * v14) = a4;
  }
  else
  {
    v37 = *(_QWORD **)(v35 + 8 * v14 + 8);
    v38 = (_QWORD *)*v37;
    *(_QWORD *)(v35 + 8 * v14 + 8) = *v37;
    if ( v38 != a4 )
    {
      v39 = *(_QWORD *)(a1 + 16);
      v40 = *(_QWORD *)(*(_QWORD *)(v39 + 8 * v14 + 8) + 8LL);
      *(_QWORD *)(v39 + 8 * v14 + 8) = v40;
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size((__int64 **)a1);
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
             v41,
             &v45,
             (__int64)v46);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      (_QWORD *)a1,
      v43,
      (_QWORD *)*iter);
    throw;
  }
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
