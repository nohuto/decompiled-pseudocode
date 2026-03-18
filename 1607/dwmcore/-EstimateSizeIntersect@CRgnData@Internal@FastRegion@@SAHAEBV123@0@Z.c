/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18001D608
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D0D8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  char *v11; // r11
  _DWORD *v12; // r8
  char *v13; // rdx
  int v14; // eax
  _DWORD *v15; // rcx
  bool v17; // zf
  int v18; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = &v3[2 * v2];
  v6 = 8 * (v4 + v2) + 12;
  v7 = *((_DWORD *)a2 + 3);
  v8 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 < v7 )
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
      v17 = v9 == v5;
      goto LABEL_19;
    }
LABEL_4:
    v10 = (char *)a2 + 20;
    goto LABEL_5;
  }
  if ( *v3 <= v7 )
  {
    v9 = v3 + 2;
    goto LABEL_4;
  }
  v10 = (char *)a2 + 20;
  while ( 1 )
  {
    v18 = *(_DWORD *)v10;
    if ( *v3 < *(_DWORD *)v10 )
    {
      v9 = v3 + 2;
      goto LABEL_5;
    }
    v10 += 8;
    if ( *v3 <= v18 )
      break;
    if ( v10 == v8 )
      return v6;
  }
  v9 = v3 + 2;
  v17 = v10 == v8;
LABEL_19:
  if ( !v17 )
  {
LABEL_5:
    v11 = v10 - 8;
    v12 = v9 - 2;
    v13 = v10;
    v14 = v9[1] + *((_DWORD *)v10 + 1) - *((_DWORD *)v10 - 1) - *(v9 - 1) + 16;
    v15 = v9;
    while ( 1 )
    {
      v6 += v14;
      if ( *v9 > *(_DWORD *)v10 )
        break;
      if ( *v9 < *(_DWORD *)v10 )
      {
        v9 += 2;
        v12 += 2;
        v15 += 2;
        if ( v9 == v5 )
          return v6;
        v14 = (_DWORD)v15
            + (_DWORD)v13
            + *((_DWORD *)v13 + 1)
            + v15[1]
            - v12[1]
            - *((_DWORD *)v11 + 1)
            - (_DWORD)v11
            - (_DWORD)v12;
      }
      else
      {
        v9 += 2;
        v12 += 2;
        v15 += 2;
        v10 += 8;
        v11 += 8;
        v13 += 8;
        if ( v9 == v5 )
          return v6;
LABEL_11:
        if ( v10 == v8 )
          return v6;
        v14 = (_DWORD)v13
            + (_DWORD)v15
            + *((_DWORD *)v13 + 1)
            + v15[1]
            - v12[1]
            - *((_DWORD *)v11 + 1)
            - (_DWORD)v11
            - (_DWORD)v12;
      }
    }
    v10 += 8;
    v11 += 8;
    v13 += 8;
    goto LABEL_11;
  }
  return v6;
}
