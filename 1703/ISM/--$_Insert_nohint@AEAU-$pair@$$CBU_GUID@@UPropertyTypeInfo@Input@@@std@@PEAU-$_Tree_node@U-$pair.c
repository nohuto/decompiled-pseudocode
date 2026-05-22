/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@1@@Z @ 0x18002AF2C
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@@Z @ 0x18002A91C (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@1@Z @ 0x18002ACB0 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_G.c)
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Insert_nohint<std::pair<_GUID const,Input::PropertyTypeInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyTypeInfo>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        void *a5)
{
  _QWORD *v8; // r14
  __int64 v9; // rsi
  int v10; // eax
  char v11; // r15
  __int64 *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 i; // rax
  char *v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  try
  {
    v8 = (_QWORD *)*a1;
    v12 = *(__int64 **)(*a1 + 8);
    v9 = *a1;
    v11 = 1;
    while ( !*((_BYTE *)v12 + 25) )
    {
      v9 = (__int64)v12;
      v10 = memcmp_0(a4, v12 + 4, 0x10uLL);
      v11 = v10 < 0;
      if ( v10 >= 0 )
        v12 = (__int64 *)v12[2];
      else
        v12 = (__int64 *)*v12;
    }
    v13 = v9;
    if ( v11 )
    {
      if ( v9 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
                           a1,
                           &v21,
                           1,
                           (__int64 *)v9,
                           v20,
                           (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v9 + 25) )
      {
        v13 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v16 = *(_QWORD *)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          for ( i = *(_QWORD *)(v9 + 8); !*(_BYTE *)(i + 25) && v13 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v13 = i;
          if ( !*(_BYTE *)(v13 + 25) )
            v13 = i;
        }
        else
        {
          do
          {
            v13 = v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          while ( !*(_BYTE *)(v16 + 25) );
        }
      }
    }
    if ( memcmp_0((const void *)(v13 + 32), a4, 0x10uLL) >= 0 )
    {
      v18 = (char *)a5;
      v19 = *((_QWORD *)a5 + 11);
      if ( v19 >= 8 )
        std::_Deallocate(*((char **)a5 + 8), v19 + 1, 2uLL);
      std::_Deallocate(v18, 1uLL, 0x70uLL);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
                         a1,
                         &v21,
                         v11,
                         (__int64 *)v9,
                         v20,
                         (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Destroy_if_not_nil(
      v14,
      (__int64)a5);
    throw;
  }
  return result;
}
