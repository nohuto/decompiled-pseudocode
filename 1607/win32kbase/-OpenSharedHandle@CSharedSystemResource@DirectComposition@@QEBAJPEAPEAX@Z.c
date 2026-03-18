/*
 * XREFs of ?OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJPEAPEAX@Z @ 0x1C0048714
 * Callers:
 *     ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00042B0 (-OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0004D70 (-OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0048390 (-OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C004E990 (-OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007BC70 (-OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00F1BB0 (-OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00F1BD0 (-OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00F1E60 (-OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C001D610 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedSystemResource::OpenSharedHandle(
        DirectComposition::CSharedSystemResource *this,
        void **a2)
{
  return CompositionObject::CreateHandle((DirectComposition::CSharedSystemResource *)((char *)this - 24), 1u, 0, 1, a2);
}
