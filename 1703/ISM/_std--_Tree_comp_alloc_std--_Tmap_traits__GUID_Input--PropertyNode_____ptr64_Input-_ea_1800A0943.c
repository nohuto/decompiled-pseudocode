/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_Input::PropertyNode_____ptr64_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyNode_____ptr64____0___::_Buynode_std::pair__GUID_const__Input::PropertyNode_____ptr64__&___ptr64__::_1_::catch$8 @ 0x1800A0943
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@_K@Z @ 0x1800182D0 (-deallocate@-$_Wrap_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@PEAVPropertyNode@Input@.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tmap_traits__GUID_Input::PropertyNode_____ptr64_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyNode_____ptr64____0___::_Buynode_std::pair__GUID_const__Input::PropertyNode_____ptr64______ptr64__::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<_GUID const,Input::PropertyNode *>,void *>>>::deallocate(
    a1,
    *(char **)(a2 + 64));
  throw;
}
