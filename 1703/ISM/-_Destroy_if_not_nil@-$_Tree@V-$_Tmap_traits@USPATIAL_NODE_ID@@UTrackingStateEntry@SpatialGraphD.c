/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18008DB90
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@1@1@Z @ 0x18008DBFC (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapp.c)
 *     _std::_Tree_std::_Tmap_traits_SPATIAL_NODE_ID_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry____0___::_Insert_hint_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry__&___ptr64_std::_Tree_node_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry__void_____ptr64______ptr64__::_1_::catch$111 @ 0x1800A39B8 (_std--_Tree_std--_Tmap_traits_SPATIAL_NODE_ID_Windows--Internal--Holographic--SpatialGraphDriver.c)
 *     _std::_Tree_std::_Tmap_traits_SPATIAL_NODE_ID_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry____0___::_Insert_nohint_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry__&___ptr64_std::_Tree_node_std::pair_SPATIAL_NODE_ID_const__Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry__void_____ptr64______ptr64__::_1_::catch$51 @ 0x1800A3A72 (_std--_Tree_std--_Tmap_traits_SPATIAL_NODE_ID_Windows--Internal--Holographic--Spati_ea_1800A3A72.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a2 + 64);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  std::_Deallocate((char *)a2, 1uLL, 0x48uLL);
}
