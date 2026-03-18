/*
 * XREFs of ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C5B78
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C56F8 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C57C0 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01C57C0.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C5998 (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C5A6C (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01C5AF0 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 *     ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C01C5C48 (--0tagRlsFilter@Prediction@@QEAA@XZ.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C6510 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00F0B1C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

char *__fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(char *a1)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  `vector constructor iterator'(a1, 8LL, 9, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  v2 = a1;
  v3 = 3LL;
  do
  {
    v4 = 3LL;
    do
    {
      if ( v2 != &v6 )
        *(_QWORD *)v2 = 0LL;
      v2 += 8;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  return a1;
}
