/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1C0254AE0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00F7288 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0250C08 (AlphaBlendBGRF.c)
 *     GrayExpYDIB_ExpCX @ 0x1C0253FAC (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1C0255500 (GraySharpenInput.c)
 *     MappingBGRF @ 0x1C0255E58 (MappingBGRF.c)
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
  int v16; // r13d
  __int64 v17; // r14
  size_t v18; // r15
  unsigned __int64 v19; // r12
  char *v20; // rsi
  char *v21; // rbx
  int v22; // edi
  int v23; // ebx
  int v24; // edi
  int v25; // ebx
  char *v26; // r14
  char *v27; // rsi
  _BYTE *v28; // r13
  int v29; // eax
  __int64 *v30; // rcx
  int v31; // eax
  unsigned __int16 v32; // di
  char *v33; // rdx
  int v34; // ebx
  _BYTE *v35; // r8
  unsigned __int64 v36; // rdx
  _WORD *v37; // r11
  unsigned __int64 v38; // r8
  int v39; // esi
  int v40; // ecx
  __int64 v41; // r10
  unsigned __int8 *v42; // r9
  int *v43; // rdx
  int v44; // ebx
  __int64 v45; // r10
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  int v48; // r8d
  int v49; // eax
  int *v50; // rdx
  int v51; // ebx
  unsigned __int64 v52; // rbx
  __int64 v53; // r10
  __int64 v54; // rcx
  int v55; // eax
  int *v56; // rdx
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int16 v61; // ax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v65; // [rsp+28h] [rbp-E0h]
  int v66; // [rsp+58h] [rbp-B0h]
  __int64 v67; // [rsp+60h] [rbp-A8h]
  int v68; // [rsp+68h] [rbp-A0h]
  int v69; // [rsp+6Ch] [rbp-9Ch]
  char *v70; // [rsp+78h] [rbp-90h]
  char *v71; // [rsp+80h] [rbp-88h]
  char *Src; // [rsp+88h] [rbp-80h]
  __int64 v73; // [rsp+90h] [rbp-78h]
  __int64 v74; // [rsp+A0h] [rbp-68h]
  int v75; // [rsp+A0h] [rbp-68h]
  __int64 v76; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v77; // [rsp+B0h] [rbp-58h]
  __int64 *v78; // [rsp+C0h] [rbp-48h]
  int v79[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v80; // [rsp+100h] [rbp-8h]
  __int64 v81; // [rsp+150h] [rbp+48h]
  int v82; // [rsp+158h] [rbp+50h]
  unsigned int v83; // [rsp+15Ch] [rbp+54h]
  int v84; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v85)(int *, unsigned __int64, unsigned __int64, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v86)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v87; // [rsp+1E0h] [rbp+D8h]
  __int64 v88; // [rsp+1F8h] [rbp+F0h]
  __int64 v89; // [rsp+200h] [rbp+F8h]
  __int64 v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  __int64 v92; // [rsp+260h] [rbp+158h]
  __int64 v93; // [rsp+268h] [rbp+160h]
  __int64 v94; // [rsp+270h] [rbp+168h]
  int v95; // [rsp+278h] [rbp+170h]
  int v96; // [rsp+27Ch] [rbp+174h]
  int v97; // [rsp+280h] [rbp+178h]
  __int64 v98; // [rsp+288h] [rbp+180h]
  __int64 v99; // [rsp+290h] [rbp+188h]
  __int64 v100; // [rsp+298h] [rbp+190h]
  int v101; // [rsp+2A0h] [rbp+198h]
  __int64 v102; // [rsp+2E0h] [rbp+1D8h]
  __int64 v103; // [rsp+2E8h] [rbp+1E0h]
  __int64 v104; // [rsp+2F0h] [rbp+1E8h]
  __int64 v105; // [rsp+2F8h] [rbp+1F0h]
  __int64 v106; // [rsp+300h] [rbp+1F8h]
  _WORD *v107; // [rsp+308h] [rbp+200h]
  _WORD *v108; // [rsp+310h] [rbp+208h]
  int v109; // [rsp+318h] [rbp+210h]
  unsigned __int64 v110; // [rsp+328h] [rbp+220h]
  __int64 v111; // [rsp+330h] [rbp+228h]
  __int64 v112; // [rsp+338h] [rbp+230h]
  __int64 v113; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v79;
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
    v17 = v89;
    v18 = v80;
    v74 = v89;
    v19 = *(_QWORD *)(v89 + 32);
    v68 = v80;
    v66 = -1;
    v69 = (*(_BYTE *)(v88 + 8) & 1) - 1 + (*(_WORD *)(v88 + 12) & 0xF);
    v77 = *(unsigned __int64 **)(v88 + 40);
    v110 = v19 + 4096;
    v111 = v82 + v19 + 4096;
    v76 = v82;
    v112 = v111 + v82;
    v113 = v112 + v82;
    v20 = (char *)(v82 + 3LL + v113 + v80 + 6LL);
    v70 = (char *)(v82 + 3LL + v113);
    v21 = &v20[v80 + 6];
    v71 = v20;
    LODWORD(v73) = v102 + 3;
    Src = v21;
    GetFixupScan((__int64)v79, v20);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((__int64)v79, v21);
    else
      memmove(v21, v20, v18);
    v22 = *(unsigned __int16 *)(v17 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v24 + v23;
    if ( v25 )
    {
      v26 = v20;
      v27 = v70;
      do
      {
        v70 = v26;
        v26 = Src;
        v66 = v16 + 1;
        --v25;
        Src = v27;
        v28 = (_BYTE *)*(&v110 + (((_BYTE)v16 + 1) & 3));
        v29 = v24--;
        if ( v29 <= 0 )
          GetFixupScan((__int64)v79, v27);
        else
          memmove(v27, v26, v18);
        v65 = (__int64)v27;
        v27 = v70;
        v73 = GraySharpenInput(v79[0], v73, (int)v70, (int)v26, v65, v18);
        GrayExpYDIB_ExpCX(v77, (unsigned __int8 *)(v69 + v73), v28, &v28[v76]);
        v16 = v66;
      }
      while ( v25 );
      v71 = v26;
      v20 = v26;
      v17 = v74;
    }
    v30 = *(__int64 **)(v17 + 40);
    v31 = *(_DWORD *)(v17 + 16);
    while ( v31 )
    {
      v75 = v31 - 1;
      v32 = *v30;
      v67 = *v30;
      v78 = v30 + 1;
      if ( (v32 & 0x8000u) != 0 )
      {
        v33 = v70;
        v34 = (int)Src;
        v71 = Src;
        v70 = v20;
        Src = (char *)GetFixupScan((__int64)v79, v33);
        v73 = GraySharpenInput(v79[0], v73, (int)v20, v34, (__int64)Src, v68);
        v66 = v16 + 1;
        v35 = (_BYTE *)*(&v110 + (((_BYTE)v16 + 1) & 3));
        GrayExpYDIB_ExpCX(v77, (unsigned __int8 *)(v73 + v69), v35, &v35[v76]);
        v32 &= 0x3FFFu;
      }
      v36 = v19;
      v37 = v107;
      v38 = (unsigned int)-WORD1(v67);
      v39 = -v32;
      v40 = -WORD2(v67);
      v41 = *(&v110 + (v66 & 3));
      v42 = (unsigned __int8 *)*(&v110 + (((_BYTE)v66 - 1) & 3));
      if ( v32 )
      {
        v43 = (int *)(v19 + 2048);
        v44 = 256 - HIWORD(v67);
        do
        {
          v39 += v32;
          LODWORD(v38) = WORD1(v67) + (_DWORD)v38;
          v40 += WORD2(v67);
          *(v43 - 512) = v39;
          v44 += HIWORD(v67);
          *(v43 - 256) = v38;
          *v43 = v40;
          v43[256] = v44;
          ++v43;
        }
        while ( (unsigned __int64)(v43 - 512) < v19 + 1024 );
        v16 = v66;
        v45 = v41 - (_QWORD)v42;
        v46 = *(&v110 + (((_BYTE)v66 - 2) & 3)) - (_QWORD)v42;
        v47 = *(&v110 + (((_BYTE)v66 + 1) & 3)) - (_QWORD)v42;
        do
        {
          v36 = v42[v45] + 768;
          v48 = *(_DWORD *)(v19 + 4LL * v42[v47])
              + *(_DWORD *)(v19 + 4LL * (v42[v46] + 256))
              + *(_DWORD *)(v19 + 4 * v36);
          v49 = *v42++;
          v38 = (unsigned int)((*(_DWORD *)(v19 + 4LL * (v49 + 512)) + v48) >> 5);
          *v37 = v38;
          v37 = (_WORD *)((char *)v37 + v109);
        }
        while ( v37 != v108 );
      }
      else if ( WORD1(v67) )
      {
        v50 = (int *)(v19 + 2048);
        v51 = 256 - HIWORD(v67);
        do
        {
          LODWORD(v38) = WORD1(v67) + (_DWORD)v38;
          v40 += WORD2(v67);
          v51 += HIWORD(v67);
          *(v50 - 256) = v38;
          *v50 = v40;
          v50[256] = v51;
          ++v50;
        }
        while ( (unsigned __int64)(v50 - 512) < v19 + 1024 );
        v16 = v66;
        v52 = *(&v110 + (((_BYTE)v66 - 2) & 3)) - (_QWORD)v42;
        v53 = v41 - (_QWORD)v42;
        do
        {
          v36 = v42[v53] + 768;
          v54 = v42[v52] + 256;
          v55 = *v42++;
          v38 = (unsigned int)((*(_DWORD *)(v19 + 4LL * (v55 + 512))
                              + *(_DWORD *)(v19 + 4 * v54)
                              + *(_DWORD *)(v19 + 4 * v36)) >> 5);
          *v37 = v38;
          v37 = (_WORD *)((char *)v37 + v109);
        }
        while ( v37 != v108 );
      }
      else
      {
        if ( WORD2(v67) )
        {
          v56 = (int *)(v19 + 3072);
          v57 = 256 - HIWORD(v67);
          v38 = v19 + 1024;
          do
          {
            v40 += WORD2(v67);
            v57 += HIWORD(v67);
            *(v56 - 256) = v40;
            *v56++ = v57;
          }
          while ( (unsigned __int64)(v56 - 768) < v38 );
          v42 -= v41;
          do
          {
            v36 = v42[v41] + 512;
            v58 = *(unsigned __int8 *)v41++;
            *v37 = (*(_DWORD *)(v19 + 4LL * (v58 + 768)) + *(_DWORD *)(v19 + 4 * v36)) >> 5;
            v37 = (_WORD *)((char *)v37 + v109);
          }
          while ( v37 != v108 );
        }
        else
        {
          v59 = 256 - HIWORD(v67);
          do
          {
            v59 += HIWORD(v67);
            *(_DWORD *)(v36 + 3072) = v59;
            v36 += 4LL;
          }
          while ( v36 < v19 + 1024 );
          do
          {
            v60 = *(unsigned __int8 *)v41++;
            *v37 = *(int *)(v19 + 4LL * (v60 + 768)) >> 5;
            v37 = (_WORD *)((char *)v37 + v109);
          }
          while ( v37 != v108 );
        }
        v16 = v66;
      }
      v61 = v79[0];
      if ( SLOBYTE(v79[0]) < 0 )
      {
        v85(v79, v36, v38, v42);
        v61 = v79[0];
      }
      if ( (v61 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v79);
        LOBYTE(v61) = v79[0];
      }
      if ( (v61 & 0x10) != 0 )
      {
        MappingBGRF(v103, v104, v91, v98);
        v62 = v101 + v98;
        if ( v62 == v99 )
          v62 = v100;
        v98 = v62;
      }
      v86(v79, v105, v106, v81, v90, v92, v92 + v96, v97, v87);
      v20 = v71;
      v63 = v95 + v92;
      if ( v63 == v93 )
        v63 = v94;
      v81 += v84;
      v31 = v75;
      v92 = v63;
      v30 = v78;
    }
  }
  return v83;
}
