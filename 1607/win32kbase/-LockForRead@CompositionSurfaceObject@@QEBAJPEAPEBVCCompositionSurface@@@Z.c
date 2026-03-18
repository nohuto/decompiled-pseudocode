/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C001C350
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C001F1A0 (NtQueryCompositionSurfaceStatistics.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C004A950 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004AED0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004B0F0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C00780E0 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00F2BA0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C00F2D50 (NtQueryCompositionSurfaceHDRMetaData.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0 (-AddRef@CompositionObject@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(char *Object, const struct CCompositionSurface **a2)
{
  int v4; // edi

  *a2 = 0LL;
  v4 = CompositionObject::AddRef((CompositionObject *)Object);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockShared((CPushLock *)(Object + 32));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (const struct CCompositionSurface *)(Object + 24);
  }
  return (unsigned int)v4;
}
