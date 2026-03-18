/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C0027EB0
 * Callers:
 *     <none>
 * Callees:
 *     bFToL @ 0x1C000F9CC (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0027BB0 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0028200 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(EXFORMOBJ *this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  float *v4; // rsi
  float *v7; // rdx
  float *v8; // r8
  __int64 v9; // r11
  float *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  float *v13; // r9
  float *v14; // r10
  __int64 v15; // r11
  char v17; // r8
  __int64 v18; // r11

  v4 = (float *)((char *)a2 + 4);
  if ( EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 4))
    && EFLOAT::bIsZero((EFLOAT *)(v7 + 2))
    && EFLOAT::bIsZero((EFLOAT *)(v8 + 1))
    && EFLOAT::bIsZero((EFLOAT *)(v8 + 2)) )
  {
    *(float *)v9 = *v8 * *v7;
    *(float *)(v9 + 12) = v8[3] * v7[3];
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 8) = 0;
  }
  else
  {
    *(float *)v9 = (float)(v8[2] * *v4) + (float)(*v8 * *v7);
    *(float *)(v9 + 4) = (float)(v8[3] * *v4) + (float)(v8[1] * *v7);
    *(float *)(v9 + 8) = (float)(v8[2] * v7[3]) + (float)(*v8 * v7[2]);
    *(float *)(v9 + 12) = (float)(v8[3] * v7[3]) + (float)(v8[1] * v7[2]);
  }
  v10 = v7 + 4;
  if ( EFLOAT::bIsZero((EFLOAT *)(v7 + 4)) && EFLOAT::bIsZero((EFLOAT *)(v11 + 20)) )
  {
    *(_DWORD *)(v15 + 16) = *(_DWORD *)(v12 + 16);
    *(_DWORD *)(v15 + 20) = *(_DWORD *)(v12 + 20);
    *(_DWORD *)(v15 + 24) = *(_DWORD *)(v12 + 24);
    *(_DWORD *)(v15 + 28) = *(_DWORD *)(v12 + 28);
  }
  else
  {
    *(float *)(v15 + 16) = (float)((float)(*v14 * *(float *)(v11 + 20)) + *(float *)(v12 + 16))
                         + (float)(*(float *)v12 * *v10);
    *(float *)(v15 + 20) = (float)((float)(*(float *)(v12 + 12) * *(float *)(v11 + 20)) + *(float *)(v12 + 20))
                         + (float)(*v13 * *v10);
    if ( !(unsigned int)bFToL(*(float *)(v15 + 16), (_DWORD *)(v15 + 24), 6)
      || !(unsigned int)bFToL(*(float *)(v18 + 20), (_DWORD *)(v18 + 28), v17) )
    {
      return 0LL;
    }
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1LL;
}
