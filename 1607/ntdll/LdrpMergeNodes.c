/*
 * XREFs of LdrpMergeNodes @ 0x1800747E4
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x180074648 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
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
  _QWORD *v18; // rdx
  _QWORD **v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  _QWORD **v22; // r14
  _QWORD **v23; // rsi
  _QWORD *j; // rdi
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // r9
  _QWORD *v28; // rdi
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  _QWORD *k; // rcx
  _QWORD **v36; // rax

  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrddag.c",
      966,
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
        1002,
        (unsigned int)"LdrpMergeNodes",
        2,
        (__int64)"Adding cyclic module %wZ.\n",
        v5 - 9);
    *(v5 - 1) = a1;
    v9 = *(_QWORD **)(a1 + 8);
    if ( *v9 != a1 )
      __fastfail(3u);
    v5[1] = v9;
    *v5 = a1;
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
      v19 = (_QWORD **)*(v17 - 3);
      if ( !v19 )
        break;
      v20 = *v19;
      if ( *v19 == v19 )
      {
        *(v17 - 3) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v20;
        *v19 = (_QWORD *)*v20;
      }
      if ( !v20 )
        break;
      v21 = v20[1];
      if ( v21 == a1 )
      {
        *v20 = 0LL;
      }
      else
      {
        v25 = *(_QWORD **)(a1 + 40);
        if ( v25 )
        {
          v26 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v26 = (_QWORD *)*v26;
            if ( v26[1] == v21 )
              break;
            if ( v26 == v25 )
            {
              v13 = (_QWORD *)*v25;
              *v20 = *v25;
              *v25 = v20;
              goto LABEL_79;
            }
          }
          v18 = *(_QWORD **)(v21 + 48);
          v27 = v20 + 2;
          while ( (_QWORD *)*v18 != v27 )
            v18 = (_QWORD *)*v18;
          *v18 = *v27;
          if ( *(_QWORD **)(v21 + 48) == v27 )
          {
            if ( v18 == v27 )
              v18 = 0LL;
            *(_QWORD *)(v21 + 48) = v18;
          }
          --*(_DWORD *)(v21 + 24);
          LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v20);
        }
        else
        {
          *v20 = v20;
LABEL_79:
          *(_QWORD *)(a1 + 40) = v20;
        }
      }
    }
    v17 = (_QWORD *)*v17;
  }
  while ( v17 );
  v22 = *(_QWORD ***)(a1 + 48);
  v23 = v22;
  for ( j = *v22; ; j = *v23 )
  {
    if ( j[1] == a1 )
    {
      *v23 = (_QWORD *)*j;
      if ( *(_QWORD **)(a1 + 48) == j )
      {
        v36 = v23;
        if ( v23 == j )
          v36 = 0LL;
        *(_QWORD *)(a1 + 48) = v36;
      }
      --*(_DWORD *)(a1 + 24);
      LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, j - 2);
    }
    else
    {
      v23 = (_QWORD **)j;
    }
    if ( j == v22 )
      break;
  }
  v28 = *a2;
  do
  {
    while ( 1 )
    {
      v29 = (_QWORD *)*(v28 - 2);
      if ( !v29 )
        break;
      v30 = (_QWORD *)*v29;
      if ( (_QWORD *)*v29 == v29 )
      {
        *(v28 - 2) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v30;
        *v29 = *v30;
      }
      if ( !v30 )
        break;
      v31 = v30 - 2;
      v32 = v30[1];
      if ( v32 == a1 )
        goto LABEL_55;
      v33 = *(_QWORD **)(a1 + 48);
      if ( v33 )
      {
        v13 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v13 = (_QWORD *)*v13;
          if ( v13[1] == v32 )
            break;
          if ( v13 == v33 )
            goto LABEL_63;
        }
        for ( k = *(_QWORD **)(v32 + 40); (_QWORD *)*k != v31; k = (_QWORD *)*k )
          ;
        *k = *v31;
        if ( *(_QWORD **)(v32 + 40) == v31 )
        {
          if ( k == v31 )
            k = 0LL;
          *(_QWORD *)(v32 + 40) = k;
        }
LABEL_55:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v31);
      }
      else
      {
LABEL_63:
        v34 = v31 + 2;
        if ( v33 )
        {
          v13 = (_QWORD *)*v33;
          *v34 = *v33;
          *v33 = v34;
        }
        else
        {
          *v34 = v34;
        }
        *(_QWORD *)(a1 + 48) = v34;
      }
    }
    v28 = (_QWORD *)*v28;
  }
  while ( v28 );
  return (int)v13;
}
