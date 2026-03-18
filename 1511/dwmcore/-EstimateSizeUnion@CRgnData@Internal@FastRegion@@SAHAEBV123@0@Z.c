/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006D1F0
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  int v16; // eax
  char *v17; // rcx
  char *v18; // rdi
  _DWORD *v19; // rbx
  char *v20; // rdx
  int v21; // eax
  _DWORD *i; // rcx
  _DWORD *v23; // rax
  _DWORD *v24; // r9
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
      v12 = (char *)a2 + 20;
      v16 = *((_DWORD *)a2 + 5);
      v7 += *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4) + 8;
      if ( *v3 < v16 )
      {
LABEL_36:
        v9 = v3 + 2;
      }
      else
      {
        v17 = (char *)a2 + 20;
        while ( 1 )
        {
          v12 += 8;
          if ( *v3 <= v16 )
            break;
          v17 += 8;
          if ( v12 == v8 )
          {
            v9 = v3 + 2;
            goto LABEL_27;
          }
          v7 += *((_DWORD *)v17 + 1) - *((_DWORD *)v17 - 1) + 8;
          v16 = *(_DWORD *)v12;
          if ( *v3 < *(_DWORD *)v12 )
            goto LABEL_36;
        }
        v9 = v3 + 2;
        if ( v12 == v8 )
        {
LABEL_27:
          v23 = v9 - 2;
          v24 = v9 + 2;
          v7 += v23[3] - v23[1] + 8;
          if ( v24 != v6 )
          {
            v25 = v24;
            do
            {
              v24 += 2;
              v7 += v25[1] - *(v25 - 1) + 8;
              v25 += 2;
            }
            while ( v24 != v6 );
          }
          return v7;
        }
      }
      goto LABEL_19;
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
      goto LABEL_19;
    }
  }
  v12 = (char *)a2 + 20;
LABEL_19:
  v18 = v12 - 8;
  v19 = v9 - 2;
  v20 = v12;
  v21 = v9[1] + *((_DWORD *)v12 + 1) - *((_DWORD *)v12 - 1) - *(v9 - 1) + 16;
  for ( i = v9;
        ;
        v21 = (_DWORD)i
            + (_DWORD)v20
            + *((_DWORD *)v20 + 1)
            + i[1]
            - v19[1]
            - *((_DWORD *)v18 + 1)
            - (_DWORD)v19
            - (_DWORD)v18 )
  {
    while ( 1 )
    {
      v7 += v21;
      if ( *v9 <= *(_DWORD *)v12 )
        break;
      v12 += 8;
      v18 += 8;
      v20 += 8;
LABEL_26:
      if ( v12 == v8 )
        goto LABEL_27;
      v21 = (_DWORD)v20
          + (_DWORD)i
          + *((_DWORD *)v20 + 1)
          + i[1]
          - v19[1]
          - *((_DWORD *)v18 + 1)
          - (_DWORD)v18
          - (_DWORD)v19;
    }
    if ( *v9 >= *(_DWORD *)v12 )
      break;
    v9 += 2;
    v19 += 2;
    i += 2;
    if ( v9 == v6 )
      goto LABEL_9;
  }
  v9 += 2;
  v19 += 2;
  i += 2;
  v12 += 8;
  v18 += 8;
  v20 += 8;
  if ( v9 != v6 )
    goto LABEL_26;
  if ( v12 != v8 )
    goto LABEL_9;
  return v7;
}
