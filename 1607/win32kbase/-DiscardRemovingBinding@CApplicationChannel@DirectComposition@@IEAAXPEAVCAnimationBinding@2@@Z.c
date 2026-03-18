/*
 * XREFs of ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00030C8
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003F888 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C003FA20 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C00030E4 (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 */

void __fastcall DirectComposition::CApplicationChannel::DiscardRemovingBinding(
        struct DirectComposition::CAnimationBinding **this,
        struct DirectComposition::CAnimationBinding *a2)
{
  if ( this[57] )
    DirectComposition::CApplicationChannel::RemoveFromBatchList(
      (DirectComposition::CApplicationChannel *)this,
      a2,
      this + 57);
}
