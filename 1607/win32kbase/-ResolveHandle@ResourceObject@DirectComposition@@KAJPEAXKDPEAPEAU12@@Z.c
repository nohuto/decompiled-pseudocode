/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004970 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C004066C (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0040750 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C007B700 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     CreateSharedSystemVisualObject @ 0x1C007D090 (CreateSharedSystemVisualObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C00E3520 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00E3870 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004866C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
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
