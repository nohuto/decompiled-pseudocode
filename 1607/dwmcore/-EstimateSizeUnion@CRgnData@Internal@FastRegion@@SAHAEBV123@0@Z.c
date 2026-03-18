/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18009D7F4
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  int v5; // ebx
  _DWORD *v6; // rbp
  unsigned int v7; // r8d
  char *v8; // rsi
  _DWORD *v9; // r9
  bool v10; // cc
  _DWORD *v11; // rcx
  char *v12; // r10
  char *v13; // rax
  char *v14; // r10
  char *v16; // rdi
  _DWORD *v17; // rbx
  char *v18; // rdx
  int v19; // eax
  _DWORD *i; // rcx
  _DWORD *v21; // rax
  _DWORD *v22; // r9
  _DWORD *v23; // rcx
  int v24; // eax
  char *v25; // rcx
  char *v26; // rax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = &v3[2 * v2];
  v7 = 8 * (v4 + v2) + 12;
  v8 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 >= v5 )
  {
    if ( *v3 > v5 )
    {
      v12 = (char *)a2 + 20;
      v24 = *((_DWORD *)a2 + 5);
      v7 += *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4) + 8;
      if ( *v3 < v24 )
      {
LABEL_41:
        v9 = v3 + 2;
      }
      else
      {
        v25 = (char *)a2 + 20;
        while ( 1 )
        {
          v12 += 8;
          if ( *v3 <= v24 )
            break;
          v25 += 8;
          if ( v12 == v8 )
          {
            v9 = v3 + 2;
            goto LABEL_22;
          }
          v7 += *((_DWORD *)v25 + 1) - *((_DWORD *)v25 - 1) + 8;
          v24 = *(_DWORD *)v12;
          if ( *v3 < *(_DWORD *)v12 )
            goto LABEL_41;
        }
        v9 = v3 + 2;
        if ( v12 == v8 )
        {
LABEL_22:
          v21 = v9 - 2;
          v22 = v9 + 2;
          v7 += v21[3] - v21[1] + 8;
          if ( v22 != v6 )
          {
            v23 = v22;
            do
            {
              v22 += 2;
              v7 += v23[1] - *(v23 - 1) + 8;
              v23 += 2;
            }
            while ( v22 != v6 );
          }
          return v7;
        }
      }
      goto LABEL_14;
    }
    v9 = v3 + 2;
  }
  else
  {
    v9 = v3 + 2;
    v7 += v9[1] - *(v9 - 1) + 8;
    v10 = *v9 <= v5;
    if ( *v9 >= v5 )
      goto LABEL_7;
    v11 = v9;
    do
    {
      v9 += 2;
      v11 += 2;
      if ( v9 == v6 )
      {
        v12 = (char *)a2 + 20;
LABEL_9:
        v13 = v12 - 8;
        v14 = v12 + 8;
        v7 += *((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1) + 8;
        if ( v14 != v8 )
        {
          v26 = v14;
          do
          {
            v14 += 8;
            v7 += *((_DWORD *)v26 + 1) - *((_DWORD *)v26 - 1) + 8;
            v26 += 8;
          }
          while ( v14 != v8 );
        }
        return v7;
      }
      v7 += v11[1] - *(v11 - 1) + 8;
    }
    while ( *v9 < v5 );
    v10 = *v9 <= v5;
LABEL_7:
    if ( v10 )
    {
      v9 += 2;
      v12 = (char *)a2 + 20;
      if ( v9 == v6 )
        goto LABEL_9;
      goto LABEL_14;
    }
  }
  v12 = (char *)a2 + 20;
LABEL_14:
  v16 = v12 - 8;
  v17 = v9 - 2;
  v18 = v12;
  v19 = v9[1] + *((_DWORD *)v12 + 1) - *((_DWORD *)v12 - 1) - *(v9 - 1) + 16;
  for ( i = v9;
        ;
        v19 = (_DWORD)i
            + (_DWORD)v18
            + *((_DWORD *)v18 + 1)
            + i[1]
            - v17[1]
            - *((_DWORD *)v16 + 1)
            - (_DWORD)v17
            - (_DWORD)v16 )
  {
    while ( 1 )
    {
      v7 += v19;
      if ( *v9 <= *(_DWORD *)v12 )
        break;
      v12 += 8;
      v16 += 8;
      v18 += 8;
LABEL_21:
      if ( v12 == v8 )
        goto LABEL_22;
      v19 = (_DWORD)v18
          + (_DWORD)i
          + *((_DWORD *)v18 + 1)
          + i[1]
          - v17[1]
          - *((_DWORD *)v16 + 1)
          - (_DWORD)v16
          - (_DWORD)v17;
    }
    if ( *v9 >= *(_DWORD *)v12 )
      break;
    v9 += 2;
    v17 += 2;
    i += 2;
    if ( v9 == v6 )
      goto LABEL_9;
  }
  v9 += 2;
  v17 += 2;
  i += 2;
  v12 += 8;
  v16 += 8;
  v18 += 8;
  if ( v9 != v6 )
    goto LABEL_21;
  if ( v12 != v8 )
    goto LABEL_9;
  return v7;
}
