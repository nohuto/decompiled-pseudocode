/*
 * XREFs of ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C027D634
 * Callers:
 *     EngDitherColor @ 0x1C027DBD0 (EngDitherColor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  unsigned int v6; // r9d
  struct _VERTEX_DATA *v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int *v10; // rcx
  unsigned int v11; // r8d
  char v12; // r9
  unsigned int i; // r8d
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // r9d
  char v17; // r11
  int v18; // r8d
  unsigned int *v19; // rcx
  unsigned int v20; // r9d
  unsigned int *v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // [rsp+0h] [rbp-50h]
  int v26; // [rsp+4h] [rbp-4Ch]
  int v27; // [rsp+8h] [rbp-48h]
  int v28; // [rsp+Ch] [rbp-44h]
  int v29; // [rsp+10h] [rbp-40h]
  int v30; // [rsp+14h] [rbp-3Ch]
  int v31; // [rsp+18h] [rbp-38h]
  int v32; // [rsp+1Ch] [rbp-34h]
  int v33; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+24h] [rbp-2Ch]
  int v35; // [rsp+28h] [rbp-28h]
  int v36; // [rsp+2Ch] [rbp-24h]
  int v37; // [rsp+30h] [rbp-20h]
  int v38; // [rsp+34h] [rbp-1Ch]
  int v39; // [rsp+38h] [rbp-18h]
  int v40; // [rsp+3Ch] [rbp-14h]

  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      v6 = *((_DWORD *)a2 + 4);
      v7 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      v8 = *((_DWORD *)a2 + 2);
      if ( v8 < v6 )
      {
        v7 = (struct _VERTEX_DATA *)((char *)a2 + 16);
LABEL_7:
        v8 = v6;
      }
    }
    else
    {
      v6 = *((_DWORD *)a2 + 6);
      v7 = (struct _VERTEX_DATA *)((char *)a2 + 16);
      v8 = *((_DWORD *)a2 + 4);
      if ( v8 < v6 )
      {
        v7 = (struct _VERTEX_DATA *)((char *)a2 + 24);
        goto LABEL_7;
      }
    }
    if ( *((_DWORD *)a2 + 2) > v8 )
    {
      v7 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      v8 = *((_DWORD *)a2 + 2);
    }
    if ( *(_DWORD *)a2 > v8 )
      v7 = a2;
    v9 = *((unsigned int *)v7 + 1);
    *((_DWORD *)v7 + 1) = 255;
    v25 = ulNibbleTo4bppDword[v9];
    v26 = v25;
    v27 = v25;
    v28 = v25;
    v29 = v25;
    v30 = v25;
    v31 = v25;
    v32 = v25;
    v33 = v25;
    v34 = v25;
    v35 = v25;
    v36 = v25;
    v37 = v25;
    v38 = v25;
    v39 = v25;
    v40 = v25;
    v10 = (unsigned int *)&aulDither4bppOrder;
    while ( *((_DWORD *)a2 + 1) == 255 )
    {
      v10 += *(unsigned int *)a2;
LABEL_23:
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      if ( a2 >= a3 )
        goto LABEL_38;
    }
    v11 = *(_DWORD *)a2;
    v12 = *((_BYTE *)a2 + 4);
    if ( (*(_DWORD *)a2 & 3) != 1 )
    {
      if ( (*(_DWORD *)a2 & 3) != 2 )
      {
        if ( (*(_DWORD *)a2 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)&v25 + v10[2]) = v12;
      }
      *((_BYTE *)&v25 + v10[1]) = v12;
    }
    *((_BYTE *)&v25 + *v10) = v12;
    v10 += v11 & 3;
LABEL_21:
    for ( i = v11 >> 2; i; --i )
    {
      *((_BYTE *)&v25 + *v10) = v12;
      *((_BYTE *)&v25 + v10[1]) = v12;
      *((_BYTE *)&v25 + v10[2]) = v12;
      v14 = v10[3];
      v10 += 4;
      *((_BYTE *)&v25 + v14) = v12;
    }
    goto LABEL_23;
  }
  if ( a4 != 2 )
  {
    v23 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 1)];
    v24 = (16 * v23) | v23;
    *a1 = v24;
    a1[1] = v24;
    a1[2] = v24;
    a1[3] = v24;
    a1[4] = v24;
    a1[5] = v24;
    a1[6] = v24;
    a1[7] = v24;
    return;
  }
  v15 = *(unsigned int *)a2;
  v16 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)v15 < v16 )
  {
    v16 = *(_DWORD *)a2;
    v17 = *((_BYTE *)a2 + 4);
    v18 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 3)];
    v19 = (unsigned int *)&aulDither4bppOrder;
  }
  else
  {
    v17 = *((_BYTE *)a2 + 12);
    v18 = ulNibbleTo4bppDword[*((unsigned int *)a2 + 1)];
    v19 = (unsigned int *)((char *)&aulDither4bppOrder + 4 * v15);
  }
  v25 = v18;
  v26 = v18;
  v27 = v18;
  v28 = v18;
  v29 = v18;
  v30 = v18;
  v31 = v18;
  v32 = v18;
  v33 = v18;
  v34 = v18;
  v35 = v18;
  v36 = v18;
  v37 = v18;
  v38 = v18;
  v39 = v18;
  v40 = v18;
  switch ( v16 & 3 )
  {
    case 1u:
      goto LABEL_34;
    case 2u:
LABEL_33:
      *((_BYTE *)&v25 + v19[1]) = v17;
LABEL_34:
      *((_BYTE *)&v25 + *v19) = v17;
      v19 += v16 & 3;
      break;
    case 3u:
      *((_BYTE *)&v25 + v19[2]) = v17;
      goto LABEL_33;
  }
  v20 = v16 >> 2;
  if ( v20 )
  {
    v21 = v19 + 2;
    do
    {
      *((_BYTE *)&v25 + *(v21 - 2)) = v17;
      *((_BYTE *)&v25 + *(v21 - 1)) = v17;
      v22 = *v21;
      v21 += 4;
      *((_BYTE *)&v25 + v22) = v17;
      *((_BYTE *)&v25 + *(v21 - 3)) = v17;
      --v20;
    }
    while ( v20 );
  }
LABEL_38:
  *a1 = v26 | (16 * v25);
  a1[1] = v28 | (16 * v27);
  a1[2] = v30 | (16 * v29);
  a1[3] = v32 | (16 * v31);
  a1[4] = v34 | (16 * v33);
  a1[5] = v36 | (16 * v35);
  a1[6] = v38 | (16 * v37);
  a1[7] = v40 | (16 * v39);
}
