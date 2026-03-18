/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800893DC
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  char *v11; // r10
  char *v12; // rax
  char *v13; // r10
  int v15; // eax
  char *v16; // rcx
  char *v17; // rdi
  _DWORD *v18; // rbx
  char *v19; // rdx
  int v20; // eax
  _DWORD *i; // rcx
  _DWORD *v22; // rax
  _DWORD *v23; // r9
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
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
      v11 = (char *)a2 + 20;
      v15 = *((_DWORD *)a2 + 5);
      v7 += *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4) + 8;
      if ( *v3 < v15 )
      {
LABEL_34:
        v9 = v3 + 2;
      }
      else
      {
        v16 = (char *)a2 + 20;
        while ( 1 )
        {
          v11 += 8;
          if ( *v3 <= v15 )
            break;
          v16 += 8;
          if ( v11 == v8 )
          {
            v9 = v3 + 2;
            goto LABEL_20;
          }
          v7 += *((_DWORD *)v16 + 1) - *((_DWORD *)v16 - 1) + 8;
          v15 = *(_DWORD *)v11;
          if ( *v3 < *(_DWORD *)v11 )
            goto LABEL_34;
        }
        v9 = v3 + 2;
        if ( v11 == v8 )
        {
LABEL_20:
          v22 = v9 - 2;
          v23 = v9 + 2;
          v7 += v22[3] - v22[1] + 8;
          if ( v23 != v6 )
          {
            v24 = v23;
            do
            {
              v23 += 2;
              v7 += v24[1] - *(v24 - 1) + 8;
              v24 += 2;
            }
            while ( v23 != v6 );
          }
          return v7;
        }
      }
      goto LABEL_15;
    }
    v9 = v3 + 2;
  }
  else
  {
    v9 = v3 + 2;
    v7 += v9[1] - *(v9 - 1) + 8;
    v10 = *v9 <= v5;
    if ( *v9 >= v5 )
      goto LABEL_3;
    v25 = v9;
    do
    {
      v9 += 2;
      v25 += 2;
      if ( v9 == v6 )
      {
        v11 = (char *)a2 + 20;
LABEL_5:
        v12 = v11 - 8;
        v13 = v11 + 8;
        v7 += *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) + 8;
        if ( v13 != v8 )
        {
          v26 = v13;
          do
          {
            v13 += 8;
            v7 += *((_DWORD *)v26 + 1) - *((_DWORD *)v26 - 1) + 8;
            v26 += 8;
          }
          while ( v13 != v8 );
        }
        return v7;
      }
      v7 += v25[1] - *(v25 - 1) + 8;
    }
    while ( *v9 < v5 );
    v10 = *v9 <= v5;
LABEL_3:
    if ( v10 )
    {
      v9 += 2;
      v11 = (char *)a2 + 20;
      if ( v9 == v6 )
        goto LABEL_5;
      goto LABEL_15;
    }
  }
  v11 = (char *)a2 + 20;
LABEL_15:
  v17 = v11 - 8;
  v18 = v9 - 2;
  v19 = v11;
  v20 = v9[1] + *((_DWORD *)v11 + 1) - *((_DWORD *)v11 - 1) - *(v9 - 1) + 16;
  for ( i = v9;
        ;
        v20 = (_DWORD)v19
            + (_DWORD)i
            + *((_DWORD *)v19 + 1)
            + i[1]
            - v18[1]
            - *((_DWORD *)v17 + 1)
            - (_DWORD)v17
            - (_DWORD)v18 )
  {
    while ( 1 )
    {
      v7 += v20;
      if ( *v9 >= *(_DWORD *)v11 )
        break;
      v9 += 2;
      v18 += 2;
      i += 2;
      if ( v9 == v6 )
        goto LABEL_5;
      v20 = (_DWORD)i
          + (_DWORD)v19
          + *((_DWORD *)v19 + 1)
          + i[1]
          - v18[1]
          - *((_DWORD *)v17 + 1)
          - (_DWORD)v18
          - (_DWORD)v17;
    }
    if ( *v9 > *(_DWORD *)v11 )
    {
      v11 += 8;
      v17 += 8;
      v19 += 8;
      goto LABEL_19;
    }
    v9 += 2;
    v18 += 2;
    i += 2;
    v11 += 8;
    v17 += 8;
    v19 += 8;
    if ( v9 == v6 )
      break;
LABEL_19:
    if ( v11 == v8 )
      goto LABEL_20;
  }
  if ( v11 != v8 )
    goto LABEL_5;
  return v7;
}
