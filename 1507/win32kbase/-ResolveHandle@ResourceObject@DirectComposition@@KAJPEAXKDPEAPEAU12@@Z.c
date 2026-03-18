/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001485C
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003430 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0014160 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     CreateSharedSystemVisualObject @ 0x1C00156E0 (CreateSharedSystemVisualObject.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E574 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E658 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C00D3D10 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D4080 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct DirectComposition::ResourceObject **a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3);
  if ( (int)result >= 0 )
    *a4 = 0LL;
  return result;
}
