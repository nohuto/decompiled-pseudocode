/*
 * XREFs of ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0
 * Callers:
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00040F4 (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ?Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0004CD4 (-Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0019BB4 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C001C350 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C001EE70 (--0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0048840 (-Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C004E9A8 (-Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0073B00 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     ?InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0077FE0 (-InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemReso.c)
 *     ?Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C007BB54 (-Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEA.c)
 *     ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00F1A18 (-Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 *     ?Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00F1AD8 (-Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEA.c)
 *     ?Create@CSharedWritePrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00F1DA0 (-Create@CSharedWritePrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PE.c)
 *     ?Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00F2044 (-Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00F2740 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::AddRef(CompositionObject *this)
{
  return ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
}
