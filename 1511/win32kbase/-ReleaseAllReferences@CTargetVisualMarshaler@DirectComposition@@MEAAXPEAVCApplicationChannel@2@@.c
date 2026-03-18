/*
 * XREFs of ?ReleaseAllReferences@CTargetVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0073BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0073B18 (-UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 */

void __fastcall DirectComposition::CTargetVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  bool v4; // [rsp+40h] [rbp+18h] BYREF

  DirectComposition::CTargetVisualMarshaler::UpdateRootVisual(this, a2, 0LL, &v4);
  DirectComposition::CSharedReadMarshaler::ReleaseAllReferences(this, a2);
}
