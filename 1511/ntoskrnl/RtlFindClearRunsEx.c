/*
 * XREFs of RtlFindClearRunsEx @ 0x1401F82E4
 * Callers:
 *     RtlFindLongestRunClearEx @ 0x1401F87A8 (RtlFindLongestRunClearEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRunsEx(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int8 *v3; // rcx
  __int64 v4; // r12
  unsigned int v6; // edx
  __int64 v7; // r8
  int v8; // r14d
  unsigned int v9; // r13d
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r11
  int v13; // r15d
  unsigned __int8 v14; // r10
  __int64 v15; // rbp
  unsigned int v16; // r8d
  signed int v17; // ebx
  __int64 v18; // r11
  _QWORD *i; // rcx
  unsigned __int8 v20; // r10
  int v21; // ebp
  __int64 v22; // r14
  char j; // bl
  signed int v24; // edi
  __int64 v25; // r11
  _QWORD *k; // rcx
  signed int v27; // r10d
  __int64 v28; // r11
  _QWORD *m; // rcx
  unsigned __int8 *v31; // [rsp+38h] [rbp+8h]

  v2 = *a1;
  v3 = (unsigned __int8 *)a1[1];
  v4 = v2 & 7;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  v9 = 0;
  v10 = ((v2 & 7) != 0) + (v2 >> 3);
  if ( !v10 )
    return v6;
  v11 = 0LL;
  v12 = v10 - 1;
  v13 = 0;
  do
  {
    v14 = *v3++;
    v31 = v3;
    if ( v11 == v12 && v4 )
      v14 |= byte_1402453A0[v4];
    if ( !v14 )
    {
      LODWORD(v7) = v7 + 8;
      goto LABEL_32;
    }
    v15 = RtlpBitsClearLow[v14];
    v16 = v15 + v7;
    if ( v16 )
    {
      if ( !v6 )
      {
        v6 = 1;
LABEL_12:
        v17 = v6 - 2;
        v18 = (int)(v6 - 2);
        for ( i = (_QWORD *)(a2 + 8 + 8 * v18); v18 >= 0 && *((_DWORD *)i - 1) < v16; --i )
        {
          --v17;
          --v18;
          *i = *(i - 1);
        }
        *(_DWORD *)(a2 + 8LL * v17 + 12) = v16;
        *(_DWORD *)(a2 + 8LL * v17 + 8) = v8;
        goto LABEL_17;
      }
      if ( *(_DWORD *)(a2 + 8LL * (v6 - 1) + 4) < v16 )
        goto LABEL_12;
    }
LABEL_17:
    v7 = RtlpBitsClearHigh[v14];
    v8 = v13 - v7 + 8;
    v20 = byte_140247340[v15] | *((_BYTE *)&unk_1402453A8 - v7) | v14;
    if ( v20 != 0xFF )
    {
      do
      {
        if ( v6 && *(_DWORD *)(a2 + 8LL * (v6 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v20] )
          break;
        v21 = 0;
        v22 = RtlpBitsClearAnywhere[v20];
        for ( j = byte_140247340[v22]; ((unsigned __int8)j & v20) != 0; j *= 2 )
          ++v21;
        if ( !v6 )
          v6 = 1;
        v24 = v6 - 2;
        v25 = (int)(v6 - 2);
        for ( k = (_QWORD *)(a2 + 8 + 8 * v25); v25 >= 0 && *((_DWORD *)k - 1) < (unsigned int)(unsigned __int8)v22; --k )
        {
          --v24;
          --v25;
          *k = *(k - 1);
        }
        v20 |= j;
        *(_DWORD *)(a2 + 8LL * v24 + 12) = (unsigned __int8)v22;
        *(_DWORD *)(a2 + 8LL * v24 + 8) = v13 + v21;
      }
      while ( v20 != 0xFF );
      v8 = v13 - v7 + 8;
    }
    v3 = v31;
LABEL_32:
    ++v9;
    v12 = v10 - 1;
    v11 = v9;
    v13 += 8;
  }
  while ( v9 < v10 );
  if ( (_DWORD)v7 )
  {
    if ( v6 )
    {
      if ( *(_DWORD *)(a2 + 8LL * (v6 - 1) + 4) < (unsigned int)v7 )
        goto LABEL_39;
    }
    else
    {
      v6 = 1;
LABEL_39:
      v27 = v6 - 2;
      v28 = (int)(v6 - 2);
      for ( m = (_QWORD *)(a2 + 8 + 8 * v28); v28 >= 0 && *((_DWORD *)m - 1) < (unsigned int)v7; --m )
      {
        --v27;
        --v28;
        *m = *(m - 1);
      }
      *(_DWORD *)(a2 + 8LL * v27 + 12) = v7;
      *(_DWORD *)(a2 + 8LL * v27 + 8) = v8;
    }
  }
  return v6;
}
