/*
 * XREFs of vFillGLYPHDATA_ErrRecover @ 0x1C02476E0
 * Callers:
 *     lGetGlyphBitmapErrRecover @ 0x1C0247154 (lGetGlyphBitmapErrRecover.c)
 * Callees:
 *     vLTimesVtfl @ 0x1C0009434 (vLTimesVtfl.c)
 *     bGetFastAdvanceWidth @ 0x1C00AB1E8 (bGetFastAdvanceWidth.c)
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     vGetNotionalGlyphMetrics @ 0x1C00FE814 (vGetNotionalGlyphMetrics.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall vFillGLYPHDATA_ErrRecover(int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v8; // r12d
  int *v9; // r15
  int v10; // eax
  _DWORD *v11; // r14
  int v12; // edx
  int fixed; // eax
  int v14; // edx
  __int64 result; // rax
  char v16; // r8
  int v17; // eax
  char v18; // r8
  int v19; // r11d
  __int16 v20; // [rsp+20h] [rbp-10h] BYREF
  __int16 v21; // [rsp+22h] [rbp-Eh]
  __int16 v22; // [rsp+28h] [rbp-8h]
  __int16 v23; // [rsp+2Ah] [rbp-6h]
  int v24; // [rsp+60h] [rbp+30h] BYREF

  v4 = 0;
  *(_DWORD *)(a4 + 8) = a1;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  *(_QWORD *)(a4 + 24) = 0LL;
  vGetNotionalGlyphMetrics(a3, a2, &v20);
  if ( (*(_DWORD *)(a3 + 116) & 1) != 0 )
  {
    v8 = *(_DWORD *)(a3 + 80);
    if ( v8 < 0 )
      v8 = -v8;
    v9 = (int *)(a4 + 12);
    if ( !(unsigned int)bGetFastAdvanceWidth(a3, a2, (unsigned int *)(a4 + 12)) )
      *v9 = 16 * FixMul(v23, *(_DWORD *)(a3 + 80));
    v10 = *v9;
    v11 = (_DWORD *)(a4 + 48);
    *(_DWORD *)(a4 + 48) = 0;
    *(_DWORD *)(a4 + 52) = v10;
    if ( *(int *)(a3 + 80) < 0 )
      *v9 = -v10;
    v12 = v22;
    *(_QWORD *)(a4 + 56) = 0LL;
    fixed = FixMul(v8, v12);
    v14 = v21;
    *(_DWORD *)(a4 + 16) = 16 * fixed;
    result = 16 * (unsigned int)FixMul(v8, v14);
    *(_DWORD *)(a4 + 20) = result;
  }
  else
  {
    v24 = 0;
    bFToL((float)v23 * *(float *)(a3 + 224), &v24, 0);
    v9 = (int *)(a4 + 12);
    *(_DWORD *)(a4 + 12) = v24;
    v24 = 0;
    bFToL((float)v22 * *(float *)(a3 + 224), &v24, v16);
    v17 = v21;
    *(_DWORD *)(a4 + 16) = v24;
    v24 = 0;
    bFToL((float)v17 * *(float *)(a3 + 224), &v24, v18);
    v11 = (_DWORD *)(a4 + 48);
    *(_DWORD *)(a4 + 20) = v24;
    result = vLTimesVtfl(v19, (float *)(a3 + 208), a4 + 48);
  }
  if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
  {
    if ( *v9 )
      *v9 += 16;
    result = *(unsigned int *)(a3 + 116);
    if ( (result & 1) != 0 )
    {
      result = (unsigned int)*v9;
      *(_DWORD *)(a4 + 52) = result;
      if ( *(int *)(a3 + 80) < 0 )
      {
        result = (unsigned int)-(int)result;
        *(_DWORD *)(a4 + 52) = result;
      }
    }
    else if ( *(_DWORD *)(a4 + 52) || *(_DWORD *)(a4 + 60) )
    {
      *v11 += *(_DWORD *)(a3 + 232);
      v11[1] += (*v11 < *(_DWORD *)(a3 + 232)) + *(_DWORD *)(a3 + 236);
      v11[2] += *(_DWORD *)(a3 + 240);
      LOBYTE(v4) = v11[2] < *(_DWORD *)(a3 + 240);
      result = (unsigned int)(v4 + *(_DWORD *)(a3 + 244));
      v11[3] += result;
    }
  }
  return result;
}
