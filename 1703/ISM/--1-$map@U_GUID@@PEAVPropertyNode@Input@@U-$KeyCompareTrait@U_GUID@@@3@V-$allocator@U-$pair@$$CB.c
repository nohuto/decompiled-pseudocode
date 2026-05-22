/*
 * XREFs of ??1?$map@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@@std@@QEAA@XZ @ 0x180011634
 * Callers:
 *     _Input::PropertyMap::_PropertyMap_::_1_::dtor$1 @ 0x18009F796 (_Input--PropertyMap--_PropertyMap_--_1_--dtor$1.c)
 *     _Input::PropertyMap::MoveConstruct_::_1_::dtor$3 @ 0x1800A0837 (_Input--PropertyMap--MoveConstruct_--_1_--dtor$3.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x1800182E4 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$.c)
 */

void __fastcall std::map<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>>::~map<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>>(
        char **a1)
{
  std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::clear();
  std::_Deallocate(*a1, 1uLL, 0x38uLL);
}
