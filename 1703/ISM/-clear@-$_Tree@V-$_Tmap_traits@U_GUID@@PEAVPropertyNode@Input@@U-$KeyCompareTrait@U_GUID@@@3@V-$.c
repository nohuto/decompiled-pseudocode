/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x1800182E4
 * Callers:
 *     ??1?$map@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@@std@@QEAA@XZ @ 0x180011634 (--1-$map@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$allocator@U-$pair@$$CB.c)
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x18001166C (--1PropertyMap@Input@@UEAA@XZ.c)
 *     ??4PropertyMap@Input@@QEAAAEAV01@$$QEAV01@@Z @ 0x180027C50 (--4PropertyMap@Input@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4PropertyMap@Input@@UEAAAEAVPropertyNode@1@AEBV21@@Z @ 0x180027CD0 (--4PropertyMap@Input@@UEAAAEAVPropertyNode@1@AEBV21@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@@Z @ 0x180018848 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::clear(
        _QWORD *a1)
{
  char *v2; // rdi
  char *i; // rsi
  __int64 result; // rax

  v2 = *(char **)(*a1 + 8LL);
  for ( i = v2; !i[25]; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Erase(
      a1,
      *((_QWORD *)i + 2));
    i = *(char **)i;
    std::_Deallocate(v2, 1uLL, 0x38uLL);
  }
  *(_QWORD *)(*a1 + 8LL) = *a1;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
