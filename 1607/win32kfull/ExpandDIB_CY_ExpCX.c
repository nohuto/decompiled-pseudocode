/*
 * XREFs of ExpandDIB_CY_ExpCX @ 0x1C0252A30
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00F7288 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0250C08 (AlphaBlendBGRF.c)
 *     ExpYDIB_ExpCX @ 0x1C0251AA4 (ExpYDIB_ExpCX.c)
 *     MappingBGRF @ 0x1C0255E58 (MappingBGRF.c)
 *     SharpenInput @ 0x1C0255F00 (SharpenInput.c)
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
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  int v19; // r8d
  size_t v20; // r12
  __int64 v21; // rdx
  char *v22; // r15
  char *v23; // rdi
  int v24; // esi
  int v25; // edi
  int v26; // esi
  int v27; // edi
  char *v28; // rbx
  char *v29; // r15
  int v30; // eax
  __int64 *v31; // rcx
  int v32; // eax
  unsigned __int16 v33; // si
  char *v34; // rdx
  int v35; // edi
  _BYTE *v36; // r8
  unsigned __int64 v37; // rdx
  _BYTE *v38; // r10
  int v39; // r14d
  int v40; // r11d
  int v41; // ecx
  int v42; // edi
  unsigned __int64 v43; // r8
  unsigned __int8 *v44; // r9
  int *v45; // rdx
  unsigned __int8 *v46; // rsi
  unsigned __int8 *v47; // r11
  unsigned __int8 *v48; // rdi
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  int *v52; // rdx
  unsigned __int8 *v53; // rdi
  unsigned __int8 *v54; // r11
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // eax
  int *v59; // rdx
  unsigned __int8 *v60; // r11
  int v61; // eax
  int v62; // eax
  int v63; // eax
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v68; // [rsp+28h] [rbp-E0h]
  __int64 v69; // [rsp+58h] [rbp-B0h]
  char *v70; // [rsp+60h] [rbp-A8h]
  char *v71; // [rsp+60h] [rbp-A8h]
  int v72; // [rsp+68h] [rbp-A0h]
  int v73; // [rsp+6Ch] [rbp-9Ch]
  char *v74; // [rsp+78h] [rbp-90h]
  char *Src; // [rsp+80h] [rbp-88h]
  __int64 v76; // [rsp+88h] [rbp-80h]
  __int64 v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+98h] [rbp-70h]
  __int64 v79; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v80; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v81; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-50h]
  __int64 *v83; // [rsp+C0h] [rbp-48h]
  int v84[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v85; // [rsp+100h] [rbp-8h]
  __int64 v86; // [rsp+150h] [rbp+48h]
  int v87; // [rsp+158h] [rbp+50h]
  unsigned int v88; // [rsp+15Ch] [rbp+54h]
  int v89; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v90)(int *, unsigned __int64, unsigned __int64, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v91)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v92; // [rsp+1E0h] [rbp+D8h]
  __int64 v93; // [rsp+1F8h] [rbp+F0h]
  __int64 v94; // [rsp+200h] [rbp+F8h]
  __int64 v95; // [rsp+248h] [rbp+140h]
  __int64 v96; // [rsp+250h] [rbp+148h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  __int64 v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  int v100; // [rsp+278h] [rbp+170h]
  int v101; // [rsp+27Ch] [rbp+174h]
  int v102; // [rsp+280h] [rbp+178h]
  __int64 v103; // [rsp+288h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+188h]
  __int64 v105; // [rsp+298h] [rbp+190h]
  int v106; // [rsp+2A0h] [rbp+198h]
  __int64 v107; // [rsp+2E0h] [rbp+1D8h]
  __int64 v108; // [rsp+2E8h] [rbp+1E0h]
  __int64 v109; // [rsp+2F0h] [rbp+1E8h]
  __int64 v110; // [rsp+2F8h] [rbp+1F0h]
  __int64 v111; // [rsp+300h] [rbp+1F8h]
  _BYTE *v112; // [rsp+308h] [rbp+200h]
  _BYTE *v113; // [rsp+310h] [rbp+208h]
  int v114; // [rsp+318h] [rbp+210h]
  unsigned __int64 v115; // [rsp+328h] [rbp+220h]
  __int64 v116; // [rsp+330h] [rbp+228h]
  __int64 v117; // [rsp+338h] [rbp+230h]
  __int64 v118; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v84;
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
    v17 = v94;
    v77 = v94;
    v18 = *(_QWORD *)(v94 + 32);
    v81 = v18;
    v19 = (*(_WORD *)(v93 + 12) & 0xF) - 1 + (*(_BYTE *)(v93 + 8) & 1);
    v80 = *(unsigned __int64 **)(v93 + 40);
    v82 = v18 + 1024;
    v20 = 3 * v85;
    v72 = 3 * v85;
    v21 = 3 * v87;
    v115 = v18 + 4096;
    v79 = v21;
    v116 = v21 + v18 + 4096;
    v117 = v116 + v21;
    v118 = v116 + v21 + v21;
    v22 = (char *)(v21 + 9 + v118 + v20 + 18);
    v74 = (char *)(v21 + 9 + v118);
    v23 = &v22[v20 + 18];
    v70 = v22;
    LODWORD(v76) = v107 + 9;
    Src = v23;
    v73 = 3 * v19;
    GetFixupScan((__int64)v84, v22);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v84, v23);
    else
      memmove(v23, v22, v20);
    v24 = *(unsigned __int16 *)(v17 + 12);
    v25 = v24 & 0xF;
    v26 = v24 >> 4;
    v27 = v26 + v25;
    if ( v27 )
    {
      v28 = v22;
      v29 = v74;
      do
      {
        ++v16;
        v74 = v28;
        v28 = Src;
        Src = v29;
        --v27;
        v30 = v26--;
        v71 = (char *)*(&v115 + (v16 & 3));
        if ( v30 <= 0 )
          GetFixupScan((__int64)v84, v29);
        else
          memmove(v29, v28, v20);
        v68 = (__int64)v29;
        v29 = v74;
        v76 = SharpenInput(v84[0], v76, (_DWORD)v74, (_DWORD)v28, v68, v72);
        ExpYDIB_ExpCX(v80, (unsigned __int8 *)(v73 + v76), v71, &v71[v79]);
      }
      while ( v27 );
      v17 = v77;
      v70 = v28;
      v22 = v28;
      v18 = v81;
    }
    v31 = *(__int64 **)(v17 + 40);
    v32 = *(_DWORD *)(v17 + 16);
    while ( v32 )
    {
      v78 = v32 - 1;
      v33 = *v31;
      v69 = *v31;
      v83 = v31 + 1;
      if ( (v33 & 0x8000u) != 0 )
      {
        v34 = v74;
        v35 = (int)Src;
        v70 = Src;
        v74 = v22;
        Src = (char *)GetFixupScan((__int64)v84, v34);
        ++v16;
        v76 = SharpenInput(v84[0], v76, (_DWORD)v22, v35, (__int64)Src, v72);
        v36 = (_BYTE *)*(&v115 + (v16 & 3));
        ExpYDIB_ExpCX(v80, (unsigned __int8 *)(v76 + v73), v36, &v36[v79]);
        v33 &= 0x3FFFu;
      }
      v37 = v18;
      v38 = v112;
      v39 = -v33;
      v40 = -WORD1(v69);
      v41 = -WORD2(v69);
      v42 = 4096 - HIWORD(v69);
      v43 = *(&v115 + (v16 & 3));
      v44 = (unsigned __int8 *)*(&v115 + ((v16 - 1) & 3));
      if ( v33 )
      {
        v45 = (int *)(v18 + 2048);
        do
        {
          v39 += v33;
          v40 += WORD1(v69);
          v41 += WORD2(v69);
          *(v45 - 512) = v39;
          v42 += HIWORD(v69);
          *(v45 - 256) = v40;
          *v45 = v41;
          v45[256] = v42;
          ++v45;
        }
        while ( (unsigned __int64)(v45 - 512) < v82 );
        v18 = v81;
        v46 = (unsigned __int8 *)(v43 + 1);
        v47 = (unsigned __int8 *)(*(&v115 + ((v16 + 1) & 3)) + 1);
        v48 = (unsigned __int8 *)(*(&v115 + ((v16 - 2) & 3)) + 1);
        do
        {
          v38[2] = (*(_DWORD *)(v81 + 4LL * v47[1])
                  + *(_DWORD *)(v81 + 4LL * (v48[1] + 256))
                  + *(_DWORD *)(v81 + 4LL * (v46[1] + 768))
                  + *(_DWORD *)(v81 + 4LL * (v44[2] + 512))) >> 13;
          v49 = *v48;
          v48 += 3;
          v50 = v49 + 256;
          v51 = *v47;
          v47 += 3;
          v38[1] = (*(_DWORD *)(v81 + 4 * v51)
                  + *(_DWORD *)(v81 + 4 * v50)
                  + *(_DWORD *)(v81 + 4LL * (*v46 + 768))
                  + *(_DWORD *)(v81 + 4LL * (v44[1] + 512))) >> 13;
          LODWORD(v51) = *(v46 - 1);
          v46 += 3;
          v37 = (int)v51 + 768;
          LODWORD(v51) = *v44;
          v44 += 3;
          v43 = (unsigned int)((*(_DWORD *)(v81 + 4LL * *(v47 - 4))
                              + *(_DWORD *)(v81 + 4LL * ((int)v51 + 512))
                              + *(_DWORD *)(v81 + 4LL * (*(v48 - 4) + 256))
                              + *(_DWORD *)(v81 + 4 * v37)) >> 13);
          *v38 = v43;
          v38 += v114;
        }
        while ( v38 != v113 );
      }
      else if ( WORD1(v69) )
      {
        v52 = (int *)(v18 + 2048);
        do
        {
          v40 += WORD1(v69);
          v41 += WORD2(v69);
          v42 += HIWORD(v69);
          *(v52 - 256) = v40;
          *v52 = v41;
          v52[256] = v42;
          ++v52;
        }
        while ( (unsigned __int64)(v52 - 512) < v18 + 1024 );
        v53 = (unsigned __int8 *)(v43 + 1);
        v54 = (unsigned __int8 *)(*(&v115 + ((v16 - 2) & 3)) + 1);
        do
        {
          v38[2] = (*(_DWORD *)(v18 + 4LL * (v54[1] + 256))
                  + *(_DWORD *)(v18 + 4LL * (v53[1] + 768))
                  + *(_DWORD *)(v18 + 4LL * (v44[2] + 512))) >> 13;
          v55 = *v53;
          v53 += 3;
          v56 = v55 + 768;
          v57 = *v54;
          v54 += 3;
          v38[1] = (*(_DWORD *)(v18 + 4LL * (v57 + 256))
                  + *(_DWORD *)(v18 + 4 * v56)
                  + *(_DWORD *)(v18 + 4LL * (v44[1] + 512))) >> 13;
          v37 = *(v53 - 4) + 768;
          v58 = *v44;
          v44 += 3;
          v43 = (unsigned int)((*(_DWORD *)(v18 + 4LL * (v58 + 512))
                              + *(_DWORD *)(v18 + 4LL * (*(v54 - 4) + 256))
                              + *(_DWORD *)(v18 + 4 * v37)) >> 13);
          *v38 = v43;
          v38 += v114;
        }
        while ( v38 != v113 );
      }
      else if ( WORD2(v69) )
      {
        v59 = (int *)(v18 + 3072);
        do
        {
          v41 += WORD2(v69);
          v42 += HIWORD(v69);
          *(v59 - 256) = v41;
          *v59++ = v42;
        }
        while ( (unsigned __int64)(v59 - 768) < v18 + 1024 );
        v60 = v44 + 1;
        do
        {
          v38[2] = (*(_DWORD *)(v18 + 4LL * (*(unsigned __int8 *)(v43 + 2) + 768))
                  + *(_DWORD *)(v18 + 4LL * (v60[1] + 512))) >> 13;
          v61 = *v60;
          v60 += 3;
          v38[1] = (*(_DWORD *)(v18 + 4LL * (v61 + 512)) + *(_DWORD *)(v18 + 4LL * (*(unsigned __int8 *)(v43 + 1) + 768))) >> 13;
          v37 = *(v60 - 4) + 512;
          v62 = *(unsigned __int8 *)v43;
          v43 += 3LL;
          *v38 = (*(_DWORD *)(v18 + 4LL * (v62 + 768)) + *(_DWORD *)(v18 + 4 * v37)) >> 13;
          v38 += v114;
        }
        while ( v38 != v113 );
      }
      else
      {
        do
        {
          v42 += HIWORD(v69);
          *(_DWORD *)(v37 + 3072) = v42;
          v37 += 4LL;
        }
        while ( v37 < v18 + 1024 );
        do
        {
          v38[2] = *(int *)(v18 + 4LL * (*(unsigned __int8 *)(v43 + 2) + 768)) >> 13;
          v38[1] = *(int *)(v18 + 4LL * (*(unsigned __int8 *)(v43 + 1) + 768)) >> 13;
          v63 = *(unsigned __int8 *)v43;
          v43 += 3LL;
          *v38 = *(int *)(v18 + 4LL * (v63 + 768)) >> 13;
          v38 += v114;
        }
        while ( v38 != v113 );
      }
      v64 = v84[0];
      if ( SLOBYTE(v84[0]) < 0 )
      {
        v90(v84, v37, v43, v44);
        v64 = v84[0];
      }
      if ( (v64 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v84);
        LOBYTE(v64) = v84[0];
      }
      if ( (v64 & 0x10) != 0 )
      {
        MappingBGRF(v108, v109, v96, v103);
        v65 = v106 + v103;
        if ( v65 == v104 )
          v65 = v105;
        v103 = v65;
      }
      v91(v84, v110, v111, v86, v95, v97, v97 + v101, v102, v92);
      v22 = v70;
      v66 = v100 + v97;
      if ( v66 == v98 )
        v66 = v99;
      v86 += v89;
      v32 = v78;
      v97 = v66;
      v31 = v83;
    }
  }
  return v88;
}
