/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1403097F0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 *     GrayExpYDIB_ExpCX @ 0x140309494 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x14030A180 (GraySharpenInput.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GrayExpandDIB_CY_ExpCX(__int64 a1)
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
  int v16; // esi
  __int64 v17; // r15
  size_t v18; // r13
  unsigned __int64 v19; // rdi
  __int16 v20; // r14
  char *v21; // rbx
  char *v22; // r12
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // r12d
  char *v27; // r15
  unsigned __int64 v28; // r14
  char *v29; // rsi
  int v30; // edi
  int v31; // eax
  __int64 *v32; // rcx
  int v33; // eax
  __int64 v34; // rbx
  int v35; // r15d
  __int64 v36; // rdx
  int v37; // r14d
  _BYTE *v38; // r8
  unsigned __int64 v39; // r11
  _WORD *v40; // r9
  int v41; // esi
  int v42; // edx
  int v43; // r14d
  unsigned __int8 *v44; // r10
  unsigned __int8 *v45; // r8
  int v46; // r13d
  int *v47; // r11
  int v48; // ebx
  __int64 v49; // r10
  __int64 v50; // r11
  __int64 v51; // rbx
  int v52; // edx
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  int *v55; // r11
  int v56; // ebx
  __int64 v57; // r10
  __int64 v58; // r11
  __int64 v59; // rcx
  int v60; // edx
  __int64 v61; // rax
  int *v62; // rbx
  int v63; // r11d
  __int64 v64; // r10
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rax
  __int16 v69; // ax
  unsigned __int8 *v70; // rax
  __int64 v71; // rcx
  __int64 v73; // [rsp+28h] [rbp-E0h]
  int v74; // [rsp+58h] [rbp-B0h]
  unsigned __int16 v75; // [rsp+5Ch] [rbp-ACh]
  int v76; // [rsp+60h] [rbp-A8h]
  char *v77; // [rsp+68h] [rbp-A0h]
  _BYTE *v78; // [rsp+70h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-98h]
  char *v80; // [rsp+78h] [rbp-90h]
  char *Src; // [rsp+80h] [rbp-88h]
  __int64 v82; // [rsp+88h] [rbp-80h]
  __int64 v83; // [rsp+90h] [rbp-78h]
  unsigned __int64 v84; // [rsp+98h] [rbp-70h]
  int v85; // [rsp+98h] [rbp-70h]
  __int64 v86; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v87; // [rsp+A8h] [rbp-60h]
  _QWORD v88[4]; // [rsp+B0h] [rbp-58h]
  __int64 v89; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v90; // [rsp+D8h] [rbp-30h]
  __int64 *v91; // [rsp+E0h] [rbp-28h]
  int v92[14]; // [rsp+E8h] [rbp-20h] BYREF
  int v93; // [rsp+120h] [rbp+18h]
  __int64 v94; // [rsp+170h] [rbp+68h]
  int v95; // [rsp+178h] [rbp+70h]
  unsigned int v96; // [rsp+17Ch] [rbp+74h]
  int v97; // [rsp+184h] [rbp+7Ch]
  void (__fastcall *v98)(int *, unsigned __int64, unsigned __int8 *); // [rsp+1A8h] [rbp+A0h]
  void (__fastcall *v99)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1F8h] [rbp+F0h]
  __int64 v100; // [rsp+200h] [rbp+F8h]
  __int64 v101; // [rsp+218h] [rbp+110h]
  __int64 v102; // [rsp+220h] [rbp+118h]
  __int64 v103; // [rsp+268h] [rbp+160h]
  __int64 v104; // [rsp+270h] [rbp+168h]
  __int64 v105; // [rsp+280h] [rbp+178h]
  __int64 v106; // [rsp+288h] [rbp+180h]
  __int64 v107; // [rsp+290h] [rbp+188h]
  int v108; // [rsp+298h] [rbp+190h]
  int v109; // [rsp+29Ch] [rbp+194h]
  int v110; // [rsp+2A0h] [rbp+198h]
  unsigned __int8 *v111; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int8 *v112; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int8 *v113; // [rsp+2B8h] [rbp+1B0h]
  int v114; // [rsp+2C0h] [rbp+1B8h]
  __int64 v115; // [rsp+300h] [rbp+1F8h]
  unsigned __int8 *v116; // [rsp+308h] [rbp+200h]
  unsigned __int64 v117; // [rsp+310h] [rbp+208h]
  __int64 v118; // [rsp+318h] [rbp+210h]
  __int64 v119; // [rsp+320h] [rbp+218h]
  _WORD *v120; // [rsp+328h] [rbp+220h]
  _WORD *v121; // [rsp+330h] [rbp+228h]
  int v122; // [rsp+338h] [rbp+230h]

  v1 = 4LL;
  v2 = v92;
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
    v17 = v102;
    v18 = v93;
    v86 = v95;
    v83 = v102;
    v19 = *(_QWORD *)(v102 + 32);
    v75 = *(_WORD *)(v101 + 8) & 1;
    v20 = *(_WORD *)(v101 + 12);
    LOWORD(v89) = v20;
    v87 = *(unsigned __int64 **)(v101 + 40);
    v84 = v19;
    v88[3] = v95 + v19 + 2 * (v95 + 2048LL);
    v90 = v19 + 1024;
    v76 = v93;
    v88[0] = v19 + 4096;
    v74 = -1;
    v88[1] = v19 + v95 + 4096LL;
    v88[2] = v19 + 2 * (v95 + 2048LL);
    v21 = (char *)(v19 + 4LL * v95 + 4099 + v93 + 6LL);
    v77 = (char *)(v19 + 4LL * v95 + 4099);
    v22 = &v21[v93 + 6];
    v80 = v21;
    LODWORD(v82) = v115 + 3;
    Src = v22;
    GetFixupScan((unsigned int *)v92, (__int64)v21);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((unsigned int *)v92, (__int64)v22);
    else
      memmove(v22, v21, v18);
    v23 = *(unsigned __int16 *)(v17 + 12);
    v24 = v23 & 0xF;
    v25 = v23 >> 4;
    v26 = v24 + v25;
    if ( v24 + v25 )
    {
      v27 = v80;
      v28 = v75 + (unsigned __int64)(v20 & 0xF);
      v29 = v77;
      v30 = -1;
      do
      {
        ++v30;
        v77 = v27;
        v27 = Src;
        Src = v29;
        --v26;
        v31 = v25--;
        v78 = (_BYTE *)v88[v30 & 3];
        if ( v31 <= 0 )
          GetFixupScan((unsigned int *)v92, (__int64)v29);
        else
          memmove(v29, v27, v18);
        v73 = (__int64)v29;
        v29 = v77;
        v82 = GraySharpenInput(v92[0], v82, (int)v77, (int)v27, v73, v18);
        GrayExpYDIB_ExpCX(v87, (unsigned __int8 *)(v28 + v82 - 1), v78, &v78[v86]);
      }
      while ( v26 );
      v74 = v30;
      v16 = v30;
      v19 = v84;
      v80 = v27;
      v17 = v83;
    }
    v32 = *(__int64 **)(v17 + 40);
    v33 = *(_DWORD *)(v17 + 16);
    while ( v33 )
    {
      v34 = *v32;
      v85 = v33 - 1;
      v79 = v34;
      v91 = v32 + 1;
      if ( (v34 & 0x8000u) != 0LL )
      {
        v35 = (int)v80;
        v36 = (__int64)v77;
        v37 = (int)Src;
        v77 = v80;
        v80 = Src;
        Src = (char *)GetFixupScan((unsigned int *)v92, v36);
        v82 = GraySharpenInput(v92[0], v82, v35, v37, (__int64)Src, v76);
        v74 = v16 + 1;
        v38 = (_BYTE *)v88[((_BYTE)v16 + 1) & 3];
        GrayExpYDIB_ExpCX(v87, (unsigned __int8 *)(v75 - 1LL + (v89 & 0xF) + v82), v38, &v38[v86]);
        LOWORD(v34) = v34 & 0x3FFF;
      }
      v39 = v19;
      v40 = v120;
      v41 = -WORD1(v79);
      v42 = -WORD2(v79);
      v43 = -(unsigned __int16)v34;
      v44 = (unsigned __int8 *)v88[v74 & 3];
      v45 = (unsigned __int8 *)v88[((_BYTE)v74 - 1) & 3];
      if ( (_WORD)v34 )
      {
        v46 = (unsigned __int16)v34;
        v47 = (int *)(v19 + 2048);
        v48 = 256 - HIWORD(v79);
        do
        {
          v43 += v46;
          v41 += WORD1(v79);
          v42 += WORD2(v79);
          *(v47 - 512) = v43;
          v48 += HIWORD(v79);
          *(v47 - 256) = v41;
          *v47 = v42;
          v47[256] = v48;
          ++v47;
        }
        while ( (unsigned __int64)(v47 - 512) < v90 );
        v16 = v74;
        v49 = v44 - v45;
        v50 = v88[((_BYTE)v74 - 2) & 3] - (_QWORD)v45;
        v51 = v88[((_BYTE)v74 + 1) & 3] - (_QWORD)v45;
        do
        {
          v52 = *(_DWORD *)(v19 + 4LL * v45[v51])
              + *(_DWORD *)(v19 + 4LL * v45[v50] + 1024)
              + *(_DWORD *)(v19 + 4LL * v45[v49] + 3072);
          v53 = *v45++;
          v54 = (unsigned int)((*(_DWORD *)(v19 + 4 * v53 + 2048) + v52) >> 5);
          *v40 = v54;
          v40 = (_WORD *)((char *)v40 + v122);
        }
        while ( v40 != v121 );
      }
      else if ( WORD1(v79) )
      {
        v55 = (int *)(v19 + 2048);
        v56 = 256 - HIWORD(v79);
        do
        {
          v41 += WORD1(v79);
          v42 += WORD2(v79);
          v56 += HIWORD(v79);
          *(v55 - 256) = v41;
          *v55 = v42;
          v55[256] = v56;
          ++v55;
        }
        while ( (unsigned __int64)(v55 - 512) < v19 + 1024 );
        v16 = v74;
        v57 = v44 - v45;
        v58 = v88[((_BYTE)v74 - 2) & 3] - (_QWORD)v45;
        do
        {
          v59 = v45[v58];
          v60 = *(_DWORD *)(v19 + 4LL * v45[v57] + 3072);
          v61 = *v45++;
          v54 = (unsigned int)((*(_DWORD *)(v19 + 4 * v61 + 2048) + *(_DWORD *)(v19 + 4 * v59 + 1024) + v60) >> 5);
          *v40 = v54;
          v40 = (_WORD *)((char *)v40 + v122);
        }
        while ( v40 != v121 );
      }
      else
      {
        if ( WORD2(v79) )
        {
          v62 = (int *)(v19 + 3072);
          v63 = 256 - HIWORD(v79);
          do
          {
            v42 += WORD2(v79);
            v63 += HIWORD(v79);
            *(v62 - 256) = v42;
            *v62++ = v63;
          }
          while ( (unsigned __int64)(v62 - 768) < v19 + 1024 );
          v64 = v44 - v45;
          do
          {
            v65 = v45[v64];
            v66 = *v45++;
            v54 = (unsigned int)((*(_DWORD *)(v19 + 4 * v66 + 2048) + *(_DWORD *)(v19 + 4 * v65 + 3072)) >> 5);
            *v40 = v54;
            v40 = (_WORD *)((char *)v40 + v122);
          }
          while ( v40 != v121 );
        }
        else
        {
          v54 = v19 + 1024;
          v67 = 256 - HIWORD(v79);
          do
          {
            v67 += HIWORD(v79);
            *(_DWORD *)(v39 + 3072) = v67;
            v39 += 4LL;
          }
          while ( v39 < v54 );
          do
          {
            v68 = *v44++;
            *v40 = *(int *)(v19 + 4 * v68 + 3072) >> 5;
            v40 = (_WORD *)((char *)v40 + v122);
          }
          while ( v40 != v121 );
        }
        v16 = v74;
      }
      v69 = v92[0];
      if ( SLOBYTE(v92[0]) < 0 )
      {
        v98(v92, v54, v45);
        v69 = v92[0];
      }
      if ( (v69 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v92);
        LOBYTE(v69) = v92[0];
      }
      if ( (v69 & 0x10) != 0 )
      {
        MappingBGRF(v116, v117, v104, v111);
        v70 = &v111[v114];
        if ( v70 == v112 )
          v70 = v113;
        v111 = v70;
      }
      v99(v92, v118, v119, v94, v103, v105, v105 + v109, v110, v100);
      v71 = v108 + v105;
      if ( v71 == v106 )
        v71 = v107;
      v94 += v97;
      v33 = v85;
      v105 = v71;
      v32 = v91;
    }
  }
  return v96;
}
