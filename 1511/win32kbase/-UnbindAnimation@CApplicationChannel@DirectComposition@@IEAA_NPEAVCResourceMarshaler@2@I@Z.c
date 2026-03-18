/*
 * XREFs of ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C001B3A0
 * Callers:
 *     ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C001D3F0 (-SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C001D518 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 * Callees:
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0004668 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C001928C (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C001B1C0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::UnbindAnimation(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        int a3)
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
    DirectComposition::CApplicationChannel::DeleteAddingBinding(
      (struct DirectComposition::CAnimationBinding ***)this,
      (struct DirectComposition::CAnimationBinding **)v6);
    return 1;
  }
  return v4;
}
