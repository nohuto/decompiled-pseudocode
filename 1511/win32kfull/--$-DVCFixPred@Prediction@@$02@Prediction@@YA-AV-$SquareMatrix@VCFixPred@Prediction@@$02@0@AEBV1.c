/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C56F8
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C6510 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C5B78 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01C647C (-FastMul64by64@@YA_J_J0@Z.c)
 */

__int64 __fastcall Prediction::operator*<Prediction::CFixPred,3>(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 v6; // rsi
  char *v7; // r13
  __int64 v8; // r12
  char *v9; // rsi
  __int64 *v10; // r14
  __int64 *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  bool v14; // zf
  __int64 v16; // [rsp+20h] [rbp-48h]
  char v17; // [rsp+28h] [rbp-40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h]

  v3 = a3;
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v20 = 3LL;
  v6 = a1 - (_QWORD)a2 - (_QWORD)v3;
  v16 = v6;
  do
  {
    v7 = (char *)a2 + v6;
    v8 = 3LL;
    do
    {
      v9 = &v7[(_QWORD)v3];
      v10 = a2;
      v11 = v3;
      v12 = 3LL;
      do
      {
        v13 = *(_QWORD *)v9 + FastMul64by64(*v10, *v11);
        if ( v9 != &v17 )
          *(_QWORD *)v9 = v13;
        ++v10;
        v11 += 3;
        --v12;
      }
      while ( v12 );
      ++v3;
      --v8;
    }
    while ( v8 );
    v6 = v16;
    a2 += 3;
    v14 = v20-- == 1;
    v3 = a3;
  }
  while ( !v14 );
  return a1;
}
