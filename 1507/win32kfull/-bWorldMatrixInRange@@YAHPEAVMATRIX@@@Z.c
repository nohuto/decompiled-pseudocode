/*
 * XREFs of ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C0032744
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C0019AD0 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 */

__int64 __fastcall bWorldMatrixInRange(struct MATRIX *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  unsigned int v3; // r10d
  EFLOAT *v4; // rcx
  unsigned int v5; // r8d
  float *v7; // rdx
  EFLOAT *v8; // r9
  unsigned int v9; // r10d
  __int64 v10; // rdx
  float v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)EFLOAT::bIsZero((struct MATRIX *)((char *)a1 + 4))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v1 + 8)) )
  {
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)v1) )
      return v3;
    v4 = (EFLOAT *)(v2 + 12);
LABEL_5:
    if ( !(unsigned int)EFLOAT::bIsZero(v4) )
      return v5;
    return v3;
  }
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)v1) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v7 + 3)) )
  {
    if ( (unsigned int)EFLOAT::bIsZero(v8) )
      return v3;
    v4 = (EFLOAT *)(v10 + 8);
    goto LABEL_5;
  }
  v11 = (float)(v7[3] * *v7) - (float)(*(float *)v8 * v7[2]);
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v11) )
    return v9;
  return v5;
}
