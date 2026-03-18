/*
 * XREFs of ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C00030E4
 * Callers:
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00030C8 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00E46F4 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::RemoveFromBatchList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding **a2,
        struct DirectComposition::CAnimationBinding ***a3)
{
  struct DirectComposition::CAnimationBinding **i; // rax

  for ( i = *a3; i != a2; i = (struct DirectComposition::CAnimationBinding **)*i )
    a3 = (struct DirectComposition::CAnimationBinding ***)i;
  *a3 = (struct DirectComposition::CAnimationBinding **)*i;
  *a2 = 0LL;
}
