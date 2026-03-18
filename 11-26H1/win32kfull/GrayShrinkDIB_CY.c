/*
 * XREFs of GrayShrinkDIB_CY @ 0x1400F3CD0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GrayShrinkDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r9
  int *v19; // r14
  int v20; // eax
  size_t v21; // r13
  unsigned __int8 *v22; // rdi
  int v23; // r8d
  unsigned __int8 *v24; // r15
  unsigned __int8 *v25; // rsi
  int v26; // ecx
  int v27; // esi
  unsigned __int8 *v28; // rbx
  __int64 v29; // rax
  char *v30; // r15
  char *v31; // r8
  __int16 v32; // ax
  int *v33; // rcx
  int v34; // r10d
  int v35; // edx
  int v36; // eax
  int v37; // r9d
  int v38; // eax
  unsigned __int8 *v39; // rsi
  _WORD *v40; // r9
  signed __int64 v41; // r10
  signed __int64 v42; // r11
  char *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int16 v46; // ax
  __int64 v47; // rcx
  __int64 i; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  char *v53; // rdx
  _WORD *v54; // r8
  signed __int64 v55; // r9
  char *v56; // r10
  int v57; // ecx
  __int16 v58; // ax
  unsigned __int8 *v59; // rax
  int *v60; // rcx
  int v61; // eax
  unsigned __int8 *v62; // rbx
  __int64 FixupScan; // rax
  unsigned __int8 *v64; // rdx
  __int64 v65; // rax
  unsigned __int8 *v66; // rax
  BOOL v67; // [rsp+58h] [rbp-B0h]
  unsigned __int8 *v68; // [rsp+60h] [rbp-A8h]
  void *v69[2]; // [rsp+68h] [rbp-A0h]
  int v70; // [rsp+78h] [rbp-90h]
  int v71; // [rsp+7Ch] [rbp-8Ch]
  __int16 *v72; // [rsp+80h] [rbp-88h]
  __int64 v73; // [rsp+88h] [rbp-80h]
  unsigned __int8 *v74; // [rsp+90h] [rbp-78h]
  unsigned __int8 *v75; // [rsp+98h] [rbp-70h]
  int v76[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v77; // [rsp+130h] [rbp+28h]
  int v78; // [rsp+138h] [rbp+30h]
  int v79; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v80)(int *, __int64, char *, _WORD *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v81)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v82; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v83)(__int64, __int64, unsigned __int8 *, unsigned __int8 *, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v84; // [rsp+1D8h] [rbp+D0h]
  __int64 v85; // [rsp+1E0h] [rbp+D8h]
  __int64 v86; // [rsp+1E8h] [rbp+E0h]
  __int64 v87; // [rsp+228h] [rbp+120h]
  __int64 v88; // [rsp+230h] [rbp+128h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  __int64 v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  int v92; // [rsp+258h] [rbp+150h]
  int v93; // [rsp+25Ch] [rbp+154h]
  int v94; // [rsp+260h] [rbp+158h]
  unsigned __int8 *v95; // [rsp+268h] [rbp+160h]
  unsigned __int8 *v96; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v97; // [rsp+278h] [rbp+170h]
  int v98; // [rsp+280h] [rbp+178h]
  __int64 v99; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int8 *v100; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v101; // [rsp+2D0h] [rbp+1C8h]
  __int64 v102; // [rsp+2D8h] [rbp+1D0h]
  __int64 v103; // [rsp+2E0h] [rbp+1D8h]
  _WORD *v104; // [rsp+2E8h] [rbp+1E0h]
  int v105; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v2 = v76;
  *(_OWORD *)v69 = 0LL;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = 0;
  v12 = a1[1];
  v13 = 0LL;
  *(_OWORD *)v2 = *a1;
  v14 = a1[2];
  *((_OWORD *)v2 + 1) = v12;
  v15 = a1[3];
  *((_OWORD *)v2 + 2) = v14;
  v16 = a1[4];
  *((_OWORD *)v2 + 3) = v15;
  *((_OWORD *)v2 + 4) = v16;
  *((_QWORD *)v2 + 10) = v10;
  v17 = v85;
  v18 = v78;
  v19 = *(int **)(v85 + 32);
  v73 = *(_QWORD *)(v85 + 24);
  v68 = (unsigned __int8 *)(v19 + 512);
  v20 = 4 * v78;
  v21 = 4 * v78;
  do
  {
    v69[v13] = (char *)v69[v13 - 1] + v20;
    ++v13;
  }
  while ( v13 < 2 );
  v22 = (unsigned __int8 *)v69[1];
  v23 = *(unsigned __int16 *)(v17 + 14);
  v24 = (unsigned __int8 *)v69[1] + v20;
  v75 = v24;
  v25 = &v24[v18];
  v74 = &v24[v18];
  if ( v23 )
  {
    v60 = v19;
    v61 = -v23;
    do
    {
      v61 += v23;
      *v60++ = v61;
    }
    while ( v60 < v19 + 256 );
    v62 = v24;
    FixupScan = GetFixupScan((unsigned int *)v76, v99);
    v83(v84, FixupScan, v24, v25, 1);
    v64 = v22;
    do
    {
      v65 = *v62++;
      *(_DWORD *)v64 = v19[v65];
      v64 += 4;
    }
    while ( v64 < v24 );
    v17 = v85;
    if ( !*(_WORD *)(v85 + 10) )
      v76[0] |= 0x20u;
  }
  v26 = *(_DWORD *)(v17 + 16);
  v27 = *(unsigned __int16 *)(v17 + 12);
  v72 = *(__int16 **)(v17 + 40);
  if ( v26 )
  {
    v67 = v27 == 1;
    do
    {
      v71 = v26 - 1;
      v28 = v24;
      v29 = GetFixupScan((unsigned int *)v76, v99);
      v83(v84, v29, v24, v74, 1);
      v30 = (char *)&v22[v21];
      v31 = (char *)v22;
      v32 = *v72++;
      if ( (v32 & 0x4000) != 0 )
      {
        v33 = v19;
        v34 = v32 & 0x3FFF;
        v35 = -v34;
        v36 = *(_DWORD *)(v73 + 4) + ((v32 >> 15) & 1) - v34;
        v37 = -v36;
        do
        {
          v35 += v34;
          v37 += v36;
          *v33 = v35;
          v33[256] = v37;
          ++v33;
        }
        while ( v33 < v19 + 256 );
        v38 = v27;
        v70 = v27 - 1;
        v39 = v68;
        if ( v38 > 0 )
        {
          do
          {
            *(_DWORD *)v31 += v19[*v28];
            v50 = *v28++;
            *(_DWORD *)&v31[v39 - v22] = v19[v50 + 256];
            v31 += 4;
          }
          while ( v31 < v30 );
          if ( v67 )
          {
            memmove(v69[0], v22, v21);
            v67 = 0;
          }
        }
        else
        {
          v40 = v104;
          v41 = (char *)v69[0] - (char *)v68;
          v42 = v68 - v22;
          do
          {
            v43 = &v31[v42];
            *(_DWORD *)v31 += v19[*v28];
            v44 = (unsigned int)((6 * *(_DWORD *)&v31[v42 + v41] - *(_DWORD *)v31 - *(_DWORD *)&v31[v42]) >> 7);
            if ( (v44 & 0xFF0000) != 0 )
              v44 = ~WORD1(v44);
            *v40 = v44;
            v31 += 4;
            v40 = (_WORD *)((char *)v40 + v105);
            v45 = *v28++;
            *(_DWORD *)v43 = v19[v45 + 256];
          }
          while ( v31 < v30 );
          v46 = v76[0];
          if ( SLOBYTE(v76[0]) < 0 )
          {
            v80(v76, v44, v31, v40);
            v46 = v76[0];
          }
          if ( (v46 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v76);
            LOBYTE(v46) = v76[0];
          }
          if ( (v46 & 0x10) != 0 )
          {
            MappingBGRF(v100, v101, v88, v95);
            v59 = &v95[v98];
            if ( v59 == v96 )
              v59 = v97;
            v95 = v59;
          }
          v81(v76, v102, v103, v77, v87, v89, v89 + v93, v94, v82);
          v47 = v92 + v89;
          if ( v47 == v90 )
            v47 = v91;
          v77 += v79;
          ++v11;
          v89 = v47;
        }
        v22 = v39;
        for ( i = 0LL; i < 2; ++i )
          v69[i - 1] = v69[i];
        v69[1] = v39;
        v27 = v70;
      }
      else
      {
        v51 = v73 + (((unsigned __int64)(unsigned __int16)v32 >> 5) & 0x400);
        do
        {
          v52 = *v28++;
          *(_DWORD *)v31 += *(_DWORD *)(v51 + 4 * v52);
          v31 += 4;
        }
        while ( v31 < v30 );
      }
      v26 = v71;
      v24 = v75;
    }
    while ( v71 );
  }
  if ( v77 != v86 )
  {
    v53 = (char *)v69[0];
    v54 = v104;
    v55 = (char *)v68 - (char *)v69[0];
    v56 = (char *)v69[0] + v21;
    do
    {
      v57 = (5 * *(_DWORD *)v53 - *(_DWORD *)&v53[v55]) >> 7;
      if ( (v57 & 0xFF0000) != 0 )
        LOWORD(v57) = ~HIWORD(v57);
      *v54 = v57;
      v53 += 4;
      v54 = (_WORD *)((char *)v54 + v105);
    }
    while ( v53 < v56 );
    v58 = v76[0];
    if ( SLOBYTE(v76[0]) < 0 )
    {
      ((void (__fastcall *)(int *, char *, _WORD *))v80)(v76, v53, v54);
      v58 = v76[0];
    }
    if ( (v58 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v76);
      LOBYTE(v58) = v76[0];
    }
    if ( (v58 & 0x10) != 0 )
    {
      MappingBGRF(v100, v101, v88, v95);
      v66 = &v95[v98];
      if ( v66 == v96 )
        v66 = v97;
      v95 = v66;
    }
    v81(v76, v102, v103, v77, v87, v89, v89 + v93, v94, v82);
    ++v11;
  }
  return v11;
}
