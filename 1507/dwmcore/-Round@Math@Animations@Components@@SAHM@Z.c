/*
 * XREFs of ?Round@Math@Animations@Components@@SAHM@Z @ 0x180153810
 * Callers:
 *     ?ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z @ 0x180110628 (-ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180110FA0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Math::Round(float a1)
{
  bool v1; // cf
  double v2; // xmm0_8
  double v3; // xmm0_8

  v1 = a1 < 0.0;
  v2 = a1;
  if ( v1 )
    v3 = v2 - 0.5;
  else
    v3 = v2 + 0.5;
  return (unsigned int)(int)v3;
}
