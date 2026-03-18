/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtSetCompositionSurfaceBufferCompositionModeAndOrientation @ 0x1C00501F0 (NtSetCompositionSurfaceBufferCompositionModeAndOrientation.c)
 *     NtBindCompositionSurface @ 0x1C00720B0 (NtBindCompositionSurface.c)
 *     NtUnBindCompositionSurface @ 0x1C0075E50 (NtUnBindCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00E0D70 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00E0E00 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00E0FE0 (NtSetCompositionSurfaceOutOfFrameDirectFlipNotification.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00E10A0 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(char *Object, struct CCompositionSurface **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 32));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (struct CCompositionSurface *)(Object + 24);
  }
  return (unsigned int)v4;
}
