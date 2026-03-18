/*
 * XREFs of ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02C4200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // ecx
  int v3; // esi
  int v4; // r8d
  int v5; // edi
  int v6; // r14d
  char v7; // r11
  int v8; // r15d
  int v9; // r13d
  int v10; // edx
  __int64 v11; // rdx
  int v12; // r15d
  _BYTE *v13; // rdi
  __int64 v14; // rcx
  _BYTE *v15; // rbx
  int v16; // eax
  __int64 v17; // r10
  __int64 v18; // r14
  __int64 v19; // r13
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r12
  char v27; // al
  _BYTE *v28; // r10
  unsigned __int8 v29; // r8
  __int64 v30; // rcx
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  _BYTE *v35; // r8
  _BYTE *v36; // rdx
  __int64 v37; // r12
  _BYTE *v38; // r12
  _BYTE *v39; // r14
  unsigned __int8 i; // di
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  char v43; // r10
  __int64 v44; // r11
  __int64 v45; // rax
  _BYTE *v46; // r14
  unsigned __int8 v47; // di
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r10
  __int64 v51; // rax
  unsigned __int8 v52; // si
  _BYTE *v53; // rdi
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  _BYTE *v57; // r8
  _BYTE *v58; // rdx
  int v59; // eax
  int v60; // r10d
  int v61; // ebx
  char v62; // r12
  __int64 v63; // rax
  unsigned __int8 v64; // bl
  _BYTE *v65; // r11
  unsigned __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // eax
  char v69; // r12
  __int64 v70; // rdi
  _BYTE *v71; // rdi
  _BYTE *v72; // rbx
  unsigned __int8 j; // r11
  unsigned __int64 v74; // rcx
  __int64 v75; // rcx
  char v76; // [rsp+0h] [rbp-70h]
  int v77; // [rsp+4h] [rbp-6Ch]
  __int64 v78; // [rsp+8h] [rbp-68h]
  __int64 v79; // [rsp+8h] [rbp-68h]
  char v80; // [rsp+10h] [rbp-60h]
  __int64 v81; // [rsp+18h] [rbp-58h]
  int v82; // [rsp+20h] [rbp-50h]
  int v83; // [rsp+24h] [rbp-4Ch]
  int v84; // [rsp+28h] [rbp-48h]
  BOOL v86; // [rsp+40h] [rbp-30h]
  __int64 v87; // [rsp+48h] [rbp-28h]
  __int64 v88; // [rsp+48h] [rbp-28h]
  int v89; // [rsp+50h] [rbp-20h]
  __int64 v90; // [rsp+58h] [rbp-18h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 14);
  v86 = 1;
  v3 = v2 & 7;
  v4 = *((_DWORD *)v1 + 12);
  v5 = *((_DWORD *)v1 + 7);
  v6 = v4 & 7;
  v83 = v6;
  v7 = (*((_BYTE *)v1 + 48) & 7) - v3;
  v89 = v5 + v2;
  v90 = **(_QWORD **)(*(_QWORD *)v1 + 16LL);
  if ( v6 < v3 )
    v7 += 8;
  v8 = *((_DWORD *)v1 + 11);
  v9 = *((_DWORD *)v1 + 10);
  v80 = 8 - v7;
  v10 = (v5 + v2) >> 3;
  v76 = v7;
  v84 = v8;
  v77 = v9;
  if ( v10 != v2 >> 3 )
  {
    v82 = 1;
    LODWORD(v11) = v10 - ((v2 + 7) >> 3);
    v12 = *((_DWORD *)v1 + 8);
    v13 = (_BYTE *)(*((_QWORD *)v1 + 2) + (int)(3 * ((v2 + 7) & 0xFFFFFFF8)));
    LODWORD(v14) = *((_DWORD *)v1 + 11) - 24 * v11;
    v15 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(v4 + (-v3 & 7)) >> 3));
    v16 = v9 - v11;
    if ( v7 )
    {
      if ( v12 )
      {
        v11 = (int)v11;
        v25 = (int)v14;
        v78 = (int)v11;
        v26 = v16;
        do
        {
          v27 = *v15 << v7;
          --v12;
          if ( v15 != &v15[v11] )
          {
            v28 = &v15[v11];
            do
            {
              v29 = v27 | (*++v15 >> v80);
              v30 = (v29 >> 5) & 4;
              *v13 = *((_BYTE *)&v90 + v30);
              v13[1] = *((_BYTE *)&v90 + v30 + 1);
              v13[2] = *((_BYTE *)&v90 + v30 + 2);
              v13[3] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 4) & 4));
              v13[4] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 4) & 4) + 1);
              v13[5] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 4) & 4) + 2);
              v13[6] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 3) & 4));
              v13[7] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 3) & 4) + 1);
              v13[8] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 3) & 4) + 2);
              v13[9] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 2) & 4));
              v13[10] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 2) & 4) + 1);
              v13[11] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 2) & 4) + 2);
              v13[12] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 1) & 4));
              v13[13] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 1) & 4) + 1);
              v13[14] = *((_BYTE *)&v90 + (((unsigned __int64)v29 >> 1) & 4) + 2);
              v13[15] = *((_BYTE *)&v90 + (v29 & 4));
              v13[16] = *((_BYTE *)&v90 + (v29 & 4) + 1);
              v13[17] = *((_BYTE *)&v90 + (v29 & 4) + 2);
              v31 = 4 * (v29 & 1);
              v32 = 2 * (v29 & 2);
              v13[18] = *((_BYTE *)&v90 + v32);
              v13[19] = *((_BYTE *)&v90 + v32 + 1);
              v13[20] = *((_BYTE *)&v90 + v32 + 2);
              v13[21] = *((_BYTE *)&v90 + v31);
              v13[22] = *((_BYTE *)&v90 + v31 + 1);
              v13[23] = *((_BYTE *)&v90 + v31 + 2);
              v13 += 24;
              v27 = *v15 << v7;
            }
            while ( v15 != v28 );
            v11 = v78;
          }
          v13 += v25;
          v15 += v26;
        }
        while ( v12 );
        goto LABEL_21;
      }
    }
    else if ( v12 )
    {
      v11 = (int)v11;
      v14 = (int)v14;
      v81 = (int)v11;
      v17 = v16;
      v87 = (int)v14;
      do
      {
        --v12;
        v18 = 0LL;
        v19 = v11;
        if ( v15 > &v15[v11] )
          v19 = 0LL;
        if ( v19 )
        {
          do
          {
            v20 = (unsigned __int8)*v15;
            ++v18;
            v21 = *v15 & 4;
            v22 = ((unsigned __int64)(unsigned __int8)*v15++ >> 5) & 4;
            *v13 = *((_BYTE *)&v90 + v22);
            v13[1] = *((_BYTE *)&v90 + v22 + 1);
            v13[2] = *((_BYTE *)&v90 + v22 + 2);
            v13[3] = *((_BYTE *)&v90 + ((v20 >> 4) & 4));
            v13[4] = *((_BYTE *)&v90 + ((v20 >> 4) & 4) + 1);
            v13[5] = *((_BYTE *)&v90 + ((v20 >> 4) & 4) + 2);
            v13[6] = *((_BYTE *)&v90 + ((v20 >> 3) & 4));
            v13[7] = *((_BYTE *)&v90 + ((v20 >> 3) & 4) + 1);
            v13[8] = *((_BYTE *)&v90 + ((v20 >> 3) & 4) + 2);
            v13[9] = *((_BYTE *)&v90 + ((v20 >> 2) & 4));
            v13[10] = *((_BYTE *)&v90 + ((v20 >> 2) & 4) + 1);
            v13[11] = *((_BYTE *)&v90 + ((v20 >> 2) & 4) + 2);
            v13[12] = *((_BYTE *)&v90 + ((v20 >> 1) & 4));
            v13[13] = *((_BYTE *)&v90 + ((v20 >> 1) & 4) + 1);
            v13[14] = *((_BYTE *)&v90 + ((v20 >> 1) & 4) + 2);
            v13[15] = *((_BYTE *)&v90 + v21);
            v13[16] = *((_BYTE *)&v90 + v21 + 1);
            v13[17] = *((_BYTE *)&v90 + v21 + 2);
            v23 = 2 * (v20 & 2);
            v13[18] = *((_BYTE *)&v90 + v23);
            v13[19] = *((_BYTE *)&v90 + v23 + 1);
            v13[20] = *((_BYTE *)&v90 + v23 + 2);
            v24 = (int)(4 * (v20 & 1));
            v13[21] = *((_BYTE *)&v90 + v24);
            v13[22] = *((_BYTE *)&v90 + v24 + 1);
            v13[23] = *((_BYTE *)&v90 + v24 + 2);
            v13 += 24;
          }
          while ( v18 != v19 );
          v14 = v87;
          v11 = v81;
        }
        v13 += v14;
        v15 += v17;
      }
      while ( v12 );
LABEL_21:
      v9 = v77;
      v6 = v83;
      v1 = a1;
    }
    v8 = v84;
    v5 = 8 - v3;
    v33 = 0;
    goto LABEL_24;
  }
  v82 = 0;
  v33 = 1;
  v86 = v5 + v6 > 8;
LABEL_24:
  if ( v3 | v33 )
  {
    v34 = *((_DWORD *)v1 + 8);
    v35 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    v36 = (_BYTE *)(*((_QWORD *)v1 + 2) + 3 * *((_DWORD *)v1 + 14));
    if ( v6 <= v3 )
    {
      if ( v34 )
      {
        v50 = 3 * v5;
        v51 = v8;
        do
        {
          --v34;
          v52 = *v35 << v6;
          v53 = v36;
          if ( v36 != &v36[v50] )
          {
            do
            {
              v54 = v52;
              v52 *= 2;
              v55 = (v54 >> 5) & 4;
              *v53 = *((_BYTE *)&v90 + v55);
              v53[1] = *((_BYTE *)&v90 + v55 + 1);
              v53[2] = *((_BYTE *)&v90 + v55 + 2);
              v53 += 3;
            }
            while ( v53 != &v36[v50] );
            v51 = v8;
          }
          v36 += v51;
          v35 += v9;
        }
        while ( v34 );
        goto LABEL_46;
      }
    }
    else if ( v86 )
    {
      if ( v34 )
      {
        v37 = 3 * v5;
        v88 = v37;
        do
        {
          --v34;
          v38 = &v36[v37];
          v39 = v36;
          for ( i = ((unsigned __int8)(*v35 << v7) | (unsigned __int8)(v35[1] >> v80)) << v3; v39 != v38; v39 += 3 )
          {
            v41 = i;
            i *= 2;
            v42 = (v41 >> 5) & 4;
            *v39 = *((_BYTE *)&v90 + v42);
            v39[1] = *((_BYTE *)&v90 + v42 + 1);
            v39[2] = *((_BYTE *)&v90 + v42 + 2);
          }
          v37 = v88;
          v36 += v8;
          v35 += v9;
        }
        while ( v34 );
        v8 = v84;
LABEL_46:
        v1 = a1;
        v9 = v77;
      }
    }
    else if ( v34 )
    {
      v43 = v7;
      v44 = 3 * v5;
      v45 = v8;
      do
      {
        --v34;
        v46 = v36;
        v47 = *v35 << v43 << v3;
        if ( v36 != &v36[v44] )
        {
          do
          {
            v48 = v47;
            v47 *= 2;
            v49 = (v48 >> 5) & 4;
            *v46 = *((_BYTE *)&v90 + v49);
            v46[1] = *((_BYTE *)&v90 + v49 + 1);
            v46[2] = *((_BYTE *)&v90 + v49 + 2);
            v46 += 3;
          }
          while ( v46 != &v36[v44] );
          v45 = v8;
        }
        v36 += v45;
        v35 += v9;
      }
      while ( v34 );
      v7 = v76;
      goto LABEL_46;
    }
  }
  if ( (v89 & 7) != 0 && v82 )
  {
    v56 = *((_DWORD *)v1 + 13) - 1;
    v57 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)v56 >> 3));
    v58 = (_BYTE *)(*((_QWORD *)v1 + 2) + (int)(3 * (v89 & 0xFFFFFFF8)));
    v59 = ((_BYTE)v89 - 1) & 7;
    v60 = *((_DWORD *)v1 + 8);
    v61 = v59 + 1;
    if ( (v56 & 7) < v59 )
    {
      if ( v60 )
      {
        v68 = 3 * v61;
        v69 = v7;
        v70 = 3 * v61;
        do
        {
          --v60;
          v71 = &v58[v70];
          v72 = v58;
          for ( j = (*v57 >> v80) | (*(v57 - 1) << v69); v72 != v71; v72 += 3 )
          {
            v74 = j;
            j *= 2;
            v75 = (v74 >> 5) & 4;
            *v72 = *((_BYTE *)&v90 + v75);
            v72[1] = *((_BYTE *)&v90 + v75 + 1);
            v72[2] = *((_BYTE *)&v90 + v75 + 2);
          }
          v70 = v68;
          v58 += v8;
          v57 += v9;
        }
        while ( v60 );
      }
    }
    else if ( v60 )
    {
      v62 = v7;
      v63 = 3 * v61;
      v79 = v63;
      do
      {
        --v60;
        v64 = *v57 << v62;
        v65 = v58;
        if ( v58 != &v58[v63] )
        {
          do
          {
            v66 = v64;
            v64 *= 2;
            v67 = (v66 >> 5) & 4;
            *v65 = *((_BYTE *)&v90 + v67);
            v65[1] = *((_BYTE *)&v90 + v67 + 1);
            v65[2] = *((_BYTE *)&v90 + v67 + 2);
            v65 += 3;
          }
          while ( v65 != &v58[v63] );
          v63 = v79;
        }
        v58 += v8;
        v57 += v9;
      }
      while ( v60 );
    }
  }
}
