/*
 * XREFs of RtlFindClearRuns @ 0x1800DAE90
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800DB150 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRuns(int *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // edi
  int v5; // ebx
  BOOL v7; // eax
  unsigned int v8; // edx
  bool v10; // zf
  unsigned int v11; // r15d
  unsigned __int8 *v13; // rax
  __int64 v14; // r10
  int v15; // r14d
  unsigned int v16; // r13d
  int v17; // r9d
  unsigned int v18; // ecx
  unsigned __int8 v19; // r8
  __int64 v20; // rsi
  unsigned int v21; // r10d
  unsigned int v22; // ebx
  __int64 v23; // r9
  _QWORD *i; // rcx
  unsigned __int8 v25; // r8
  __int64 v26; // r14
  unsigned __int8 v27; // di
  int v28; // esi
  unsigned int v29; // ebx
  __int64 v30; // r9
  _QWORD *j; // rcx
  unsigned int v32; // r8d
  __int64 v33; // r9
  _QWORD *k; // rcx
  int v36; // [rsp+0h] [rbp-48h]
  int v37; // [rsp+4h] [rbp-44h]
  int v38; // [rsp+8h] [rbp-40h]
  unsigned int v39; // [rsp+50h] [rbp+8h]

  v4 = *a1;
  v39 = *a1;
  v5 = *a1 & 7;
  v38 = v5;
  v7 = v5 != 0;
  v8 = 0;
  v10 = v7 + ((unsigned int)*a1 >> 3) == 0;
  v11 = v7 + ((unsigned int)*a1 >> 3);
  v13 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  LODWORD(v14) = 0;
  v15 = 0;
  v16 = 0;
  if ( v10 )
    return v8;
  v17 = 0;
  v18 = v11 - 1;
  v36 = 0;
  while ( 1 )
  {
    v19 = *v13;
    if ( v16 == v18 && v5 )
      v19 |= byte_18010E420[v4 & 7];
    if ( !v19 )
    {
      LODWORD(v14) = v14 + 8;
      goto LABEL_39;
    }
    v20 = RtlpBitsClearLow[v19];
    v21 = v20 + v14;
    if ( v21 )
    {
      if ( v8 < a3 )
      {
        ++v8;
LABEL_12:
        v22 = v8 - 2;
        if ( a4 )
        {
          v23 = (int)v22;
          for ( i = (_QWORD *)(a2 + 8 + 8LL * (int)v22); v23 >= 0 && *((_DWORD *)i - 1) < v21; --i )
          {
            --v22;
            --v23;
            *i = *(i - 1);
          }
          v17 = v36;
        }
        *(_DWORD *)(a2 + 8LL * (int)v22 + 12) = v21;
        *(_DWORD *)(a2 + 8LL * (int)v22 + 8) = v15;
        if ( !a4 && v8 >= a3 )
          return v8;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < v21 )
        goto LABEL_12;
    }
LABEL_20:
    v14 = RtlpBitsClearHigh[v19];
    v15 = v17 - v14 + 8;
    v37 = v15;
    v25 = byte_180111120[v20] | *((_BYTE *)&unk_18010E428 - v14) | v19;
    if ( v25 != 0xFF )
    {
      do
      {
        if ( v8 >= a3 && *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v25] )
          break;
        v26 = RtlpBitsClearAnywhere[v25];
        v27 = byte_180111120[v26];
        v28 = 0;
        while ( (v27 & v25) != 0 )
        {
          v27 *= 2;
          ++v28;
        }
        if ( v8 < a3 )
          ++v8;
        v29 = v8 - 2;
        if ( a4 )
        {
          v30 = (int)v29;
          for ( j = (_QWORD *)(a2 + 8 + 8LL * (int)v29);
                v30 >= 0 && *((_DWORD *)j - 1) < (unsigned int)(unsigned __int8)v26;
                --j )
          {
            --v29;
            --v30;
            *j = *(j - 1);
          }
          v17 = v36;
        }
        *(_DWORD *)(a2 + 8LL * (int)v29 + 12) = (unsigned __int8)v26;
        *(_DWORD *)(a2 + 8LL * (int)v29 + 8) = v17 + v28;
        if ( !a4 && v8 >= a3 )
          return v8;
        v25 |= v27;
      }
      while ( v25 != 0xFF );
      v15 = v37;
    }
    LOBYTE(v4) = v39;
    v18 = v11 - 1;
LABEL_39:
    v17 += 8;
    ++v16;
    v36 = v17;
    if ( v16 >= v11 )
      break;
    ++v13;
    v5 = v38;
  }
  if ( (_DWORD)v14 )
  {
    if ( v8 < a3 )
    {
      ++v8;
      goto LABEL_47;
    }
    if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < (unsigned int)v14 )
    {
LABEL_47:
      v32 = v8 - 2;
      if ( a4 )
      {
        v33 = (int)v32;
        for ( k = (_QWORD *)(a2 + 8 + 8LL * (int)v32); v33 >= 0 && *((_DWORD *)k - 1) < (unsigned int)v14; --k )
        {
          --v32;
          --v33;
          *k = *(k - 1);
        }
      }
      *(_DWORD *)(a2 + 8LL * (int)v32 + 12) = v14;
      *(_DWORD *)(a2 + 8LL * (int)v32 + 8) = v15;
    }
  }
  return v8;
}
