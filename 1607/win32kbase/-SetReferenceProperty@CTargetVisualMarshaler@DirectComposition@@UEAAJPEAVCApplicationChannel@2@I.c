/*
 * XREFs of ?SetReferenceProperty@CTargetVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0077E30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0077C54 (-UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CTargetVisualMarshaler::SetReferenceProperty(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        DirectComposition::CTargetVisualMarshaler **a4,
        bool *a5)
{
  DirectComposition::CTargetVisualMarshaler **v5; // rbx

  v5 = 0LL;
  *a5 = 0;
  if ( a3 == 13 )
  {
    if ( !a4 )
      return DirectComposition::CTargetVisualMarshaler::UpdateRootVisual(this, a2, v5, a5);
    if ( (*((unsigned __int8 (__fastcall **)(DirectComposition::CTargetVisualMarshaler **, __int64))*a4 + 14))(a4, 32LL) )
    {
      v5 = a4;
      return DirectComposition::CTargetVisualMarshaler::UpdateRootVisual(this, a2, v5, a5);
    }
  }
  return 3221225485LL;
}
