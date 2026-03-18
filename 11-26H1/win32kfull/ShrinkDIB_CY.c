/*
 * XREFs of ShrinkDIB_CY @ 0x1400F3480
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

__int64 __fastcall ShrinkDIB_CY(__int128 *a1)
{
  __int128 *v2; // rax
  int *v3; // rcx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  int *v19; // rbx
  unsigned __int64 v20; // r13
  char *v21; // r12
  char *v22; // rsi
  char *v23; // r15
  size_t v24; // rdi
  __int64 v25; // rax
  size_t v26; // r14
  int v27; // r8d
  unsigned int v28; // ecx
  int v29; // edi
  int v30; // eax
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rsi
  int v34; // r9d
  int v35; // edx
  int *v36; // rcx
  int v37; // r8d
  int v38; // eax
  _DWORD *v39; // r8
  char *v40; // r15
  _BYTE *v41; // r9
  char *v42; // r12
  __int16 v43; // r10
  __int64 v44; // r11
  int v45; // edx
  int v46; // ecx
  int v47; // eax
  __int16 v48; // ax
  __int64 v49; // rcx
  char *v50; // rdi
  char *v51; // rax
  char *v53; // rdx
  unsigned __int8 *v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  unsigned __int8 *v57; // r8
  signed __int64 v58; // r9
  char *v59; // rdx
  __int64 v60; // rax
  _BYTE *v61; // r9
  unsigned __int64 v62; // r10
  _DWORD *v63; // r8
  char *v64; // rsi
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  __int16 v68; // ax
  int *v69; // rcx
  int v70; // eax
  __int64 FixupScan; // rax
  char *v72; // rdx
  unsigned __int8 *v73; // r8
  __int64 v74; // rax
  unsigned __int8 *v75; // rax
  unsigned __int8 *v76; // rax
  unsigned int v77; // [rsp+50h] [rbp-B0h]
  char *v78; // [rsp+58h] [rbp-A8h]
  unsigned int v79; // [rsp+60h] [rbp-A0h]
  int v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+6Ch] [rbp-94h]
  char *v82; // [rsp+70h] [rbp-90h]
  size_t v83; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v84; // [rsp+80h] [rbp-80h]
  char *v85; // [rsp+88h] [rbp-78h]
  __int64 v86; // [rsp+90h] [rbp-70h]
  size_t Size; // [rsp+98h] [rbp-68h]
  int v88[34]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v89; // [rsp+128h] [rbp+28h]
  int v90; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v91)(int *); // [rsp+160h] [rbp+60h]
  void (__fastcall *v92)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]
  void (__fastcall *v94)(__int64, size_t, __int64, __int64, int); // [rsp+1C0h] [rbp+C0h]
  __int64 v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  __int64 v97; // [rsp+1E0h] [rbp+E0h]
  __int64 v98; // [rsp+220h] [rbp+120h]
  __int64 v99; // [rsp+228h] [rbp+128h]
  __int64 v100; // [rsp+238h] [rbp+138h]
  __int64 v101; // [rsp+240h] [rbp+140h]
  __int64 v102; // [rsp+248h] [rbp+148h]
  int v103; // [rsp+250h] [rbp+150h]
  int v104; // [rsp+254h] [rbp+154h]
  int v105; // [rsp+258h] [rbp+158h]
  unsigned __int8 *v106; // [rsp+260h] [rbp+160h]
  unsigned __int8 *v107; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v108; // [rsp+270h] [rbp+170h]
  int v109; // [rsp+278h] [rbp+178h]
  __int64 v110; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int8 *v111; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int64 v112; // [rsp+2C8h] [rbp+1C8h]
  __int64 v113; // [rsp+2D0h] [rbp+1D0h]
  __int64 v114; // [rsp+2D8h] [rbp+1D8h]
  __int64 v115; // [rsp+2E0h] [rbp+1E0h]
  __int64 v116; // [rsp+2E8h] [rbp+1E8h]
  int v117; // [rsp+2F0h] [rbp+1F0h]

  v2 = a1;
  v3 = v88;
  v4 = 4LL;
  do
  {
    v3 += 32;
    v5 = *v2;
    v6 = v2[1];
    v2 += 8;
    *((_OWORD *)v3 - 8) = v5;
    v7 = *(v2 - 6);
    *((_OWORD *)v3 - 7) = v6;
    v8 = *(v2 - 5);
    *((_OWORD *)v3 - 6) = v7;
    v9 = *(v2 - 4);
    *((_OWORD *)v3 - 5) = v8;
    v10 = *(v2 - 3);
    *((_OWORD *)v3 - 4) = v9;
    v11 = *(v2 - 2);
    *((_OWORD *)v3 - 3) = v10;
    v12 = *(v2 - 1);
    *((_OWORD *)v3 - 2) = v11;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = v2[1];
  *(_OWORD *)v3 = *v2;
  v14 = v2[2];
  *((_OWORD *)v3 + 1) = v13;
  v15 = v2[3];
  *((_OWORD *)v3 + 2) = v14;
  v16 = v2[4];
  v17 = *((_QWORD *)v2 + 10);
  *((_OWORD *)v3 + 3) = v15;
  *((_OWORD *)v3 + 4) = v16;
  *((_QWORD *)v3 + 10) = v17;
  v18 = v96;
  v19 = *(int **)(v96 + 32);
  v86 = *(_QWORD *)(v96 + 24);
  v20 = (unsigned __int64)(v19 + 256);
  v21 = (char *)(v19 + 512);
  v82 = (char *)(v19 + 512);
  Size = 12 * v88[14];
  v22 = (char *)&v19[Size / 4 + 512];
  v23 = &v22[Size];
  v78 = v22;
  v24 = (size_t)&v22[Size + Size];
  v85 = &v22[Size];
  v25 = *((_QWORD *)a1 + 39);
  v26 = v24 + 9;
  v83 = v24 + 9;
  if ( (*(_DWORD *)(v25 + 16) || *(_WORD *)(v25 + 14)) && (!*(_QWORD *)(v25 + 32) || !*((_QWORD *)a1 + 67)) )
    return *((unsigned int *)a1 + 37);
  v27 = *(unsigned __int16 *)(v96 + 14);
  if ( *(_WORD *)(v96 + 14) )
  {
    v69 = *(int **)(v96 + 32);
    v70 = -v27;
    do
    {
      v70 += v27;
      *v69++ = v70;
    }
    while ( (unsigned __int64)v69 < v20 );
    FixupScan = GetFixupScan((unsigned int *)v88, v110);
    v72 = &v22[Size];
    v73 = (unsigned __int8 *)(FixupScan + 1);
    do
    {
      *(_DWORD *)v72 = v19[v73[1]];
      *((_DWORD *)v72 + 1) = v19[*v73];
      v74 = *(v73 - 1);
      v73 += 3;
      *((_DWORD *)v72 + 2) = v19[v74];
      v72 += 12;
    }
    while ( (unsigned __int64)v72 < v24 );
    v18 = v96;
    if ( !*(_WORD *)(v96 + 10) )
      v88[0] |= 0x20u;
  }
  v28 = 0;
  v29 = *(unsigned __int16 *)(v18 + 12);
  v84 = *(unsigned __int16 **)(v18 + 40);
  v30 = *(_DWORD *)(v18 + 16);
  v77 = 0;
  if ( v30 )
  {
    LOBYTE(v28) = v29 == 1;
    v79 = v28;
    do
    {
      v81 = v30 - 1;
      v31 = GetFixupScan((unsigned int *)v88, v110);
      v32 = *v84++;
      v33 = (unsigned __int64)&v23[Size];
      if ( (v32 & 0x4000) != 0 )
      {
        v34 = v32 & 0x3FFF;
        v35 = -v34;
        v36 = v19;
        v37 = *(_DWORD *)(v86 + 4) + (((__int16)v32 >> 15) & 1) - v34;
        v38 = v34 - (*(_DWORD *)(v86 + 4) + (((__int16)v32 >> 15) & 1));
        do
        {
          v35 += v34;
          v38 += v37;
          *v36 = v35;
          v36[256] = v38;
          ++v36;
        }
        while ( (unsigned __int64)v36 < v20 );
        v80 = v29 - 1;
        if ( v29 > 0 )
        {
          v57 = (unsigned __int8 *)(v31 + 1);
          v58 = v21 - v23;
          v59 = v23 + 4;
          do
          {
            v59 += 12;
            *((_DWORD *)v59 - 4) += v19[v57[1]];
            *((_DWORD *)v59 - 3) += v19[*v57];
            *((_DWORD *)v59 - 2) += v19[*(v57 - 1)];
            *(_DWORD *)&v59[v58 - 16] = v19[v57[1] + 256];
            *(_DWORD *)&v59[v58 - 12] = v19[*v57 + 256];
            v60 = *(v57 - 1);
            v57 += 3;
            *(_DWORD *)&v59[v58 - 8] = v19[v60 + 256];
          }
          while ( (unsigned __int64)(v59 - 4) < v33 );
          v50 = v78;
          if ( v79 )
          {
            memmove(v78, v23, Size);
            v79 = 0;
          }
        }
        else
        {
          v39 = v21 + 4;
          v40 = (char *)(v23 - v21);
          v41 = (_BYTE *)(v83 + 2);
          v42 = (char *)(v78 - v82);
          do
          {
            v43 = *(_WORD *)v31;
            v44 = *(unsigned __int8 *)(v31 + 2);
            v31 += 3LL;
            *(_DWORD *)((char *)v39 + (_QWORD)v40 - 4) += v19[v44];
            *(_DWORD *)((char *)v39 + (_QWORD)v40) += v19[HIBYTE(v43)];
            *(_DWORD *)((char *)v39 + (_QWORD)v40 + 4) += v19[(unsigned __int8)v43];
            v45 = (6 * *(_DWORD *)((char *)v39 + (_QWORD)v42 + 4) - v39[1] - *(_DWORD *)((char *)v39 + (_QWORD)v40 + 4)) >> 15;
            if ( (v45 & 0xFF00) != 0 )
              LOBYTE(v45) = ~HIBYTE(v45);
            *(v41 - 2) = v45;
            v46 = (6 * *(_DWORD *)((char *)v39 + (_QWORD)v42) - *v39 - *(_DWORD *)((char *)v39 + (_QWORD)v40)) >> 15;
            if ( (v46 & 0xFF00) != 0 )
              LOBYTE(v46) = ~HIBYTE(v46);
            *(v41 - 1) = v46;
            v47 = (6 * *(_DWORD *)((char *)v39 + (_QWORD)v42 - 4)
                 - *(v39 - 1)
                 - *(_DWORD *)((char *)v39 + (_QWORD)v40 - 4)) >> 15;
            if ( (v47 & 0xFF00) != 0 )
              LOBYTE(v47) = ~HIBYTE(v47);
            *v41 = v47;
            v41 += 3;
            *(v39 - 1) = v19[v44 + 256];
            *v39 = v19[HIBYTE(v43) + 256];
            v39[1] = v19[(unsigned __int8)v43 + 256];
            v39 += 3;
          }
          while ( (_DWORD *)((char *)v39 + (_QWORD)v40 - 4) < (_DWORD *)v33 );
          v94(v95, v83, v115, v116, v117);
          v48 = v88[0];
          if ( SLOBYTE(v88[0]) < 0 )
          {
            v91(v88);
            v48 = v88[0];
          }
          if ( (v48 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v88);
            LOBYTE(v48) = v88[0];
          }
          if ( (v48 & 0x10) != 0 )
          {
            MappingBGRF(v111, v112, v99, v106);
            v75 = &v106[v109];
            if ( v75 == v107 )
              v75 = v108;
            v106 = v75;
          }
          v92(v88, v113, v114, v89, v98, v100, v100 + v104, v105, v93);
          v21 = v82;
          v49 = v103 + v100;
          if ( v49 == v101 )
            v49 = v102;
          v89 += v90;
          ++v77;
          v23 = v85;
          v50 = v78;
          v100 = v49;
        }
        v51 = v21;
        v82 = v50;
        v21 = v50;
        v78 = v23;
        v29 = v80;
        v23 = v51;
        v85 = v51;
      }
      else
      {
        v53 = v23 + 8;
        v54 = (unsigned __int8 *)(v31 + 1);
        v55 = v86 + ((v32 >> 5) & 0x400);
        do
        {
          v53 += 12;
          *((_DWORD *)v53 - 5) += *(_DWORD *)(v55 + 4LL * v54[1]);
          *((_DWORD *)v53 - 4) += *(_DWORD *)(v55 + 4LL * *v54);
          v56 = *(v54 - 1);
          v54 += 3;
          *((_DWORD *)v53 - 3) += *(_DWORD *)(v55 + 4 * v56);
        }
        while ( (unsigned __int64)(v53 - 8) < v33 );
      }
      v30 = v81;
    }
    while ( v81 );
    v22 = v78;
    v26 = v83;
    v28 = v77;
  }
  if ( v89 != v97 )
  {
    v61 = (_BYTE *)(v26 + 2);
    v62 = (unsigned __int64)&v22[Size];
    v63 = v21 + 4;
    v64 = (char *)(v22 - v21);
    do
    {
      v65 = (5 * *(_DWORD *)((char *)v63 + (_QWORD)v64 + 4) - v63[1]) >> 15;
      if ( (v65 & 0xFF00) != 0 )
        LOBYTE(v65) = ~HIBYTE(v65);
      *(v61 - 2) = v65;
      v66 = (5 * *(_DWORD *)((char *)v63 + (_QWORD)v64) - *v63) >> 15;
      if ( (v66 & 0xFF00) != 0 )
        LOBYTE(v66) = ~HIBYTE(v66);
      *(v61 - 1) = v66;
      v67 = (5 * *(_DWORD *)&v64[(_QWORD)v63 - 4] - *(v63 - 1)) >> 15;
      if ( (v67 & 0xFF00) != 0 )
        LOBYTE(v67) = ~HIBYTE(v67);
      v63 += 3;
      *v61 = v67;
      v61 += 3;
    }
    while ( (_DWORD *)((char *)v63 + (_QWORD)v64 - 4) < (_DWORD *)v62 );
    v94(v95, v26, v115, v116, v117);
    v68 = v88[0];
    if ( SLOBYTE(v88[0]) < 0 )
    {
      v91(v88);
      v68 = v88[0];
    }
    if ( (v68 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v88);
      LOBYTE(v68) = v88[0];
    }
    if ( (v68 & 0x10) != 0 )
    {
      MappingBGRF(v111, v112, v99, v106);
      v76 = &v106[v109];
      if ( v76 == v107 )
        v76 = v108;
      v106 = v76;
    }
    v92(v88, v113, v114, v89, v98, v100, v100 + v104, v105, v93);
    return v77 + 1;
  }
  return v28;
}
