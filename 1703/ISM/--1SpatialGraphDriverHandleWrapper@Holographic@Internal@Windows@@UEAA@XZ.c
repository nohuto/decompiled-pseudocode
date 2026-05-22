/*
 * XREFs of ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x18008F028
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x18008CEA0 (-_Destroy@-$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@.c)
 *     ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x18008EF50 (--_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18008EF84 (-_Erase@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::~SpatialGraphDriverHandleWrapper(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this)
{
  char **v2; // r14

  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`vftable';
  v2 = (char **)((char *)this + 144);
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Erase(
    (__int64)this + 144,
    *(char **)(*((_QWORD *)this + 18) + 8LL));
  *((_QWORD *)*v2 + 1) = *v2;
  *(_QWORD *)*v2 = *v2;
  *((_QWORD *)*v2 + 2) = *v2;
  v2[1] = 0LL;
  std::_Deallocate(*v2, 1uLL, 0x48uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(this);
}
