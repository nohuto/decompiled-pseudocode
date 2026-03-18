/*
 * XREFs of ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x1401C3940
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  int v1; // r8d
  struct BLTINFO *v2; // r10
  unsigned int v3; // r11d
  BOOL v4; // r13d
  int v5; // r9d
  unsigned int v6; // ebx
  int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned int v10; // r14d
  int v11; // esi
  int v12; // eax
  int v13; // edx
  unsigned __int8 v14; // dl
  int v15; // r11d
  __int64 v16; // rdx
  _BYTE *v17; // r8
  _BYTE *v18; // r9
  int v19; // eax
  int v20; // r11d
  int v21; // ebx
  _BYTE *v22; // r8
  unsigned int v23; // r9d
  unsigned int v24; // ebx
  _BYTE *v25; // rdx
  __int64 v26; // rdi
  _BYTE *v27; // r10
  unsigned __int8 k; // r9
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r14
  char v32; // r10
  __int64 v33; // r13
  char v34; // r15
  unsigned __int8 v35; // al
  _BYTE *v36; // rsi
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  _BYTE *v41; // r13
  unsigned int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int8 v45; // r10
  _BYTE *j; // r9
  unsigned __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // r9d
  _BYTE *v50; // r8
  _BYTE *v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  unsigned __int8 v54; // bl
  _BYTE *v55; // r11
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  char v58; // r10
  __int64 v59; // r14
  _BYTE *v60; // r14
  _BYTE *v61; // rdi
  unsigned __int8 i; // r11
  unsigned __int64 v63; // rcx
  __int64 v64; // rcx
  char v65; // r10
  __int64 v66; // rsi
  __int64 v67; // rax
  _BYTE *v68; // rdi
  unsigned __int8 v69; // r11
  unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // [rsp+0h] [rbp-50h]
  char v73; // [rsp+8h] [rbp-48h]
  int v74; // [rsp+Ch] [rbp-44h]
  int v75; // [rsp+10h] [rbp-40h]
  int v76; // [rsp+14h] [rbp-3Ch]
  unsigned int v77; // [rsp+18h] [rbp-38h]
  int v78; // [rsp+1Ch] [rbp-34h]
  unsigned int v79; // [rsp+20h] [rbp-30h]
  __int64 v80; // [rsp+28h] [rbp-28h]
  struct BLTINFO *v81; // [rsp+30h] [rbp-20h]
  __int64 v82; // [rsp+38h] [rbp-18h]
  struct BLTINFO *v83; // [rsp+40h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = 1;
  v5 = *((_DWORD *)a1 + 12);
  v6 = v1 & 7;
  v83 = a1;
  v7 = *((_DWORD *)a1 + 11);
  v8 = *((int *)a1 + 10);
  v79 = v1 + v3;
  v9 = *(_QWORD *)a1;
  v10 = v5 & 7;
  v75 = 1;
  v77 = v10;
  v78 = v7;
  v72 = **(_QWORD **)(v9 + 16);
  v11 = (unsigned __int8)((v5 & 7) - (v1 & 7) + 8);
  v12 = 8;
  if ( v10 >= v6 )
    v11 = (unsigned __int8)((v5 & 7) - v6);
  v13 = (int)(v1 + v3) >> 3;
  LOBYTE(v12) = 8 - v11;
  v74 = v11;
  v76 = v12;
  if ( v13 == v1 >> 3 )
  {
    v14 = 0;
    v73 = 0;
    v4 = (int)(v3 + v10) > 8;
  }
  else
  {
    v15 = *((_DWORD *)a1 + 8);
    v73 = 1;
    LODWORD(v16) = v13 - ((v1 + 7) >> 3);
    v17 = (_BYTE *)(*((_QWORD *)a1 + 2) + (int)(3 * ((v1 + 7) & 0xFFFFFFF8)));
    LODWORD(a1) = v7 - 24 * v16;
    v18 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v5 + (-v6 & 7)) >> 3));
    v19 = v8 - v16;
    if ( v15 )
    {
      v16 = (int)v16;
      v31 = v19;
      a1 = (struct BLTINFO *)(int)a1;
      v82 = (int)v16;
      v81 = (struct BLTINFO *)(int)a1;
      v80 = v19;
      if ( (_BYTE)v11 )
      {
        v32 = v76;
        v33 = (int)a1;
        v34 = v11;
        do
        {
          v35 = *v18 << v34;
          --v15;
          if ( v18 != &v18[v16] )
          {
            v36 = &v18[v16];
            do
            {
              v37 = v35 | ((unsigned __int64)(unsigned __int8)*++v18 >> v32);
              v38 = (v37 >> 5) & 4;
              *v17 = *((_BYTE *)&v72 + v38);
              v17[1] = *((_BYTE *)&v72 + v38 + 1);
              v17[2] = *((_BYTE *)&v72 + v38 + 2);
              v17[3] = *((_BYTE *)&v72 + ((v37 >> 4) & 4));
              v17[4] = *((_BYTE *)&v72 + ((v37 >> 4) & 4) + 1);
              v17[5] = *((_BYTE *)&v72 + ((v37 >> 4) & 4) + 2);
              v17[6] = *((_BYTE *)&v72 + ((v37 >> 3) & 4));
              v17[7] = *((_BYTE *)&v72 + ((v37 >> 3) & 4) + 1);
              v17[8] = *((_BYTE *)&v72 + ((v37 >> 3) & 4) + 2);
              v17[9] = *((_BYTE *)&v72 + ((v37 >> 2) & 4));
              v17[10] = *((_BYTE *)&v72 + ((v37 >> 2) & 4) + 1);
              v17[11] = *((_BYTE *)&v72 + ((v37 >> 2) & 4) + 2);
              v17[12] = *((_BYTE *)&v72 + ((v37 >> 1) & 4));
              v17[13] = *((_BYTE *)&v72 + ((v37 >> 1) & 4) + 1);
              v17[14] = *((_BYTE *)&v72 + ((v37 >> 1) & 4) + 2);
              v17[15] = *((_BYTE *)&v72 + (v37 & 4));
              v17[16] = *((_BYTE *)&v72 + (v37 & 4) + 1);
              v17[17] = *((_BYTE *)&v72 + (v37 & 4) + 2);
              v39 = v37 & 2;
              v40 = v37 & 1;
              v17[18] = *((_BYTE *)&v72 + 2 * v39);
              v17[19] = *((_BYTE *)&v72 + 2 * v39 + 1);
              v17[20] = *((_BYTE *)&v72 + 2 * v39 + 2);
              v17[21] = *((_BYTE *)&v72 + 4 * v40);
              v17[22] = *((_BYTE *)&v72 + 4 * v40 + 1);
              v17[23] = *((_BYTE *)&v72 + 4 * v40 + 2);
              v17 += 24;
              v35 = *v18 << v34;
            }
            while ( v18 != v36 );
            v31 = v80;
            v16 = v82;
          }
          v17 += v33;
          v18 += v31;
        }
        while ( v15 );
        v2 = v83;
        LOBYTE(v11) = v74;
        v7 = v78;
      }
      else
      {
        do
        {
          --v15;
          if ( v18 != &v18[v16] )
          {
            v41 = &v18[v16];
            do
            {
              v42 = (unsigned __int8)*v18++;
              *v17 = *((_BYTE *)&v72 + ((v42 >> 5) & 4));
              v17[1] = *((_BYTE *)&v72 + ((v42 >> 5) & 4) + 1);
              v17[2] = *((_BYTE *)&v72 + ((v42 >> 5) & 4) + 2);
              v17[3] = *((_BYTE *)&v72 + ((v42 >> 4) & 4));
              v17[4] = *((_BYTE *)&v72 + ((v42 >> 4) & 4) + 1);
              v17[5] = *((_BYTE *)&v72 + ((v42 >> 4) & 4) + 2);
              v17[6] = *((_BYTE *)&v72 + ((v42 >> 3) & 4));
              v17[7] = *((_BYTE *)&v72 + ((v42 >> 3) & 4) + 1);
              v17[8] = *((_BYTE *)&v72 + ((v42 >> 3) & 4) + 2);
              v17[9] = *((_BYTE *)&v72 + ((v42 >> 2) & 4));
              v17[10] = *((_BYTE *)&v72 + ((v42 >> 2) & 4) + 1);
              v17[11] = *((_BYTE *)&v72 + ((v42 >> 2) & 4) + 2);
              v17[12] = *((_BYTE *)&v72 + ((v42 >> 1) & 4));
              v17[13] = *((_BYTE *)&v72 + ((v42 >> 1) & 4) + 1);
              v17[14] = *((_BYTE *)&v72 + ((v42 >> 1) & 4) + 2);
              v17[15] = *((_BYTE *)&v72 + (v42 & 4));
              v17[16] = *((_BYTE *)&v72 + (v42 & 4) + 1);
              v17[17] = *((_BYTE *)&v72 + (v42 & 4) + 2);
              v43 = v42 & 2;
              v44 = v42 & 1;
              v17[18] = *((_BYTE *)&v72 + 2 * v43);
              v17[19] = *((_BYTE *)&v72 + 2 * v43 + 1);
              v17[20] = *((_BYTE *)&v72 + 2 * v43 + 2);
              v17[21] = *((_BYTE *)&v72 + 4 * v44);
              v17[22] = *((_BYTE *)&v72 + 4 * v44 + 1);
              v17[23] = *((_BYTE *)&v72 + 4 * v44 + 2);
              v17 += 24;
            }
            while ( v18 != v41 );
            a1 = v81;
            v16 = v82;
          }
          v17 = &v17[(_QWORD)a1];
          v18 += v19;
        }
        while ( v15 );
      }
      v4 = v75;
      v10 = v77;
    }
    v14 = v73;
    v3 = 8 - v6;
  }
  if ( v6 | v14 ^ 1 )
  {
    v49 = *((_DWORD *)v2 + 8);
    v50 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v51 = (_BYTE *)(*((_QWORD *)v2 + 2) + 3 * *((_DWORD *)v2 + 14));
    if ( v49 )
    {
      if ( v10 > v6 )
      {
        if ( v4 )
        {
          v58 = v76;
          v75 = (unsigned __int8)v11;
          v59 = (int)(3 * v3);
          v82 = v59;
          do
          {
            --v49;
            v60 = &v51[v59];
            v61 = v51;
            for ( i = ((unsigned __int8)(*v50 << v11) | (unsigned __int8)(v50[1] >> v58)) << v6; v61 != v60; v61 += 3 )
            {
              v63 = i;
              i *= 2;
              v64 = (v63 >> 5) & 4;
              *v61 = *((_BYTE *)&v72 + v64);
              v61[1] = *((_BYTE *)&v72 + v64 + 1);
              v61[2] = *((_BYTE *)&v72 + v64 + 2);
            }
            v59 = v82;
            v51 += v7;
            v50 += v8;
          }
          while ( v49 );
          v2 = v83;
          v7 = v78;
        }
        else
        {
          v65 = v11;
          v66 = (int)(3 * v3);
          v67 = v8;
          do
          {
            --v49;
            v68 = v51;
            v69 = *v50 << v65 << v6;
            if ( v51 != &v51[v66] )
            {
              do
              {
                v70 = v69;
                v69 *= 2;
                v71 = (v70 >> 5) & 4;
                *v68 = *((_BYTE *)&v72 + v71);
                v68[1] = *((_BYTE *)&v72 + v71 + 1);
                v68[2] = *((_BYTE *)&v72 + v71 + 2);
                v68 += 3;
              }
              while ( v68 != &v51[v66] );
              v67 = v8;
            }
            v51 += v7;
            v50 += v67;
          }
          while ( v49 );
          v2 = v83;
        }
      }
      else
      {
        v52 = (int)(3 * v3);
        v53 = v8;
        do
        {
          --v49;
          v54 = *v50 << v10;
          v55 = v51;
          if ( v51 != &v51[v52] )
          {
            do
            {
              v56 = v54;
              v54 *= 2;
              v57 = (v56 >> 5) & 4;
              *v55 = *((_BYTE *)&v72 + v57);
              v55[1] = *((_BYTE *)&v72 + v57 + 1);
              v55[2] = *((_BYTE *)&v72 + v57 + 2);
              v55 += 3;
            }
            while ( v55 != &v51[v52] );
            v53 = v8;
          }
          v51 += v7;
          v50 += v53;
        }
        while ( v49 );
      }
      LOBYTE(v11) = v74;
    }
    v14 = v73;
  }
  if ( (v79 & 7) != 0 )
  {
    if ( v14 )
    {
      v20 = *((_DWORD *)v2 + 8);
      v21 = *((_DWORD *)v2 + 13) - 1;
      v22 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v21 >> 3));
      v23 = ((_BYTE)v79 - 1) & 7;
      v24 = v21 & 7;
      v25 = (_BYTE *)(*((_QWORD *)v2 + 2) + (int)(3 * (v79 & 0xFFFFFFF8)));
      if ( v20 )
      {
        v26 = 3 * (v23 + 1);
        if ( v24 >= v23 )
        {
          do
          {
            --v20;
            v45 = *v22 << v11;
            for ( j = v25; j != &v25[v26]; j += 3 )
            {
              v47 = v45;
              v45 *= 2;
              v48 = (v47 >> 5) & 4;
              *j = *((_BYTE *)&v72 + v48);
              j[1] = *((_BYTE *)&v72 + v48 + 1);
              j[2] = *((_BYTE *)&v72 + v48 + 2);
            }
            v25 += v7;
            v22 += v8;
          }
          while ( v20 );
        }
        else
        {
          do
          {
            --v20;
            v27 = v25;
            for ( k = (*v22 >> v76) | (*(v22 - 1) << v11); v27 != &v25[v26]; v27 += 3 )
            {
              v29 = k;
              k *= 2;
              v30 = (v29 >> 5) & 4;
              *v27 = *((_BYTE *)&v72 + v30);
              v27[1] = *((_BYTE *)&v72 + v30 + 1);
              v27[2] = *((_BYTE *)&v72 + v30 + 2);
            }
            v25 += v7;
            v22 += v8;
          }
          while ( v20 );
        }
      }
    }
  }
}
