/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C0257B30
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0009D98 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0253DB8 (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C025701C (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C0258520 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C0258E78 (MappingBGRF.c)
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
  int v16; // r14d
  __int64 v17; // r15
  size_t v18; // r12
  unsigned __int64 v19; // rsi
  char *v20; // r13
  char *v21; // rbx
  int v22; // edi
  int v23; // ebx
  int v24; // edi
  int v25; // ebx
  int v26; // r15d
  char *v27; // r14
  const void *v28; // rcx
  _BYTE *v29; // r13
  int v30; // eax
  __int64 *v31; // rcx
  int v32; // eax
  unsigned __int16 v33; // di
  char *v34; // rdx
  int v35; // ebx
  _BYTE *v36; // r8
  unsigned __int64 v37; // rdx
  _WORD *v38; // r9
  int v39; // r11d
  int v40; // r14d
  int v41; // ecx
  __int64 v42; // r10
  unsigned __int8 *v43; // r8
  int *v44; // rdx
  int v45; // ebx
  __int64 v46; // r10
  unsigned __int64 v47; // r11
  unsigned __int64 v48; // rbx
  int v49; // edx
  __int64 v50; // rax
  int *v51; // rdx
  int v52; // ebx
  unsigned __int64 v53; // r11
  __int64 v54; // r10
  __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // rax
  int *v58; // rdx
  int v59; // ebx
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rax
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v68; // [rsp+28h] [rbp-E0h]
  int v69; // [rsp+58h] [rbp-B0h]
  __int64 v70; // [rsp+60h] [rbp-A8h]
  char *v71; // [rsp+68h] [rbp-A0h]
  int v72; // [rsp+70h] [rbp-98h]
  char *v73; // [rsp+78h] [rbp-90h]
  int v74; // [rsp+84h] [rbp-84h]
  char *Src; // [rsp+88h] [rbp-80h]
  __int64 v76; // [rsp+90h] [rbp-78h]
  int v77; // [rsp+98h] [rbp-70h]
  __int64 v78; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v79; // [rsp+A8h] [rbp-60h]
  __int64 v80; // [rsp+B0h] [rbp-58h]
  __int64 *v81; // [rsp+B8h] [rbp-50h]
  int v82[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v83; // [rsp+100h] [rbp-8h]
  __int64 v84; // [rsp+150h] [rbp+48h]
  int v85; // [rsp+158h] [rbp+50h]
  unsigned int v86; // [rsp+15Ch] [rbp+54h]
  int v87; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v88)(int *, unsigned __int64, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v89)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v90; // [rsp+1E0h] [rbp+D8h]
  __int64 v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  __int64 v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int64 v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  int v98; // [rsp+278h] [rbp+170h]
  int v99; // [rsp+27Ch] [rbp+174h]
  int v100; // [rsp+280h] [rbp+178h]
  __int64 v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  __int64 v103; // [rsp+298h] [rbp+190h]
  int v104; // [rsp+2A0h] [rbp+198h]
  __int64 v105; // [rsp+2E0h] [rbp+1D8h]
  __int64 v106; // [rsp+2E8h] [rbp+1E0h]
  __int64 v107; // [rsp+2F0h] [rbp+1E8h]
  __int64 v108; // [rsp+2F8h] [rbp+1F0h]
  __int64 v109; // [rsp+300h] [rbp+1F8h]
  _WORD *v110; // [rsp+308h] [rbp+200h]
  _WORD *v111; // [rsp+310h] [rbp+208h]
  int v112; // [rsp+318h] [rbp+210h]
  unsigned __int64 v113; // [rsp+328h] [rbp+220h]
  __int64 v114; // [rsp+330h] [rbp+228h]
  __int64 v115; // [rsp+338h] [rbp+230h]
  __int64 v116; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v82;
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
    v17 = v92;
    v18 = v83;
    v78 = v92;
    v19 = *(_QWORD *)(v92 + 32);
    v74 = v83;
    v69 = -1;
    v72 = (*(_BYTE *)(v91 + 8) & 1) - 1 + (*(_WORD *)(v91 + 12) & 0xF);
    v79 = *(unsigned __int64 **)(v91 + 40);
    v113 = v19 + 4096;
    v114 = v85 + v19 + 4096;
    v80 = v85;
    v115 = v114 + v85;
    v116 = v115 + v85;
    v20 = (char *)(v85 + 3LL + v116 + v83 + 6LL);
    v73 = (char *)(v85 + 3LL + v116);
    v21 = &v20[v83 + 6];
    v71 = v20;
    LODWORD(v76) = v105 + 3;
    Src = v21;
    GetFixupScan((__int64)v82, v20);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v82, v21);
    else
      memmove(v21, v20, v18);
    v22 = *(unsigned __int16 *)(v17 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v24 + v23;
    if ( v25 )
    {
      v26 = -1;
      v27 = v73;
      do
      {
        v28 = Src;
        ++v26;
        v73 = v20;
        v71 = Src;
        --v25;
        Src = v27;
        v29 = (_BYTE *)*(&v113 + (v26 & 3));
        v30 = v24--;
        if ( v30 <= 0 )
          GetFixupScan((__int64)v82, v27);
        else
          memmove(v27, v28, v18);
        v68 = (__int64)v27;
        v27 = v73;
        v76 = GraySharpenInput(v82[0], v76, (int)v73, (int)v71, v68, v18);
        GrayExpYDIB_ExpCX(v79, (unsigned __int8 *)(v72 + v76), v29, &v29[v80]);
        v20 = v71;
      }
      while ( v25 );
      v69 = v26;
      v16 = v26;
      v17 = v78;
    }
    v31 = *(__int64 **)(v17 + 40);
    v32 = *(_DWORD *)(v17 + 16);
    while ( v32 )
    {
      v77 = v32 - 1;
      v33 = *v31;
      v70 = *v31;
      v81 = v31 + 1;
      if ( (v33 & 0x8000u) != 0 )
      {
        v34 = v73;
        v35 = (int)Src;
        v71 = Src;
        v73 = v20;
        Src = (char *)GetFixupScan((__int64)v82, v34);
        v76 = GraySharpenInput(v82[0], v76, (int)v20, v35, (__int64)Src, v74);
        v69 = v16 + 1;
        v36 = (_BYTE *)*(&v113 + (((_BYTE)v16 + 1) & 3));
        GrayExpYDIB_ExpCX(v79, (unsigned __int8 *)(v76 + v72), v36, &v36[v80]);
        v33 &= 0x3FFFu;
      }
      v37 = v19;
      v38 = v110;
      v39 = -WORD1(v70);
      v40 = -v33;
      v41 = -WORD2(v70);
      v42 = *(&v113 + (v69 & 3));
      v43 = (unsigned __int8 *)*(&v113 + (((_BYTE)v69 - 1) & 3));
      if ( v33 )
      {
        v44 = (int *)(v19 + 2048);
        v45 = 256 - HIWORD(v70);
        do
        {
          v40 += v33;
          v39 += WORD1(v70);
          v41 += WORD2(v70);
          *(v44 - 512) = v40;
          v45 += HIWORD(v70);
          *(v44 - 256) = v39;
          *v44 = v41;
          v44[256] = v45;
          ++v44;
        }
        while ( (unsigned __int64)(v44 - 512) < v19 + 1024 );
        v16 = v69;
        v46 = v42 - (_QWORD)v43;
        v47 = *(&v113 + (((_BYTE)v69 - 2) & 3)) - (_QWORD)v43;
        v48 = *(&v113 + (((_BYTE)v69 + 1) & 3)) - (_QWORD)v43;
        do
        {
          v49 = *(_DWORD *)(v19 + 4LL * v43[v48])
              + *(_DWORD *)(v19 + 4LL * v43[v47] + 1024)
              + *(_DWORD *)(v19 + 4LL * v43[v46] + 3072);
          v50 = *v43++;
          v37 = (unsigned int)((*(_DWORD *)(v19 + 4 * v50 + 2048) + v49) >> 5);
          *v38 = v37;
          v38 = (_WORD *)((char *)v38 + v112);
        }
        while ( v38 != v111 );
      }
      else if ( WORD1(v70) )
      {
        v51 = (int *)(v19 + 2048);
        v52 = 256 - HIWORD(v70);
        do
        {
          v39 += WORD1(v70);
          v41 += WORD2(v70);
          v52 += HIWORD(v70);
          *(v51 - 256) = v39;
          *v51 = v41;
          v51[256] = v52;
          ++v51;
        }
        while ( (unsigned __int64)(v51 - 512) < v19 + 1024 );
        v16 = v69;
        v53 = *(&v113 + (((_BYTE)v69 - 2) & 3)) - (_QWORD)v43;
        v54 = v42 - (_QWORD)v43;
        do
        {
          v55 = v43[v53];
          v56 = *(_DWORD *)(v19 + 4LL * v43[v54] + 3072);
          v57 = *v43++;
          v37 = (unsigned int)((*(_DWORD *)(v19 + 4 * v57 + 2048) + *(_DWORD *)(v19 + 4 * v55 + 1024) + v56) >> 5);
          *v38 = v37;
          v38 = (_WORD *)((char *)v38 + v112);
        }
        while ( v38 != v111 );
      }
      else
      {
        if ( WORD2(v70) )
        {
          v58 = (int *)(v19 + 3072);
          v59 = 256 - HIWORD(v70);
          do
          {
            v41 += WORD2(v70);
            v59 += HIWORD(v70);
            *(v58 - 256) = v41;
            *v58++ = v59;
          }
          while ( (unsigned __int64)(v58 - 768) < v19 + 1024 );
          v43 -= v42;
          do
          {
            v60 = v43[v42];
            v61 = *(unsigned __int8 *)v42++;
            v37 = (unsigned int)((*(_DWORD *)(v19 + 4 * v61 + 3072) + *(_DWORD *)(v19 + 4 * v60 + 2048)) >> 5);
            *v38 = v37;
            v38 = (_WORD *)((char *)v38 + v112);
          }
          while ( v38 != v111 );
        }
        else
        {
          v62 = 256 - HIWORD(v70);
          do
          {
            v62 += HIWORD(v70);
            *(_DWORD *)(v37 + 3072) = v62;
            v37 += 4LL;
          }
          while ( v37 < v19 + 1024 );
          do
          {
            v63 = *(unsigned __int8 *)v42++;
            *v38 = *(int *)(v19 + 4 * v63 + 3072) >> 5;
            v38 = (_WORD *)((char *)v38 + v112);
          }
          while ( v38 != v111 );
        }
        v16 = v69;
      }
      v64 = v82[0];
      if ( SLOBYTE(v82[0]) < 0 )
      {
        v88(v82, v37, v43);
        v64 = v82[0];
      }
      if ( (v64 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v82);
        LOBYTE(v64) = v82[0];
      }
      if ( (v64 & 0x10) != 0 )
      {
        MappingBGRF(v106, v107, v94, v101);
        v65 = v104 + v101;
        if ( v65 == v102 )
          v65 = v103;
        v101 = v65;
      }
      v89(v82, v108, v109, v84, v93, v95, v95 + v99, v100, v90);
      v20 = v71;
      v66 = v98 + v95;
      if ( v66 == v96 )
        v66 = v97;
      v84 += v87;
      v32 = v77;
      v95 = v66;
      v31 = v81;
    }
  }
  return v86;
}
