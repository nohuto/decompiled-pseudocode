/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@Z @ 0x18002A840
 * Callers:
 *     ??1?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18002A2BC (--1-$_Tree@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$all.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@Z @ 0x18002A840 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@Z @ 0x18002A840 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Erase(
        __int64 a1,
        char *a2)
{
  char *v2; // rbx
  char *i; // rdi
  unsigned __int64 v5; // rdx

  v2 = a2;
  for ( i = a2; !i[25]; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Erase(
      a1,
      *((_QWORD *)i + 2));
    v5 = *((_QWORD *)v2 + 11);
    i = *(char **)i;
    if ( v5 >= 8 )
      std::_Deallocate(*((char **)v2 + 8), v5 + 1, 2uLL);
    std::_Deallocate(v2, 1uLL, 0x70uLL);
  }
}
