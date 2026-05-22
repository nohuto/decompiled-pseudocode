/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@XZ @ 0x18008E8D8
 * Callers:
 *     ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@$$V@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@XZ @ 0x18008C950 (--$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@$$V@std@@YA-AV-$sh.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x48uLL);
  try
  {
    if ( result )
      *result = result;
    if ( result != (_QWORD *)-8LL )
      result[1] = result;
    v1 = result + 2;
    if ( result != (_QWORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>,void *>>>::deallocate(
      (__int64)v1,
      (char *)result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
