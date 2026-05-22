/*
 * XREFs of ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@$$V@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@XZ @ 0x18008C950
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180089D6C (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV-$.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@PEAV_Ref_count_base@2@@Z @ 0x18008CEAC (-_Reset0@-$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXP.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@XZ @ 0x18008E8D8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGr.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper,>(_QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)operator new(0xB0uLL);
  v2->LockCount = 1;
  v2->RecursionCount = 1;
  v2->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::`vftable';
  if ( v2 != (struct _RTL_CRITICAL_SECTION *)-16LL )
  {
    HIDWORD(v2->LockSemaphore) = 0;
    v2->SpinCount = 0LL;
    LODWORD(v2[1].DebugInfo) = 0;
    *(_QWORD *)&v2[1].LockCount = 0LL;
    LOBYTE(v2[1].OwningThread) = 0;
    v2[1].LockSemaphore = 0LL;
    LODWORD(v2[1].SpinCount) = -2147024890;
    v2[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1LL;
    *(_QWORD *)&v2[2].LockCount = 0LL;
    v2[2].OwningThread = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::`vftable';
    v2[2].LockSemaphore = 0LL;
    v2->OwningThread = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`vftable';
    LOBYTE(v2[2].SpinCount) = 0;
    InitializeCriticalSectionEx(v2 + 3, 0, 0);
    v2[4].DebugInfo = 0LL;
    *(_QWORD *)&v2[4].LockCount = 0LL;
    v2[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Buyheadnode(
                                                     v4,
                                                     v3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Reset0(a1, &v2->OwningThread);
  return a1;
}
