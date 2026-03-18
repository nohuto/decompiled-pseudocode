/*
 * XREFs of ?vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C027D924
 * Callers:
 *     EngDitherColor @ 0x1C027DBD0 (EngDitherColor.c)
 * Callees:
 *     <none>
 */

void __fastcall vDitherColor8bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r11
  unsigned int v7; // r8d
  struct _VERTEX_DATA *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int *v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  char v14; // r8
  unsigned int v15; // ecx
  unsigned int i; // ecx
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  char v21; // r9
  unsigned int *v22; // rdx
  unsigned int v23; // r8d
  unsigned int *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx

  v5 = a2;
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      v7 = *((_DWORD *)a2 + 4);
      v8 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 < v7 )
      {
        v8 = (struct _VERTEX_DATA *)((char *)v5 + 16);
LABEL_7:
        v9 = v7;
      }
    }
    else
    {
      v7 = *((_DWORD *)a2 + 6);
      v8 = (struct _VERTEX_DATA *)((char *)a2 + 16);
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 < v7 )
      {
        v8 = (struct _VERTEX_DATA *)((char *)v5 + 24);
        goto LABEL_7;
      }
    }
    if ( *((_DWORD *)v5 + 2) > v9 )
    {
      v8 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      v9 = *((_DWORD *)v5 + 2);
    }
    if ( *(_DWORD *)v5 > v9 )
      v8 = v5;
    v10 = *((unsigned int *)v8 + 1);
    *((_DWORD *)v8 + 1) = 255;
    v11 = (unsigned int *)&aulDither8bppOrder;
    v12 = *((_DWORD *)&ulNibbleTo8bppDword + v10);
    *a1 = v12;
    a1[1] = v12;
    a1[2] = v12;
    a1[3] = v12;
    a1[4] = v12;
    a1[5] = v12;
    a1[6] = v12;
    a1[7] = v12;
    a1[8] = v12;
    a1[9] = v12;
    a1[10] = v12;
    a1[11] = v12;
    a1[12] = v12;
    a1[13] = v12;
    a1[14] = v12;
    a1[15] = v12;
    while ( 1 )
    {
      v13 = *((unsigned int *)v5 + 1);
      if ( (_DWORD)v13 != 255 )
        break;
      v11 += *(unsigned int *)v5;
LABEL_23:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        return;
    }
    v14 = ajConvert[v13];
    v15 = *(_DWORD *)v5;
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)a1 + v11[2]) = v14;
      }
      *((_BYTE *)a1 + v11[1]) = v14;
    }
    *((_BYTE *)a1 + *v11) = v14;
    v11 += v15 & 3;
LABEL_21:
    for ( i = v15 >> 2; i; --i )
    {
      *((_BYTE *)a1 + *v11) = v14;
      *((_BYTE *)a1 + v11[1]) = v14;
      *((_BYTE *)a1 + v11[2]) = v14;
      v17 = v11[3];
      v11 += 4;
      *((_BYTE *)a1 + v17) = v14;
    }
    goto LABEL_23;
  }
  if ( a4 != 2 )
  {
    v26 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)a2 + 1));
    *a1 = v26;
    a1[1] = v26;
    a1[2] = v26;
    a1[3] = v26;
    a1[4] = v26;
    a1[5] = v26;
    a1[6] = v26;
    a1[7] = v26;
    a1[8] = v26;
    a1[9] = v26;
    a1[10] = v26;
    a1[11] = v26;
    a1[12] = v26;
    a1[13] = v26;
    a1[14] = v26;
    a1[15] = v26;
    return;
  }
  v18 = *(_DWORD *)a2;
  v19 = *((_DWORD *)v5 + 2);
  if ( v18 < v19 )
  {
    v19 = v18;
    v22 = (unsigned int *)&aulDither8bppOrder;
    v20 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)v5 + 3));
    v21 = ajConvert[*((unsigned int *)v5 + 1)];
  }
  else
  {
    v20 = *((_DWORD *)&ulNibbleTo8bppDword + *((unsigned int *)v5 + 1));
    v21 = ajConvert[*((unsigned int *)v5 + 3)];
    v22 = (unsigned int *)((char *)&aulDither8bppOrder + 4 * v18);
  }
  *a1 = v20;
  a1[1] = v20;
  a1[2] = v20;
  a1[3] = v20;
  a1[4] = v20;
  a1[5] = v20;
  a1[6] = v20;
  a1[7] = v20;
  a1[8] = v20;
  a1[9] = v20;
  a1[10] = v20;
  a1[11] = v20;
  a1[12] = v20;
  a1[13] = v20;
  a1[14] = v20;
  a1[15] = v20;
  if ( (v19 & 3) != 1 )
  {
    if ( (v19 & 3) != 2 )
    {
      if ( (v19 & 3) != 3 )
        goto LABEL_35;
      *((_BYTE *)a1 + v22[2]) = v21;
    }
    *((_BYTE *)a1 + v22[1]) = v21;
  }
  *((_BYTE *)a1 + *v22) = v21;
  v22 += v19 & 3;
LABEL_35:
  v23 = v19 >> 2;
  if ( v23 )
  {
    v24 = v22 + 2;
    do
    {
      *((_BYTE *)a1 + *(v24 - 2)) = v21;
      *((_BYTE *)a1 + *(v24 - 1)) = v21;
      v25 = *v24;
      v24 += 4;
      *((_BYTE *)a1 + v25) = v21;
      *((_BYTE *)a1 + *(v24 - 3)) = v21;
      --v23;
    }
    while ( v23 );
  }
}
