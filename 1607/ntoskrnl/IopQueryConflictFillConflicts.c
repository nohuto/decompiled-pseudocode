/*
 * XREFs of IopQueryConflictFillConflicts @ 0x14064E154
 * Callers:
 *     IopQueryConflictListInternal @ 0x14064E6DC (IopQueryConflictListInternal.c)
 * Callees:
 *     IopEliminateBogusConflict @ 0x1401D0FC8 (IopEliminateBogusConflict.c)
 *     IopQueryConflictFillString @ 0x14064E53C (IopQueryConflictFillString.c)
 */

__int64 __fastcall IopQueryConflictFillConflicts(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned int v9; // ebx
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  unsigned int i; // r14d
  __int64 v14; // rcx
  __int64 v15; // rbp
  unsigned int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  _QWORD *v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  int v23; // r8d
  unsigned int v24; // r14d
  unsigned int v25; // r15d
  int v26; // ebp
  __int64 *v27; // r12
  __int64 v28; // r13
  __int64 v29; // rcx
  unsigned __int64 v30; // r14
  unsigned int v31; // ebx
  unsigned int v32; // edx
  unsigned int v33; // r8d
  __int64 v34; // r12
  int v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+28h] [rbp-40h]
  int v38; // [rsp+78h] [rbp+10h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h]

  v39 = a4;
  v6 = 0;
  v7 = a4;
  v36 = 0;
  v9 = a2;
  v11 = 0;
  if ( a2 )
  {
    v12 = 1;
    do
    {
      if ( IopEliminateBogusConflict(a1, a3[3 * v11]) )
      {
        if ( v12 < v9 )
        {
          *(_OWORD *)&a3[3 * v11] = *(_OWORD *)&a3[3 * v9 - 3];
          a3[3 * v11 + 2] = a3[3 * v9 - 1];
        }
        --v9;
        --v11;
        --v12;
      }
      ++v11;
      ++v12;
    }
    while ( v11 < v9 );
  }
LABEL_8:
  for ( i = 0; i < v9; ++i )
  {
    v14 = 3LL * i;
    if ( a3[3 * i] )
    {
      v15 = i + 1;
      if ( (unsigned int)v15 < v9 )
      {
        v16 = i + 2;
        do
        {
          if ( IopEliminateBogusConflict(a3[v14], a3[3 * v15]) )
          {
            if ( v16 < v9 )
            {
              *(_OWORD *)&a3[3 * v15] = *(_OWORD *)&a3[3 * v9 - 3];
              a3[3 * v15 + 2] = a3[3 * v9 - 1];
            }
            --v9;
            LODWORD(v15) = v15 - 1;
            --v16;
          }
          else if ( IopEliminateBogusConflict(a3[3 * v15], a3[3 * i]) )
          {
            v17 = 3LL * i;
            *(_OWORD *)&a3[v17] = *(_OWORD *)&a3[3 * v15];
            a3[v17 + 2] = a3[3 * v15 + 2];
            if ( (int)v15 + 1 < v9 )
            {
              *(_OWORD *)&a3[3 * v15] = *(_OWORD *)&a3[3 * v9 - 3];
              a3[3 * v15 + 2] = a3[3 * v9 - 1];
            }
            --v9;
            goto LABEL_8;
          }
          v14 = 3LL * i;
          v15 = (unsigned int)(v15 + 1);
          ++v16;
        }
        while ( (unsigned int)v15 < v9 );
      }
    }
  }
  v18 = 0;
  if ( v9 )
  {
    v19 = a3;
    while ( *v19 )
    {
      ++v18;
      v19 += 3;
      if ( v18 >= v9 )
        goto LABEL_39;
    }
    v20 = v18 + 1;
    if ( v18 + 1 < v9 )
    {
      v21 = v18 + 2;
      do
      {
        if ( !a3[3 * v20] )
        {
          if ( v21 < v9 )
          {
            *(_OWORD *)&a3[3 * v20] = *(_OWORD *)&a3[3 * v9 - 3];
            a3[3 * v20 + 2] = a3[3 * v9 - 1];
          }
          --v9;
          --v20;
          --v21;
        }
        ++v20;
        ++v21;
      }
      while ( v20 < v9 );
    }
    if ( v9 != 1 )
    {
      if ( v18 + 1 < v9 )
      {
        v22 = 3LL * v18;
        *(_OWORD *)&a3[v22] = *(_OWORD *)&a3[3 * v9 - 3];
        a3[v22 + 2] = a3[3 * v9 - 1];
      }
      --v9;
    }
  }
LABEL_39:
  v23 = a6;
  v24 = 32;
  v37 = 0;
  v25 = 0;
  v26 = 0;
  if ( a6 )
  {
    v24 = 74;
    if ( a5 >= 0x4A )
    {
      v25 = 1;
      v37 = 1;
      v26 = 1;
    }
  }
  if ( v9 )
  {
    v27 = a3;
    v28 = v9;
    do
    {
      v29 = *v27;
      v38 = 0;
      IopQueryConflictFillString(v29, 0LL, &v38, 0LL);
      v24 += 2 * v38 + 40;
      if ( v24 <= a5 )
      {
        ++v25;
        v26 += v38;
      }
      v27 += 3;
      --v28;
    }
    while ( v28 );
    v7 = v39;
    v23 = a6;
  }
  *(_DWORD *)(v7 + 16) = v24;
  *(_DWORD *)(v7 + 12) = v25;
  *(_DWORD *)(v7 + 8) = v37 + v9;
  v30 = v7 + 8 * (v25 + 4LL * v25 + 3);
  if ( v30 <= v7 + (unsigned __int64)a5 - 8 )
  {
    *(_DWORD *)v30 = -1;
    v31 = 0;
    if ( v37 )
    {
      v31 = 1;
      *(_DWORD *)(v7 + 24) = 0;
      *(_DWORD *)(v7 + 28) = v23;
      --v26;
      *(_DWORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 40) = 0LL;
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_DWORD *)(v7 + 56) = 0;
      v36 = 1;
      *(_WORD *)(v30 + 4) = 0;
    }
    a5 = 0;
    v32 = v31;
    v33 = 0;
    if ( v31 < v25 )
    {
      v34 = v7 + 40LL * v31 + 28;
      do
      {
        *(_DWORD *)(v34 - 4) = v31;
        *(_QWORD *)v34 = 0LL;
        *(_QWORD *)(v34 + 12) = 1LL;
        *(_QWORD *)(v34 + 20) = 0LL;
        *(_DWORD *)(v34 + 28) = 0;
        v38 = v26;
        IopQueryConflictFillString(a3[3 * v33], v30 + 2 * (v31 + 2LL), &v38, v7 + 40LL * v32 + 28);
        v34 += 40LL;
        v33 = a5 + 1;
        v26 -= v38;
        v32 = v36 + 1;
        v31 += v38;
        ++a5;
        v36 = v32;
      }
      while ( v32 < v25 );
    }
    *(_WORD *)(v30 + 2LL * v31 + 4) = 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v6;
}
