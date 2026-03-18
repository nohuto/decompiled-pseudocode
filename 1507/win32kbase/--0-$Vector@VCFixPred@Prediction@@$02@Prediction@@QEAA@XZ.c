/*
 * XREFs of ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C00C9DB0
 * Callers:
 *     ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C00C9DE0 (--0tagRlsFilter@Prediction@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(char *a1)
{
  char *v1; // rax
  __int64 v2; // rdx
  char v4; // [rsp+8h] [rbp+8h] BYREF

  v1 = a1;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  v2 = 3LL;
  do
  {
    if ( v1 != &v4 )
      *(_QWORD *)v1 = 0LL;
    v1 += 8;
    --v2;
  }
  while ( v2 );
  return a1;
}
