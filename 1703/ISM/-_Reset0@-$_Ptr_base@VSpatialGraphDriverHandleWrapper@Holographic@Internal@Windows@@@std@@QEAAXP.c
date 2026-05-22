/*
 * XREFs of ?_Reset0@?$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@PEAV_Ref_count_base@2@@Z @ 0x18008CEAC
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@PEAUISpatialGraphNodeReferenceFactory@234@@Z @ 0x180089A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 *     ?lock@?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@2@XZ @ 0x18008C1DC (-lock@-$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBA-AV-$s.c)
 *     ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@$$V@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@XZ @ 0x18008C950 (--$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@$$V@std@@YA-AV-$sh.c)
 *     ??$make_pair@VHString@Wrappers@WRL@Microsoft@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@YA?AU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@0@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@@Z @ 0x18008CC70 (--$make_pair@VHString@Wrappers@WRL@Microsoft@@AEAV-$shared_ptr@VSpatialGraphDriverHandleWrapper@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ptr_base<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Reset0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax

  v3 = (volatile signed __int32 *)a1[1];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  a1[1] = a3;
  *a1 = a2;
  return result;
}
