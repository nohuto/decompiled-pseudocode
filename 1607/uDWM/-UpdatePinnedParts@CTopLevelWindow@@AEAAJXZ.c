/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800245E0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180025004 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003DBC0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v3; // r13d
  int v4; // edi
  int v5; // esi
  __int32 v6; // ebx
  struct CTopLevelWindow::WindowFrame *v7; // rax
  int v8; // r10d
  int v9; // r9d
  double v10; // xmm1_8
  int v11; // r8d
  int v12; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  int v19; // r13d
  int v20; // ebx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r14d
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rax
  int v29; // r11d
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  char *v35; // rdi
  __int64 v36; // rsi
  _DWORD *v37; // rbx
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // rcx
  CVisual *v41; // rcx
  void (__fastcall *v42)(CVisual *, int); // rax
  int v43; // eax
  CVisual *v44; // r14
  int v45; // ecx
  __int64 v46; // rcx
  CVisual *v47; // rcx
  void (__fastcall *v48)(CVisual *, int); // rax
  int v49; // eax
  CVisual *v50; // r14
  int v51; // ecx
  CVisual *v52; // rcx
  void (__fastcall *v53)(CVisual *, int); // rax
  CVisual *v55; // rcx
  void (__fastcall *v56)(CVisual *, int); // rax
  void (__fastcall *v57)(CVisual *); // rax
  void (__fastcall *v58)(CVisual *); // rax
  int v59; // [rsp+20h] [rbp-E0h]
  __int32 v60; // [rsp+24h] [rbp-DCh]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+38h] [rbp-C8h]
  __int32 v65; // [rsp+40h] [rbp-C0h]
  __int64 v66; // [rsp+40h] [rbp-C0h]
  __int128 v68; // [rsp+50h] [rbp-B0h]
  __m128i v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+90h] [rbp-70h]
  int v71; // [rsp+94h] [rbp-6Ch]
  int v72; // [rsp+98h] [rbp-68h]
  int v73; // [rsp+9Ch] [rbp-64h]
  int v74; // [rsp+A0h] [rbp-60h]
  _DWORD v75[16]; // [rsp+A4h] [rbp-5Ch] BYREF
  int v76; // [rsp+E4h] [rbp-1Ch]
  int v77; // [rsp+E8h] [rbp-18h]
  int v78; // [rsp+ECh] [rbp-14h]
  int v79; // [rsp+F0h] [rbp-10h]
  __int32 v80; // [rsp+F4h] [rbp-Ch]
  int v81; // [rsp+F8h] [rbp-8h]
  int v82; // [rsp+FCh] [rbp-4h]
  int v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+104h] [rbp+4h]
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+10Ch] [rbp+Ch]
  int v87; // [rsp+110h] [rbp+10h]
  __int32 v88; // [rsp+114h] [rbp+14h]
  int v89; // [rsp+118h] [rbp+18h]
  int v90; // [rsp+11Ch] [rbp+1Ch]
  int v91; // [rsp+120h] [rbp+20h]
  int v92; // [rsp+124h] [rbp+24h]
  int v93; // [rsp+128h] [rbp+28h]
  __int32 v94; // [rsp+12Ch] [rbp+2Ch]
  int v95; // [rsp+130h] [rbp+30h]
  int v96; // [rsp+134h] [rbp+34h]
  int v97; // [rsp+138h] [rbp+38h]
  __int32 v98; // [rsp+13Ch] [rbp+3Ch]
  int v99; // [rsp+140h] [rbp+40h]
  __int32 v100; // [rsp+144h] [rbp+44h]
  int v101; // [rsp+148h] [rbp+48h]
  int v102; // [rsp+14Ch] [rbp+4Ch]
  int v103; // [rsp+150h] [rbp+50h]
  int v104; // [rsp+154h] [rbp+54h]
  int v105; // [rsp+158h] [rbp+58h]
  int v106; // [rsp+15Ch] [rbp+5Ch]
  int v107; // [rsp+160h] [rbp+60h]
  int v108; // [rsp+164h] [rbp+64h]
  int v109; // [rsp+168h] [rbp+68h]
  int v110; // [rsp+16Ch] [rbp+6Ch]
  int v111; // [rsp+170h] [rbp+70h]
  int v112; // [rsp+174h] [rbp+74h]
  int v113; // [rsp+178h] [rbp+78h]
  int v114; // [rsp+17Ch] [rbp+7Ch]
  int v115; // [rsp+180h] [rbp+80h]
  int v116; // [rsp+184h] [rbp+84h]
  int v117; // [rsp+188h] [rbp+88h]
  int v118; // [rsp+18Ch] [rbp+8Ch]
  int v119; // [rsp+190h] [rbp+90h]
  int v120; // [rsp+194h] [rbp+94h]
  int v121; // [rsp+198h] [rbp+98h]
  __int32 v122; // [rsp+19Ch] [rbp+9Ch]
  int v123; // [rsp+1A0h] [rbp+A0h]
  int v124; // [rsp+1A4h] [rbp+A4h]
  int v125; // [rsp+1A8h] [rbp+A8h]
  int v126; // [rsp+1ACh] [rbp+ACh]
  int v127; // [rsp+1B0h] [rbp+B0h]
  int v128; // [rsp+1B4h] [rbp+B4h]
  int v129; // [rsp+1B8h] [rbp+B8h]
  int v130; // [rsp+1BCh] [rbp+BCh]
  int v131; // [rsp+1C0h] [rbp+C0h]
  int v132; // [rsp+1C4h] [rbp+C4h]
  int v133; // [rsp+1C8h] [rbp+C8h]
  __int32 v134; // [rsp+1CCh] [rbp+CCh]
  int v135; // [rsp+1D0h] [rbp+D0h]
  int v136; // [rsp+1D4h] [rbp+D4h]
  int v137; // [rsp+1D8h] [rbp+D8h]
  int v138; // [rsp+1DCh] [rbp+DCh]
  int v139; // [rsp+1E0h] [rbp+E0h]
  int v140; // [rsp+1E4h] [rbp+E4h]
  int v141; // [rsp+1E8h] [rbp+E8h]
  __int32 v142; // [rsp+1ECh] [rbp+ECh]
  int v143; // [rsp+1F0h] [rbp+F0h]
  int v144; // [rsp+1F4h] [rbp+F4h]
  int v145; // [rsp+1F8h] [rbp+F8h]
  int v146; // [rsp+1FCh] [rbp+FCh]
  int v147; // [rsp+200h] [rbp+100h]
  __int32 v148; // [rsp+204h] [rbp+104h]
  int v149; // [rsp+208h] [rbp+108h]
  int v150; // [rsp+20Ch] [rbp+10Ch]
  int v151; // [rsp+210h] [rbp+110h]
  __int32 v152; // [rsp+214h] [rbp+114h]
  int v153; // [rsp+218h] [rbp+118h]
  __int32 v154; // [rsp+21Ch] [rbp+11Ch]
  int v155; // [rsp+220h] [rbp+120h]
  int v156; // [rsp+224h] [rbp+124h]
  int v157; // [rsp+228h] [rbp+128h]
  int v158; // [rsp+22Ch] [rbp+12Ch]
  int v159; // [rsp+230h] [rbp+130h]
  int v160; // [rsp+234h] [rbp+134h]
  int v161; // [rsp+238h] [rbp+138h]
  int v162; // [rsp+23Ch] [rbp+13Ch]
  int v163; // [rsp+240h] [rbp+140h]
  int v164; // [rsp+244h] [rbp+144h]
  int v165; // [rsp+248h] [rbp+148h]
  __int32 v166; // [rsp+24Ch] [rbp+14Ch]
  int v167; // [rsp+250h] [rbp+150h]
  int v168; // [rsp+254h] [rbp+154h]
  int v169; // [rsp+258h] [rbp+158h]
  int v170; // [rsp+25Ch] [rbp+15Ch]
  int v171; // [rsp+260h] [rbp+160h]
  __int32 v172; // [rsp+264h] [rbp+164h]
  int v173; // [rsp+268h] [rbp+168h]
  int v174; // [rsp+26Ch] [rbp+16Ch]
  int v175; // [rsp+270h] [rbp+170h]
  int v176; // [rsp+274h] [rbp+174h]
  int v177; // [rsp+278h] [rbp+178h]
  int v178; // [rsp+27Ch] [rbp+17Ch]
  int v179; // [rsp+280h] [rbp+180h]
  int v180; // [rsp+284h] [rbp+184h]
  int v181; // [rsp+288h] [rbp+188h]
  int v182; // [rsp+28Ch] [rbp+18Ch]
  int v183; // [rsp+290h] [rbp+190h]
  int v184; // [rsp+294h] [rbp+194h]
  int v185; // [rsp+298h] [rbp+198h]
  int v186; // [rsp+29Ch] [rbp+19Ch]

  v1 = *(__m128i *)((char *)this + 644);
  v3 = *((_DWORD *)this + 158) - v1.m128i_i32[1];
  v4 = _mm_cvtsi128_si32(v1);
  v69 = v1;
  v62 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v5 = *((_DWORD *)this + 157) - v4;
  v63 = *((_DWORD *)this + 159) - v62;
  v6 = *((_DWORD *)this + 160) - _mm_srli_si128(v1, 8).m128i_i32[1];
  v68 = 0LL;
  v7 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 152),
         1,
         (*(_BYTE *)(*((_QWORD *)this + 93) + 579LL) & 0x20) != 0);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 163);
    v8 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 187) + 24LL) - 1) * v10);
    v9 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 205) + 24LL) - 1) * v10);
  }
  v11 = *((_DWORD *)this + 153) - v8;
  v12 = v11;
  if ( v11 < 0 )
    v12 = 0;
  v13 = v12 + v4;
  v14 = *((_DWORD *)this + 154) - v8;
  v15 = v14;
  if ( v14 < 0 )
    v15 = 0;
  v60 = v15 + v69.m128i_i32[1];
  v69.m128i_i32[1] += v15;
  v16 = *((_DWORD *)this + 156) - v8;
  v17 = v16;
  if ( v16 < 0 )
    v17 = 0;
  v65 = v17 + v69.m128i_i32[3];
  v69.m128i_i32[3] += v17;
  if ( v11 < 0 )
    v11 = 0;
  v18 = v5 - v11;
  v59 = v18;
  if ( v14 < 0 )
    v14 = 0;
  v19 = v3 - v14;
  if ( v16 < 0 )
    v16 = 0;
  v20 = v6 - v16;
  v61 = v20;
  if ( v18 < 0 )
  {
    v21 = 0;
    v59 = 0;
  }
  else
  {
    v21 = v18;
  }
  if ( v19 < 0 )
    v19 = 0;
  if ( v20 < 0 )
    v61 = 0;
  v22 = *((_QWORD *)this + 58);
  if ( v22 )
  {
    v23 = *(_DWORD *)(v22 + 24);
    LODWORD(v68) = v23;
  }
  else
  {
    v23 = 0;
  }
  v24 = *((_QWORD *)this + 59);
  if ( v24 )
  {
    v25 = *(_DWORD *)(v24 + 24);
    DWORD1(v68) = v25;
  }
  else
  {
    v25 = 0;
  }
  v26 = *((_QWORD *)this + 60);
  if ( v26 )
  {
    v27 = *(_DWORD *)(v26 + 28);
    DWORD2(v68) = v27;
  }
  else
  {
    v27 = 0;
  }
  v28 = *((_QWORD *)this + 61);
  if ( v28 )
  {
    v29 = *(_DWORD *)(v28 + 28);
    HIDWORD(v68) = v29;
  }
  else
  {
    v29 = 0;
  }
  v72 = v62;
  v75[3] = v62;
  v75[9] = v62;
  *(_OWORD *)((char *)this + 676) = v68;
  v30 = *((_DWORD *)this + 157);
  v31 = *((_DWORD *)this + 158);
  v74 = v21;
  v75[8] = v60;
  v32 = *((_DWORD *)this + 159);
  v76 = *((_DWORD *)this + 160);
  v82 = v76;
  v89 = v59;
  v75[0] = v63;
  v75[6] = v63;
  v75[12] = v63;
  v75[1] = v30;
  v91 = v30;
  v103 = v30;
  v90 = v61;
  v96 = v61;
  v102 = v61;
  v75[2] = v31;
  v75[15] = v32;
  v77 = v59;
  v81 = v32;
  v92 = v31;
  v104 = v31;
  v108 = v63;
  v70 = v13;
  v71 = 0x7FFFFFFF;
  v73 = 0x7FFFFFFF;
  v75[4] = 0x7FFFFFFF;
  v75[5] = 0x7FFFFFFF;
  v75[7] = 0x7FFFFFFF;
  v75[10] = 0x7FFFFFFF;
  v75[11] = v19;
  v75[13] = v13;
  v75[14] = 0x7FFFFFFF;
  v78 = 0x7FFFFFFF;
  v79 = 0x7FFFFFFF;
  v80 = v60;
  v83 = v19;
  v84 = 0x7FFFFFFF;
  v85 = v13;
  v86 = 0x7FFFFFFF;
  v87 = 0x7FFFFFFF;
  v88 = v65;
  v93 = 0x7FFFFFFF;
  v94 = v65;
  v95 = 0x7FFFFFFF;
  v97 = 0x7FFFFFFF;
  v98 = v60;
  v99 = 0x7FFFFFFF;
  v100 = v65;
  v101 = v19;
  v105 = v62;
  v106 = 0x7FFFFFFF;
  v107 = 0x7FFFFFFF;
  v109 = v13;
  v110 = 0x7FFFFFFF;
  v111 = v62;
  v112 = 0x7FFFFFFF;
  v113 = v9;
  v114 = v9;
  v115 = v9 + v13;
  v116 = v9 + v69.m128i_i32[1];
  v117 = v62;
  v127 = v13;
  v139 = v13;
  v122 = v69.m128i_i32[1];
  v134 = v69.m128i_i32[1];
  v152 = v69.m128i_i32[1];
  v33 = v60 - v25;
  v163 = v13 - v23;
  v175 = v13 - v23;
  v181 = v13 - v23;
  v123 = v62;
  v142 = v65;
  v148 = v65;
  v154 = v65;
  v165 = v62;
  v166 = v65;
  v171 = v62;
  v34 = v62 - v27;
  v172 = v65;
  v173 = v25;
  v35 = (char *)this + 320;
  v180 = v27;
  v36 = 22LL;
  v170 = v33;
  v37 = v75;
  v176 = v33;
  v182 = v33;
  v118 = 0x7FFFFFFF;
  v119 = 0x7FFFFFFF;
  v120 = v9;
  v121 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v125 = v9;
  v126 = v9;
  v128 = 0x7FFFFFFF;
  v129 = v9 + v69.m128i_i32[2];
  v130 = v9 + v69.m128i_i32[3];
  v131 = v9;
  v132 = 0x7FFFFFFF;
  v133 = 0x7FFFFFFF;
  v135 = v9 + v69.m128i_i32[2];
  v136 = v9 + v69.m128i_i32[3];
  v137 = v9;
  v138 = 0x7FFFFFFF;
  v140 = 0x7FFFFFFF;
  v141 = 0x7FFFFFFF;
  v143 = v9;
  v144 = v9;
  v145 = v115;
  v146 = v9 + v69.m128i_i32[1];
  v147 = 0x7FFFFFFF;
  v149 = 0x7FFFFFFF;
  v150 = v9;
  v151 = 0x7FFFFFFF;
  v153 = 0x7FFFFFFF;
  v155 = v9;
  v156 = v9;
  v157 = v115;
  v158 = v9 + v69.m128i_i32[1];
  v159 = v9 + v69.m128i_i32[2];
  v160 = v9 + v69.m128i_i32[3];
  v161 = 0x7FFFFFFF;
  v162 = 0x7FFFFFFF;
  v164 = 0x7FFFFFFF;
  v167 = v23;
  v168 = 0x7FFFFFFF;
  v169 = 0x7FFFFFFF;
  v174 = 0x7FFFFFFF;
  v177 = v34;
  v178 = 0x7FFFFFFF;
  v179 = 0x7FFFFFFF;
  v183 = 0x7FFFFFFF;
  v184 = v65 - v29;
  v185 = 0x7FFFFFFF;
  v186 = v29;
  do
  {
    v38 = *(_QWORD *)v35;
    if ( *(_QWORD *)v35 )
    {
      if ( *(_DWORD *)(v38 + 32) != *(v37 - 5)
        || *(_DWORD *)(v38 + 36) != *(v37 - 4)
        || *(_DWORD *)(v38 + 40) != *(v37 - 3)
        || *(_DWORD *)(v38 + 44) != *(v37 - 2) )
      {
        *(_DWORD *)(v38 + 96) |= 1u;
        *(_OWORD *)(v38 + 32) = *(_OWORD *)(v37 - 5);
        v55 = *(CVisual **)(v38 + 80);
        if ( v55 )
        {
          v56 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v55 + 24LL);
          if ( v56 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v55, 4096);
          else
            v56(v55, 4096);
        }
      }
      v39 = *(v37 - 1);
      if ( v39 != 0x7FFFFFFF )
      {
        v40 = *(_QWORD *)v35;
        LODWORD(v66) = *(v37 - 1);
        HIDWORD(v66) = *(_DWORD *)(*(_QWORD *)v35 + 28LL);
        if ( *(_DWORD *)(*(_QWORD *)v35 + 24LL) != v39 )
        {
          *(_DWORD *)(v40 + 96) |= 1u;
          *(_QWORD *)(v40 + 24) = v66;
          v41 = *(CVisual **)(v40 + 80);
          if ( v41 )
          {
            v42 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v41 + 24LL);
            if ( v42 == CVisual::SetDirtyFlags )
            {
              v43 = *((_DWORD *)v41 + 20);
              if ( (v43 & 0x2000) == 0 )
              {
                v44 = (CVisual *)*((_QWORD *)v41 + 3);
                for ( *((_DWORD *)v41 + 20) = v43 | 0x2000; v44; v44 = (CVisual *)*((_QWORD *)v44 + 3) )
                {
                  v45 = *((_DWORD *)v44 + 20);
                  if ( (v45 & 1) != 0 )
                    break;
                  v58 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v44 + 32LL);
                  if ( v58 == CVisual::SetDirtyChildren )
                    *((_DWORD *)v44 + 20) = v45 | 1;
                  else
                    v58(v44);
                }
              }
            }
            else
            {
              v42(v41, 0x2000);
            }
          }
        }
      }
      if ( *v37 != 0x7FFFFFFF )
      {
        v46 = *(_QWORD *)v35;
        HIDWORD(v64) = *v37;
        LODWORD(v64) = *(_DWORD *)(*(_QWORD *)v35 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)v35 + 28LL) != *v37 )
        {
          *(_DWORD *)(v46 + 96) |= 1u;
          *(_QWORD *)(v46 + 24) = v64;
          v47 = *(CVisual **)(v46 + 80);
          if ( v47 )
          {
            v48 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v47 + 24LL);
            if ( v48 == CVisual::SetDirtyFlags )
            {
              v49 = *((_DWORD *)v47 + 20);
              if ( (v49 & 0x2000) == 0 )
              {
                v50 = (CVisual *)*((_QWORD *)v47 + 3);
                for ( *((_DWORD *)v47 + 20) = v49 | 0x2000; v50; v50 = (CVisual *)*((_QWORD *)v50 + 3) )
                {
                  v51 = *((_DWORD *)v50 + 20);
                  if ( (v51 & 1) != 0 )
                    break;
                  v57 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v50 + 32LL);
                  if ( v57 == CVisual::SetDirtyChildren )
                    *((_DWORD *)v50 + 20) = v51 | 1;
                  else
                    v57(v50);
                }
              }
            }
            else
            {
              v48(v47, 0x2000);
            }
          }
        }
      }
    }
    v35 += 8;
    v37 += 6;
    --v36;
  }
  while ( v36 );
  v52 = (CVisual *)*((_QWORD *)this + 37);
  v53 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v52 + 24LL);
  if ( v53 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(v52, 4096);
  else
    v53(v52, 4096);
  return 0LL;
}
