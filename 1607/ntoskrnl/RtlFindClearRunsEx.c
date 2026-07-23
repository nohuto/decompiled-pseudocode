/*
 * XREFs of RtlFindClearRunsEx @ 0x14021242C
 * Callers:
 *     RtlFindLongestRunClearEx @ 0x140212938 (RtlFindLongestRunClearEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRunsEx(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // r8d
  unsigned __int8 *v4; // rcx
  __int64 v5; // r15
  unsigned int v7; // r9d
  int v8; // r14d
  unsigned int v9; // r13d
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r11
  int v13; // r12d
  unsigned __int8 v14; // dl
  __int64 v15; // rbp
  unsigned int v16; // r9d
  unsigned int v17; // ebx
  __int64 v18; // r11
  _QWORD *i; // rcx
  __int64 v20; // rcx
  unsigned __int8 v21; // dl
  int v22; // ebp
  __int64 v23; // r14
  char j; // bl
  unsigned int v25; // edi
  __int64 v26; // r11
  _QWORD *k; // rcx
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // r11
  _QWORD *m; // rcx
  __int64 v32; // rdx
  unsigned __int8 *v34; // [rsp+38h] [rbp+8h]

  v2 = *a1;
  v3 = 0;
  v4 = (unsigned __int8 *)a1[1];
  v5 = v2 & 7;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = ((v2 & 7) != 0) + (v2 >> 3);
  if ( !v10 )
    return v3;
  v11 = 0LL;
  v12 = v10 - 1;
  v13 = 0;
  do
  {
    v14 = *v4++;
    v34 = v4;
    if ( v11 == v12 && v5 )
      v14 |= byte_14026F6C8[v5];
    if ( !v14 )
    {
      v7 += 8;
      goto LABEL_32;
    }
    v15 = RtlpBitsClearLow[v14];
    v16 = v15 + v7;
    if ( v16 )
    {
      if ( !v3 )
      {
        v3 = 1;
LABEL_12:
        v17 = v3 - 2;
        v18 = (int)(v3 - 2);
        for ( i = (_QWORD *)(a2 + 8 + 8 * v18); v18 >= 0 && *((_DWORD *)i - 1) < v16; --i )
        {
          --v17;
          --v18;
          *i = *(i - 1);
        }
        v20 = (int)(v17 + 1);
        *(_DWORD *)(a2 + 8 * v20 + 4) = v16;
        *(_DWORD *)(a2 + 8 * v20) = v8;
        goto LABEL_17;
      }
      if ( *(_DWORD *)(a2 + 8LL * (v3 - 1) + 4) < v16 )
        goto LABEL_12;
    }
LABEL_17:
    v7 = RtlpBitsClearHigh[v14];
    v8 = v13 - v7 + 8;
    v21 = byte_14026F6B8[v15] | byte_14026F6C8[8 - v7] | v14;
    if ( v21 != 0xFF )
    {
      do
      {
        if ( v3 && *(_DWORD *)(a2 + 8LL * (v3 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v21] )
          break;
        v22 = 0;
        v23 = RtlpBitsClearAnywhere[v21];
        for ( j = byte_14026F6B8[v23]; ((unsigned __int8)j & v21) != 0; j *= 2 )
          ++v22;
        if ( !v3 )
          v3 = 1;
        v25 = v3 - 2;
        v26 = (int)(v3 - 2);
        for ( k = (_QWORD *)(a2 + 8 + 8 * v26); v26 >= 0 && *((_DWORD *)k - 1) < (unsigned int)(unsigned __int8)v23; --k )
        {
          --v25;
          --v26;
          *k = *(k - 1);
        }
        v21 |= j;
        v28 = (int)(v25 + 1);
        *(_DWORD *)(a2 + 8 * v28 + 4) = (unsigned __int8)v23;
        *(_DWORD *)(a2 + 8 * v28) = v13 + v22;
      }
      while ( v21 != 0xFF );
      v8 = v13 - v7 + 8;
    }
    v4 = v34;
LABEL_32:
    ++v9;
    v12 = v10 - 1;
    v11 = v9;
    v13 += 8;
  }
  while ( v9 < v10 );
  if ( v7 )
  {
    if ( v3 )
    {
      if ( *(_DWORD *)(a2 + 8LL * (v3 - 1) + 4) < v7 )
        goto LABEL_39;
    }
    else
    {
      v3 = 1;
LABEL_39:
      v29 = v3 - 2;
      v30 = (int)(v3 - 2);
      for ( m = (_QWORD *)(a2 + 8 + 8 * v30); v30 >= 0 && *((_DWORD *)m - 1) < v7; --m )
      {
        --v29;
        --v30;
        *m = *(m - 1);
      }
      v32 = (int)(v29 + 1);
      *(_DWORD *)(a2 + 8 * v32 + 4) = v7;
      *(_DWORD *)(a2 + 8 * v32) = v8;
    }
  }
  return v3;
}
