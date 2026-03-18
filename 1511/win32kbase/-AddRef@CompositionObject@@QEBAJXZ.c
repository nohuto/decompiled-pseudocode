/*
 * XREFs of ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60
 * Callers:
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0004284 (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ?Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0005274 (-Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00055B4 (-Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEA.c)
 *     ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0011EE4 (-Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C003C91C (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0047CF0 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0069E20 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     ?InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0073EC0 (-InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemReso.c)
 *     ?Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C007A074 (-Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEA.c)
 *     ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DF8E8 (-Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 *     ?Create@CSharedWritePrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DFB00 (-Create@CSharedWritePrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PE.c)
 *     ?Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DFD80 (-Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 *     ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00E00EC (-Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00E0700 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::AddRef(CompositionObject *this)
{
  return ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
}
