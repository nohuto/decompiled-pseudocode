/*
 * XREFs of LdrpMergeNodes @ 0x1800441C0
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x180044028 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
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
  _QWORD **v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  _QWORD **v21; // r14
  _QWORD **v22; // rsi
  _QWORD *j; // rdi
  _QWORD **v24; // rax
  _QWORD *v25; // rdi
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  _QWORD *k; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // r9

  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrddag.c",
      891,
      (unsigned int)"LdrpMergeNodes",
      2,
      (__int64)"Merging a cycle rooted at %wZ.\n",
      *(_QWORD *)a1 - 72LL);
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
        927,
        (unsigned int)"LdrpMergeNodes",
        2,
        (__int64)"Adding cyclic module %wZ.\n",
        v5 - 9);
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
      v18 = (_QWORD **)*(v17 - 3);
      if ( !v18 )
        break;
      v19 = *v18;
      if ( *v18 == v18 )
      {
        *(v17 - 3) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v19;
        *v18 = (_QWORD *)*v19;
      }
      if ( !v19 )
        break;
      v20 = v19[1];
      if ( v20 == a1 )
      {
        *v19 = 0LL;
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
            if ( v34[1] == v20 )
              break;
            if ( v34 == v33 )
            {
              v13 = (_QWORD *)*v33;
              *v19 = *v33;
              *v33 = v19;
              goto LABEL_80;
            }
          }
          v35 = *(_QWORD **)(v20 + 48);
          v36 = v19 + 2;
          while ( (_QWORD *)*v35 != v36 )
            v35 = (_QWORD *)*v35;
          *v35 = *v36;
          if ( *(_QWORD **)(v20 + 48) == v36 )
          {
            if ( v35 == v36 )
              v35 = 0LL;
            *(_QWORD *)(v20 + 48) = v35;
          }
          --*(_DWORD *)(v20 + 24);
          LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v19);
        }
        else
        {
          *v19 = v19;
LABEL_80:
          *(_QWORD *)(a1 + 40) = v19;
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
        v24 = v22;
        if ( v22 == j )
          v24 = 0LL;
        *(_QWORD *)(a1 + 48) = v24;
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
  v25 = *a2;
  do
  {
    while ( 1 )
    {
      v26 = (_QWORD *)*(v25 - 2);
      if ( !v26 )
        break;
      v27 = (_QWORD *)*v26;
      if ( (_QWORD *)*v26 == v26 )
      {
        *(v25 - 2) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v27;
        *v26 = *v27;
      }
      if ( !v27 )
        break;
      v28 = v27 - 2;
      v29 = v27[1];
      if ( v29 == a1 )
        goto LABEL_44;
      v30 = *(_QWORD **)(a1 + 48);
      if ( v30 )
      {
        v13 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v13 = (_QWORD *)*v13;
          if ( v13[1] == v29 )
            break;
          if ( v13 == v30 )
            goto LABEL_53;
        }
        for ( k = *(_QWORD **)(v29 + 40); (_QWORD *)*k != v28; k = (_QWORD *)*k )
          ;
        *k = *v28;
        if ( *(_QWORD **)(v29 + 40) == v28 )
        {
          if ( k == v28 )
            k = 0LL;
          *(_QWORD *)(v29 + 40) = k;
        }
LABEL_44:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v28);
      }
      else
      {
LABEL_53:
        v31 = v28 + 2;
        if ( v30 )
        {
          v13 = (_QWORD *)*v30;
          *v31 = *v30;
          *v30 = v31;
        }
        else
        {
          *v31 = v31;
        }
        *(_QWORD *)(a1 + 48) = v31;
      }
    }
    v25 = (_QWORD *)*v25;
  }
  while ( v25 );
  return (int)v13;
}
