/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C4928
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C524C (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C4CE0 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01C51B8 (-FastMul64by64@@YA_J_J0@Z.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  char *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v6 = a2 - (_QWORD)a1;
  v7 = a1;
  v8 = 3LL;
  do
  {
    v9 = 3LL;
    do
    {
      v10 = FastMul64by64(*(_QWORD *)&v7[v6], *a3);
      if ( v7 != &v12 )
        *(_QWORD *)v7 = v10;
      v7 += 8;
      --v9;
    }
    while ( v9 );
    --v8;
  }
  while ( v8 );
  return a1;
}
