/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@PEAX@2@_K@Z @ 0x18006AA20
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__tagInputRoutingInfo__std::allocator_std::pair_unsigned_int_const__tagInputRoutingInfo_______::_Buynode0_::_1_::catch$14 @ 0x1800A28A1 (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_int_const__tagInputRoutingInfo__std--.c)
 *     _std::_List_buy_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget______std::allocator_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget_________::_Buynode_tagInputRoutingInfo_const_&___ptr64_std::unique_ptr_InputTargetWithHostRegistration_std::default_delete_InputTargetWithHostRegistration______::_1_::catch$28 @ 0x1800A28C1 (_std--_List_buy_std--pair_tagInputRoutingInfo_const__std--unique_ptr_InputTarget_std--default_de.c)
 *     _std::_List_buy_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget______std::allocator_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget_________::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_tagInputRoutingInfo_const_&___ptr64__std::tuple_____::_1_::catch$23 @ 0x1800A2921 (_std--_List_buy_std--pair_tagInputRoutingInfo_const__std--unique_ptr_InputTarget_st_ea_1800A2921.c)
 *     _std::_List_buy_std::pair_unsigned_int_const__tagInputRoutingInfo__std::allocator_std::pair_unsigned_int_const__tagInputRoutingInfo_____::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_int_const_&___ptr64__std::tuple_____::_1_::catch$21 @ 0x1800A2A64 (_std--_List_buy_std--pair_unsigned_int_const__tagInputRoutingInfo__std--allocator_std--pair_unsi.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_SPATIAL_NODE_ID_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry____0___::_Buynode_std::pair_SPATIAL_NODE_ID_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry____::_1_::catch$14 @ 0x1800A3998 (_std--_Tree_comp_alloc_std--_Tmap_traits_SPATIAL_NODE_ID_Windows--Internal--Holographic--Spatial.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_SPATIAL_NODE_ID_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry____0___::_Buynode0_::_1_::catch$36 @ 0x1800A3A52 (_std--_Tree_comp_alloc_std--_Tmap_traits_SPATIAL_NODE_ID_Windows--Internal--Hologra_ea_1800A3A52.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_SPATIAL_NODE_ID_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry____0___::_Buyheadnode_::_1_::catch$24 @ 0x1800A3AB1 (_std--_Tree_comp_alloc_std--_Tmap_traits_SPATIAL_NODE_ID_Windows--Internal--Hologra_ea_1800A3AB1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>,void *>>>::deallocate(
        __int64 a1,
        char *a2)
{
  std::_Deallocate(a2, 1uLL, 0x48uLL);
}
