/*
 * XREFs of ?Round@Math@Animations@Components@@SAHM@Z @ 0x18002D3CC
 * Callers:
 *     ?ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z @ 0x180018F34 (-ApiSetInitialDelay@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x180019114 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801135A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
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
