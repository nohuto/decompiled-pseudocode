/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02C0C20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  __int64 v1; // rdi
  _BYTE *v2; // rbx
  __int64 v3; // r10
  int v4; // r9d
  int v5; // r8d
  char v6; // si
  BOOL v7; // r14d
  struct BLTINFO *v8; // r13
  int v9; // r11d
  __int64 v10; // r12
  int v11; // edx
  char v12; // bp
  int v13; // ecx
  int v14; // r11d
  __int64 v15; // r11
  unsigned __int8 *v16; // rdi
  int v17; // r10d
  _BYTE *v18; // r11
  __int64 v19; // r14
  unsigned __int8 v20; // dl
  __int64 v21; // r13
  char v22; // dl
  unsigned __int8 v23; // al
  __int64 v24; // r14
  unsigned __int8 v25; // dl
  char v26; // al
  BOOL v27; // r8d
  int v28; // ebp
  int v29; // eax
  _BYTE *v30; // r14
  int v31; // r11d
  __int64 v32; // rdi
  int v33; // eax
  unsigned __int8 *v34; // rdi
  int v35; // ecx
  int v36; // edx
  size_t v37; // r15
  __int64 v38; // r12
  __int64 v39; // r12
  __int64 v40; // rax
  char v41; // r8
  unsigned __int8 *v42; // r9
  char v43; // al
  unsigned __int8 v44; // r8
  int v45; // edx
  char v46; // r15
  int v47; // r8d
  int v48; // eax
  __int64 v49; // r9
  int v50; // eax
  unsigned __int8 *v51; // r9
  unsigned __int8 v52; // dl
  unsigned __int8 v53; // al
  unsigned __int8 v54; // dl
  char v55; // al
  int v56; // [rsp+20h] [rbp-68h]
  BOOL v57; // [rsp+24h] [rbp-64h]
  int v58; // [rsp+28h] [rbp-60h]
  int v60; // [rsp+A0h] [rbp+18h]
  char v61; // [rsp+A8h] [rbp+20h]

  v1 = *((int *)a1 + 12);
  v2 = 0LL;
  v3 = *((int *)a1 + 14);
  v4 = *((_DWORD *)a1 + 12) & 7;
  v5 = *((_DWORD *)a1 + 14) & 7;
  v6 = (*((_BYTE *)a1 + 48) & 7) - (*((_BYTE *)a1 + 56) & 7);
  v7 = 1;
  v8 = a1;
  if ( v4 < v5 )
    v6 += 8;
  v9 = *((_DWORD *)a1 + 7);
  v10 = *((int *)a1 + 11);
  v11 = *((_DWORD *)a1 + 10);
  v61 = 8 - v6;
  v58 = v3 - v9;
  v56 = *((_DWORD *)a1 + 11);
  v60 = v11;
  v57 = ((((_DWORD)v3 - v9) ^ (unsigned int)v3) & 0xFFFFFFF8) != 0;
  v12 = -1 << (7 - v5);
  if ( ((((_DWORD)v3 - v9) ^ (unsigned int)v3) & 0xFFFFFFF8) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v12 &= 255 >> ((v58 + 1) & 7);
    if ( v4 < v5 )
      v7 = v4 - v9 < -1;
    v11 = *((_DWORD *)a1 + 10);
    v13 = 1;
  }
  v14 = ((_BYTE)v5 + 1) & 7;
  if ( v13 | v14 )
  {
    v15 = v3;
    v16 = (unsigned __int8 *)(*((_QWORD *)v8 + 1) + (v1 >> 3));
    v17 = *((_DWORD *)v8 + 8);
    v18 = (_BYTE *)(*((_QWORD *)v8 + 2) + (v15 >> 3));
    if ( v4 <= v5 )
    {
      if ( v4 >= v5 )
      {
        for ( ; v17; --v17 )
        {
          v26 = *v16 & v12;
          v16 += v60;
          *v18 = v26 | ~v12 & *v18;
          v18 += v10;
        }
      }
      else if ( v7 )
      {
        if ( v17 )
        {
          v21 = v11;
          do
          {
            v22 = *(v16 - 1);
            v23 = *v16;
            v16 += v21;
            *v18 = ~v12 & *v18 | v12 & ((v23 >> v61) | (v22 << v6));
            v18 += v10;
            --v17;
          }
          while ( v17 );
          v8 = a1;
        }
      }
      else if ( v17 )
      {
        v24 = v11;
        do
        {
          v25 = *v16;
          v16 += v24;
          *v18 = ~v12 & *v18 | v12 & (v25 >> (8 - v6));
          v18 += v10;
          --v17;
        }
        while ( v17 );
        v8 = a1;
      }
    }
    else if ( v17 )
    {
      v19 = v11;
      do
      {
        v20 = *v16;
        v16 += v19;
        *v18 = ~v12 & *v18 | v12 & (v20 << v6);
        v18 += v10;
        --v17;
      }
      while ( v17 );
    }
    v14 = ((_BYTE)v5 + 1) & 7;
  }
  v27 = v57;
  if ( !v57 )
    goto LABEL_40;
  v28 = *((_DWORD *)v8 + 8);
  v29 = *((_DWORD *)v8 + 12) - v14;
  v30 = (_BYTE *)(*((_QWORD *)v8 + 2) + ((__int64)(*((_DWORD *)v8 + 14) - 7) >> 3));
  v31 = v60;
  v32 = v29;
  v2 = (_BYTE *)(*((_QWORD *)v8 + 2) + ((__int64)v58 >> 3));
  v33 = *((_DWORD *)v8 + 4) + ((*((_DWORD *)v8 + 14) - 7) >> 3) - (_DWORD)v2;
  v34 = (unsigned __int8 *)(*((_QWORD *)v8 + 1) + (v32 >> 3));
  v35 = v33 + v10;
  v36 = v33 + v60;
  if ( v6 )
  {
    if ( v28 )
    {
      v39 = v33;
      v40 = v36;
      do
      {
        v41 = *v34 >> v61;
        v42 = &v34[-v39];
        --v28;
        if ( v34 != &v34[-v39] )
        {
          do
          {
            v43 = v41 | (*--v34 << v6);
            v44 = *v34;
            *v30-- = v43;
            v41 = v44 >> v61;
          }
          while ( v34 != v42 );
          v40 = v36;
        }
        v30 += v35;
        v34 += v40;
      }
      while ( v28 );
      goto LABEL_39;
    }
  }
  else if ( v28 )
  {
    v37 = v33;
    v38 = v33 - 1;
    do
    {
      memmove(&v30[-v38], &v34[-v38], v37);
      v30 += v56;
      v34 += v60;
      --v28;
    }
    while ( v28 );
LABEL_39:
    v27 = v57;
    LODWORD(v10) = v56;
    v8 = a1;
LABEL_40:
    v31 = v60;
  }
  v45 = ((_BYTE)v58 + 1) & 7;
  v46 = -1 << (8 - v45);
  if ( (((_BYTE)v58 + 1) & 7) != 0 && v27 )
  {
    v47 = *((_DWORD *)v8 + 8);
    v48 = *((_DWORD *)v8 + 13) + 1;
    v49 = v48;
    v50 = v48 & 7;
    v51 = (unsigned __int8 *)(*((_QWORD *)v8 + 1) + (v49 >> 3));
    if ( v50 <= v45 )
    {
      if ( v50 >= v45 )
      {
        for ( ; v47; --v47 )
        {
          v55 = *v51 & ~v46;
          v51 += v31;
          *v2 = v55 | v46 & *v2;
          v2 += (int)v10;
        }
      }
      else
      {
        for ( ; v47; --v47 )
        {
          v54 = *v51;
          v51 += v60;
          *v2 = v46 & *v2 | ~v46 & (v54 >> v61);
          v2 += (int)v10;
        }
      }
    }
    else
    {
      for ( ; v47; --v47 )
      {
        v52 = v51[1];
        v53 = *v51;
        v51 += v60;
        *v2 = v46 & *v2 | ~v46 & ((v53 << v6) | (v52 >> v61));
        v2 += (int)v10;
      }
    }
  }
}
