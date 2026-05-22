/*
 * XREFs of ??$make_pair@VHString@Wrappers@WRL@Microsoft@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@YA?AU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@0@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@@Z @ 0x18008CC70
 * Callers:
 *     ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18008B460 (-CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@PEAV_Ref_count_base@2@@Z @ 0x18008CEAC (-_Reset0@-$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXP.c)
 */

_QWORD *__fastcall std::make_pair<Microsoft::WRL::Wrappers::HString,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper> &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx

  *a1 = *a2;
  *a2 = 0LL;
  v4 = a1 + 1;
  *v4 = 0LL;
  v4[1] = 0LL;
  v5 = a3[1];
  v6 = *a3;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  std::_Ptr_base<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Reset0(v4, v6);
  return a1;
}
