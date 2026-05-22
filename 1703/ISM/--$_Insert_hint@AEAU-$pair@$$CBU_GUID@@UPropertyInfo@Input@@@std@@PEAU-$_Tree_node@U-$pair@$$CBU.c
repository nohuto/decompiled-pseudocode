/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@@Z @ 0x18002A91C
 * Callers:
 *     ?DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180029898 (-DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180029B28 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@1@Z @ 0x18002ACB0 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_G.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@1@@Z @ 0x18002AF2C (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair.c)
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_hint<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3,
        const void *a4,
        __int64 a5)
{
  __int64 *v6; // rbx
  __int64 *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rdi
  __int64 *j; // rax
  __int64 *i; // rcx
  int v17; // r8d
  __int64 *v18; // rdi
  __int64 *v19; // rax
  __int64 k; // rax
  char v21[24]; // [rsp+38h] [rbp-30h] BYREF

  v6 = a3;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)*a1);
    return a2;
  }
  v10 = *a1;
  if ( a3 == (__int64 *)**a1 )
  {
    if ( memcmp_0(a4, a3 + 4, 0x10uLL) < 0 )
    {
      LOBYTE(v11) = 1;
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        v11,
        (_DWORD)v6);
      return a2;
    }
    goto LABEL_44;
  }
  if ( a3 == v10 )
  {
    v12 = v10[2];
    if ( memcmp_0((const void *)(v12 + 32), a4, 0x10uLL) < 0 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        v12);
      return a2;
    }
    goto LABEL_44;
  }
  if ( memcmp_0(a4, a3 + 4, 0x10uLL) >= 0 )
    goto LABEL_39;
  v13 = v6;
  if ( *((_BYTE *)v6 + 25) )
  {
    v14 = (__int64 *)v6[2];
  }
  else
  {
    v14 = (__int64 *)*v6;
    if ( *(_BYTE *)(*v6 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
        v13 = i;
      v14 = v13;
      if ( !*((_BYTE *)v13 + 25) )
        v14 = i;
    }
    else
    {
      for ( j = (__int64 *)v14[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        v14 = j;
    }
  }
  if ( memcmp_0(v14 + 4, a4, 0x10uLL) >= 0 )
  {
LABEL_39:
    if ( memcmp_0(v6 + 4, a4, 0x10uLL) >= 0 )
      goto LABEL_44;
    v18 = v6;
    if ( !*((_BYTE *)v6 + 25) )
    {
      v19 = (__int64 *)v6[2];
      if ( *((_BYTE *)v19 + 25) )
      {
        for ( k = v6[1]; !*(_BYTE *)(k + 25) && v18 == *(__int64 **)(k + 16); k = *(_QWORD *)(k + 8) )
          v18 = (__int64 *)k;
        v18 = (__int64 *)k;
      }
      else
      {
        do
        {
          v18 = v19;
          v19 = (__int64 *)*v19;
        }
        while ( !*((_BYTE *)v19 + 25) );
      }
    }
    if ( v18 != v10 && memcmp_0(a4, v18 + 4, 0x10uLL) >= 0 )
    {
LABEL_44:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Insert_nohint<std::pair<_GUID const,Input::PropertyTypeInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyTypeInfo>,void *> *>(
                         a1,
                         v21,
                         v11,
                         a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(v6[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        (_DWORD)v6);
    }
    else
    {
      LOBYTE(v11) = 1;
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        v11,
        (_DWORD)v18);
    }
    return a2;
  }
  else
  {
    if ( *(_BYTE *)(v14[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        (_DWORD)v14);
    }
    else
    {
      LOBYTE(v17) = 1;
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        v17,
        (_DWORD)v6);
    }
    return a2;
  }
}
