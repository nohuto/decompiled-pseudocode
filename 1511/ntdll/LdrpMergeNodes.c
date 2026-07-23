/*
 * XREFs of LdrpMergeNodes @ 0x180074CC8
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x180074B30 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  __int64 v6; // rcx
  _QWORD *v7; // rax
  bool v8; // zf
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *i; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rcx
  __int64 v19; // r8
  _QWORD **v20; // rdx
  _QWORD **v21; // r14
  _QWORD **v22; // rsi
  _QWORD *j; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  _QWORD *k; // rcx
  _QWORD **v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // r9

  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrddag.c",
      920,
      (unsigned int)"LdrpMergeNodes",
      2,
      (__int64)"Merging a cycle rooted at %wZ.\n");
  v4 = *a2;
  do
  {
    v5 = (_QWORD *)*(v4 - 8);
    v6 = *v5;
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    v8 = (LdrpDebugFlags & 5) == 0;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !v8 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrddag.c",
        956,
        (unsigned int)"LdrpMergeNodes",
        2,
        (__int64)"Adding cyclic module %wZ.\n");
    *(v5 - 1) = a1;
    v9 = *(_QWORD **)(a1 + 8);
    *v5 = a1;
    v5[1] = v9;
    if ( *v9 != a1 )
      __fastfail(3u);
    *v9 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    v10 = (_QWORD *)*(v4 - 3);
    v11 = v10;
    *((_DWORD *)v4 - 10) = 0;
    *((_DWORD *)v4 - 2) = -5;
    do
    {
      v11 = (_QWORD *)*v11;
      v11[3] = a1;
    }
    while ( v11 != v10 );
    v12 = (_QWORD *)*(v4 - 2);
    v13 = v12;
    do
    {
      v13 = (_QWORD *)*v13;
      *(v13 - 1) = a1;
    }
    while ( v13 != v12 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v14 = *(_QWORD **)(a1 + 40);
  v15 = v14;
  for ( i = (_QWORD *)*v14; ; i = (_QWORD *)*v15 )
  {
    if ( i[1] == a1 )
    {
      v13 = (_QWORD *)*i;
      *v15 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        v13 = v15;
        if ( v15 == i )
          v13 = 0LL;
        *(_QWORD *)(a1 + 40) = v13;
      }
      *i = 0LL;
    }
    else
    {
      v15 = i;
    }
    if ( i == v14 )
      break;
  }
  v17 = *a2;
  do
  {
    while ( 1 )
    {
      v20 = (_QWORD **)*(v17 - 3);
      if ( !v20 )
        break;
      v18 = *v20;
      if ( *v20 == v20 )
      {
        *(v17 - 3) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v18;
        *v20 = (_QWORD *)*v18;
      }
      if ( !v18 )
        break;
      v19 = v18[1];
      if ( v19 == a1 )
      {
        *v18 = 0LL;
      }
      else
      {
        v33 = *(_QWORD **)(a1 + 40);
        if ( v33 )
        {
          v34 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v34 = (_QWORD *)*v34;
            if ( v34[1] == v19 )
              break;
            if ( v34 == v33 )
            {
              v13 = (_QWORD *)*v33;
              *v18 = *v33;
              *v33 = v18;
              goto LABEL_69;
            }
          }
          v35 = *(_QWORD **)(v19 + 48);
          v36 = v18 + 2;
          while ( (_QWORD *)*v35 != v36 )
            v35 = (_QWORD *)*v35;
          *v35 = *v36;
          if ( *(_QWORD **)(v19 + 48) == v36 )
          {
            if ( v35 == v36 )
              v35 = 0LL;
            *(_QWORD *)(v19 + 48) = v35;
          }
          --*(_DWORD *)(v19 + 24);
          LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v18);
        }
        else
        {
          *v18 = v18;
LABEL_69:
          *(_QWORD *)(a1 + 40) = v18;
        }
      }
    }
    v17 = (_QWORD *)*v17;
  }
  while ( v17 );
  v21 = *(_QWORD ***)(a1 + 48);
  v22 = v21;
  for ( j = *v21; ; j = *v22 )
  {
    if ( j[1] == a1 )
    {
      *v22 = (_QWORD *)*j;
      if ( *(_QWORD **)(a1 + 48) == j )
      {
        v32 = v22;
        if ( v22 == j )
          v32 = 0LL;
        *(_QWORD *)(a1 + 48) = v32;
      }
      --*(_DWORD *)(a1 + 24);
      LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, j - 2);
    }
    else
    {
      v22 = (_QWORD **)j;
    }
    if ( j == v21 )
      break;
  }
  v24 = *a2;
  do
  {
    while ( 1 )
    {
      v25 = (_QWORD *)*(v24 - 2);
      if ( !v25 )
        break;
      v26 = (_QWORD *)*v25;
      if ( (_QWORD *)*v25 == v25 )
      {
        *(v24 - 2) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v26;
        *v25 = *v26;
      }
      if ( !v26 )
        break;
      v27 = v26 - 2;
      v28 = v26[1];
      if ( v28 == a1 )
        goto LABEL_41;
      v29 = *(_QWORD **)(a1 + 48);
      if ( v29 )
      {
        v13 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v13 = (_QWORD *)*v13;
          if ( v13[1] == v28 )
            break;
          if ( v13 == v29 )
            goto LABEL_50;
        }
        for ( k = *(_QWORD **)(v28 + 40); (_QWORD *)*k != v27; k = (_QWORD *)*k )
          ;
        *k = *v27;
        if ( *(_QWORD **)(v28 + 40) == v27 )
        {
          if ( k == v27 )
            k = 0LL;
          *(_QWORD *)(v28 + 40) = k;
        }
LABEL_41:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v27);
      }
      else
      {
LABEL_50:
        v30 = v27 + 2;
        if ( v29 )
        {
          v13 = (_QWORD *)*v29;
          *v30 = *v29;
          *v29 = v30;
        }
        else
        {
          *v30 = v30;
        }
        *(_QWORD *)(a1 + 48) = v30;
      }
    }
    v24 = (_QWORD *)*v24;
  }
  while ( v24 );
  return (int)v13;
}
