/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01C4A0C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C524C (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C4D34 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01C51B8 (-FastMul64by64@@YA_J_J0@Z.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdi
  char *v7; // rbx
  __int64 v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v6 = a2 - (_QWORD)a3;
  v7 = a1;
  v8 = 3LL;
  do
  {
    v9 = a3;
    v10 = 3LL;
    do
    {
      v11 = *(_QWORD *)v7 + FastMul64by64(*(__int64 *)((char *)v9 + v6), *v9);
      if ( v7 != &v13 )
        *(_QWORD *)v7 = v11;
      ++v9;
      --v10;
    }
    while ( v10 );
    v7 += 8;
    v6 += 24LL;
    --v8;
  }
  while ( v8 );
  return a1;
}
