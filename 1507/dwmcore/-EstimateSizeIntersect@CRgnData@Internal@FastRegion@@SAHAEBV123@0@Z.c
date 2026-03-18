/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180150A58
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18015118C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeIntersect(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  char *v8; // rsi
  _DWORD *v9; // r9
  char *v10; // r10
  bool v11; // zf
  int v13; // eax
  char *v14; // r11
  _DWORD *v15; // r8
  char *v16; // rdx
  int v17; // eax
  _DWORD *i; // rcx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = &v3[2 * v2];
  v6 = 8 * (v4 + v2) + 12;
  v7 = *((_DWORD *)a2 + 3);
  v8 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 >= v7 )
  {
    if ( *v3 > v7 )
    {
      v10 = (char *)a2 + 20;
      while ( 1 )
      {
        v13 = *(_DWORD *)v10;
        if ( *v3 < *(_DWORD *)v10 )
        {
          v9 = v3 + 2;
          goto LABEL_18;
        }
        v10 += 8;
        if ( *v3 <= v13 )
          break;
        if ( v10 == v8 )
          return v6;
      }
      v9 = v3 + 2;
      v11 = v10 == v8;
LABEL_7:
      if ( v11 )
        return v6;
      goto LABEL_18;
    }
    v9 = v3 + 2;
  }
  else
  {
    v9 = v3 + 2;
    while ( *v9 < v7 )
    {
      v9 += 2;
      if ( v9 == v5 )
        return v6;
    }
    if ( *v9 <= v7 )
    {
      v9 += 2;
      v10 = (char *)a2 + 20;
      v11 = v9 == v5;
      goto LABEL_7;
    }
  }
  v10 = (char *)a2 + 20;
LABEL_18:
  v14 = v10 - 8;
  v15 = v9 - 2;
  v16 = v10;
  v17 = v9[1] + *((_DWORD *)v10 + 1) - *((_DWORD *)v10 - 1) - *(v9 - 1) + 16;
  for ( i = v9;
        ;
        v17 = (_DWORD)v16
            + (_DWORD)i
            + *((_DWORD *)v16 + 1)
            + i[1]
            - v15[1]
            - *((_DWORD *)v14 + 1)
            - (_DWORD)v14
            - (_DWORD)v15 )
  {
    while ( 1 )
    {
      v6 += v17;
      if ( *v9 >= *(_DWORD *)v10 )
        break;
      v9 += 2;
      v15 += 2;
      i += 2;
      if ( v9 == v5 )
        return v6;
      v17 = (_DWORD)i
          + (_DWORD)v16
          + *((_DWORD *)v16 + 1)
          + i[1]
          - v15[1]
          - *((_DWORD *)v14 + 1)
          - (_DWORD)v14
          - (_DWORD)v15;
    }
    if ( *v9 <= *(_DWORD *)v10 )
    {
      v9 += 2;
      v15 += 2;
      i += 2;
      v10 += 8;
      v14 += 8;
      v16 += 8;
      if ( v9 == v5 )
        return v6;
    }
    else
    {
      v10 += 8;
      v14 += 8;
      v16 += 8;
    }
    if ( v10 == v8 )
      break;
  }
  return v6;
}
