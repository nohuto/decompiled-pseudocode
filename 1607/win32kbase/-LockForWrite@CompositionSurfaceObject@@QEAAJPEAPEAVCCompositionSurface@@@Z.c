/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300
 * Callers:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C000340C (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C00489EC (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0048A40 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtBindCompositionSurface @ 0x1C004AAD0 (NtBindCompositionSurface.c)
 *     NtUnBindCompositionSurface @ 0x1C0079E70 (NtUnBindCompositionSurface.c)
 *     NtSetCompositionSurfaceBufferCompositionModeAndOrientation @ 0x1C007CE70 (NtSetCompositionSurfaceBufferCompositionModeAndOrientation.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00F2FD0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C00F3060 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceHDRMetaData @ 0x1C00F3180 (NtSetCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00F3370 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00F3550 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C001B1C4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0 (-AddRef@CompositionObject@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(char *Object, struct CCompositionSurface **a2)
{
  int v4; // edi

  *a2 = 0LL;
  v4 = CompositionObject::AddRef((CompositionObject *)Object);
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
