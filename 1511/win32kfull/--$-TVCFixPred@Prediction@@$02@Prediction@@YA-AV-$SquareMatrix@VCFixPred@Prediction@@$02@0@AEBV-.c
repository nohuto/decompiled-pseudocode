/*
 * XREFs of ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01C5A6C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C6510 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C5B78 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01C647C (-FastMul64by64@@YA_J_J0@Z.c)
 */

char *__fastcall Prediction::operator^<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  char *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v6 = 0LL;
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  do
  {
    v9 = 3LL;
    do
    {
      v10 = FastMul64by64(*(_QWORD *)(a2 + 8 * v6), *(_QWORD *)&v7[v8]);
      if ( v7 != &v12 )
        *(_QWORD *)v7 = v10;
      v7 += 8;
      --v9;
    }
    while ( v9 );
    ++v6;
    v8 -= 24LL;
  }
  while ( v6 < 3 );
  return a1;
}
