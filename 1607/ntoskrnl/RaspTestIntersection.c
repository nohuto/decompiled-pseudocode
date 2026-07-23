/*
 * XREFs of RaspTestIntersection @ 0x140128920
 * Callers:
 *     RaspScanConvert @ 0x140128500 (RaspScanConvert.c)
 * Callees:
 *     BgpFmSqrt @ 0x140128C00 (BgpFmSqrt.c)
 */

__int64 __fastcall RaspTestIntersection(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  _DWORD *v6; // r14
  _DWORD *v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rsi
  bool v18; // cc
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r9
  __int128 v27; // rax
  __int64 v28; // rbp
  bool v29; // cc
  __int128 v30; // rax
  __int128 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-38h]
  __int64 v33; // [rsp+28h] [rbp-30h]

  v4 = *(_DWORD **)a1;
  v6 = *(_DWORD **)(a1 + 8);
  v9 = *(_DWORD **)(a1 + 16);
  v32 = *v4 + v4[2];
  v10 = v4[1] + v4[3];
  v11 = v6[1] + v6[3];
  v33 = *v9 + v9[2];
  v12 = (__int64)(v9[1] + v9[3]) << 16;
  result = (__int64)a2 << 16;
  v14 = v32 << 16;
  v15 = v10 << 16;
  v16 = v11 << 16;
  v17 = v33 << 16;
  if ( v10 << 16 == v12 )
  {
    if ( v15 == result )
      goto LABEL_10;
    goto LABEL_3;
  }
  if ( v15 != result )
  {
LABEL_3:
    if ( v12 != result )
    {
      if ( *(_BYTE *)(a1 + 24) == 1 )
        goto LABEL_26;
      if ( v16 != result )
        goto LABEL_6;
    }
  }
  ++result;
LABEL_6:
  if ( *(_BYTE *)(a1 + 24) == 1 )
  {
LABEL_26:
    *a4 = 0x7FFFFFFF;
    v29 = v15 < result;
    if ( v15 > result )
    {
      if ( v12 > result )
        goto LABEL_28;
      v29 = v15 < result;
    }
    if ( !v29 || v12 >= result )
    {
      v30 = v14 + (v17 - v14) * (result - v15) / (v12 - v15);
      result = (__int64)(WORD4(v30) + (_QWORD)v30) >> 16;
      *a3 = result;
      return result;
    }
LABEL_28:
    *a3 = 0x7FFFFFFF;
    return result;
  }
  v18 = v15 < result;
  if ( v15 > result )
  {
    if ( v12 > result && v16 > result )
      goto LABEL_10;
    v18 = v15 < result;
  }
  if ( v18 && v16 < result && v12 < result )
    goto LABEL_10;
  if ( !(v15 + v12 - ((__int64)(v6[1] + v6[3]) << 17)) )
  {
    v31 = v14 + (v17 - v14) * (result - v15) / (v12 - v15);
    result = (__int64)(WORD4(v31) + (_QWORD)v31) >> 16;
    *a3 = result;
    goto LABEL_11;
  }
  v19 = *v6 + v6[2];
  result = 2 * v11;
  v20 = v10 + v9[1] + v9[3] - 2 * v11;
  v21 = 2 * (v11 - v10);
  v22 = v21 * v21 - 4 * v20 * (v10 - a2);
  if ( v22 < 0 )
  {
LABEL_10:
    *a3 = 0x7FFFFFFF;
LABEL_11:
    *a4 = 0x7FFFFFFF;
    return result;
  }
  v23 = BgpFmSqrt(v22, 0x10000LL);
  v24 = -65536 * v21;
  v25 = (v24 + v23) / (2 * v20);
  v26 = (v24 - v23) / (2 * v20);
  v27 = (__int64)(v33 * v25 * v25 + (0x10000 - v25) * (v32 * (0x10000 - v25) + 2 * v19 * v25));
  v28 = (__int64)(DWORD2(v27) + (_QWORD)v27) >> 32;
  result = (__int64)(v33 * v26 * v26 + (0x10000 - v26) * (v32 * (0x10000 - v26) + 2 * v19 * v26)) / 0x100000000LL;
  if ( v25 > 0x10000 )
    LODWORD(v28) = 0x7FFFFFFF;
  *a3 = v28;
  if ( v26 > 0x10000 )
    result = 0x7FFFFFFFLL;
  *a4 = result;
  if ( (int)v28 > (int)result )
  {
    *a3 = result;
    *a4 = v28;
    return result;
  }
  if ( (_DWORD)v28 == (_DWORD)result )
    goto LABEL_11;
  return result;
}
