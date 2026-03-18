/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0115160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r10
  BOOL v3; // r13d
  char *v4; // rcx
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  int v9; // ebx
  int v10; // edx
  int v11; // r12d
  int v12; // esi
  char v13; // r9
  int v14; // ecx
  int v15; // r14d
  int v16; // r15d
  int v17; // r11d
  int v18; // r11d
  int v19; // eax
  _DWORD *v20; // r8
  int v21; // ebx
  __int64 v22; // rcx
  char *v23; // rdx
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // r11
  unsigned __int64 v29; // rax
  char v30; // cl
  int v31; // eax
  char v32; // r14
  __int64 v33; // r12
  __int64 v34; // r15
  char v35; // r13
  char v36; // r11
  char *v37; // r13
  unsigned __int64 v38; // rax
  _BYTE *v39; // rdx
  int v40; // r11d
  _BYTE *v41; // r8
  _BYTE *v42; // r12
  __int64 v43; // r13
  char v44; // r14
  _BYTE *v45; // rdi
  unsigned __int8 v46; // bl
  _BYTE *v47; // rcx
  unsigned __int64 v48; // rax
  _BYTE *v49; // r12
  _BYTE *v50; // rdi
  unsigned __int8 v51; // bl
  _BYTE *v52; // rcx
  unsigned __int64 v53; // rax
  _BYTE *v54; // rsi
  unsigned __int8 v55; // bl
  _BYTE *v56; // rdi
  _BYTE *v57; // rcx
  unsigned __int64 v58; // rax
  int v59; // ecx
  int v60; // r11d
  unsigned __int64 v61; // rdx
  int v62; // eax
  _BYTE *v63; // r8
  int v64; // ebx
  char v65; // r12
  unsigned __int8 v66; // r9
  _BYTE *v67; // r10
  _BYTE *v68; // rcx
  unsigned __int64 v69; // rax
  char v70; // si
  __int64 v71; // r10
  unsigned __int8 v72; // r9
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  _BYTE v75[4]; // [rsp+Ch] [rbp-75h]
  int v76; // [rsp+10h] [rbp-71h]
  int v77; // [rsp+14h] [rbp-6Dh]
  __int64 v78; // [rsp+18h] [rbp-69h]
  int v79; // [rsp+20h] [rbp-61h]
  int v80; // [rsp+24h] [rbp-5Dh]
  int v81; // [rsp+28h] [rbp-59h]
  int v82; // [rsp+30h] [rbp-51h]
  struct BLTINFO *v83; // [rsp+38h] [rbp-49h]
  __int64 v84; // [rsp+40h] [rbp-41h]
  int v85; // [rsp+50h] [rbp-31h]
  _DWORD v86[2]; // [rsp+68h] [rbp-19h]
  int v87; // [rsp+70h] [rbp-11h]
  int v88; // [rsp+74h] [rbp-Dh]
  int v89; // [rsp+78h] [rbp-9h]
  int v90; // [rsp+7Ch] [rbp-5h]
  int v91; // [rsp+80h] [rbp-1h]
  int v92; // [rsp+84h] [rbp+3h]
  int v93; // [rsp+88h] [rbp+7h]
  int v94; // [rsp+8Ch] [rbp+Bh]
  int v95; // [rsp+90h] [rbp+Fh]
  int v96; // [rsp+94h] [rbp+13h]
  int v97; // [rsp+98h] [rbp+17h]
  int v98; // [rsp+9Ch] [rbp+1Bh]
  int v99; // [rsp+A0h] [rbp+1Fh]
  int v100; // [rsp+A4h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v83 = a1;
  v3 = 1;
  v80 = 1;
  v4 = *(char **)(v1 + 16);
  v5 = 0LL;
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 1);
  do
  {
    v8 = *v4;
    v4 += 4;
    v75[v5++] = v8;
  }
  while ( v5 < 2 );
  v9 = *((_DWORD *)v2 + 12);
  v10 = *((_DWORD *)v2 + 14);
  v11 = v9 & 7;
  v79 = v11;
  v86[0] = ((v6 | (v6 << 8)) << 16) | v6 | (v6 << 8);
  v12 = v10 & 7;
  LODWORD(v84) = v12;
  v93 = v7 | (v86[0] << 8);
  v89 = v6 | (v93 << 8);
  v95 = v7 | (v89 << 8);
  v90 = v6 | (v95 << 8);
  v87 = v6 | (v90 << 8);
  v94 = v7 | (v87 << 8);
  v97 = v7 | (v94 << 8);
  v99 = v7 | (v97 << 8);
  v100 = v7 | (v99 << 8);
  v92 = v6 | (v100 << 8);
  v96 = v7 | (v92 << 8);
  v98 = v7 | (v96 << 8);
  v13 = (v9 & 7) - v12;
  v91 = v6 | (v98 << 8);
  v88 = v6 | (v91 << 8);
  v86[1] = v6 | (v88 << 8);
  if ( v11 < v12 )
    v13 += 8;
  v14 = *((_DWORD *)v2 + 7);
  v15 = *((_DWORD *)v2 + 11);
  v16 = *((_DWORD *)v2 + 10);
  v77 = (unsigned __int8)(8 - v13);
  v85 = v10 + v14;
  v17 = (v10 + v14) >> 3;
  v76 = v15;
  v81 = v16;
  if ( v17 != v10 >> 3 )
  {
    v82 = 1;
    v18 = v17 - ((v10 + 7) >> 3);
    v19 = v9 + (-v12 & 7);
    v20 = (_DWORD *)(*((_QWORD *)v2 + 2) + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    v21 = *((_DWORD *)v2 + 8);
    LODWORD(v22) = v15 - 8 * v18;
    v23 = (char *)(*((_QWORD *)v2 + 1) + ((__int64)v19 >> 3));
    v24 = v16 - v18;
    if ( v13 )
    {
      if ( !v21 )
        goto LABEL_16;
      v32 = v77;
      v33 = v18;
      v78 = v18;
      v34 = v24;
      v35 = v13;
      do
      {
        --v21;
        v36 = *v23 << v35;
        if ( v23 != &v23[v33] )
        {
          v37 = &v23[v33];
          do
          {
            v38 = (unsigned __int8)(v36 | ((unsigned __int8)*++v23 >> v32));
            *v20 = v86[v38 >> 4];
            v20[1] = v86[v38 & 0xF];
            v20 += 2;
            v36 = *v23 << v13;
          }
          while ( v23 != v37 );
          v33 = v78;
          v35 = v13;
        }
        v20 = (_DWORD *)((char *)v20 + (int)v22);
        v23 += v34;
      }
      while ( v21 );
      v12 = v84;
      v16 = v81;
    }
    else
    {
      if ( !v21 )
      {
LABEL_16:
        v14 = 8 - v12;
        v31 = 0;
        goto LABEL_17;
      }
      v22 = (int)v22;
      v84 = (int)v22;
      v25 = v24;
      v26 = v18;
      do
      {
        --v21;
        v27 = 0LL;
        v28 = v26;
        if ( v23 > &v23[v26] )
          v28 = 0LL;
        if ( v28 )
        {
          do
          {
            v29 = (unsigned __int8)*v23;
            ++v27;
            v30 = *v23++;
            *v20 = v86[v29 >> 4];
            v20[1] = v86[v30 & 0xF];
            v20 += 2;
          }
          while ( v27 != v28 );
          v22 = v84;
        }
        v20 = (_DWORD *)((char *)v20 + v22);
        v23 += v25;
      }
      while ( v21 );
    }
    v3 = v80;
    v11 = v79;
    v15 = v76;
    v2 = v83;
    goto LABEL_16;
  }
  v82 = 0;
  v3 = v14 + v11 > 8;
  v31 = 1;
LABEL_17:
  if ( v12 | v31 )
  {
    v39 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v40 = *((_DWORD *)v2 + 8);
    v41 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v11 <= v12 )
    {
      if ( !v40 )
        goto LABEL_18;
      v54 = (_BYTE *)v14;
      v78 = v14;
      do
      {
        --v40;
        v55 = *v41 << v11;
        v56 = v39;
        v57 = v54;
        if ( v39 > &v39[(_QWORD)v54] )
          v57 = 0LL;
        if ( v57 )
        {
          do
          {
            v58 = v55;
            v55 *= 2;
            *v56++ = v75[v58 >> 7];
          }
          while ( (_BYTE *)(v56 - v39) != v57 );
          v54 = (_BYTE *)v78;
        }
        v39 += v15;
        v41 += v16;
      }
      while ( v40 );
    }
    else
    {
      if ( v3 )
      {
        if ( !v40 )
          goto LABEL_18;
        v42 = (_BYTE *)v14;
        v43 = v15;
        v44 = v77;
        v78 = v14;
        do
        {
          --v40;
          v45 = v39;
          v46 = ((unsigned __int8)(*v41 << v13) | (unsigned __int8)(v41[1] >> v44)) << v12;
          v47 = v42;
          if ( v39 > &v39[(_QWORD)v42] )
            v47 = 0LL;
          if ( v47 )
          {
            do
            {
              v48 = v46;
              v46 *= 2;
              *v45++ = v75[v48 >> 7];
            }
            while ( (_BYTE *)(v45 - v39) != v47 );
            v42 = (_BYTE *)v78;
          }
          v39 += v43;
          v41 += v16;
        }
        while ( v40 );
      }
      else
      {
        if ( !v40 )
          goto LABEL_18;
        v49 = (_BYTE *)v14;
        v78 = v14;
        do
        {
          --v40;
          v50 = v39;
          v51 = *v41 << v13 << v12;
          v52 = v49;
          if ( v39 > &v39[(_QWORD)v49] )
            v52 = 0LL;
          if ( v52 )
          {
            do
            {
              v53 = v51;
              v51 *= 2;
              *v50++ = v75[v53 >> 7];
            }
            while ( (_BYTE *)(v50 - v39) != v52 );
            v49 = (_BYTE *)v78;
          }
          v39 += v15;
          v41 += v16;
        }
        while ( v40 );
      }
      v15 = v76;
    }
    v2 = v83;
  }
