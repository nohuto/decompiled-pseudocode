/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAVControllerProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800314D4
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180030938 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAVControllerProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800314D4 (--$_Insert@AEAU-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$_List_unchecked_iterator@V-$_List_v.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAVControllerProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800314D4 (--$_Insert@AEAU-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$_List_unchecked_iterator@V-$_List_v.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Insert<std::pair<unsigned long const,ControllerProcessor *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>(
        float *a1,
        __int64 a2,
        unsigned int *a3,
        char *a4)
{
  __int64 v6; // r10
  __int64 v8; // rcx
  unsigned __int64 i; // r9
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  float v23; // xmm0_4
  float v24; // xmm2_4
  _QWORD *v25; // rax
  __int64 v26; // rdi
  char **iter; // rax
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v30[48]; // [rsp+38h] [rbp-30h] BYREF

  v29[1] = -2LL;
  v6 = a2;
  try
  {
    v8 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
    v10 = 2 * (v8 & *((_QWORD *)a1 + 6));
    v11 = *((_QWORD *)a1 + 3);
    v12 = *(_QWORD *)(v11 + 16 * (v8 & *((_QWORD *)a1 + 6)));
    if ( v12 == *((_QWORD *)a1 + 1) )
      v13 = *((_QWORD *)a1 + 1);
    else
      v13 = **(_QWORD **)(v11 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8);
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Destroy_if_not_nil(
      a1,
      a4);
    throw;
  }
  if ( v13 == v12 )
  {
LABEL_12:
    v29[0] = (__int64)a4;
    v15 = *(_QWORD *)a4;
    if ( v13 != *(_QWORD *)a4 )
    {
      **((_QWORD **)a4 + 1) = v15;
      **(_QWORD **)(v15 + 8) = v13;
      **(_QWORD **)(v13 + 8) = a4;
      v16 = *(_QWORD *)(v13 + 8);
      *(_QWORD *)(v13 + 8) = *(_QWORD *)(v15 + 8);
      v8 = *((_QWORD *)a4 + 1);
      *(_QWORD *)(v15 + 8) = v8;
      *((_QWORD *)a4 + 1) = v16;
    }
    v17 = *((_QWORD *)a1 + 3);
    v18 = *(_QWORD *)(v17 + 8 * v10);
    if ( v18 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v17 + 8 * v10) = a4;
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v10 + 8) = a4;
    }
    else if ( v18 == v13 )
    {
      *(_QWORD *)(v17 + 8 * v10) = a4;
    }
    else
    {
      v19 = *(__int64 **)(v17 + 8 * v10 + 8);
      v8 = *v19;
      *(_QWORD *)(v17 + 8 * v10 + 8) = *v19;
      if ( (char *)v8 != a4 )
      {
        v20 = *((_QWORD *)a1 + 3);
        v8 = *(_QWORD *)(*(_QWORD *)(v20 + 8 * v10 + 8) + 8LL);
        *(_QWORD *)(v20 + 8 * v10 + 8) = v8;
      }
    }
    try
    {
      v21 = *((_QWORD *)a1 + 2);
      v22 = *((_QWORD *)a1 + 7);
      v23 = (float)(int)v21;
      if ( v21 < 0 )
        v23 = v23 + 1.8446744e19;
      v24 = (float)(int)v22;
      if ( v22 < 0 )
        v24 = v24 + 1.8446744e19;
      if ( (float)(v23 / v24) > *a1 )
      {
        if ( (unsigned __int64)v22 >= 0x200 )
        {
          if ( (unsigned __int64)v22 < 0xFFFFFFFFFFFFFFFLL )
            v22 *= 2LL;
        }
        else
        {
          v22 *= 8LL;
        }
        std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
          a1,
          v22);
        v25 = (_QWORD *)*((_QWORD *)a1 + 1);
        if ( (_QWORD *)*v25 != v25 )
        {
          v28 = v25[1];
          do
          {
            v26 = **((_QWORD **)a1 + 1);
            std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Insert<std::pair<unsigned long const,ControllerProcessor *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>(
              a1,
              v30,
              v26 + 16);
          }
          while ( v26 != v28 );
        }
        v6 = a2;
      }
    }
    catch ( ... )
    {
      iter = (char **)std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Make_iter(
                        v8,
                        v29,
                        v29[0]);
      std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::erase(
        a1,
        &v28,
        *iter);
      throw;
    }
    *(_QWORD *)v6 = a4;
    *(_BYTE *)(v6 + 8) = 1;
    return v6;
  }
  else
  {
    v8 = *a3;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v13 + 8);
      if ( (_DWORD)v8 == *(_DWORD *)(v13 + 16) )
        break;
      if ( v13 == v12 )
        goto LABEL_12;
    }
    **((_QWORD **)a4 + 1) = *(_QWORD *)a4;
    *(_QWORD *)(*(_QWORD *)a4 + 8LL) = *((_QWORD *)a4 + 1);
    --*((_QWORD *)a1 + 2);
    std::_Deallocate(a4, 1uLL, 0x20uLL);
    result = a2;
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return result;
}
