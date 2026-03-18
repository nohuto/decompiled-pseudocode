/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C22A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // r11d
  struct BLTINFO *v2; // r10
  int v3; // esi
  BOOL v4; // r15d
  __int16 *v5; // r9
  unsigned int v6; // r8d
  __int64 i; // rcx
  __int16 v8; // ax
  int v9; // edx
  int v10; // ebx
  int v11; // edi
  char v12; // r9
  char v13; // r9
  int v14; // r13d
  int v15; // r12d
  int v16; // esi
  int v17; // r8d
  _DWORD *v18; // r11
  __int64 v19; // rcx
  _BYTE *v20; // rdx
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // r10
  char v29; // r12
  __int64 v30; // rax
  char v31; // r9
  __int64 v32; // r13
  _BYTE *v33; // r15
  char v34; // r8
  unsigned int v35; // ecx
  __int64 v36; // r14
  int v37; // eax
  int v38; // r11d
  _BYTE *v39; // r8
  _WORD *v40; // rdx
  char v41; // r10
  char v42; // r9
  __int64 v43; // r15
  __int64 v44; // r13
  _WORD *v45; // rsi
  unsigned __int8 v46; // di
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // r13
  _WORD *v51; // rsi
  unsigned __int8 v52; // di
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // r10
  unsigned __int8 v56; // bl
  _WORD *v57; // rsi
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  int v60; // ecx
  _WORD *v61; // rdx
  int v62; // r11d
  int v63; // eax
  _BYTE *v64; // r8
  int v65; // ebx
  __int64 v66; // r15
  char v67; // r14
  unsigned __int8 v68; // r9
  _WORD *v69; // r10
  __int64 v70; // rbx
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // r15
  char v74; // r14
  _WORD *v75; // r10
  __int64 v76; // rbx
  unsigned __int8 v77; // r9
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  char v80; // [rsp+0h] [rbp-60h]
  _WORD v81[2]; // [rsp+4h] [rbp-5Ch]
  int v82; // [rsp+8h] [rbp-58h]
  int v83; // [rsp+Ch] [rbp-54h]
  int v84; // [rsp+10h] [rbp-50h]
  int v85; // [rsp+14h] [rbp-4Ch]
  struct BLTINFO *v86; // [rsp+18h] [rbp-48h]
  int v87; // [rsp+20h] [rbp-40h]
  __int64 v88; // [rsp+28h] [rbp-38h]
  int v89; // [rsp+30h] [rbp-30h]
  __int64 v90; // [rsp+38h] [rbp-28h]
  __int64 v91; // [rsp+40h] [rbp-20h]
  _DWORD v92[4]; // [rsp+48h] [rbp-18h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = 1;
  v86 = a1;
  v87 = 1;
  v85 = v3 + v1;
  v5 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v6 = (*((_DWORD *)v5 + 1) << 16) | *((_DWORD *)v5 + 1);
  v92[0] = (*(_DWORD *)v5 << 16) | *(_DWORD *)v5;
  v92[3] = v6;
  v92[1] = HIWORD(v92[0]) | (v6 << 16);
  v92[2] = (v92[0] << 16) | HIWORD(v6);
  for ( i = 0LL; i < 2; ++i )
  {
    v8 = *v5;
    v5 += 2;
    v81[i] = v8;
  }
  v9 = *((_DWORD *)v2 + 12);
  v10 = v1 & 7;
  v11 = v9 & 7;
  v12 = *((_BYTE *)v2 + 48) & 7;
  LODWORD(v91) = v11;
  v13 = v12 - v10;
  if ( v11 < v10 )
    v13 += 8;
  v14 = *((_DWORD *)v2 + 11);
  v15 = *((_DWORD *)v2 + 10);
  v84 = (unsigned __int8)(8 - v13);
  v80 = v13;
  v83 = v14;
  v82 = v15;
  if ( v85 >> 3 != v1 >> 3 )
  {
    v16 = *((_DWORD *)v2 + 8);
    v89 = 1;
    v17 = (v85 >> 3) - ((v1 + 7) >> 3);
    v18 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v1 + 7) & 0xFFFFFFF8)));
    LODWORD(v19) = v14 - 16 * v17;
    v20 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(v9 + (-v10 & 7)) >> 3));
    v21 = v15 - v17;
    if ( v13 )
    {
      if ( v16 )
      {
        v88 = v21;
        v28 = v21;
        v29 = v13;
        v30 = (int)v19;
        v31 = v84;
        v32 = v17;
        v90 = (int)v19;
        do
        {
          v33 = &v20[v32];
          --v16;
          v34 = *v20 << v29;
          if ( v20 != &v20[v32] )
          {
            do
            {
              v35 = (unsigned __int8)(v34 | (*++v20 >> v31));
              *v18 = v92[(unsigned __int64)(unsigned __int8)(v34 | (*v20 >> v31)) >> 6];
              v18[1] = v92[(v35 >> 4) & 3];
              v18[2] = v92[(v35 >> 2) & 3];
              v18[3] = v92[v35 & 3];
              v18 += 4;
              v34 = *v20 << v29;
            }
            while ( v20 != v33 );
            v30 = v90;
          }
          v18 = (_DWORD *)((char *)v18 + v30);
          v20 += v28;
        }
        while ( v16 );
        v13 = v80;
        v11 = v91;
        goto LABEL_23;
      }
    }
    else if ( v16 )
    {
      v19 = (int)v19;
      v91 = (int)v19;
      v22 = v21;
      v23 = v17;
      do
      {
        --v16;
        v24 = 0LL;
        v25 = v23;
        if ( v20 > &v20[v23] )
          v25 = 0LL;
        if ( v25 )
        {
          do
          {
            v26 = (unsigned __int8)*v20;
            ++v24;
            v27 = (unsigned __int8)*v20++;
            *v18 = v92[v26 >> 6];
            v18[1] = v92[(v27 >> 4) & 3];
            v18[2] = v92[(v27 >> 2) & 3];
            v18[3] = v92[v27 & 3];
            v18 += 4;
          }
          while ( v24 != v25 );
          v19 = v91;
        }
        v18 = (_DWORD *)((char *)v18 + v19);
        v20 += v22;
      }
      while ( v16 );
LABEL_23:
      v4 = v87;
      v15 = v82;
      v14 = v83;
      v2 = v86;
    }
    v3 = 8 - v10;
    v36 = 0LL;
    v37 = 0;
    goto LABEL_26;
  }
  v89 = 0;
  v4 = v3 + v11 > 8;
  v36 = 0LL;
  v37 = 1;
