/*
 * XREFs of ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB80
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0033130 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D95C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006B5E0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006BDF0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DiscardOfferedAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  if ( (gVidMmGlobalFault & 0x2000) != 0 )
    return 0;
  v2 = *((_QWORD *)a2 + 59);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4), 3, 2) != 2 )
  {
    return 0;
  }
  else
  {
    v3 = 1;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p(v2, &EventDiscardAllocation, 3LL, a2);
  }
  return v3;
}
