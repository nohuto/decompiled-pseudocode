/*
 * XREFs of ?Insert@PropertyMap@Input@@IEAAJPEAVPropertyNode@2@@Z @ 0x180027E34
 * Callers:
 *     ?Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z @ 0x180027DB8 (-Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z.c)
 *     ?Deserialize@PropertyMap@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180028180 (-Deserialize@PropertyMap@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 * Callees:
 *     ??$_Buynode@AEBU_GUID@@AEAPEAVPropertyNode@Input@@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@AEBU_GUID@@AEAPEAVPropertyNode@Input@@@Z @ 0x180028D8C (--$_Buynode@AEBU_GUID@@AEAPEAVPropertyNode@Input@@@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@PE.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@@Z @ 0x180028DD8 (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAU-$_Tree_node@U-$pair@.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyMap::Insert(Input::PropertyMap *this, struct Input::PropertyNode *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF
  struct Input::PropertyNode *v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 0;
  if ( *(_OWORD *)((char *)a2 + 8) == *(_OWORD *)&DirectX::g_XMZero )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    try
    {
      v4 = (*(__int64 (__fastcall **)(struct Input::PropertyNode *))(*(_QWORD *)a2 + 136LL))(a2);
      v5 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Buynode<_GUID const &,Input::PropertyNode * &>(
             (char *)this + 32,
             v4,
             &v9);
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Insert_nohint<std::pair<_GUID const,Input::PropertyNode *> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyNode *>,void *> *>(
        (char *)this + 32,
        v8,
        v6,
        v5 + 32,
        v5);
      if ( !v8[8] )
        v3 = -2147024713;
    }
    catch ( ... )
    {
      LODWORD(v9) = -2147024882;
      return (unsigned int)-2147024882;
    }
  }
  return v3;
}
