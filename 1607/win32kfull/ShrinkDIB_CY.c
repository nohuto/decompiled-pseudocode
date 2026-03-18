/*
 * XREFs of ShrinkDIB_CY @ 0x1C0256390
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00F7288 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0250C08 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0255E58 (MappingBGRF.c)
 */

__int64 __fastcall ShrinkDIB_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  int *v18; // rsi
  _DWORD *v19; // r14
  size_t v20; // r12
  char *v21; // rbx
  char *v22; // rdi
  char *v23; // r15
  __int64 v24; // rax
  int v25; // r8d
  int *v26; // rcx
  int v27; // eax
  char *FixupScan; // rax
  char *v29; // rdx
  unsigned __int8 *v30; // r8
  __int64 v31; // rax
  unsigned int v32; // r15d
  int v33; // r13d
  int v34; // eax
  unsigned __int8 *v35; // r11
  __int16 v36; // ax
  int v37; // r9d
  int v38; // r8d
  int *v39; // rdx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  unsigned __int8 *v43; // r10
  signed __int64 v44; // r9
  _DWORD *v45; // rdx
  int v46; // eax
  _DWORD *v47; // rdx
  _BYTE *v48; // r10
  __int64 v49; // r9
  signed __int64 v50; // rdi
  __int16 v51; // ax
  __int64 v52; // rbx
  int v53; // r8d
  int v54; // ecx
  int v55; // ecx
  __int16 v56; // ax
  unsigned __int8 *v57; // rax
  __int64 v58; // rcx
  __int64 i; // rcx
  _DWORD *v60; // r8
  unsigned __int8 *v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // r10
  _DWORD *v65; // r8
  char *v66; // rbx
  _BYTE *v67; // r9
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  __int16 v71; // ax
  unsigned __int8 *v72; // rax
  BOOL v74; // [rsp+5Ch] [rbp-ACh]
  int v75; // [rsp+60h] [rbp-A8h]
  char *v76; // [rsp+68h] [rbp-A0h]
  __int16 *v77; // [rsp+70h] [rbp-98h]
  unsigned __int64 v78; // [rsp+78h] [rbp-90h]
  __int64 v79; // [rsp+80h] [rbp-88h]
  _DWORD *v80; // [rsp+88h] [rbp-80h]
  char *v81; // [rsp+90h] [rbp-78h]
  char *v82; // [rsp+98h] [rbp-70h]
  size_t v83; // [rsp+A0h] [rbp-68h]
  int v84[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+130h] [rbp+28h]
  int v86; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v87)(int *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v88)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v89; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v90)(__int64, char *, __int64, __int64, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D8h] [rbp+D0h]
  __int64 v92; // [rsp+1E0h] [rbp+D8h]
  __int64 v93; // [rsp+1E8h] [rbp+E0h]
  __int64 v94; // [rsp+228h] [rbp+120h]
  __int64 v95; // [rsp+230h] [rbp+128h]
  __int64 v96; // [rsp+240h] [rbp+138h]
  __int64 v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  int v99; // [rsp+258h] [rbp+150h]
  int v100; // [rsp+25Ch] [rbp+154h]
  int v101; // [rsp+260h] [rbp+158h]
  unsigned __int8 *v102; // [rsp+268h] [rbp+160h]
  unsigned __int8 *v103; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v104; // [rsp+278h] [rbp+170h]
  int v105; // [rsp+280h] [rbp+178h]
  void *v106; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int8 *v107; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v108; // [rsp+2D0h] [rbp+1C8h]
  __int64 v109; // [rsp+2D8h] [rbp+1D0h]
  __int64 v110; // [rsp+2E0h] [rbp+1D8h]
  __int64 v111; // [rsp+2E8h] [rbp+1E0h]
  __int64 v112; // [rsp+2F0h] [rbp+1E8h]
  int v113; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = v84;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = v3[1];
  *(_OWORD *)v4 = *v3;
  v13 = v3[2];
  *((_OWORD *)v4 + 1) = v12;
  v14 = v3[3];
  *((_OWORD *)v4 + 2) = v13;
  v15 = v3[4];
  v16 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v14;
  *((_OWORD *)v4 + 4) = v15;
  *((_QWORD *)v4 + 10) = v16;
  v17 = v92;
  v18 = *(int **)(v92 + 32);
  v79 = *(_QWORD *)(v92 + 24);
  v19 = v18 + 512;
  v80 = v18 + 512;
  v20 = 12 * v84[14];
  v83 = v20;
  v21 = (char *)v18 + v20 + 2048;
  v22 = &v21[v20];
  v81 = v21;
  v23 = &v21[v20 + v20];
  v82 = &v21[v20];
  v76 = v23 + 9;
  v24 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v24 + 16) || *(_WORD *)(v24 + 14)) && (!*(_QWORD *)(v24 + 32) || !*(_QWORD *)(a1 + 536)) )
    return *(unsigned int *)(a1 + 148);
  v25 = *(unsigned __int16 *)(v92 + 14);
  if ( *(_WORD *)(v92 + 14) )
  {
    v26 = v18;
    v27 = -v25;
    do
    {
      v27 += v25;
      *v26++ = v27;
    }
    while ( v26 < v18 + 256 );
    FixupScan = (char *)GetFixupScan((__int64)v84, v106);
    v29 = &v21[v20];
    v30 = (unsigned __int8 *)(FixupScan + 1);
    do
    {
      *(_DWORD *)v29 = v18[v30[1]];
      v31 = *v30;
      v30 += 3;
      *((_DWORD *)v29 + 1) = v18[v31];
      *((_DWORD *)v29 + 2) = v18[*(v30 - 4)];
      v29 += 12;
    }
    while ( v29 < v23 );
    v17 = v92;
    if ( !*(_WORD *)(v92 + 10) )
      v84[0] |= 0x20u;
  }
  v32 = 0;
  v33 = *(unsigned __int16 *)(v17 + 12);
  v77 = *(__int16 **)(v17 + 40);
  v74 = v33 == 1;
  v34 = *(_DWORD *)(v17 + 16);
  if ( v34 )
  {
    do
    {
      v75 = v34 - 1;
      v35 = (unsigned __int8 *)GetFixupScan((__int64)v84, v106);
      v78 = (unsigned __int64)&v22[v20];
      v36 = *v77++;
      if ( (v36 & 0x4000) != 0 )
      {
        v37 = v36 & 0x3FFF;
        v38 = -v37;
        v39 = v18;
        v40 = *(_DWORD *)(v79 + 4) + ((v36 >> 15) & 1) - v37;
        v41 = v37 - (*(_DWORD *)(v79 + 4) + ((v36 >> 15) & 1));
        do
        {
          v38 += v37;
          v41 += v40;
          *v39 = v38;
          v39[256] = v41;
          ++v39;
        }
        while ( v39 < v18 + 256 );
        v42 = v33--;
        if ( v42 <= 0 )
        {
          v47 = v21 + 4;
          v48 = v76 + 2;
          v49 = (char *)v19 - v21;
          v50 = v22 - v21;
          do
          {
            v51 = *(_WORD *)v35;
            v52 = v35[2];
            v35 += 3;
            *(_DWORD *)((char *)v47 + v50 - 4) += v18[v52];
            *(_DWORD *)((char *)v47 + v50) += v18[HIBYTE(v51)];
            *(_DWORD *)((char *)v47 + v50 + 4) += v18[(unsigned __int8)v51];
            v53 = (6 * v47[1] - *(_DWORD *)((char *)v47 + v50 + 4) - *(_DWORD *)((char *)v47 + v49 + 4)) >> 15;
            if ( (v53 & 0xFF00) != 0 )
              LOBYTE(v53) = ~HIBYTE(v53);
            *(v48 - 2) = v53;
            v54 = (6 * *v47 - *(_DWORD *)((char *)v47 + v49) - *(_DWORD *)((char *)v47 + v50)) >> 15;
            if ( (v54 & 0xFF00) != 0 )
              LOBYTE(v54) = ~HIBYTE(v54);
            *(v48 - 1) = v54;
            v55 = (6 * *(v47 - 1) - *(_DWORD *)((char *)v47 + v50 - 4) - *(_DWORD *)((char *)v47 + v49 - 4)) >> 15;
            if ( (v55 & 0xFF00) != 0 )
              LOBYTE(v55) = ~HIBYTE(v55);
            *v48 = v55;
            v48 += 3;
            *(_DWORD *)((char *)v47 + v49 - 4) = v18[(unsigned __int8)v52 + 256];
            *(_DWORD *)((char *)v47 + v49) = v18[HIBYTE(v51) + 256];
            *(_DWORD *)((char *)v47 + v49 + 4) = v18[(unsigned __int8)v51 + 256];
            v47 += 3;
          }
          while ( (unsigned __int64)v47 + v50 - 4 < v78 );
          v90(v91, v76, v111, v112, v113);
          v56 = v84[0];
          v20 = v83;
          if ( SLOBYTE(v84[0]) < 0 )
          {
            v87(v84);
            v56 = v84[0];
          }
          if ( (v56 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v84);
            LOBYTE(v56) = v84[0];
          }
          if ( (v56 & 0x10) != 0 )
          {
            MappingBGRF(v107, v108, v95, v102);
            v57 = &v102[v105];
            if ( v57 == v103 )
              v57 = v104;
            v102 = v57;
          }
          v88(v84, v109, v110, v85, v94, v96, v96 + v100, v101, v89);
          v58 = v99 + v96;
          if ( v58 == v97 )
            v58 = v98;
          v85 += v86;
          ++v32;
          v96 = v58;
        }
        else
        {
          v43 = v35 + 1;
          v44 = (char *)v19 - v22;
          v45 = v22 + 4;
          do
          {
            *(v45 - 1) += v18[v43[1]];
            *v45 += v18[*v43];
            v45[1] += v18[*(v43 - 1)];
            *(_DWORD *)((char *)v45 + v44 - 4) = v18[v43[1] + 256];
            v46 = *v43;
            v43 += 3;
            *(_DWORD *)((char *)v45 + v44) = v18[v46 + 256];
            v45 += 3;
            *(_DWORD *)((char *)v45 + v44 - 8) = v18[*(v43 - 4) + 256];
          }
          while ( (unsigned __int64)(v45 - 1) < v78 );
          if ( v74 )
          {
            memmove(v21, v22, v20);
            v74 = 0;
          }
        }
        v22 = (char *)v19;
        for ( i = 0LL; i < 2; ++i )
          (&v80)[i] = (&v81)[i];
        v21 = v81;
        v82 = (char *)v19;
        v19 = v80;
      }
      else
      {
        v60 = v22 + 8;
        v61 = v35 + 1;
        v62 = v79 + (((unsigned __int64)(unsigned __int16)v36 >> 5) & 0x400);
        do
        {
          *(v60 - 2) += *(_DWORD *)(v62 + 4LL * v61[1]);
          v63 = *v61;
          v61 += 3;
          *(v60 - 1) += *(_DWORD *)(v62 + 4 * v63);
          *v60 += *(_DWORD *)(v62 + 4LL * *(v61 - 4));
          v60 += 3;
        }
        while ( v60 - 2 < (_DWORD *)&v22[v20] );
      }
      v34 = v75;
    }
    while ( v75 );
  }
  if ( v85 != v93 )
  {
    v64 = (unsigned __int64)&v21[v20];
    v65 = v19 + 1;
    v66 = (char *)(v21 - (char *)v19);
    v67 = v76 + 2;
    do
    {
      v68 = (5 * *(_DWORD *)((char *)v65 + (_QWORD)v66 + 4) - v65[1]) >> 15;
      if ( (v68 & 0xFF00) != 0 )
        LOBYTE(v68) = ~HIBYTE(v68);
      *(v67 - 2) = v68;
      v69 = (5 * *(_DWORD *)((char *)v65 + (_QWORD)v66) - *v65) >> 15;
      if ( (v69 & 0xFF00) != 0 )
        LOBYTE(v69) = ~HIBYTE(v69);
      *(v67 - 1) = v69;
      v70 = (5 * *(_DWORD *)((char *)v65 + (_QWORD)v66 - 4) - *(v65 - 1)) >> 15;
      if ( (v70 & 0xFF00) != 0 )
        LOBYTE(v70) = ~HIBYTE(v70);
      v65 += 3;
      *v67 = v70;
      v67 += 3;
    }
    while ( (_DWORD *)((char *)v65 + (_QWORD)v66 - 4) < (_DWORD *)v64 );
    v90(v91, v76, v111, v112, v113);
    v71 = v84[0];
    if ( SLOBYTE(v84[0]) < 0 )
    {
      v87(v84);
      v71 = v84[0];
    }
    if ( (v71 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v84);
      LOBYTE(v71) = v84[0];
    }
    if ( (v71 & 0x10) != 0 )
    {
      MappingBGRF(v107, v108, v95, v102);
      v72 = &v102[v105];
      if ( v72 == v103 )
        v72 = v104;
      v102 = v72;
    }
    v88(v84, v109, v110, v85, v94, v96, v96 + v100, v101, v89);
    ++v32;
  }
  return v32;
}
