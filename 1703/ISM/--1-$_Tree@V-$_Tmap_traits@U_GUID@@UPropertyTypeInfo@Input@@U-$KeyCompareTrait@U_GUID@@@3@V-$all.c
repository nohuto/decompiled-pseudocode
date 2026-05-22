/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18002A2BC
 * Callers:
 *     ??1?$map@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@@std@@QEAA@XZ @ 0x180029488 (--1-$map@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@Z @ 0x18002A840 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::~_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>(
        char **a1)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  unsigned __int64 v4; // rdx

  v2 = (__int64 *)*((_QWORD *)*a1 + 1);
  for ( i = v2; !*((_BYTE *)i + 25); v2 = i )
  {
    std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Erase(
      a1,
      i[2]);
    i = (__int64 *)*i;
    v4 = v2[11];
    if ( v4 >= 8 )
      std::_Deallocate((char *)v2[8], v4 + 1, 2uLL);
    std::_Deallocate((char *)v2, 1uLL, 0x70uLL);
  }
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  std::_Deallocate(*a1, 1uLL, 0x70uLL);
}
