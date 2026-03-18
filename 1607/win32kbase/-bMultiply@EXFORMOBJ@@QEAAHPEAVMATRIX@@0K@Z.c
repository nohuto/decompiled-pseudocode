/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00458B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00455B0 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0045CD0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     bFToL @ 0x1C0076E08 (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(EXFORMOBJ *this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  float *v4; // rsi
  float *v7; // rdx
  float *v8; // r8
  __int64 v9; // r11
  float *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  float *v13; // r8
  float *v14; // r9
  float *v15; // r10
  float *v16; // r11
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r11

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
    v16[4] = v13[4];
    v16[5] = v13[5];
    v16[6] = v13[6];
    v16[7] = v13[7];
  }
  else
  {
    v16[4] = (float)((float)(*v15 * *(float *)(v11 + 20)) + v13[4]) + (float)(*v13 * *v10);
    v16[5] = (float)((float)(v13[3] * *(float *)(v11 + 20)) + v13[5]) + (float)(*v14 * *v10);
    if ( !(unsigned int)bFToL(v12, v16 + 6, 6LL) || !(unsigned int)bFToL(v18, v20 + 28, v19) )
      return 0LL;
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1LL;
}
