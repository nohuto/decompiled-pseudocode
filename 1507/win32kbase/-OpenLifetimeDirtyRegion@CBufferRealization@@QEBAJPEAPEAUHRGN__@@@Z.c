/*
 * XREFs of ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C001FEF0
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C001FAD0 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0047AD0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C004A4FC (-Release@CRegion@@QEBAJXZ.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C004A55C (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
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
    RegionHandleAndReset = CRegion::Combine(v8, v5, 5LL);
    if ( RegionHandleAndReset >= 0 )
      RegionHandleAndReset = CRegion::GetRegionHandleAndReset(v6, a2);
    CRegion::Release(v6);
  }
  return (unsigned int)RegionHandleAndReset;
}
