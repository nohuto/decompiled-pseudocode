/*
 * XREFs of RtlpSparseBitmapCtxFindRunsFromRange @ 0x180100DD4
 * Callers:
 *     RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x180100B34 (RtlpSparseBitmapCtxAppendNextRangeToRun.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     memcmp @ 0x18009A690 (memcmp.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindRunsFromRange(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int j,
        unsigned __int64 a8,
        __int64 a9,
        char *Buf1)
{
  unsigned int v11; // r15d
  __int64 v13; // rsi
  unsigned __int64 v14; // r10
  unsigned int v15; // r14d
  __int64 v16; // r11
  int v17; // r9d
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r11
  unsigned int v22; // ebp
  unsigned int v23; // ebx
  _QWORD *v24; // rbx
  __int64 i; // rax
  unsigned int v26; // ecx
  unsigned int v27; // ebp
  __int64 v28; // r11
  unsigned int v29; // r9d
  unsigned int v30; // ecx
  __int64 v31; // rax
  int v32; // r10d
  __int64 v33; // r11
  unsigned int v34; // edi
  unsigned int v35; // edx
  unsigned int v36; // ecx
  __int64 *v37; // rcx
  __int64 k; // rax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  __int64 v43; // rcx
  char *v44; // rbp
  int v45; // ebx
  size_t v46; // r8
  __int64 v48; // [rsp+20h] [rbp-48h]
  __int64 v49; // [rsp+70h] [rbp+8h]
  int v51; // [rsp+98h] [rbp+30h]

  v11 = -1;
  v13 = a5;
  v14 = a1[14];
  v49 = v14 * a6;
  v48 = a5 + 24LL * a4;
  if ( (unsigned int)(a8 / v14) == a6 )
    v11 = a8 % v14;
  v51 = 0;
  do
  {
    v15 = *(_DWORD *)(a9 + 8);
    v16 = *(_QWORD *)(a9 + 16);
    v17 = j < v15 ? j : 0;
    v18 = v15 - 1;
    if ( (v16 & 4) != 0 )
    {
      v19 = 1LL;
      v20 = 32;
    }
    else
    {
      v19 = 0LL;
      v20 = 0;
    }
    v21 = v16 - 4 * v19;
    while ( 1 )
    {
      v22 = v20 + v18;
      if ( v18 - v17 == -1 )
        goto LABEL_9;
      v24 = (_QWORD *)(v21 + 8 * ((unsigned __int64)(unsigned int)(v20 + v17) >> 6));
      for ( i = ((1LL << ((v20 + v17) & 0x3F)) - 1) | ~*v24; i == -1; i = ~*v24 )
      {
        if ( (unsigned __int64)++v24 > v21 + 8 * ((unsigned __int64)v22 >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v23 = i + ((unsigned int)(((__int64)v24 - v21) >> 3) << 6);
      if ( v23 > v22 )
      {
LABEL_9:
        v23 = -1;
        goto LABEL_16;
      }
      if ( v23 != -1 )
        break;
LABEL_16:
      if ( !v17 )
        goto LABEL_22;
      v26 = j + 1;
      if ( j + 1 > v15 )
        v26 = *(_DWORD *)(a9 + 8);
      v18 = v26 - 1;
      v17 = 0;
    }
    v23 -= v20;
LABEL_22:
    if ( v23 < j || v23 == -1 || v23 > v11 )
      return (v13 - a5) / 24;
    *(_QWORD *)v13 = v49 + v23;
    if ( Buf1 )
    {
      v42 = a1[17];
      if ( v42 )
        v43 = a9 + a1[16];
      else
        v43 = 0LL;
      v44 = (char *)(v43 + v23 * v42);
      memmove(Buf1, v44, a1[17]);
      *(_DWORD *)(v13 + 8) = 1;
      for ( j = v23 + 1; ; ++j )
      {
        if ( j == a1[14] )
          goto LABEL_64;
        v45 = *(_DWORD *)(v13 + 8);
        if ( v45 == a3 || _bittest64(*(const signed __int64 **)(a9 + 16), j) != 1 )
          goto LABEL_64;
        if ( j > v11 )
          break;
        v46 = a1[17];
        v44 += v46;
        if ( memcmp(Buf1, v44, v46) )
          goto LABEL_64;
        *(_DWORD *)(v13 + 8) = v45 + 1;
      }
      v51 = 1;
LABEL_64:
      Buf1 += a1[17];
      goto LABEL_65;
    }
    v27 = *(_DWORD *)(a9 + 8);
    v28 = *(_QWORD *)(a9 + 16);
    v29 = v23 < v27 ? v23 : 0;
    v30 = v27 - 1;
    if ( (v28 & 4) != 0 )
    {
      v31 = 1LL;
      v32 = 32;
    }
    else
    {
      v31 = 0LL;
      v32 = 0;
    }
    v33 = v28 - 4 * v31;
    while ( 2 )
    {
      v34 = v32 + v30;
      v35 = v32 + v29;
      if ( v30 - v29 == -1 )
        goto LABEL_31;
      v37 = (__int64 *)(v33 + 8 * ((unsigned __int64)v35 >> 6));
      for ( k = ((1LL << (v35 & 0x3F)) - 1) | *v37; k == -1; k = *v37 )
      {
        if ( (unsigned __int64)++v37 > v33 + 8 * ((unsigned __int64)v34 >> 6) )
          goto LABEL_31;
      }
      _BitScanForward64((unsigned __int64 *)&k, ~k);
      v36 = k + ((unsigned int)(((__int64)v37 - v33) >> 3) << 6);
      if ( v36 > v34 )
      {
LABEL_31:
        v36 = -1;
LABEL_38:
        if ( !v29 )
          goto LABEL_44;
        v39 = v23 + 1;
        if ( v23 + 1 > v27 )
          v39 = *(_DWORD *)(a9 + 8);
        v30 = v39 - 1;
        v29 = 0;
        continue;
      }
      break;
    }
    if ( v36 == -1 )
      goto LABEL_38;
    v36 -= v32;
LABEL_44:
    if ( v36 < v23 || v36 == -1 )
      v36 = a1[14];
    if ( v36 > v11 )
    {
      v51 = 1;
      v36 = v11 + 1;
    }
    v40 = a3;
    v41 = v36 - v23;
    if ( v41 < a3 )
      v40 = v41;
    *(_DWORD *)(v13 + 8) = v40;
    j = v40 + v23;
LABEL_65:
    v13 += 24LL;
  }
  while ( j != a1[14] && v13 != v48 && !v51 );
  return (v13 - a5) / 24;
}
