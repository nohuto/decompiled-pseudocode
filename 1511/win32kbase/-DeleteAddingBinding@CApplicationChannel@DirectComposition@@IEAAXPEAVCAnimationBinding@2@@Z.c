/*
 * XREFs of ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0004668
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001B228 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C001B3A0 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C001B410 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C000464C (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 */

void __fastcall DirectComposition::CApplicationChannel::DeleteAddingBinding(
        struct DirectComposition::CAnimationBinding ***this,
        struct DirectComposition::CAnimationBinding **a2)
{
  DirectComposition::CAnimationBinding *v2; // r9

  v2 = (DirectComposition::CAnimationBinding *)a2;
  if ( this[55] )
    DirectComposition::CApplicationChannel::RemoveFromBatchList(
      (DirectComposition::CApplicationChannel *)this,
      a2,
      this + 55);
  DirectComposition::CAnimationBinding::DetachAndDelete(v2, (struct DirectComposition::CApplicationChannel *)this);
}
