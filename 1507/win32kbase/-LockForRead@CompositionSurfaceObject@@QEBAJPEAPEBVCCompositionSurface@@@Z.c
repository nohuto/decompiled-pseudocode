/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0048590
 * Callers:
 *     NtQueryCompositionSurfaceBinding @ 0x1C00113C0 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C001F740 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C001F960 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C001FAD0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0048600 (NtQueryCompositionSurfaceStatistics.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00DEDB0 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(char *Object, const struct CCompositionSurface **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
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
