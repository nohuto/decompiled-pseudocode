/*
 * XREFs of ?FastMul64by64@@YA_J_J0@Z @ 0x1C01C647C
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C56F8 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C57C0 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01C57C0.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C583C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01C58A4 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C592C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C5A6C (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C6510 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01C8418 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 *     DoPrediction @ 0x1C01CA000 (DoPrediction.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FastMul64by64(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  int v5; // r11d
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax

  v2 = (a2 ^ a1) >> 63;
  if ( a1 < 0 )
    a1 = -a1;
  if ( a2 < 0 )
    a2 = -a2;
  v3 = (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
  v4 = (unsigned int)a1 * HIDWORD(a2);
  v5 = HIDWORD(a1) * HIDWORD(a2);
  v6 = HIDWORD(v3) + (unsigned int)a2 * HIDWORD(a1);
  result = v2 ^ ((unsigned int)(v6 + v4) | ((unsigned __int64)(unsigned int)(HIDWORD(v6)
                                                                           + v5
                                                                           + (((unsigned int)v6 + v4) >> 32)) << 32));
  if ( !(_DWORD)v3 )
    result -= v2;
  return result;
}
