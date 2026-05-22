/*
 * XREFs of ?lock@?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@2@XZ @ 0x18008C1DC
 * Callers:
 *     ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18008B460 (-CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@PEAV_Ref_count_base@2@@Z @ 0x18008CEAC (-_Reset0@-$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXP.c)
 */

_QWORD *__fastcall std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::lock(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = a1[1];
  v4 = *a1;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v5 + 1, v5) )
      {
        std::_Ptr_base<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Reset0(a2, v4);
        return a2;
      }
    }
  }
  return a2;
}