LABEL_18:
  if ( (v85 & 7) != 0 && v82 )
  {
    v59 = *((_DWORD *)v2 + 13) - 1;
    v60 = *((_DWORD *)v2 + 8);
    v61 = *((_QWORD *)v2 + 2) + (v85 & 0xFFFFFFFFFFFFFFF8uLL);
    v62 = ((_BYTE)v85 - 1) & 7;
    v63 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v59 >> 3));
    v64 = v62 + 1;
    if ( (v59 & 7) < v62 )
    {
      if ( v60 )
      {
        v70 = v13;
        do
        {
          --v60;
          v71 = 0LL;
          v72 = (*v63 >> v77) | (*(v63 - 1) << v70);
          v73 = v64;
          if ( v61 > v64 + v61 )
            v73 = 0LL;
          if ( v73 )
          {
            do
            {
              v74 = v72;
              v72 *= 2;
              *(_BYTE *)(v71 + v61) = v75[v74 >> 7];
              ++v71;
            }
            while ( v71 != v73 );
          }
          v61 += v15;
          v63 += v16;
        }
        while ( v60 );
      }
    }
    else if ( v60 )
    {
      v65 = v13;
      do
      {
        --v60;
        v66 = *v63 << v65;
        v67 = (_BYTE *)v61;
        v68 = (_BYTE *)v64;
        if ( v61 > v61 + v64 )
          v68 = 0LL;
        if ( v68 )
        {
          do
          {
            v69 = v66;
            v66 *= 2;
            *v67++ = v75[v69 >> 7];
          }
          while ( &v67[-v61] != v68 );
        }
        v61 += v15;
        v63 += v16;
      }
      while ( v60 );
    }
  }
}
