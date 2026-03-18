/*
 * XREFs of ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C003F9B4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C0040518 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 * Callees:
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C003F820 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C004467C (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00E46F4 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::UnbindAnimation(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3)
{
  char v4; // bl
  struct DirectComposition::CAnimationBinding *v6; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CAnimationBinding *v7; // [rsp+38h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v8 = 0LL;
  v6 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v8, &v6, &v7);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::NewRemovingBinding(this, v8);
    return 1;
  }
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::DeleteAddingBinding(this, v6);
    return 1;
  }
  return v4;
}
