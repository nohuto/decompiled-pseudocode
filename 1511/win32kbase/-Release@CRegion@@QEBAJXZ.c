/*
 * XREFs of ?Release@CRegion@@QEBAJXZ @ 0x1C003EA44
 * Callers:
 *     ??1CToken@@UEAA@XZ @ 0x1C003D924 (--1CToken@@UEAA@XZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C003E6B4 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C003EDB8 (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C004D65C (--1CBufferRealization@@MEAA@XZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004D6D0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00E13E0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00E6648 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003ECE0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

__int64 __fastcall CRegion::Release(CRegion *this)
{
  unsigned __int32 v2; // edi
  REGION *v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    v3 = (REGION *)*((_QWORD *)this + 1);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 1) = 0LL;
    }
    *((_DWORD *)this + 1) = 0;
    if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
      Win32FreePoolImpl_0();
  }
  return v2;
}
