/*
 * XREFs of ?HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NI@Z @ 0x1C00192EC
 * Callers:
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0017800 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C001928C (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 */

bool __fastcall DirectComposition::CResourceMarshaler::HasAnimations(
        DirectComposition::CResourceMarshaler *this,
        int a2)
{
  struct DirectComposition::CAnimationBinding *v3; // [rsp+30h] [rbp-18h] BYREF
  __int128 v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0uLL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(
    this,
    a2,
    (struct DirectComposition::CAnimationBinding **)&v4,
    (struct DirectComposition::CAnimationBinding **)&v4 + 1,
    &v3);
  return v4 != 0;
}
