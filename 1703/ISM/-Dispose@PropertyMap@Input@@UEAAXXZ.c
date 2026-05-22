/*
 * XREFs of ?Dispose@PropertyMap@Input@@UEAAXXZ @ 0x180027F80
 * Callers:
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x18001166C (--1PropertyMap@Input@@UEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@@std@@@2@@Z @ 0x180018364 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Input::PropertyMap::Dispose(Input::PropertyMap *this)
{
  __int64 v2; // r8
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  while ( *((_QWORD *)this + 5) )
  {
    v2 = **((_QWORD **)this + 4);
    v3 = *(void (__fastcall ****)(_QWORD, __int64))(v2 + 48);
    std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::erase(
      (_QWORD *)this + 4,
      &v4,
      (char *)v2);
    if ( v3 )
      (**v3)(v3, 1LL);
  }
}
