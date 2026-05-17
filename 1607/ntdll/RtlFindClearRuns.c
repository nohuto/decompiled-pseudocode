/*
 * XREFs of RtlFindClearRuns @ 0x1800E3DF0
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800E40D0 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRuns(int *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  int v6; // edx
  unsigned int v8; // r8d
  BOOL v9; // eax
  bool v11; // zf
  unsigned int v12; // r15d
  unsigned int v13; // r9d
  unsigned __int8 *v14; // rax
  unsigned int v15; // r13d
  int v16; // r14d
  unsigned int v17; // ecx
  unsigned __int8 v18; // r10
  __int64 v19; // rbp
  unsigned int v20; // r9d
  unsigned int v21; // ebx
  __int64 v22; // rdx
  _QWORD *i; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  unsigned __int8 v26; // r10
  __int64 v27; // r14
  unsigned __int8 v28; // di
  int v29; // ebp
  unsigned int v30; // ebx
  __int64 v31; // rdx
  _QWORD *j; // rcx
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // r10
  _QWORD *k; // rcx
  __int64 v38; // rcx
  int v40; // [rsp+0h] [rbp-48h]
  int v41; // [rsp+4h] [rbp-44h]
  unsigned int v42; // [rsp+8h] [rbp-40h]
  unsigned __int8 *v43; // [rsp+10h] [rbp-38h]
  int v44; // [rsp+50h] [rbp+8h]

  v4 = *a1;
  v42 = *a1;
  v6 = *a1 & 7;
  v8 = 0;
  v40 = v6;
  v9 = v6 != 0;
  v44 = 0;
  v11 = v9 + ((unsigned int)*a1 >> 3) == 0;
  v12 = v9 + ((unsigned int)*a1 >> 3);
  v13 = 0;
  v14 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v15 = 0;
  if ( v11 )
    return v8;
  v16 = 0;
  v17 = v12 - 1;
  v41 = 0;
  while ( 1 )
  {
    v18 = *v14;
    v43 = v14 + 1;
    if ( v15 == v17 && v6 )
      v18 |= byte_180119330[(v4 & 7) + 16];
    if ( !v18 )
    {
      v25 = v44;
      v13 += 8;
      goto LABEL_37;
    }
    v19 = RtlpBitsClearLow[v18];
    v20 = v19 + v13;
    if ( v20 )
    {
      if ( v8 < a3 )
      {
        ++v8;
LABEL_12:
        v21 = v8 - 2;
        if ( a4 )
        {
          v22 = (int)v21;
          for ( i = (_QWORD *)(a2 + 8 + 8LL * (int)v21); v22 >= 0 && *((_DWORD *)i - 1) < v20; --i )
          {
            --v21;
            --v22;
            *i = *(i - 1);
          }
        }
        v24 = (int)(v21 + 1);
        *(_DWORD *)(a2 + 8 * v24 + 4) = v20;
        *(_DWORD *)(a2 + 8 * v24) = v44;
        if ( !a4 && v8 >= a3 )
          return v8;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < v20 )
        goto LABEL_12;
    }
LABEL_19:
    v13 = RtlpBitsClearHigh[v18];
    v25 = v16 - v13 + 8;
    v44 = v25;
    v26 = byte_180119330[v19] | byte_180119330[8 - v13 + 16] | v18;
    if ( v26 != 0xFF )
    {
      do
      {
        if ( v8 >= a3 && *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v26] )
          break;
        v27 = RtlpBitsClearAnywhere[v26];
        v28 = byte_180119330[v27];
        v29 = 0;
        while ( (v28 & v26) != 0 )
        {
          v28 *= 2;
          ++v29;
        }
        if ( v8 < a3 )
          ++v8;
        v30 = v8 - 2;
        if ( a4 )
        {
          v31 = (int)v30;
          for ( j = (_QWORD *)(a2 + 8 + 8LL * (int)v30);
                v31 >= 0 && *((_DWORD *)j - 1) < (unsigned int)(unsigned __int8)v27;
                --j )
          {
            --v30;
            --v31;
            *j = *(j - 1);
          }
        }
        v33 = (int)(v30 + 1);
        v34 = (unsigned __int8)v27;
        v16 = v41;
        *(_DWORD *)(a2 + 8 * v33 + 4) = v34;
        *(_DWORD *)(a2 + 8 * v33) = v41 + v29;
        if ( !a4 && v8 >= a3 )
          return v8;
        v26 |= v28;
      }
      while ( v26 != 0xFF );
      v25 = v44;
    }
    v6 = v40;
    v17 = v12 - 1;
LABEL_37:
    v16 += 8;
    ++v15;
    v41 = v16;
    if ( v15 >= v12 )
      break;
    v14 = v43;
    LOBYTE(v4) = v42;
  }
  if ( v13 )
  {
    if ( v8 < a3 )
    {
      ++v8;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < v13 )
    {
LABEL_45:
      v35 = v8 - 2;
      if ( a4 )
      {
        v36 = (int)v35;
        for ( k = (_QWORD *)(a2 + 8 + 8LL * (int)v35); v36 >= 0 && *((_DWORD *)k - 1) < v13; --k )
        {
          --v35;
          --v36;
          *k = *(k - 1);
        }
      }
      v38 = (int)(v35 + 1);
      *(_DWORD *)(a2 + 8 * v38 + 4) = v13;
      *(_DWORD *)(a2 + 8 * v38) = v25;
    }
  }
  return v8;
}
