/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C0255B30
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0009D98 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0253DB8 (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C0254C18 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C0258E78 (MappingBGRF.c)
 *     SharpenInput @ 0x1C0258F20 (SharpenInput.c)
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
  char v16; // r13
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  int v19; // r8d
  size_t v20; // r12
  __int64 v21; // rdx
  char *v22; // r14
  char *v23; // rdi
  int v24; // esi
  int v25; // edi
  int v26; // esi
  int v27; // edi
  char v28; // bl
  char *v29; // r14
  const void *v30; // rcx
  _BYTE *v31; // r13
  int v32; // eax
  __int64 *v33; // rcx
  int v34; // eax
  unsigned __int16 v35; // si
  char *v36; // rdx
  int v37; // edi
  _BYTE *v38; // r8
  unsigned __int64 v39; // rdx
  _BYTE *v40; // r9
  int v41; // r14d
  int v42; // r11d
  int v43; // ecx
  int v44; // edi
  __int64 v45; // r10
  unsigned __int8 *v46; // r8
  int *v47; // rdx
  unsigned __int8 *v48; // r10
  unsigned __int8 *v49; // r11
  unsigned __int8 *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rax
  int *v56; // rdx
  unsigned __int8 *v57; // r10
  unsigned __int8 *v58; // r11
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int *v62; // rdx
  unsigned __int8 *v63; // r11
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v71; // [rsp+28h] [rbp-E0h]
  __int64 v72; // [rsp+60h] [rbp-A8h]
  int v73; // [rsp+68h] [rbp-A0h]
  char *v74; // [rsp+70h] [rbp-98h]
  int v75; // [rsp+78h] [rbp-90h]
  char *v76; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  __int64 v78; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h]
  int v80; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v81; // [rsp+A8h] [rbp-60h]
  __int64 v82; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v83; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v84; // [rsp+C0h] [rbp-48h]
  __int64 *v85; // [rsp+C8h] [rbp-40h]
  int v86[14]; // [rsp+D8h] [rbp-30h] BYREF
  int v87; // [rsp+110h] [rbp+8h]
  __int64 v88; // [rsp+160h] [rbp+58h]
  int v89; // [rsp+168h] [rbp+60h]
  unsigned int v90; // [rsp+16Ch] [rbp+64h]
  int v91; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v92)(int *, unsigned __int64, unsigned __int8 *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v93)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v94; // [rsp+1F0h] [rbp+E8h]
  __int64 v95; // [rsp+208h] [rbp+100h]
  __int64 v96; // [rsp+210h] [rbp+108h]
  __int64 v97; // [rsp+258h] [rbp+150h]
  __int64 v98; // [rsp+260h] [rbp+158h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  __int64 v100; // [rsp+278h] [rbp+170h]
  __int64 v101; // [rsp+280h] [rbp+178h]
  int v102; // [rsp+288h] [rbp+180h]
  int v103; // [rsp+28Ch] [rbp+184h]
  int v104; // [rsp+290h] [rbp+188h]
  __int64 v105; // [rsp+298h] [rbp+190h]
  __int64 v106; // [rsp+2A0h] [rbp+198h]
  __int64 v107; // [rsp+2A8h] [rbp+1A0h]
  int v108; // [rsp+2B0h] [rbp+1A8h]
  __int64 v109; // [rsp+2F0h] [rbp+1E8h]
  __int64 v110; // [rsp+2F8h] [rbp+1F0h]
  __int64 v111; // [rsp+300h] [rbp+1F8h]
  __int64 v112; // [rsp+308h] [rbp+200h]
  __int64 v113; // [rsp+310h] [rbp+208h]
  _BYTE *v114; // [rsp+318h] [rbp+210h]
  _BYTE *v115; // [rsp+320h] [rbp+218h]
  int v116; // [rsp+328h] [rbp+220h]
  unsigned __int64 v117; // [rsp+338h] [rbp+230h]
  __int64 v118; // [rsp+340h] [rbp+238h]
  __int64 v119; // [rsp+348h] [rbp+240h]
  __int64 v120; // [rsp+350h] [rbp+248h]

  v1 = 4LL;
  v2 = v86;
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
    v16 = -1;
    v17 = v96;
    v79 = v96;
    v18 = *(_QWORD *)(v96 + 32);
    v83 = v18;
    v19 = (*(_WORD *)(v95 + 12) & 0xF) - 1 + (*(_BYTE *)(v95 + 8) & 1);
    v81 = *(unsigned __int64 **)(v95 + 40);
    v84 = v18 + 1024;
    v20 = 3 * v87;
    v75 = 3 * v87;
    v21 = 3 * v89;
    v117 = v18 + 4096;
    v82 = v21;
    v118 = v21 + v18 + 4096;
    v119 = v118 + v21;
    v120 = v118 + v21 + v21;
    v22 = (char *)(v21 + 9 + v120 + v20 + 18);
    v74 = (char *)(v21 + 9 + v120);
    v23 = &v22[v20 + 18];
    v76 = v22;
    LODWORD(v78) = v109 + 9;
    Src = v23;
    v73 = 3 * v19;
    GetFixupScan((__int64)v86, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v86, v23);
    else
      memmove(v23, v22, v20);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v26 + v25;
    if ( v27 )
    {
      v28 = -1;
      do
      {
        ++v28;
        v29 = v74;
        --v27;
        v30 = Src;
        v74 = v76;
        v76 = Src;
        Src = v29;
        v31 = (_BYTE *)*(&v117 + (v28 & 3));
        v32 = v26--;
        if ( v32 <= 0 )
          GetFixupScan((__int64)v86, v29);
        else
          memmove(v29, v30, v20);
        v71 = (__int64)v29;
        v22 = v76;
        v78 = SharpenInput(v86[0], v78, (_DWORD)v74, (_DWORD)v76, v71, v75);
        ExpYDIB_ExpCX(v81, (unsigned __int8 *)(v73 + v78), v31, &v31[v82]);
      }
      while ( v27 );
      v17 = v79;
      v16 = v28;
      v18 = v83;
    }
    v33 = *(__int64 **)(v17 + 40);
    v34 = *(_DWORD *)(v17 + 16);
    while ( v34 )
    {
      v80 = v34 - 1;
      v35 = *v33;
      v72 = *v33;
      v85 = v33 + 1;
      if ( (v35 & 0x8000u) != 0 )
      {
        v36 = v74;
        v37 = (int)Src;
        v76 = Src;
        v74 = v22;
        Src = (char *)GetFixupScan((__int64)v86, v36);
        ++v16;
        v78 = SharpenInput(v86[0], v78, (_DWORD)v22, v37, (__int64)Src, v75);
        v38 = (_BYTE *)*(&v117 + (v16 & 3));
        ExpYDIB_ExpCX(v81, (unsigned __int8 *)(v78 + v73), v38, &v38[v82]);
        v35 &= 0x3FFFu;
      }
      v39 = v18;
      v40 = v114;
      v41 = -v35;
      v42 = -WORD1(v72);
      v43 = -WORD2(v72);
      v44 = 4096 - HIWORD(v72);
      v45 = *(&v117 + (v16 & 3));
      v46 = (unsigned __int8 *)*(&v117 + ((v16 - 1) & 3));
      if ( v35 )
      {
        v47 = (int *)(v18 + 2048);
        do
        {
          v41 += v35;
          v42 += WORD1(v72);
          v43 += WORD2(v72);
          *(v47 - 512) = v41;
          v44 += HIWORD(v72);
          *(v47 - 256) = v42;
          *v47 = v43;
          v47[256] = v44;
          ++v47;
        }
        while ( (unsigned __int64)(v47 - 512) < v84 );
        v18 = v83;
        v48 = (unsigned __int8 *)(v45 + 1);
        v49 = (unsigned __int8 *)(*(&v117 + ((v16 + 1) & 3)) + 1);
        v50 = (unsigned __int8 *)(*(&v117 + ((v16 - 2) & 3)) + 1);
        do
        {
          v40[2] = (*(_DWORD *)(v83 + 4LL * v49[1])
                  + *(_DWORD *)(v83 + 4LL * v50[1] + 1024)
                  + *(_DWORD *)(v83 + 4LL * v48[1] + 3072)
                  + *(_DWORD *)(v83 + 4LL * v46[2] + 2048)) >> 13;
          v51 = *v50;
          v50 += 3;
          v52 = *v48;
          v48 += 3;
          v53 = *(_DWORD *)(v83 + 4 * v52 + 3072)
              + *(_DWORD *)(v83 + 4 * v51 + 1024)
              + *(_DWORD *)(v83 + 4LL * v46[1] + 2048);
          v54 = *v49;
          v49 += 3;
          v40[1] = (*(_DWORD *)(v83 + 4 * v54) + v53) >> 13;
          v55 = *v46;
          v46 += 3;
          v39 = (unsigned int)((*(_DWORD *)(v83 + 4 * v55 + 2048)
                              + *(_DWORD *)(v83 + 4LL * *(v49 - 4))
                              + *(_DWORD *)(v83 + 4LL * *(v50 - 4) + 1024)
                              + *(_DWORD *)(v83 + 4LL * *(v48 - 4) + 3072)) >> 13);
          *v40 = v39;
          v40 += v116;
        }
        while ( v40 != v115 );
      }
      else if ( WORD1(v72) )
      {
        v56 = (int *)(v18 + 2048);
        do
        {
          v42 += WORD1(v72);
          v43 += WORD2(v72);
          v44 += HIWORD(v72);
          *(v56 - 256) = v42;
          *v56 = v43;
          v56[256] = v44;
          ++v56;
        }
        while ( (unsigned __int64)(v56 - 512) < v18 + 1024 );
        v57 = (unsigned __int8 *)(v45 + 1);
        v58 = (unsigned __int8 *)(*(&v117 + ((v16 - 2) & 3)) + 1);
        do
        {
          v40[2] = (*(_DWORD *)(v18 + 4LL * v58[1] + 1024)
                  + *(_DWORD *)(v18 + 4LL * v57[1] + 3072)
                  + *(_DWORD *)(v18 + 4LL * v46[2] + 2048)) >> 13;
          v59 = *v57;
          v57 += 3;
          v60 = *v58;
          v58 += 3;
          v40[1] = (*(_DWORD *)(v18 + 4 * v60 + 1024)
                  + *(_DWORD *)(v18 + 4 * v59 + 3072)
                  + *(_DWORD *)(v18 + 4LL * v46[1] + 2048)) >> 13;
          v61 = *v46;
          v46 += 3;
          v39 = (unsigned int)((*(_DWORD *)(v18 + 4 * v61 + 2048)
                              + *(_DWORD *)(v18 + 4LL * *(v58 - 4) + 1024)
                              + *(_DWORD *)(v18 + 4LL * *(v57 - 4) + 3072)) >> 13);
          *v40 = v39;
          v40 += v116;
        }
        while ( v40 != v115 );
      }
      else if ( WORD2(v72) )
      {
        v62 = (int *)(v18 + 3072);
        do
        {
          v43 += WORD2(v72);
          v44 += HIWORD(v72);
          *(v62 - 256) = v43;
          *v62++ = v44;
        }
        while ( (unsigned __int64)(v62 - 768) < v18 + 1024 );
        v46 -= v45;
        v63 = &v46[v45 + 1];
        do
        {
          v40[2] = (*(_DWORD *)(v18 + 4LL * *(unsigned __int8 *)(v45 + 2) + 3072)
                  + *(_DWORD *)(v18 + 4LL * v63[1] + 2048)) >> 13;
          v64 = *v63;
          v63 += 3;
          v40[1] = (*(_DWORD *)(v18 + 4 * v64 + 2048) + *(_DWORD *)(v18 + 4LL * *(unsigned __int8 *)(v45 + 1) + 3072)) >> 13;
          v65 = *(unsigned __int8 *)v45;
          v45 += 3LL;
          v39 = (unsigned int)((*(_DWORD *)(v18 + 4 * v65 + 3072) + *(_DWORD *)(v18 + 4LL * *(v63 - 4) + 2048)) >> 13);
          *v40 = v39;
          v40 += v116;
        }
        while ( v40 != v115 );
      }
      else
      {
        do
        {
          v44 += HIWORD(v72);
          *(_DWORD *)(v39 + 3072) = v44;
          v39 += 4LL;
        }
        while ( v39 < v18 + 1024 );
        do
        {
          v40[2] = *(int *)(v18 + 4LL * *(unsigned __int8 *)(v45 + 2) + 3072) >> 13;
          v40[1] = *(int *)(v18 + 4LL * *(unsigned __int8 *)(v45 + 1) + 3072) >> 13;
          v66 = *(unsigned __int8 *)v45;
          v45 += 3LL;
          *v40 = *(int *)(v18 + 4 * v66 + 3072) >> 13;
          v40 += v116;
        }
        while ( v40 != v115 );
      }
      v67 = v86[0];
      if ( SLOBYTE(v86[0]) < 0 )
      {
        v92(v86, v39, v46);
        v67 = v86[0];
      }
      if ( (v67 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v86);
        LOBYTE(v67) = v86[0];
      }
      if ( (v67 & 0x10) != 0 )
      {
        MappingBGRF(v110, v111, v98, v105);
        v68 = v108 + v105;
        if ( v68 == v106 )
          v68 = v107;
        v105 = v68;
      }
      v93(v86, v112, v113, v88, v97, v99, v99 + v103, v104, v94);
      v22 = v76;
      v69 = v102 + v99;
      if ( v69 == v100 )
        v69 = v101;
      v88 += v91;
      v34 = v80;
      v99 = v69;
      v33 = v85;
    }
  }
  return v90;
}