LABEL_26:
  if ( v10 | v37 )
  {
    v38 = *((_DWORD *)v2 + 8);
    v39 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v40 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v11 <= v10 )
    {
      if ( v38 )
      {
        v55 = v3;
        do
        {
          --v38;
          v56 = *v39 << v11;
          v57 = v40;
          v58 = (unsigned __int64)(v55 * 2 + 1) >> 1;
          if ( v40 > &v40[v55] )
            v58 = 0LL;
          if ( v58 )
          {
            do
            {
              ++v36;
              v59 = (unsigned __int64)v56 >> 7;
              v56 *= 2;
              *v57++ = v81[v59];
            }
            while ( v36 != v58 );
          }
          v40 = (_WORD *)((char *)v40 + v14);
          v39 += v15;
          v36 = 0LL;
        }
        while ( v38 );
        goto LABEL_53;
      }
    }
    else if ( v4 )
    {
      if ( v38 )
      {
        v41 = v13;
        v42 = v84;
        v43 = v14;
        v44 = v3;
        do
        {
          --v38;
          v45 = v40;
          v46 = ((unsigned __int8)(*v39 << v41) | (unsigned __int8)(v39[1] >> v42)) << v10;
          v47 = (unsigned __int64)(v44 * 2 + 1) >> 1;
          if ( v40 > &v40[v44] )
            v47 = 0LL;
          if ( v47 )
          {
            do
            {
              ++v36;
              v48 = (unsigned __int64)v46 >> 7;
              v46 *= 2;
              *v45++ = v81[v48];
            }
            while ( v36 != v47 );
          }
          v40 = (_WORD *)((char *)v40 + v43);
          v39 += v15;
          v36 = 0LL;
        }
        while ( v38 );
        v13 = v80;
LABEL_37:
        v14 = v83;
LABEL_53:
        v2 = v86;
        v15 = v82;
      }
    }
    else if ( v38 )
    {
      v49 = v14;
      v50 = v3;
      do
      {
        --v38;
        v51 = v40;
        v52 = *v39 << v13 << v10;
        v53 = (unsigned __int64)(v50 * 2 + 1) >> 1;
        if ( v40 > &v40[v50] )
          v53 = 0LL;
        if ( v53 )
        {
          do
          {
            ++v36;
            v54 = (unsigned __int64)v52 >> 7;
            v52 *= 2;
            *v51++ = v81[v54];
          }
          while ( v36 != v53 );
        }
        v40 = (_WORD *)((char *)v40 + v49);
        v39 += v15;
        v36 = 0LL;
      }
      while ( v38 );
      goto LABEL_37;
    }
  }
  if ( (v85 & 7) != 0 && v89 )
  {
    v60 = *((_DWORD *)v2 + 13) - 1;
    v61 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v85 & 0xFFFFFFF8)));
    v62 = *((_DWORD *)v2 + 8);
    v63 = ((_BYTE)v85 - 1) & 7;
    v64 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v60 >> 3));
    v65 = v63 + 1;
    if ( (v60 & 7) < v63 )
    {
      if ( v62 )
      {
        v73 = v65;
        v74 = v13;
        do
        {
          --v62;
          v75 = v61;
          v76 = 0LL;
          v77 = (*v64 >> v84) | (*(v64 - 1) << v74);
          v78 = (unsigned __int64)(v73 * 2 + 1) >> 1;
          if ( v61 > &v61[v73] )
            v78 = 0LL;
          if ( v78 )
          {
            do
            {
              ++v76;
              v79 = (unsigned __int64)v77 >> 7;
              v77 *= 2;
              *v75++ = v81[v79];
            }
            while ( v76 != v78 );
          }
          v61 = (_WORD *)((char *)v61 + v14);
          v64 += v15;
        }
        while ( v62 );
      }
    }
    else if ( v62 )
    {
      v66 = v65;
      v67 = v13;
      do
      {
        --v62;
        v68 = *v64 << v67;
        v69 = v61;
        v70 = 0LL;
        v71 = (unsigned __int64)(v66 * 2 + 1) >> 1;
        if ( v61 > &v61[v66] )
          v71 = 0LL;
        if ( v71 )
        {
          do
          {
            ++v70;
            v72 = (unsigned __int64)v68 >> 7;
            v68 *= 2;
            *v69++ = v81[v72];
          }
          while ( v70 != v71 );
        }
        v61 = (_WORD *)((char *)v61 + v14);
        v64 += v15;
      }
      while ( v62 );
    }
  }
}
