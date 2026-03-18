/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1401ECAD0
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rbx
  int v2; // r10d
  int v3; // r15d
  _QWORD *v4; // r11
  int v5; // r12d
  _QWORD *v6; // rdi
  int *v7; // rsi
  char *v8; // rdx
  char v9; // r9
  char v10; // r8
  int v11; // r8d
  unsigned int v12; // r13d
  char v13; // r14
  char v14; // r9
  int v15; // edx
  __int64 v16; // rdx
  int v17; // eax
  _BYTE *v18; // r9
  int v19; // r10d
  __int64 v20; // rcx
  _BYTE *v21; // r8
  __int64 v22; // rax
  __int64 v23; // r13
  _BYTE *v24; // rdx
  unsigned int v25; // ecx
  unsigned __int8 v26; // cl
  __int64 v27; // r12
  _BYTE *v28; // r13
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rdx
  int v31; // r10d
  int *v32; // r8
  int v33; // edi
  _BYTE *v34; // r9
  int v35; // r11d
  unsigned __int8 v36; // al
  int v37; // ecx
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  int v40; // ecx
  unsigned __int64 v41; // rdx
  int v42; // r10d
  int *v43; // r8
  char *v44; // r9
  int v45; // r11d
  char v46; // al
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  int v49; // ecx
  unsigned __int8 v50; // al
  int v51; // ecx
  unsigned __int64 v52; // rdx
  int v53; // ecx
  int v54; // [rsp+0h] [rbp-58h]
  char v55; // [rsp+4h] [rbp-54h]
  __int64 v56; // [rsp+10h] [rbp-48h]
  int v57; // [rsp+18h] [rbp-40h]
  __int64 v58; // [rsp+18h] [rbp-40h]
  unsigned int v59; // [rsp+20h] [rbp-38h]
  int v60; // [rsp+24h] [rbp-34h]
  int v61; // [rsp+28h] [rbp-30h]
  __int64 v62; // [rsp+40h] [rbp-18h]
  char v64; // [rsp+A8h] [rbp+50h]
  char v65; // [rsp+B0h] [rbp+58h]
  char v66; // [rsp+B1h] [rbp+59h]
  char v67; // [rsp+B2h] [rbp+5Ah]
  char v68; // [rsp+B3h] [rbp+5Bh]
  unsigned int v69; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 12);
  v61 = *((_DWORD *)a1 + 13);
  v3 = *((_DWORD *)a1 + 11);
  v4 = (_QWORD *)((char *)a1 + 16);
  v5 = *((_DWORD *)a1 + 10);
  v6 = (_QWORD *)((char *)a1 + 8);
  v7 = (int *)((char *)a1 + 32);
  v8 = *(char **)(*(_QWORD *)a1 + 16LL);
  v57 = v5;
  v9 = v8[4];
  v10 = *v8;
  LOBYTE(v8) = 16 * *v8;
  v65 = (unsigned __int8)v8 | v10;
  v66 = (unsigned __int8)v8 | v9;
  v59 = v2 & 7;
  v67 = (16 * v9) | v10;
  v11 = *((_DWORD *)a1 + 14);
  v12 = v11 & 7;
  v68 = (16 * v9) | v9;
  v69 = v12;
  v13 = (v2 & 7) - (v11 & 7) + 8;
  if ( v59 >= v12 )
    v13 = (v2 & 7) - v12;
  v55 = 8 - v13;
  v60 = *((_DWORD *)a1 + 7);
  v14 = v60 + v11;
  v15 = (v60 + v11) >> 3;
  v54 = v60 + v11;
  if ( v15 == v11 >> 3 )
  {
    v26 = 0;
    v64 = 0;
    goto LABEL_13;
  }
  v64 = 1;
  LODWORD(v16) = v15 - ((v11 + 7) >> 3);
  v17 = v2 + (-v12 & 7);
  v18 = (_BYTE *)(*v4 + (((__int64)(v11 + 7) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
  v19 = *v7;
  LODWORD(v20) = v3 - 4 * v16;
  v21 = (_BYTE *)(*v6 + ((__int64)v17 >> 3));
  LODWORD(v22) = v5 - v16;
  if ( v13 )
  {
    if ( !v19 )
      goto LABEL_12;
    v16 = (int)v16;
    v62 = (int)v16;
    v27 = (int)v22;
    do
    {
      v28 = &v21[v16];
      --v19;
      v29 = *v21 << v13;
      if ( v21 != &v21[v16] )
      {
        do
        {
          v30 = v29 | ((unsigned __int64)(unsigned __int8)*++v21 >> v55);
          *v18 = *(&v65 + (v30 >> 6));
          v18[1] = *(&v65 + ((v30 >> 4) & 3));
          v18[2] = *(&v65 + ((v30 >> 2) & 3));
          v18[3] = *(&v65 + (v30 & 3));
          v18 += 4;
          v29 = *v21 << v13;
        }
        while ( v21 != v28 );
        v16 = v62;
      }
      v18 += (int)v20;
      v21 += v27;
    }
    while ( v19 );
    v1 = a1;
    v5 = v57;
    goto LABEL_11;
  }
  if ( v19 )
  {
    v20 = (int)v20;
    v22 = (int)v22;
    v58 = (int)v20;
    v56 = (int)v22;
    v23 = (int)v16;
    do
    {
      --v19;
      v24 = &v21[v23];
      if ( v21 != &v21[v23] )
      {
        do
        {
          v25 = (unsigned __int8)*v21++;
          *v18 = *(&v65 + ((unsigned __int64)v25 >> 6));
          v18[1] = *(&v65 + ((v25 >> 4) & 3));
          v18[2] = *(&v65 + ((v25 >> 2) & 3));
          v18[3] = *(&v65 + (v25 & 3));
          v18 += 4;
        }
        while ( v21 != v24 );
        v20 = v58;
        v22 = v56;
      }
      v18 += v20;
      v21 += v22;
    }
    while ( v19 );
LABEL_11:
    v12 = v69;
  }
LABEL_12:
  v26 = 1;
  v14 = v54;
LABEL_13:
  if ( v12 | v26 ^ 1 )
  {
    v42 = dword_140370FF8[v12];
    if ( !v26 )
      v42 &= dword_140370F80[v14 & 7];
    v43 = (int *)(*v4 + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v44 = (char *)(*v6 + ((__int64)*((int *)v1 + 12) >> 3));
    v45 = *v7;
    if ( *v7 )
    {
      if ( v59 < v12 )
      {
        do
        {
          v52 = (unsigned __int64)(unsigned __int8)*v44 >> v55;
          v44 += v5;
          v53 = ~v42 & *v43;
          LOBYTE(v69) = *(&v65 + (v52 >> 6));
          BYTE1(v69) = *(&v65 + ((v52 >> 4) & 3));
          BYTE2(v69) = *(&v65 + ((v52 >> 2) & 3));
          HIBYTE(v69) = *(&v65 + (v52 & 3));
          v69 &= v42;
          *v43 = v69 | v53;
          v43 = (int *)((char *)v43 + v3);
          --v45;
        }
        while ( v45 );
      }
      else
      {
        if ( (int)(v59 + v60) <= 8 )
        {
          do
          {
            v50 = *v44 << v13;
            v44 += v5;
            LOBYTE(v69) = *(&v65 + ((unsigned __int64)v50 >> 6));
            BYTE1(v69) = *(&v65 + (((unsigned __int64)v50 >> 4) & 3));
            BYTE2(v69) = *(&v65 + (((unsigned __int64)v50 >> 2) & 3));
            v51 = *v43;
            HIBYTE(v69) = *(&v65 + (v50 & 3));
            v69 &= v42;
            *v43 = v69 | ~v42 & v51;
            v43 = (int *)((char *)v43 + v3);
            --v45;
          }
          while ( v45 );
          goto LABEL_42;
        }
        do
        {
          v46 = *v44;
          v47 = (unsigned __int8)v44[1];
          v44 += v5;
          v48 = (unsigned __int8)(v46 << v13) | (v47 >> v55);
          v49 = ~v42 & *v43;
          LOBYTE(v69) = *(&v65 + (v48 >> 6));
          BYTE1(v69) = *(&v65 + ((v48 >> 4) & 3));
          BYTE2(v69) = *(&v65 + ((v48 >> 2) & 3));
          HIBYTE(v69) = *(&v65 + (v48 & 3));
          v69 &= v42;
          *v43 = v69 | v49;
          v43 = (int *)((char *)v43 + v3);
          --v45;
        }
        while ( v45 );
      }
      v1 = a1;
LABEL_42:
      v26 = v64;
    }
  }
  if ( (v54 & 7) != 0 )
  {
    if ( v26 )
    {
      v31 = *((_DWORD *)v1 + 8);
      v32 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v54 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
      v33 = dword_140370F80[v54 & 7];
      v34 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 13) - 1) >> 3));
      if ( v31 )
      {
        v35 = ~v33;
        if ( (((_BYTE)v61 - 1) & 7u) < (((_BYTE)v54 - 1) & 7u) )
        {
          do
          {
            v38 = (unsigned __int8)(*(v34 - 1) << v13);
            v39 = (unsigned __int8)*v34;
            v34 += v5;
            v40 = *v32 & v35;
            v41 = (v39 >> v55) | v38;
            LOBYTE(v69) = *(&v65 + (v41 >> 6));
            BYTE1(v69) = *(&v65 + ((v41 >> 4) & 3));
            BYTE2(v69) = *(&v65 + ((v41 >> 2) & 3));
            HIBYTE(v69) = *(&v65 + (v41 & 3));
            v69 &= v33;
            *v32 = v69 | v40;
            v32 = (int *)((char *)v32 + v3);
            --v31;
          }
          while ( v31 );
        }
        else
        {
          do
          {
            v36 = *v34 << v13;
            v34 += v5;
            LOBYTE(v69) = *(&v65 + ((unsigned __int64)v36 >> 6));
            BYTE1(v69) = *(&v65 + (((unsigned __int64)v36 >> 4) & 3));
            BYTE2(v69) = *(&v65 + (((unsigned __int64)v36 >> 2) & 3));
            v37 = *v32 & v35;
            HIBYTE(v69) = *(&v65 + (v36 & 3));
            v69 &= v33;
            *v32 = v69 | v37;
            v32 = (int *)((char *)v32 + v3);
            --v31;
          }
          while ( v31 );
        }
      }
    }
  }
}
