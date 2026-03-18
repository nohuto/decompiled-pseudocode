/*
 * XREFs of ?Round@Math@Animations@Components@@SAHM@Z @ 0x1801607D0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z @ 0x18012BA28 (-ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180160EA0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
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
