/*
 * XREFs of ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A424
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$12 @ 0x18009F39B (_TestCommandHost--TestCommandHost_--_1_--dtor$12.c)
 *     _Input::PropertyVector::_PropertyVector_::_1_::dtor$1 @ 0x18009FDC5 (_Input--PropertyVector--_PropertyVector_--_1_--dtor$1.c)
 *     _Input::PropertyVector::MoveConstruct_::_1_::dtor$3 @ 0x18009FDFE (_Input--PropertyVector--MoveConstruct_--_1_--dtor$3.c)
 *     _Input::PropertyVectorModifiedAdapter_Input::ModifiedNotifier_Input::PropertyVector___::MoveConstruct_::_1_::dtor$7 @ 0x18009FE94 (_Input--PropertyVectorModifiedAdapter_Input--ModifiedNotifier_Input--PropertyVector_ea_18009FE94.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$15 @ 0x1800A0E60 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$15.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$28 @ 0x1800A2778 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$28.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$63 @ 0x1800A27AB (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$63.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$98 @ 0x1800A27DE (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$98.c)
 *     _ViewHeirarchy::ViewHeirarchy_::_1_::dtor$17 @ 0x1800A2C20 (_ViewHeirarchy--ViewHeirarchy_--_1_--dtor$17.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
