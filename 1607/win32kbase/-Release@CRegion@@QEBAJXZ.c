/*
 * XREFs of ?Release@CRegion@@QEBAJXZ @ 0x1C001EBD4
 * Callers:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C001E8D4 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ??1CToken@@UEAA@XZ @ 0x1C001EE38 (--1CToken@@UEAA@XZ.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C001FD10 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C004B4B8 (--1CBufferRealization@@MEAA@XZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004B520 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00F38D8 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00F9528 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C001EA0C (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    CRegion::SetEmpty(this);
    Win32FreePool(this);
  }
  return v2;
}
