/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1401DF950
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 *     SharpenInput @ 0x14013A360 (SharpenInput.c)
 *     ExpYDIB_ExpCX @ 0x1401EF08C (ExpYDIB_ExpCX.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall ExpandDIB_CY_ExpCX(__int64 a1)
{
  __int64 v1; // r8
  int *v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r15
  char v17; // r13
  unsigned __int64 v18; // rdi
  __int16 v19; // dx
  int v20; // r10d
  size_t v21; // r12
  unsigned int v22; // esi
  __int64 v23; // r8
  char *v24; // rbx
  char *v25; // r14
  unsigned int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // r14d
  void *v30; // rsi
  int v31; // eax
  __int64 *v32; // rcx
  __int64 v33; // rbx
  unsigned __int64 v34; // r11
  _BYTE *v35; // r8
  int v36; // r10d
  int v37; // ecx
  int v38; // r14d
  unsigned __int8 *v39; // r9
  unsigned __int8 *v40; // rsi
  int *v41; // r9
  int v42; // r11d
  unsigned __int8 *v43; // r9
  unsigned __int8 *v44; // r10
  unsigned __int8 *v45; // r11
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rax
  __int16 v51; // ax
  __int64 v52; // rcx
  int *v54; // r9
  int v55; // r11d
  unsigned __int8 *v56; // r9
  unsigned __int8 *v57; // r10
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int *v61; // r10
  int v62; // r9d
  unsigned __int8 *v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rcx
  void *v66; // r15
  __int64 v67; // rdi
  int v68; // eax
  __int64 v69; // r14
  __int64 v70; // rdx
  unsigned __int64 v71; // rsi
  __int64 v72; // r8
  int v73; // eax
  __int64 v74; // rax
  unsigned __int8 *v75; // rax
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+58h] [rbp-B0h]
  __int64 v78; // [rsp+58h] [rbp-B0h]
  void *v79; // [rsp+60h] [rbp-A8h]
  int v80; // [rsp+68h] [rbp-A0h]
  void *v81; // [rsp+70h] [rbp-98h]
  void *Src; // [rsp+78h] [rbp-90h]
  unsigned __int64 v83; // [rsp+80h] [rbp-88h]
  unsigned __int16 v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h]
  unsigned __int64 v86; // [rsp+98h] [rbp-70h]
  int v87; // [rsp+98h] [rbp-70h]
  _QWORD v88[2]; // [rsp+A0h] [rbp-68h]
  __int64 v89; // [rsp+B0h] [rbp-58h]
  __int64 v90; // [rsp+B8h] [rbp-50h]
  __int64 v91; // [rsp+C0h] [rbp-48h]
  __int64 v92; // [rsp+C8h] [rbp-40h]
  __int64 v93; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v94; // [rsp+D8h] [rbp-30h]
  __int64 *v95; // [rsp+E0h] [rbp-28h]
  int v96[14]; // [rsp+E8h] [rbp-20h] BYREF
  int v97; // [rsp+120h] [rbp+18h]
  __int64 v98; // [rsp+170h] [rbp+68h]
  int v99; // [rsp+178h] [rbp+70h]
  unsigned int v100; // [rsp+17Ch] [rbp+74h]
  int v101; // [rsp+184h] [rbp+7Ch]
  void (__fastcall *v102)(int *); // [rsp+1A8h] [rbp+A0h]
  void (__fastcall *v103)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1F8h] [rbp+F0h]
  __int64 v104; // [rsp+200h] [rbp+F8h]
  __int64 v105; // [rsp+218h] [rbp+110h]
  __int64 v106; // [rsp+220h] [rbp+118h]
  __int64 v107; // [rsp+268h] [rbp+160h]
  __int64 v108; // [rsp+270h] [rbp+168h]
  __int64 v109; // [rsp+280h] [rbp+178h]
  __int64 v110; // [rsp+288h] [rbp+180h]
  __int64 v111; // [rsp+290h] [rbp+188h]
  int v112; // [rsp+298h] [rbp+190h]
  int v113; // [rsp+29Ch] [rbp+194h]
  int v114; // [rsp+2A0h] [rbp+198h]
  unsigned __int8 *v115; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int8 *v116; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int8 *v117; // [rsp+2B8h] [rbp+1B0h]
  int v118; // [rsp+2C0h] [rbp+1B8h]
  __int64 v119; // [rsp+300h] [rbp+1F8h]
  unsigned __int8 *v120; // [rsp+308h] [rbp+200h]
  unsigned __int64 v121; // [rsp+310h] [rbp+208h]
  __int64 v122; // [rsp+318h] [rbp+210h]
  __int64 v123; // [rsp+320h] [rbp+218h]
  _BYTE *v124; // [rsp+328h] [rbp+220h]
  _BYTE *v125; // [rsp+330h] [rbp+228h]
  int v126; // [rsp+338h] [rbp+230h]

  v1 = 4LL;
  v2 = v96;
  v3 = (_OWORD *)a1;
  do
  {
    v4 = v3[1];
    *(_OWORD *)v2 = *v3;
    v5 = v3[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = v3[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = v3[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = v3[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = v3[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = v3[7];
    v3 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v10;
    --v1;
  }
  while ( v1 );
  v11 = v3[1];
  *(_OWORD *)v2 = *v3;
  v12 = v3[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = v3[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = v3[4];
  v15 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v15;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = v106;
    v17 = -1;
    v85 = v106;
    v18 = *(_QWORD *)(v106 + 32);
    v19 = *(_WORD *)(v105 + 12);
    v20 = *(_WORD *)(v105 + 8) & 1;
    v92 = *(_QWORD *)(v105 + 40);
    v94 = v18 + 1024;
    LOWORD(v93) = v19;
    v84 = v20;
    v86 = v18;
    v21 = 3 * v97;
    v88[0] = v18 + 4096;
    v22 = 3 * (v20 + (v19 & 0xF));
    v80 = 3 * v97;
    v23 = 3 * v99;
    v91 = v23;
    v88[1] = v23 + v18 + 4096;
    v89 = v18 + 4096 + 2 * v23;
    v90 = v23 + v89;
    v24 = (char *)(v18 + 4 * v23 + 4105 + v21 + 18);
    v79 = (void *)(v18 + 4 * v23 + 4105);
    v81 = v24;
    v25 = &v24[v21 + 18];
    v83 = v119 + 9;
    Src = v25;
    GetFixupScan((unsigned int *)v96, (__int64)v24);
    if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
      GetFixupScan((unsigned int *)v96, (__int64)v25);
    else
      memmove(v25, v24, v21);
    v26 = *(unsigned __int16 *)(v16 + 12);
    v27 = v26 & 0xF;
    v28 = v26 >> 4;
    v29 = v27 + v28;
    if ( v27 + v28 )
    {
      v66 = v81;
      v67 = v22;
      v30 = v79;
      do
      {
        ++v17;
        v79 = v66;
        v66 = Src;
        Src = v30;
        --v29;
        v68 = v28--;
        v78 = v88[v17 & 3];
        if ( v68 <= 0 )
          GetFixupScan((unsigned int *)v96, (__int64)v30);
        else
          memmove(v30, v66, v21);
        v76 = (__int64)v30;
        v30 = v79;
        v83 = SharpenInput(v96[0], v83, (__int64)v79, (unsigned __int64)v66, v76, v80);
        ExpYDIB_ExpCX(v92, v67 + v83 - 3, v78, v78 + v91);
      }
      while ( v29 );
      v18 = v86;
      v81 = v66;
      v16 = v85;
    }
    else
    {
      v30 = v79;
    }
    v31 = *(_DWORD *)(v16 + 16);
    v32 = *(__int64 **)(v16 + 40);
    if ( v31 )
    {
      do
      {
        v33 = *v32;
        v87 = v31 - 1;
        v77 = v33;
        v95 = v32 + 1;
        if ( (v33 & 0x8000u) != 0LL )
        {
          v69 = (__int64)v81;
          v70 = (__int64)v30;
          v79 = v81;
          v71 = (unsigned __int64)Src;
          v81 = Src;
          Src = (void *)GetFixupScan((unsigned int *)v96, v70);
          v83 = SharpenInput(v96[0], v83, v69, v71, (__int64)Src, v80);
          v72 = v88[++v17 & 3];
          ExpYDIB_ExpCX(
            v92,
            v84 + (unsigned __int64)(v93 & 0xF) - 3 + v83 + 2 * (v84 + (unsigned __int64)(v93 & 0xF)),
            v72,
            v72 + v91);
          LOWORD(v33) = v33 & 0x3FFF;
        }
        v34 = v18;
        v35 = v124;
        v36 = -WORD1(v77);
        v37 = -WORD2(v77);
        v38 = -(unsigned __int16)v33;
        v39 = (unsigned __int8 *)v88[v17 & 3];
        v40 = (unsigned __int8 *)v88[(v17 - 1) & 3];
        if ( (_WORD)v33 )
        {
          v41 = (int *)(v18 + 2048);
          v42 = 4096 - HIWORD(v77);
          do
          {
            v38 += (unsigned __int16)v33;
            v36 += WORD1(v77);
            v37 += WORD2(v77);
            *(v41 - 512) = v38;
            v42 += HIWORD(v77);
            *(v41 - 256) = v36;
            *v41 = v37;
            v41[256] = v42;
            ++v41;
          }
          while ( (unsigned __int64)(v41 - 512) < v94 );
          v43 = (unsigned __int8 *)(v88[(v17 + 1) & 3] + 1LL);
          v44 = (unsigned __int8 *)(v88[(v17 - 2) & 3] + 1LL);
          v45 = (unsigned __int8 *)(v88[v17 & 3] + 1LL);
          do
          {
            v35[2] = (*(_DWORD *)(v18 + 4LL * v43[1])
                    + *(_DWORD *)(v18 + 4LL * v40[2] + 2048)
                    + *(_DWORD *)(v18 + 4LL * v44[1] + 1024)
                    + *(_DWORD *)(v18 + 4LL * v45[1] + 3072)) >> 13;
            v46 = *v45;
            v45 += 3;
            v47 = *v44;
            v44 += 3;
            v48 = *(_DWORD *)(v18 + 4 * v47 + 1024)
                + *(_DWORD *)(v18 + 4 * v46 + 3072)
                + *(_DWORD *)(v18 + 4LL * v40[1] + 2048);
            v49 = *v43;
            v43 += 3;
            v35[1] = (*(_DWORD *)(v18 + 4 * v49) + v48) >> 13;
            v50 = *v40;
            v40 += 3;
            *v35 = (*(_DWORD *)(v18 + 4 * v50 + 2048)
                  + *(_DWORD *)(v18 + 4LL * *(v43 - 4))
                  + *(_DWORD *)(v18 + 4LL * *(v44 - 4) + 1024)
                  + *(_DWORD *)(v18 + 4LL * *(v45 - 4) + 3072)) >> 13;
            v35 += v126;
          }
          while ( v35 != v125 );
        }
        else if ( WORD1(v77) )
        {
          v54 = (int *)(v18 + 2048);
          v55 = 4096 - HIWORD(v77);
          do
          {
            v36 += WORD1(v77);
            v37 += WORD2(v77);
            v55 += HIWORD(v77);
            *(v54 - 256) = v36;
            *v54 = v37;
            v54[256] = v55;
            ++v54;
          }
          while ( (unsigned __int64)(v54 - 512) < v18 + 1024 );
          v56 = (unsigned __int8 *)(v88[(v17 - 2) & 3] + 1LL);
          v57 = (unsigned __int8 *)(v88[v17 & 3] + 1LL);
          do
          {
            v35[2] = (*(_DWORD *)(v18 + 4LL * v40[2] + 2048)
                    + *(_DWORD *)(v18 + 4LL * v56[1] + 1024)
                    + *(_DWORD *)(v18 + 4LL * v57[1] + 3072)) >> 13;
            v58 = *v57;
            v57 += 3;
            v59 = *v56;
            v56 += 3;
            v35[1] = (*(_DWORD *)(v18 + 4 * v59 + 1024)
                    + *(_DWORD *)(v18 + 4 * v58 + 3072)
                    + *(_DWORD *)(v18 + 4LL * v40[1] + 2048)) >> 13;
            v60 = *v40;
            v40 += 3;
            *v35 = (*(_DWORD *)(v18 + 4 * v60 + 2048)
                  + *(_DWORD *)(v18 + 4LL * *(v56 - 4) + 1024)
                  + *(_DWORD *)(v18 + 4LL * *(v57 - 4) + 3072)) >> 13;
            v35 += v126;
          }
          while ( v35 != v125 );
        }
        else if ( WORD2(v77) )
        {
          v61 = (int *)(v18 + 3072);
          v62 = 4096 - HIWORD(v77);
          do
          {
            v37 += WORD2(v77);
            v62 += HIWORD(v77);
            *(v61 - 256) = v37;
            *v61++ = v62;
          }
          while ( (unsigned __int64)(v61 - 768) < v18 + 1024 );
          v63 = (unsigned __int8 *)(v88[v17 & 3] + 1LL);
          do
          {
            v35[2] = (*(_DWORD *)(v18 + 4LL * v40[2] + 2048) + *(_DWORD *)(v18 + 4LL * v63[1] + 3072)) >> 13;
            v64 = *v63;
            v63 += 3;
            v35[1] = (*(_DWORD *)(v18 + 4 * v64 + 3072) + *(_DWORD *)(v18 + 4LL * v40[1] + 2048)) >> 13;
            v65 = *v40;
            v40 += 3;
            *v35 = (*(_DWORD *)(v18 + 4 * v65 + 2048) + *(_DWORD *)(v18 + 4LL * *(v63 - 4) + 3072)) >> 13;
            v35 += v126;
          }
          while ( v35 != v125 );
        }
        else
        {
          v73 = 4096 - HIWORD(v77);
          do
          {
            v73 += HIWORD(v77);
            *(_DWORD *)(v34 + 3072) = v73;
            v34 += 4LL;
          }
          while ( v34 < v18 + 1024 );
          do
          {
            v35[2] = *(int *)(v18 + 4LL * v39[2] + 3072) >> 13;
            v35[1] = *(int *)(v18 + 4LL * v39[1] + 3072) >> 13;
            v74 = *v39;
            v39 += 3;
            *v35 = *(int *)(v18 + 4 * v74 + 3072) >> 13;
            v35 += v126;
          }
          while ( v35 != v125 );
        }
        v51 = v96[0];
        if ( SLOBYTE(v96[0]) < 0 )
        {
          v102(v96);
          v51 = v96[0];
        }
        if ( (v51 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v96);
          LOBYTE(v51) = v96[0];
        }
        if ( (v51 & 0x10) != 0 )
        {
          MappingBGRF(v120, v121, v108, v115);
          v75 = &v115[v118];
          if ( v75 == v116 )
            v75 = v117;
          v115 = v75;
        }
        v103(v96, v122, v123, v98, v107, v109, v109 + v113, v114, v104);
        v30 = v79;
        v52 = v112 + v109;
        if ( v52 == v110 )
          v52 = v111;
        v98 += v101;
        v31 = v87;
        v109 = v52;
        v32 = v95;
      }
      while ( v87 );
    }
  }
  return v100;
}
