/*
 * XREFs of ?Release@CRegion@@QEBAJXZ @ 0x1C004A4FC
 * Callers:
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C001FE7C (--1CBufferRealization@@MEAA@XZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C001FEF0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ??1CToken@@UEAA@XZ @ 0x1C0048308 (--1CToken@@UEAA@XZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C004A160 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C004C9FC (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00DF5C0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00E4C48 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002BE8 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002BF0 (Win32FreePoolImpl_0.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi
  struct REGION *v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    v3 = (struct REGION *)*((_QWORD *)this + 1);
    if ( v3 )
    {
      if ( v3 != prgnDefault )
        FreeObject((__int64)v3);
      *((_QWORD *)this + 1) = 0LL;
    }
    *((_DWORD *)this + 1) = 0;
    if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
      Win32FreePoolImpl_0();
  }
  return v2;
}
