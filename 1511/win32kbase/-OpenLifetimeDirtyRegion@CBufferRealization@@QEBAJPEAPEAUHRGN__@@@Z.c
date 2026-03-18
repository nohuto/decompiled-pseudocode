/*
 * XREFs of ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004D6D0
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004D2B0 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C003DA74 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003EA44 (-Release@CRegion@@QEBAJXZ.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C003EC38 (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
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
