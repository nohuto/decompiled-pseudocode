/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800ADBEC
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeSubtract(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  int v5; // ebx
  _DWORD *v6; // rsi
  unsigned int v7; // r11d
  char *v8; // rbp
  char *v9; // r10
  int v10; // eax
  _DWORD *v11; // r9
  char *v12; // rdi
  _DWORD *v13; // rbx
  char *v14; // rdx
  int v15; // eax
  _DWORD *i; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // r9
  int v20; // eax
  bool v21; // cc
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = &v3[2 * v2];
  v7 = 8 * (v4 + v2) + 12;
  v8 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 < v5 )
  {
    v11 = v3 + 2;
    v7 += v11[1] - *(v11 - 1) + 8;
    v21 = *v11 <= v5;
    if ( *v11 < v5 )
    {
      v22 = v11;
      do
      {
        v11 += 2;
        v22 += 2;
        if ( v11 == v6 )
          return v7;
        v7 += v22[1] - *(v22 - 1) + 8;
        v21 = *v11 <= v5;
      }
      while ( *v11 < v5 );
    }
    if ( v21 )
    {
      v11 += 2;
      v9 = (char *)a2 + 20;
      if ( v11 == v6 )
        return v7;
LABEL_8:
      v12 = v9 - 8;
      v13 = v11 - 2;
      v14 = v9;
      v15 = v11[1] + *((_DWORD *)v9 + 1) - *((_DWORD *)v9 - 1) - *(v11 - 1) + 16;
      for ( i = v11; ; v15 = (_DWORD)v14 + (_DWORD)i + v20 )
      {
        v7 += v15;
        if ( *v11 > *(_DWORD *)v9 )
          break;
        if ( *v11 >= *(_DWORD *)v9 )
        {
          v11 += 2;
          v13 += 2;
          i += 2;
          v9 += 8;
          v12 += 8;
          v14 += 8;
          if ( v11 == v6 )
            return v7;
          goto LABEL_14;
        }
        v11 += 2;
        v13 += 2;
        i += 2;
        if ( v11 == v6 )
          return v7;
        v20 = *((_DWORD *)v14 + 1) + i[1] - v13[1] - *((_DWORD *)v12 + 1) - (_DWORD)v13 - (_DWORD)v12;
LABEL_22:
        ;
      }
      v9 += 8;
      v12 += 8;
      v14 += 8;
LABEL_14:
      if ( v9 == v8 )
        goto LABEL_15;
      v20 = *((_DWORD *)v14 + 1) + i[1] - v13[1] - *((_DWORD *)v12 + 1) - (_DWORD)v12 - (_DWORD)v13;
      goto LABEL_22;
    }
LABEL_7:
    v9 = (char *)a2 + 20;
    goto LABEL_8;
  }
  if ( *v3 <= v5 )
  {
    v11 = v3 + 2;
    goto LABEL_7;
  }
  v9 = (char *)a2 + 20;
  while ( 1 )
  {
    v10 = *(_DWORD *)v9;
    if ( *v3 < *(_DWORD *)v9 )
    {
      v11 = v3 + 2;
      goto LABEL_8;
    }
    v9 += 8;
    if ( *v3 <= v10 )
      break;
    if ( v9 == v8 )
    {
      v11 = v3 + 2;
      goto LABEL_15;
    }
  }
  v11 = v3 + 2;
  if ( v9 != v8 )
    goto LABEL_8;
LABEL_15:
  v17 = v11 - 2;
  v18 = v11 + 2;
  v7 += v17[3] - v17[1] + 8;
  if ( v18 != v6 )
  {
    v23 = v18;
    do
    {
      v18 += 2;
      v7 += v23[1] - *(v23 - 1) + 8;
      v23 += 2;
    }
    while ( v18 != v6 );
  }
  return v7;
}
