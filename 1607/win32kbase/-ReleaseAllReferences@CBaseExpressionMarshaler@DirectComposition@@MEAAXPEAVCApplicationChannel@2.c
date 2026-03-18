/*
 * XREFs of ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003CB40
 * Callers:
 *     ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003BA00 (-ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003D380 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00EC710 (-ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C003EA80 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase *v4; // rdx

  v4 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
