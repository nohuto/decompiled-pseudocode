/*
 * XREFs of ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004B520
 * Callers:
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C001BBB0 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004B0F0 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C001EBD4 (-Release@CRegion@@QEBAJXZ.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C001EC0C (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001EC8C (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C001EEB4 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CBufferRealization::OpenLifetimeDirtyRegion(CBufferRealization *this, HRGN *a2)
{
  int RegionHandleAndReset; // ebx
  __int64 v5; // rdx
  CRegion *v6; // rdi
  struct CRegion *v8; // [rsp+40h] [rbp+18h] BYREF

  RegionHandleAndReset = CRegion::Create(&v8);
  if ( RegionHandleAndReset >= 0 )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v8;
    RegionHandleAndReset = CRegion::Combine((__int64)v8, v5, 5);
    if ( RegionHandleAndReset >= 0 )
      RegionHandleAndReset = CRegion::GetRegionHandleAndReset(v6, a2);
    CRegion::Release(v6);
  }
  return (unsigned int)RegionHandleAndReset;
}
