/*
 * XREFs of RaspTestIntersection @ 0x14011D1D0
 * Callers:
 *     RaspScanConvert @ 0x14011CDB0 (RaspScanConvert.c)
 * Callees:
 *     BgpFmSqrt @ 0x14011D4C0 (BgpFmSqrt.c)
 */

__int64 __fastcall RaspTestIntersection(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  _DWORD *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 result; // rax
  bool v17; // cc
  _DWORD *v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // r14
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r9
  __int128 v27; // rax
  __int64 v28; // rdi
  __int128 v29; // rax
  bool v30; // cc
  __int64 v31; // [rsp+60h] [rbp+8h]

  v4 = *(_DWORD **)a1;
  v6 = *(_DWORD **)(a1 + 8);
  v7 = *(_DWORD **)(a1 + 16);
  v8 = *v4 + v4[2];
  v9 = v4[1] + v4[3];
  v10 = v6[1] + v6[3];
  v31 = *v7 + v7[2];
  v11 = v8 << 16;
  v12 = (__int64)(v7[1] + v7[3]) << 16;
  v13 = v9 << 16;
  v14 = v10 << 16;
  v15 = v31 << 16;
  result = (__int64)a2 << 16;
  if ( v9 << 16 == v12 )
  {
    if ( v13 == result )
      goto LABEL_10;
    goto LABEL_3;
  }
  if ( v13 != result )
  {
LABEL_3:
    if ( v12 != result )
    {
      if ( *(_BYTE *)(a1 + 24) == 1 )
        goto LABEL_26;
      if ( v14 != result )
        goto LABEL_6;
    }
  }
  ++result;
LABEL_6:
  if ( *(_BYTE *)(a1 + 24) == 1 )
  {
LABEL_26:
    *a4 = 0x7FFFFFFF;
    v30 = v13 < result;
    if ( v13 > result )
    {
      if ( v12 > result )
        goto LABEL_28;
      v30 = v13 < result;
    }
    if ( !v30 || v12 >= result )
    {
      result = (v11 + (v15 - v11) * (result - v13) / (v12 - v13)) / 0x10000;
      *a3 = result;
      return result;
    }
LABEL_28:
    *a3 = 0x7FFFFFFF;
    return result;
  }
  v17 = v13 < result;
  if ( v13 > result )
  {
    if ( v12 > result && v14 > result )
      goto LABEL_10;
    v17 = v13 < result;
  }
  if ( v17 && v14 < result && v12 < result )
    goto LABEL_10;
  if ( !(v13 + v12 - ((__int64)(v6[1] + v6[3]) << 17)) )
  {
    v18 = a4;
    result = (v11 + (v15 - v11) * (result - v13) / (v12 - v13)) / 0x10000;
    *a3 = result;
    goto LABEL_11;
  }
  v19 = *v6 + v6[2];
  result = 2 * v10;
  v20 = v9 + v7[1] + v7[3] - 2 * v10;
  v21 = 2 * (v10 - v9);
  v22 = v21 * v21 - 4 * v20 * (v9 - a2);
  if ( v22 < 0 )
  {
LABEL_10:
    v18 = a4;
    *a3 = 0x7FFFFFFF;
LABEL_11:
    *v18 = 0x7FFFFFFF;
    return result;
  }
  v23 = BgpFmSqrt(v22, 0x10000LL);
  v24 = -65536 * v21;
  v25 = (v24 + v23) / (2 * v20);
  v26 = (v24 - v23) / (2 * v20);
  v27 = (__int64)(v31 * v25 * v25 + (0x10000 - v25) * (v8 * (0x10000 - v25) + 2 * v19 * v25));
  v28 = (__int64)(DWORD2(v27) + (_QWORD)v27) >> 32;
  v29 = (__int64)(v31 * v26 * v26 + (0x10000 - v26) * (v8 * (0x10000 - v26) + 2 * v19 * v26));
  *(_QWORD *)&v29 = DWORD2(v29) + (_QWORD)v29;
  v18 = a4;
  result = (__int64)v29 >> 32;
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
