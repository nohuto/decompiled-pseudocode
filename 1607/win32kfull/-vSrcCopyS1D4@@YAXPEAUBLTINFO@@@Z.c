/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C44C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r11
  char *v2; // rdx
  char v3; // r9
  char v4; // r8
  char v5; // al
  int v6; // edx
  int v7; // r15d
  int v8; // ecx
  int v9; // edi
  char v10; // r9
  int v11; // esi
  int v12; // r13d
  __int64 v13; // r12
  char v14; // r10
  int v15; // ebx
  int v16; // esi
  int v17; // r14d
  int v18; // ecx
  int v19; // ebx
  _BYTE *v20; // r10
  __int64 v21; // rcx
  _BYTE *v22; // rdx
  int v23; // eax
  __int64 v24; // r11
  __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // r15
  _BYTE *v33; // r14
  char v34; // bl
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // r14d
  int v38; // ebx
  BOOL v39; // ecx
  int *v40; // r10
  char *v41; // rsi
  char v42; // al
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // dl
  int v45; // ecx
  unsigned __int8 v46; // al
  int v47; // ecx
  unsigned __int8 v48; // al
  int v49; // ecx
  int *v50; // r10
  int v51; // edi
  unsigned __int8 *v52; // rbx
  int v53; // r11d
  unsigned __int8 v54; // al
  int v55; // ecx
  unsigned __int8 v56; // al
  char v57; // dl
  unsigned __int8 v58; // dl
  int v59; // ecx
  int v60; // [rsp+0h] [rbp-38h]
  char v61; // [rsp+4h] [rbp-34h]
  int v62; // [rsp+Ch] [rbp-2Ch]
  int v63; // [rsp+10h] [rbp-28h]
  int v64; // [rsp+14h] [rbp-24h]
  __int64 v65; // [rsp+18h] [rbp-20h]
  __int64 v66; // [rsp+20h] [rbp-18h]
  char v68; // [rsp+90h] [rbp+58h]
  char v69; // [rsp+91h] [rbp+59h]
  char v70; // [rsp+92h] [rbp+5Ah]
  char v71; // [rsp+93h] [rbp+5Bh]
  int v72; // [rsp+98h] [rbp+60h]

  v1 = a1;
  v64 = *((_DWORD *)a1 + 13);
  v2 = *(char **)(*(_QWORD *)a1 + 16LL);
  v3 = v2[4];
  v4 = *v2;
  v5 = 16 * *v2;
  v69 = v3 | v5;
  v6 = *((_DWORD *)a1 + 12);
  v7 = v6 & 7;
  v68 = v4 | v5;
  v72 = v7;
  v71 = v3 | (16 * v3);
  v8 = *((_DWORD *)a1 + 14);
  v9 = v8 & 7;
  v70 = v4 | (16 * v3);
  v10 = (v6 & 7) - (v8 & 7);
  if ( v7 < v9 )
    v10 += 8;
  v11 = *((_DWORD *)v1 + 7);
  v12 = *((_DWORD *)v1 + 10);
  v13 = *((int *)v1 + 11);
  v61 = 8 - v10;
  v14 = v8 + v11;
  v15 = (v8 + v11) >> 3;
  v63 = v11;
  v62 = v8 + v11;
  if ( v15 != v8 >> 3 )
  {
    v16 = *((_DWORD *)v1 + 8);
    v17 = 1;
    v18 = v8 + 7;
    v60 = 1;
    v19 = v15 - (v18 >> 3);
    v20 = (_BYTE *)(*((_QWORD *)v1 + 2) + (((__int64)v18 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    LODWORD(v21) = v13 - 4 * v19;
    v22 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(v6 + (-v9 & 7)) >> 3));
    v23 = v12 - v19;
    if ( v10 )
    {
      if ( v16 )
      {
        v30 = v23;
        v31 = (int)v21;
        v32 = v19;
        v65 = (int)v21;
        do
        {
          v33 = &v22[v32];
          --v16;
          v34 = *v22 << v10;
          if ( v22 != &v22[v32] )
          {
            do
            {
              v35 = (unsigned __int8)(v34 | (*++v22 >> v61));
              *v20 = *(&v68 + ((unsigned __int64)(unsigned __int8)(v34 | (*v22 >> v61)) >> 6));
              v20[1] = *(&v68 + ((v35 >> 4) & 3));
              v20[2] = *(&v68 + ((v35 >> 2) & 3));
              v20[3] = *(&v68 + (v35 & 3));
              v20 += 4;
              v34 = *v22 << v10;
            }
            while ( v22 != v33 );
            v31 = v65;
          }
          v20 += v31;
          v22 += v30;
        }
        while ( v16 );
        goto LABEL_20;
      }
    }
    else if ( v16 )
    {
      v21 = (int)v21;
      v66 = (int)v21;
      v24 = v23;
      v25 = v19;
      do
      {
        --v16;
        v26 = 0LL;
        v27 = v25;
        if ( v22 > &v22[v25] )
          v27 = 0LL;
        if ( v27 )
        {
          do
          {
            v28 = (unsigned __int8)*v22;
            ++v26;
            v29 = (unsigned __int8)*v22++;
            *v20 = *(&v68 + (v28 >> 6));
            v20[1] = *(&v68 + ((v29 >> 4) & 3));
            v20[2] = *(&v68 + ((v29 >> 2) & 3));
            v20[3] = *(&v68 + (v29 & 3));
            v20 += 4;
          }
          while ( v26 != v27 );
          v21 = v66;
        }
        v20 += v21;
        v22 += v24;
      }
      while ( v16 );
LABEL_20:
      v7 = v72;
      v17 = 1;
      v1 = a1;
    }
    v14 = v62;
    v36 = 0;
    v11 = v63;
    goto LABEL_23;
  }
  v17 = 0;
  v60 = 0;
  v36 = 1;
LABEL_23:
  if ( v9 | v36 )
  {
    v37 = dword_1C02F29D8[v9];
    if ( !v60 )
      v37 &= dword_1C02F29B8[v14 & 7];
    v38 = *((_DWORD *)v1 + 8);
    v39 = v11 + v7 > 8;
    v40 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v41 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( v7 < v9 )
    {
      for ( ; v38; --v38 )
      {
        v48 = (unsigned __int8)*v41 >> v61;
        v41 += v12;
        LOBYTE(v72) = *(&v68 + ((unsigned __int64)v48 >> 6));
        BYTE1(v72) = *(&v68 + (((unsigned __int64)v48 >> 4) & 3));
        BYTE2(v72) = *(&v68 + (((unsigned __int64)v48 >> 2) & 3));
        v49 = *v40 & ~v37;
        HIBYTE(v72) = *(&v68 + (v48 & 3));
        v72 &= v37;
        *v40 = v72 | v49;
        v40 = (int *)((char *)v40 + v13);
      }
    }
    else if ( v39 )
    {
      if ( v38 )
      {
        do
        {
          v42 = *v41;
          v43 = v41[1];
          v41 += v12;
          v44 = (v42 << v10) | (v43 >> v61);
          LOBYTE(v72) = *(&v68 + ((unsigned __int64)v44 >> 6));
          BYTE1(v72) = *(&v68 + (((unsigned __int64)v44 >> 4) & 3));
          BYTE2(v72) = *(&v68 + (((unsigned __int64)v44 >> 2) & 3));
          v45 = *v40 & ~v37;
          HIBYTE(v72) = *(&v68 + (v44 & 3));
          v72 &= v37;
          *v40 = v72 | v45;
          v40 = (int *)((char *)v40 + v13);
          --v38;
        }
        while ( v38 );
        v1 = a1;
      }
    }
    else if ( v38 )
    {
      do
      {
        v46 = *v41 << v10;
        v41 += v12;
        LOBYTE(v72) = *(&v68 + ((unsigned __int64)v46 >> 6));
        BYTE1(v72) = *(&v68 + (((unsigned __int64)v46 >> 4) & 3));
        BYTE2(v72) = *(&v68 + (((unsigned __int64)v46 >> 2) & 3));
        v47 = *v40 & ~v37;
        HIBYTE(v72) = *(&v68 + (v46 & 3));
        v72 &= v37;
        *v40 = v72 | v47;
        v40 = (int *)((char *)v40 + v13);
        --v38;
      }
      while ( v38 );
      v1 = a1;
    }
    v17 = v60;
  }
  if ( (v62 & 7) != 0 && v17 )
  {
    v50 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v62 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v51 = dword_1C02F29B8[v62 & 7];
    v52 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 13) - 1) >> 3));
    v53 = *((_DWORD *)v1 + 8);
    if ( ((v64 - 1) & 7) < ((v62 - 1) & 7) )
    {
      for ( ; v53; --v53 )
      {
        v56 = *v52;
        v57 = *(v52 - 1);
        v52 += v12;
        v58 = (v56 >> v61) | (v57 << v10);
        LOBYTE(v72) = *(&v68 + ((unsigned __int64)v58 >> 6));
        BYTE1(v72) = *(&v68 + (((unsigned __int64)v58 >> 4) & 3));
        BYTE2(v72) = *(&v68 + (((unsigned __int64)v58 >> 2) & 3));
        v59 = *v50 & ~v51;
        HIBYTE(v72) = *(&v68 + (v58 & 3));
        v72 &= v51;
        *v50 = v72 | v59;
        v50 = (int *)((char *)v50 + v13);
      }
    }
    else
    {
      for ( ; v53; --v53 )
      {
        v54 = *v52 << v10;
        v52 += v12;
        LOBYTE(v72) = *(&v68 + ((unsigned __int64)v54 >> 6));
        BYTE1(v72) = *(&v68 + (((unsigned __int64)v54 >> 4) & 3));
        BYTE2(v72) = *(&v68 + (((unsigned __int64)v54 >> 2) & 3));
        v55 = *v50 & ~v51;
        HIBYTE(v72) = *(&v68 + (v54 & 3));
        v72 &= v51;
        *v50 = v72 | v55;
        v50 = (int *)((char *)v50 + v13);
      }
    }
  }
}
