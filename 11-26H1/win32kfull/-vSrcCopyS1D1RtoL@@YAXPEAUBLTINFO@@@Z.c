/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x14033AA10
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r13
  __int64 v2; // r10
  _BYTE *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // r15
  unsigned int v6; // edx
  __int64 v7; // r12
  BOOL v8; // esi
  int v9; // r9d
  char v10; // r8
  char v11; // r14
  char v12; // r11
  int v13; // ecx
  int v14; // r9d
  __int64 v15; // r8
  int v16; // r10d
  _BYTE *v17; // r8
  unsigned __int8 *v18; // r9
  unsigned __int8 v19; // dl
  char v20; // bl
  char v21; // dl
  unsigned __int8 v22; // al
  char v23; // dl
  char v24; // cl
  int v25; // eax
  int v26; // r10d
  __int64 v27; // rcx
  int v28; // r14d
  _BYTE *v29; // rsi
  unsigned __int8 *v30; // rbx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  __int64 v34; // r10
  __int64 v35; // rbp
  size_t v36; // r15
  char *v37; // rbx
  char v38; // r15
  __int64 v39; // rax
  char v40; // r8
  unsigned __int8 *v41; // r9
  char v42; // al
  unsigned __int8 v43; // r8
  unsigned int v44; // edx
  char v45; // bp
  int v46; // r9d
  int v47; // eax
  __int64 v48; // r8
  unsigned int v49; // eax
  unsigned __int8 *v50; // r8
  unsigned __int8 v51; // dl
  unsigned __int8 v52; // al
  unsigned __int8 v53; // dl
  char v54; // al
  char v55; // [rsp+20h] [rbp-78h]
  int v56; // [rsp+24h] [rbp-74h]
  int v57; // [rsp+2Ch] [rbp-6Ch]
  int v58; // [rsp+30h] [rbp-68h]
  int v59; // [rsp+38h] [rbp-60h]
  __int64 v60; // [rsp+38h] [rbp-60h]
  char v62; // [rsp+A8h] [rbp+10h]
  int v63; // [rsp+B0h] [rbp+18h]
  int v64; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = *((int *)a1 + 14);
  v59 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v4 = v59 & 7;
  v5 = *((int *)a1 + 11);
  v6 = *((_DWORD *)a1 + 14) & 7;
  v7 = *((int *)a1 + 10);
  v58 = *((_DWORD *)a1 + 11);
  v8 = 1;
  v9 = *((_DWORD *)a1 + 7);
  v10 = (v59 & 7) - v6 + 8;
  if ( v4 >= v6 )
    v10 = (v59 & 7) - v6;
  v11 = 8 - v10;
  v62 = v10;
  v55 = 8 - v10;
  v56 = (int)v2 >> 3;
  v57 = v2 - v9;
  v63 = ((int)v2 - v9) >> 3;
  v12 = -1 << (7 - v6);
  v13 = v63;
  if ( v63 == (int)v2 >> 3 )
  {
    v13 = ((int)v2 - v9) >> 3;
    v12 &= 255 >> ((v57 + 1) & 7);
    if ( v4 < v6 )
      v8 = (int)(v4 - v9) < -1;
  }
  v14 = ((_BYTE)v6 + 1) & 7;
  v64 = v14;
  if ( v14 | (v13 == v56) )
  {
    v15 = v2;
    v16 = *((_DWORD *)v1 + 8);
    v17 = (_BYTE *)(*((_QWORD *)v1 + 2) + (v15 >> 3));
    v18 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)v59 >> 3));
    if ( v16 )
    {
      if ( v4 <= v6 )
      {
        if ( v4 >= v6 )
        {
          do
          {
            v24 = *v17 & ~v12 | v12 & *v18;
            v18 += v7;
            *v17 = v24;
            v17 += v5;
            --v16;
          }
          while ( v16 );
        }
        else
        {
          v20 = ~v12;
          if ( v8 )
          {
            do
            {
              v21 = *(v18 - 1);
              v22 = *v18;
              v18 += v7;
              *v17 = *v17 & v20 | v12 & ((v22 >> v11) | (v21 << v62));
              v17 += v5;
              --v16;
            }
            while ( v16 );
          }
          else
          {
            do
            {
              v23 = *v17 & v20 | v12 & (*v18 >> v11);
              v18 += v7;
              *v17 = v23;
              v17 += v5;
              --v16;
            }
            while ( v16 );
          }
          v1 = a1;
        }
      }
      else
      {
        do
        {
          v19 = *v18;
          v18 += v7;
          *v17 = *v17 & ~v12 | v12 & (v19 << v62);
          v17 += v5;
          --v16;
        }
        while ( v16 );
      }
    }
    v10 = v62;
    v14 = v64;
  }
  v25 = v56;
  v26 = v63;
  if ( v63 != v56 )
  {
    v27 = *((_QWORD *)v1 + 2);
    v28 = *((_DWORD *)v1 + 8);
    v29 = (_BYTE *)(v27 + ((__int64)(*((_DWORD *)v1 + 14) - 7) >> 3));
    v3 = (_BYTE *)(v27 + ((__int64)v57 >> 3));
    v30 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 12) - v14) >> 3));
    v31 = ((*((_DWORD *)v1 + 14) - 7) >> 3) - (v57 >> 3);
    v32 = v31 + v5;
    v33 = v31 + v7;
    if ( v28 )
    {
      v34 = v31;
      if ( v10 )
      {
        v38 = v10;
        v39 = v32;
        do
        {
          v40 = *v30 >> v55;
          v41 = &v30[-v34];
          --v28;
          if ( v30 != &v30[-v34] )
          {
            do
            {
              v42 = v40 | (*--v30 << v38);
              v43 = *v30;
              *v29-- = v42;
              v40 = v43 >> v55;
            }
            while ( v30 != v41 );
            v39 = v32;
          }
          v29 += v39;
          v30 += v33;
        }
        while ( v28 );
        LODWORD(v5) = v58;
      }
      else
      {
        v60 = v5;
        v35 = v31 - 1;
        v36 = v31;
        v37 = (char *)&v30[-v35];
        do
        {
          memmove(&v29[-v35], v37, v36);
          v29 += v60;
          v37 += (int)v7;
          --v28;
        }
        while ( v28 );
        v1 = a1;
        LODWORD(v5) = v60;
      }
      v26 = v63;
    }
    v11 = v55;
    v25 = v56;
  }
  v44 = ((_BYTE)v57 + 1) & 7;
  v45 = -1 << (8 - v44);
  if ( (((_BYTE)v57 + 1) & 7) != 0 && v26 != v25 )
  {
    v46 = *((_DWORD *)v1 + 8);
    v47 = *((_DWORD *)v1 + 13) + 1;
    v48 = v47;
    v49 = v47 & 7;
    v50 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + (v48 >> 3));
    if ( v46 )
    {
      if ( v49 <= v44 )
      {
        if ( v49 >= v44 )
        {
          do
          {
            v54 = ~v45 & *v50;
            v50 += (int)v7;
            *v3 = v54 | v45 & *v3;
            v3 += (int)v5;
            --v46;
          }
          while ( v46 );
        }
        else
        {
          do
          {
            v53 = *v50;
            v50 += (int)v7;
            *v3 = v45 & *v3 | ~v45 & (v53 >> v11);
            v3 += (int)v5;
            --v46;
          }
          while ( v46 );
        }
      }
      else
      {
        do
        {
          v51 = v50[1];
          v52 = *v50;
          v50 += (int)v7;
          *v3 = v45 & *v3 | ~v45 & ((v52 << v62) | (v51 >> v11));
          v3 += (int)v5;
          --v46;
        }
        while ( v46 );
      }
    }
  }
}
