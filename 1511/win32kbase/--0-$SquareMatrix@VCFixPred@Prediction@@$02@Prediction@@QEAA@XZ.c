/*
 * XREFs of ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C00CAE38
 * Callers:
 *     ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C00CAEB4 (--0tagRlsFilter@Prediction@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C00890C0 (memset.c)
 */

void *__fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(void *a1)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  memset(a1, 0, 0x48uLL);
  v2 = (char *)a1;
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
