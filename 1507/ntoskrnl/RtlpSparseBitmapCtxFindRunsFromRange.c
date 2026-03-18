/*
 * XREFs of RtlpSparseBitmapCtxFindRunsFromRange @ 0x1402734B4
 * Callers:
 *     RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x14027319C (RtlpSparseBitmapCtxAppendNextRangeToRun.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x1402737D8 (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindRunsFromRange(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned int j,
        __int64 a8,
        char *Buf1)
{
  __int64 v10; // rdi
  unsigned int v12; // ebp
  __int64 v13; // r11
  int v14; // r9d
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // r11
  unsigned int v19; // r15d
  unsigned int v20; // ebx
  _QWORD *v21; // rbx
  __int64 i; // rax
  unsigned int v23; // ecx
  unsigned int v24; // esi
  __int64 v25; // r11
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  __int64 v28; // rax
  int v29; // r10d
  __int64 v30; // r11
  unsigned int v31; // ebp
  unsigned int v32; // edx
  unsigned int v33; // ecx
  __int64 *v34; // rcx
  __int64 k; // rax
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  int v38; // edx
  __int64 v39; // rcx
  char *v40; // rbp
  int v41; // ebx
  size_t v42; // r8
  __int64 v44; // [rsp+20h] [rbp-48h]
  __int64 v45; // [rsp+70h] [rbp+8h]

  v10 = a5;
  v45 = (unsigned int)(a1[14] * a6);
  v44 = a5 + 24LL * a4;
  do
  {
    v12 = *(_DWORD *)(a8 + 8);
    v13 = *(_QWORD *)(a8 + 16);
    v14 = j < v12 ? j : 0;
    v15 = v12 - 1;
    if ( (v13 & 4) != 0 )
    {
      v16 = 1LL;
      v17 = 32;
    }
    else
    {
      v16 = 0LL;
      v17 = 0;
    }
    v18 = v13 - 4 * v16;
    while ( 1 )
    {
      v19 = v17 + v15;
      if ( v15 - v14 == -1 )
        goto LABEL_7;
      v21 = (_QWORD *)(v18 + 8 * ((unsigned __int64)(unsigned int)(v17 + v14) >> 6));
      for ( i = ((1LL << ((v17 + v14) & 0x3F)) - 1) | ~*v21; i == -1; i = ~*v21 )
      {
        if ( (unsigned __int64)++v21 > v18 + 8 * ((unsigned __int64)v19 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v20 = i + ((unsigned int)(((__int64)v21 - v18) >> 3) << 6);
      if ( v20 > v19 )
      {
LABEL_7:
        v20 = -1;
        goto LABEL_14;
      }
      if ( v20 != -1 )
        break;
LABEL_14:
      if ( !v14 )
        goto LABEL_20;
      v23 = j + 1;
      if ( j + 1 > v12 )
        v23 = *(_DWORD *)(a8 + 8);
      v15 = v23 - 1;
      v14 = 0;
    }
    v20 -= v17;
LABEL_20:
    if ( v20 < j || v20 == -1 )
      return (v10 - a5) / 24;
    *(_QWORD *)v10 = v45 + v20;
    if ( Buf1 )
    {
      v38 = a1[17];
      if ( v38 )
        v39 = a8 + (unsigned int)a1[16];
      else
        v39 = 0LL;
      v40 = (char *)(v39 + v20 * v38);
      memmove(Buf1, v40, (unsigned int)a1[17]);
      *(_DWORD *)(v10 + 8) = 1;
      for ( j = v20 + 1; j != a1[14]; ++j )
      {
        v41 = *(_DWORD *)(v10 + 8);
        if ( v41 == a3 )
          break;
        if ( _bittest64(*(const signed __int64 **)(a8 + 16), j) != 1 )
          break;
        v42 = (unsigned int)a1[17];
        v40 += v42;
        if ( memcmp(Buf1, v40, v42) )
          break;
        *(_DWORD *)(v10 + 8) = v41 + 1;
      }
      Buf1 += (unsigned int)a1[17];
      goto LABEL_57;
    }
    v24 = *(_DWORD *)(a8 + 8);
    v25 = *(_QWORD *)(a8 + 16);
    v26 = v20 < v24 ? v20 : 0;
    v27 = v24 - 1;
    if ( (v25 & 4) != 0 )
    {
      v28 = 1LL;
      v29 = 32;
    }
    else
    {
      v28 = 0LL;
      v29 = 0;
    }
    v30 = v25 - 4 * v28;
    while ( 2 )
    {
      v31 = v29 + v27;
      v32 = v29 + v26;
      if ( v27 - v26 == -1 )
        goto LABEL_28;
      v34 = (__int64 *)(v30 + 8 * ((unsigned __int64)v32 >> 6));
      for ( k = ((1LL << (v32 & 0x3F)) - 1) | *v34; k == -1; k = *v34 )
      {
        if ( (unsigned __int64)++v34 > v30 + 8 * ((unsigned __int64)v31 >> 6) )
          goto LABEL_28;
      }
      _BitScanForward64((unsigned __int64 *)&k, ~k);
      v33 = k + ((unsigned int)(((__int64)v34 - v30) >> 3) << 6);
      if ( v33 > v31 )
      {
LABEL_28:
        v33 = -1;
LABEL_35:
        if ( !v26 )
          goto LABEL_40;
        v36 = v20 + 1;
        if ( v20 + 1 > v24 )
          v36 = *(_DWORD *)(a8 + 8);
        v27 = v36 - 1;
        v26 = 0;
        continue;
      }
      break;
    }
    if ( v33 == -1 )
      goto LABEL_35;
    v33 -= v29;
LABEL_40:
    if ( v33 < v20 || v33 == -1 )
      *(_DWORD *)(v10 + 8) = a1[14] - v20;
    else
      *(_DWORD *)(v10 + 8) = v33 - v20;
    v37 = a3;
    if ( *(_DWORD *)(v10 + 8) < a3 )
      v37 = *(_DWORD *)(v10 + 8);
    *(_DWORD *)(v10 + 8) = v37;
    j = v37 + v20;
LABEL_57:
    v10 += 24LL;
  }
  while ( j != a1[14] && v10 != v44 );
  return (v10 - a5) / 24;
}
