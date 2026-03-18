/*
 * XREFs of ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180078370
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180034450 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DA6C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006E840 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800770DC (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18007814C (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800FBD54 (--_GCRegion@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMegaRectCollection::ReplaceMegaRectsWithClippedRects(CMegaRectCollection *this)
{
  bool v1; // cf
  int v3; // esi
  struct CDrawListPrimitive *v4; // r12
  unsigned int j; // ebx
  __int64 v6; // rdi
  CRegion *v7; // rcx
  int v9; // eax
  int v10; // ecx
  unsigned int i; // edi
  __int64 v12; // r15
  signed int v13; // ebx
  const struct FastRegion::Internal::CRgnData **v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // r15
  _DWORD **v18; // r13
  _DWORD *v19; // r8
  unsigned int v20; // ebx
  bool v21; // zf
  unsigned int v22; // edi
  __int64 v23; // r8
  _DWORD *v24; // rdx
  __int64 v25; // r9
  FastRegion::Internal::CRgnData *v26; // rcx
  int v27; // r10d
  unsigned __int64 v28; // r11
  _DWORD *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  _OWORD *v33; // r13
  unsigned __int16 *v34; // r13
  __int64 v35; // rax
  int v36; // edx
  __m128 v37; // xmm1
  __m128 v38; // xmm0
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  __int64 v43; // rcx
  __int128 v44; // xmm0
  int v45; // ebx
  unsigned __int16 v46; // bx
  unsigned int v47; // edi
  unsigned int v48; // r9d
  int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // ecx
  unsigned int v52; // r8d
  unsigned __int16 v53; // di
  unsigned int v54; // edx
  unsigned int v55; // ecx
  unsigned __int16 v56; // bx
  __int64 v57; // xmm1_8
  __m128 v58; // xmm6
  __int32 v59; // eax
  float v60; // xmm8_4
  float v61; // xmm9_4
  float v62; // xmm0_4
  struct D2D_VECTOR_2F v63; // xmm1_8
  float v64; // xmm8_4
  float v65; // xmm0_4
  float v66; // xmm9_4
  __m128 v67; // xmm0
  __m128 v68; // xmm1
  unsigned int v69; // ebx
  __m128 v70; // xmm0
  unsigned int v71; // edx
  int v72; // eax
  _OWORD *v73; // rax
  _OWORD *v74; // rcx
  __int128 v75; // xmm0
  const struct CVertexXYAAColorDUV2 *v76; // rcx
  __m128 v77; // xmm6
  __int64 v78; // xmm1_8
  float v79; // xmm7_4
  float v80; // xmm8_4
  float v81; // xmm0_4
  unsigned __int64 v82; // xmm1_8
  float v83; // xmm7_4
  float v84; // xmm0_4
  float v85; // xmm8_4
  __m128 v86; // xmm2
  __m128 v87; // xmm1
  __int64 v88; // xmm0_8
  __m128 v89; // xmm1
  unsigned int v90; // r9d
  char *v91; // rax
  __int64 v92; // xmm1_8
  __m128 v93; // xmm5
  float v94; // xmm7_4
  float v95; // xmm8_4
  float v96; // xmm0_4
  unsigned __int64 v97; // xmm1_8
  float v98; // xmm7_4
  float v99; // xmm0_4
  float v100; // xmm8_4
  __m128 v101; // xmm0
  __m128 v102; // xmm1
  unsigned int v103; // r8d
  __m128 v104; // xmm0
  char *v105; // rax
  __int64 v106; // xmm1_8
  __m128 v107; // xmm5
  float v108; // xmm8_4
  float v109; // xmm7_4
  float v110; // xmm0_4
  __int64 v111; // xmm1_8
  float v112; // xmm8_4
  float v113; // xmm0_4
  float v114; // xmm7_4
  __m128 v115; // xmm0
  __m128 v116; // xmm1
  unsigned int v117; // r10d
  __m128 v118; // xmm0
  char *v119; // rax
  float v120; // xmm3_4
  float v121; // xmm0_4
  float v122; // xmm2_4
  float v123; // xmm1_4
  float v124; // xmm0_4
  int v125; // eax
  __int64 v126; // rdi
  __int64 v127; // rbx
  __int64 (__fastcall *v128)(CMILRefCountBase *); // r12
  __int64 (__fastcall *v129)(CMILRefCountBase *); // rbx
  struct D2D_VECTOR_2F *v130; // rbx
  struct CVertexXYAAColorDUV2 *v131; // rbx
  void (__fastcall *v132)(WPF::ProcessHeapImpl *, void *); // r15
  void (__fastcall *v133)(WPF::ProcessHeapImpl *, void *); // rdi
  void (__fastcall *v134)(WPF::ProcessHeapImpl *, void *); // rdi
  void (__fastcall *v135)(WPF::ProcessHeapImpl *, void *); // rdi
  _DWORD *v136; // rbx
  __int64 v137; // rcx
  int v138; // eax
  int v139; // ecx
  __int64 v140; // rax
  char *v141; // rax
  int v142; // eax
  int v143; // edi
  struct D2D_VECTOR_2F *v144; // rax
  int v145; // eax
  int v146; // eax
  int v147; // r13d
  int v148; // eax
  int v149; // r13d
  int v150; // eax
  int v151; // r13d
  int v152; // eax
  int v153; // ebx
  int v154; // eax
  int v155; // eax
  int v156; // ebx
  int v157; // eax
  int v158; // ebx
  int v159; // eax
  int v160; // ebx
  unsigned __int16 v161; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v162; // [rsp+48h] [rbp-B8h] BYREF
  struct D2D_VECTOR_2F v163; // [rsp+50h] [rbp-B0h] BYREF
  int v164; // [rsp+58h] [rbp-A8h]
  struct D2D_VECTOR_2F *v165; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v166[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v167; // [rsp+78h] [rbp-88h]
  unsigned int v168; // [rsp+80h] [rbp-80h]
  __int64 v169; // [rsp+88h] [rbp-78h]
  __int64 v170; // [rsp+90h] [rbp-70h]
  __int64 v171; // [rsp+98h] [rbp-68h]
  __int64 v172; // [rsp+A0h] [rbp-60h]
  __int64 v173; // [rsp+A8h] [rbp-58h]
  struct CVertexXYAAColorDUV2 *v174[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v175; // [rsp+C0h] [rbp-40h]
  unsigned int v176; // [rsp+C8h] [rbp-38h]
  unsigned int v177; // [rsp+D0h] [rbp-30h]
  unsigned int v178; // [rsp+D4h] [rbp-2Ch]
  void *v179[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v180; // [rsp+E8h] [rbp-18h]
  unsigned int v181; // [rsp+F0h] [rbp-10h]
  int v182; // [rsp+F8h] [rbp-8h]
  void *v183[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v184; // [rsp+110h] [rbp+10h]
  int v185; // [rsp+118h] [rbp+18h]
  int v186; // [rsp+120h] [rbp+20h]
  struct CDrawListPrimitive *v187; // [rsp+128h] [rbp+28h] BYREF
  __int128 v188; // [rsp+130h] [rbp+30h]
  __m256i v189; // [rsp+140h] [rbp+40h] BYREF
  __int128 v190; // [rsp+160h] [rbp+60h]
  __int128 v191; // [rsp+170h] [rbp+70h]
  __m128 v192; // [rsp+180h] [rbp+80h] BYREF

  v1 = *((_DWORD *)this + 6) < 2u;
  v3 = 0;
  v187 = 0LL;
  v4 = 0LL;
  if ( !v1 )
  {
    v9 = CMegaRectCollection::PrepMegaRectData(this);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x157u);
      goto LABEL_2;
    }
    v10 = *((_DWORD *)this + 6);
    for ( i = 0; (int)i < v10 - 1; ++i )
    {
      v12 = 216LL * i;
      if ( *(_QWORD *)(v12 + *(_QWORD *)this + 80) )
      {
        v13 = i + 1;
        if ( (int)(i + 1) < v10 )
        {
          do
          {
            if ( v13 >= (int)(i + CCommonRegistryData::m_dwMegaRectSearchCount) )
              break;
            v14 = *(const struct FastRegion::Internal::CRgnData ***)(216LL * (unsigned int)v13 + *(_QWORD *)this + 80);
            if ( v14 )
            {
              v15 = FastRegion::CRegion::Subtract(
                      *(const struct FastRegion::Internal::CRgnData ***)(*(_QWORD *)this + v12 + 80),
                      v14);
              v3 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x167u);
                goto LABEL_2;
              }
            }
            ++v13;
          }
          while ( v13 < *((_DWORD *)this + 6) );
        }
      }
      v10 = *((_DWORD *)this + 6);
    }
    v16 = 0LL;
    v186 = 0;
    if ( *((int *)this + 6) > 0 )
    {
      while ( 1 )
      {
        v17 = (_QWORD *)(*(_QWORD *)this + 216 * v16);
        v18 = (_DWORD **)v17[10];
        if ( !v18 )
          goto LABEL_102;
        v19 = *v18;
        *(_OWORD *)v183 = 0LL;
        v184 = 0LL;
        v20 = 0;
        *(_OWORD *)v179 = 0LL;
        v21 = *v19 == 0;
        v22 = 0;
        v180 = 0LL;
        v181 = 0;
        *(_OWORD *)v166 = 0LL;
        v167 = 0LL;
        v177 = 0;
        v168 = 0;
        *(_OWORD *)v174 = 0LL;
        v175 = 0LL;
        v178 = 0;
        v176 = 0;
        v185 = 0;
        if ( v21 )
        {
          LODWORD(v23) = 0;
        }
        else if ( *v19 )
        {
          v23 = (8LL * (*v19 - 1) + (int)v19[2 * *v19 + 2] - (__int64)(int)v19[4]) >> 3;
        }
        else
        {
          LODWORD(v23) = 0;
        }
        v3 = DynArrayImpl<0>::AddMultiple((__int64)v183, 0x10u, v23, 0LL);
        if ( v3 >= 0 )
          break;
LABEL_27:
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x17Fu);
          goto LABEL_190;
        }
        v34 = v166[0];
        v35 = 0LL;
        v36 = 0;
        v164 = 0;
        if ( v185 > 0 )
        {
          while ( 1 )
          {
            v37 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)v183[0] + v35)), (__m128)_xmm);
            v38 = v37;
            v39 = _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
            v192 = v37;
            if ( v39 <= v37.m128_f32[0]
              || (v40 = _mm_shuffle_ps(v37, v37, 255).m128_f32[0],
                  v41 = _mm_shuffle_ps(v38, v38, 85).m128_f32[0],
                  v40 <= v41) )
            {
              v42 = 0.0;
            }
            else
            {
              v42 = (float)(v39 - v38.m128_f32[0]) * (float)(v40 - v41);
            }
            v182 = (int)v42 + v36;
            if ( v20 + 1 < v20 )
            {
              v45 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
              goto LABEL_187;
            }
            if ( v20 + 1 <= HIDWORD(v180) )
            {
              v181 = v20 + 1;
              *((__m128 *)v179[0] + v20) = v38;
            }
            else
            {
              v162 = (__int128 *)&v192;
              v3 = DynArrayImpl<0>::Grow((__int64)v179, 0x10u, 1, 0, (unsigned __int64 *)&v162);
              if ( v3 >= 0 )
              {
                v43 = 16 * v181;
                v44 = *v162;
                ++v181;
                *(_OWORD *)((char *)v179[0] + v43) = v44;
              }
              v45 = v3;
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC0u);
LABEL_187:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x18Eu);
                goto LABEL_190;
              }
            }
            v46 = 4 * v164;
            v47 = v22 + 1;
            v161 = 4 * v164;
            if ( v47 < v177 )
              break;
            v48 = HIDWORD(v167);
            if ( v47 <= HIDWORD(v167) )
            {
              v34[v177] = v46;
              v168 = v47;
            }
            else
            {
              v162 = (__int128 *)&v161;
              v49 = DynArrayImpl<0>::Grow((__int64)v166, 2u, 1, 0, (unsigned __int64 *)&v162);
              v34 = v166[0];
              v3 = v49;
              if ( v49 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xC0u);
                v145 = v3;
LABEL_185:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v145, 0x190u);
                goto LABEL_190;
              }
              v50 = v168;
              v47 = ++v168;
              v166[0][v50] = *(_WORD *)v162;
              v48 = HIDWORD(v167);
            }
            v51 = v47 + 1;
            v161 = v46 + 1;
            if ( v47 + 1 < v47 )
            {
              v147 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_183:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v147, 0x191u);
LABEL_190:
              DynArrayImpl<1>::~DynArrayImpl<1>((void **)v174);
              DynArrayImpl<1>::~DynArrayImpl<1>((void **)v166);
              DynArrayImpl<1>::~DynArrayImpl<1>(v179);
              DynArrayImpl<1>::~DynArrayImpl<1>(v183);
LABEL_103:
              if ( v4 )
                (*(void (__fastcall **)(struct CDrawListPrimitive *, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, 0LL);
              goto LABEL_2;
            }
            if ( v51 > v48 )
            {
              v146 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v166, 2, 1, &v161);
              v147 = v146;
              if ( v146 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v146, 0xC0u);
              v3 = v147;
              if ( v147 < 0 )
                goto LABEL_183;
              v51 = v168;
              v34 = v166[0];
              v48 = HIDWORD(v167);
            }
            else
            {
              v168 = v47 + 1;
              v34[v47] = v46 + 1;
            }
            v52 = v51 + 1;
            v53 = v46 + 3;
            v161 = v46 + 3;
            if ( v51 + 1 < v51 )
            {
              v149 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_181:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v149, 0x192u);
              goto LABEL_190;
            }
            if ( v52 > v48 )
            {
              v148 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v166, 2, 1, &v161);
              v149 = v148;
              if ( v148 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v148, 0xC0u);
              v3 = v149;
              if ( v149 < 0 )
                goto LABEL_181;
              v52 = v168;
              v34 = v166[0];
              v48 = HIDWORD(v167);
            }
            else
            {
              v168 = v51 + 1;
              v34[v51] = v53;
            }
            v54 = v52 + 1;
            v161 = v46;
            if ( v52 + 1 < v52 )
            {
              v151 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_179:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v151, 0x193u);
              goto LABEL_190;
            }
            if ( v54 > v48 )
            {
              v150 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v166, 2, 1, &v161);
              v151 = v150;
              if ( v150 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v150, 0xC0u);
              v3 = v151;
              if ( v151 < 0 )
                goto LABEL_179;
              v54 = v168;
              v34 = v166[0];
              v48 = HIDWORD(v167);
            }
            else
            {
              v168 = v52 + 1;
              v34[v52] = v46;
            }
            v55 = v54 + 1;
            v161 = v46 + 3;
            if ( v54 + 1 < v54 )
            {
              v143 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_177:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v143, 0x194u);
              goto LABEL_190;
            }
            if ( v55 > v48 )
            {
              v142 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v166, 2, 1, &v161);
              v143 = v142;
              if ( v142 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v142, 0xC0u);
              v3 = v143;
              if ( v143 < 0 )
                goto LABEL_177;
              v55 = v168;
              v34 = v166[0];
              v48 = HIDWORD(v167);
            }
            else
            {
              v168 = v54 + 1;
              v34[v54] = v53;
            }
            v56 = v46 + 2;
            v22 = v55 + 1;
            v161 = v56;
            v177 = v55 + 1;
            if ( v55 + 1 < v55 )
            {
              v153 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_175:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v153, 0x195u);
              goto LABEL_190;
            }
            if ( v22 > v48 )
            {
              v152 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v166, 2, 1, &v161);
              v153 = v152;
              if ( v152 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v152, 0xC0u);
              v3 = v153;
              if ( v153 < 0 )
                goto LABEL_175;
              v22 = v168;
              v34 = v166[0];
              v177 = v168;
            }
            else
            {
              v168 = v55 + 1;
              v34[v55] = v56;
            }
            v57 = v17[14];
            v58 = (__m128)LODWORD(FLOAT_1_0);
            v59 = *((_DWORD *)v17 + 25);
            *(_QWORD *)&v190 = _mm_unpacklo_ps((__m128)v192.m128_u32[0], (__m128)v192.m128_u32[1]).m128_u64[0];
            v60 = v192.m128_f32[0] - *((float *)v17 + 22);
            v61 = v192.m128_f32[1] - *((float *)v17 + 23);
            v189.m256i_i64[0] = v190;
            v62 = *((float *)v17 + 46) - *((float *)v17 + 22);
            v173 = v57;
            v172 = v17[18];
            v63 = (struct D2D_VECTOR_2F)v17[26];
            v64 = v60 / v62;
            *((_QWORD *)&v190 + 1) = 0x3F80000000000000LL;
            v189.m256i_i32[3] = v59;
            v189.m256i_i32[2] = 1065353216;
            v65 = *((float *)v17 + 47) - *((float *)v17 + 23);
            v163 = v63;
            v165 = (struct D2D_VECTOR_2F *)v17[22];
            v66 = v61 / v65;
            v162 = (__int128 *)v17[13];
            v58.m128_f32[0] = 1.0 - v66;
            v171 = v17[17];
            v169 = v17[25];
            v170 = v17[21];
            v67 = v58;
            v67.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *(float *)&v162)
                                            + (float)(*(float *)&v171 * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *(float *)&v170)
                                            + (float)(*(float *)&v169 * v64))
                                    * v66);
            v68 = v58;
            v68.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *((float *)&v162 + 1))
                                            + (float)(*((float *)&v171 + 1) * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *((float *)&v170 + 1))
                                            + (float)(*((float *)&v169 + 1) * v64))
                                    * v66);
            v189.m256i_i64[2] = _mm_unpacklo_ps(v67, v68).m128_u64[0];
            v69 = v178 + 1;
            v70 = v58;
            v70.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *(float *)&v173)
                                            + (float)(*(float *)&v172 * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *(float *)&v165) + (float)(v163.x * v64))
                                    * v66);
            v58.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *((float *)&v173 + 1))
                                            + (float)(*((float *)&v172 + 1) * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *((float *)&v165 + 1)) + (float)(v163.y * v64))
                                    * v66);
            v189.m256i_i64[3] = _mm_unpacklo_ps(v70, v58).m128_u64[0];
            v191 = *(_OWORD *)&v189.m256i_u64[2];
            if ( v178 + 1 < v178 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v154 = -2147024362;
              v3 = -2147024362;
              goto LABEL_173;
            }
            v71 = HIDWORD(v175);
            if ( v69 <= HIDWORD(v175) )
            {
              v76 = v174[0];
              v141 = (char *)v174[0] + 64 * (unsigned __int64)v178;
              v176 = v178 + 1;
              *(__m256i *)v141 = v189;
              *((_OWORD *)v141 + 2) = v190;
              *((_OWORD *)v141 + 3) = v191;
            }
            else
            {
              v163 = (struct D2D_VECTOR_2F)&v189;
              v72 = DynArrayImpl<0>::Grow((__int64)v174, 0x40u, 1, 0, (unsigned __int64 *)&v163);
              v69 = v176;
              v3 = v72;
              if ( v72 >= 0 )
              {
                v73 = (_OWORD *)v163;
                v74 = (_OWORD *)((char *)v174[0] + 64 * v176);
                v69 = v176 + 1;
                v75 = *(_OWORD *)*(_QWORD *)&v163;
                ++v176;
                *v74 = v75;
                v74[1] = v73[1];
                v74[2] = v73[2];
                v74[3] = v73[3];
              }
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC0u);
                v154 = v3;
LABEL_173:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v154, 0x1B2u);
                goto LABEL_190;
              }
              v76 = v174[0];
              v71 = HIDWORD(v175);
            }
            v77 = (__m128)LODWORD(FLOAT_1_0);
            v78 = v17[14];
            *(_QWORD *)&v190 = _mm_unpacklo_ps((__m128)v192.m128_u32[2], (__m128)v192.m128_u32[1]).m128_u64[0];
            v79 = v192.m128_f32[2] - *((float *)v17 + 22);
            v80 = v192.m128_f32[1] - *((float *)v17 + 23);
            v189.m256i_i64[0] = v190;
            v81 = *((float *)v17 + 46) - *((float *)v17 + 22);
            v169 = v78;
            v170 = v17[18];
            v82 = v17[26];
            v83 = v79 / v81;
            v189.m256i_i32[2] = 1065353216;
            v84 = *((float *)v17 + 47) - *((float *)v17 + 23);
            v162 = (__int128 *)v82;
            v77.m128_f32[0] = 1.0 - v83;
            v171 = v17[22];
            v85 = v80 / v84;
            v86 = v77;
            v163 = (struct D2D_VECTOR_2F)v17[13];
            v87 = v77;
            v165 = (struct D2D_VECTOR_2F *)v17[17];
            v173 = v17[25];
            v172 = v17[21];
            v86.m128_f32[0] = (float)((float)((float)((float)(1.0 - v83) * *(float *)&v172)
                                            + (float)(v83 * *(float *)&v173))
                                    * v85)
                            + (float)((float)(1.0 - v85)
                                    * (float)((float)((float)(1.0 - v83) * v163.x) + (float)(v83 * *(float *)&v165)));
            v87.m128_f32[0] = (float)((float)((float)((float)(1.0 - v83) * *((float *)&v172 + 1))
                                            + (float)(v83 * *((float *)&v173 + 1)))
                                    * v85)
                            + (float)((float)(1.0 - v85)
                                    * (float)((float)((float)(1.0 - v83) * v163.y) + (float)(v83 * *((float *)&v165 + 1))));
            v88 = _mm_unpacklo_ps(v86, v87).m128_u64[0];
            v89 = v77;
            v189.m256i_i64[2] = v88;
            v90 = v69 + 1;
            *(_QWORD *)&v191 = v88;
            v89.m128_f32[0] = (float)((float)((float)((float)(1.0 - v83) * *(float *)&v171)
                                            + (float)(v83 * *(float *)&v162))
                                    * v85)
                            + (float)((float)(1.0 - v85)
                                    * (float)((float)((float)(1.0 - v83) * *(float *)&v169)
                                            + (float)(v83 * *(float *)&v170)));
            v77.m128_f32[0] = (float)((float)((float)((float)(1.0 - v83) * *((float *)&v171 + 1))
                                            + (float)(v83 * *((float *)&v162 + 1)))
                                    * v85)
                            + (float)((float)(1.0 - v85)
                                    * (float)((float)((float)(1.0 - v83) * *((float *)&v169 + 1))
                                            + (float)(v83 * *((float *)&v170 + 1))));
            v189.m256i_i64[3] = _mm_unpacklo_ps(v89, v77).m128_u64[0];
            *((_QWORD *)&v191 + 1) = v189.m256i_i64[3];
            if ( v69 + 1 < v69 )
            {
              v156 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_171:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v156, 0x1BFu);
              goto LABEL_190;
            }
            if ( v90 > v71 )
            {
              v155 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v174, 64, 1, &v189);
              v156 = v155;
              if ( v155 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v155, 0xC0u);
              v3 = v156;
              if ( v156 < 0 )
                goto LABEL_171;
              v90 = v176;
              v76 = v174[0];
              v71 = HIDWORD(v175);
            }
            else
            {
              v91 = (char *)v76 + 64 * (unsigned __int64)v69;
              v176 = v69 + 1;
              *(__m256i *)v91 = v189;
              *((_OWORD *)v91 + 2) = v190;
              *((_OWORD *)v91 + 3) = v191;
            }
            v92 = v17[14];
            v93 = (__m128)LODWORD(FLOAT_1_0);
            *(_QWORD *)&v190 = _mm_unpacklo_ps((__m128)v192.m128_u32[0], (__m128)v192.m128_u32[3]).m128_u64[0];
            v94 = v192.m128_f32[0] - *((float *)v17 + 22);
            v95 = v192.m128_f32[3] - *((float *)v17 + 23);
            v189.m256i_i64[0] = v190;
            v96 = *((float *)v17 + 46) - *((float *)v17 + 22);
            v169 = v92;
            v170 = v17[18];
            v97 = v17[26];
            v98 = v94 / v96;
            v189.m256i_i32[2] = 1065353216;
            v99 = *((float *)v17 + 47) - *((float *)v17 + 23);
            v162 = (__int128 *)v97;
            v171 = v17[22];
            v100 = v95 / v99;
            v163 = (struct D2D_VECTOR_2F)v17[13];
            v93.m128_f32[0] = 1.0 - v100;
            v165 = (struct D2D_VECTOR_2F *)v17[17];
            v173 = v17[25];
            v172 = v17[21];
            v101 = v93;
            v101.m128_f32[0] = (float)((float)(1.0 - v100)
                                     * (float)((float)((float)(1.0 - v98) * v163.x) + (float)(v98 * *(float *)&v165)))
                             + (float)((float)((float)((float)(1.0 - v98) * *(float *)&v172)
                                             + (float)(v98 * *(float *)&v173))
                                     * v100);
            v102 = v93;
            v102.m128_f32[0] = (float)((float)(1.0 - v100)
                                     * (float)((float)((float)(1.0 - v98) * v163.y)
                                             + (float)(v98 * *((float *)&v165 + 1))))
                             + (float)((float)((float)((float)(1.0 - v98) * *((float *)&v172 + 1))
                                             + (float)(v98 * *((float *)&v173 + 1)))
                                     * v100);
            v189.m256i_i64[2] = _mm_unpacklo_ps(v101, v102).m128_u64[0];
            v103 = v90 + 1;
            v104 = v93;
            v104.m128_f32[0] = (float)((float)(1.0 - v100)
                                     * (float)((float)((float)(1.0 - v98) * *(float *)&v169)
                                             + (float)(v98 * *(float *)&v170)))
                             + (float)((float)((float)((float)(1.0 - v98) * *(float *)&v171)
                                             + (float)(v98 * *(float *)&v162))
                                     * v100);
            v93.m128_f32[0] = (float)((float)(1.0 - v100)
                                    * (float)((float)((float)(1.0 - v98) * *((float *)&v169 + 1))
                                            + (float)(v98 * *((float *)&v170 + 1))))
                            + (float)((float)((float)((float)(1.0 - v98) * *((float *)&v171 + 1))
                                            + (float)(v98 * *((float *)&v162 + 1)))
                                    * v100);
            v189.m256i_i64[3] = _mm_unpacklo_ps(v104, v93).m128_u64[0];
            v191 = *(_OWORD *)&v189.m256i_u64[2];
            if ( v90 + 1 < v90 )
            {
              v158 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_169:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v158, 0x1CCu);
              goto LABEL_190;
            }
            if ( v103 > v71 )
            {
              v157 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v174, 64, 1, &v189);
              v158 = v157;
              if ( v157 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v157, 0xC0u);
              v3 = v158;
              if ( v158 < 0 )
                goto LABEL_169;
              v103 = v176;
              v76 = v174[0];
              v71 = HIDWORD(v175);
            }
            else
            {
              v105 = (char *)v76 + 64 * (unsigned __int64)v90;
              v176 = v90 + 1;
              *(__m256i *)v105 = v189;
              *((_OWORD *)v105 + 2) = v190;
              *((_OWORD *)v105 + 3) = v191;
            }
            v106 = v17[14];
            v107 = (__m128)LODWORD(FLOAT_1_0);
            *(_QWORD *)&v190 = _mm_unpacklo_ps((__m128)v192.m128_u32[2], (__m128)v192.m128_u32[3]).m128_u64[0];
            v108 = v192.m128_f32[2] - *((float *)v17 + 22);
            v109 = v192.m128_f32[3] - *((float *)v17 + 23);
            v189.m256i_i64[0] = v190;
            v110 = *((float *)v17 + 46) - *((float *)v17 + 22);
            v170 = v106;
            v169 = v17[18];
            v111 = v17[26];
            v112 = v108 / v110;
            v189.m256i_i32[2] = 1065353216;
            v113 = *((float *)v17 + 47) - *((float *)v17 + 23);
            v171 = v111;
            v162 = (__int128 *)v17[22];
            v114 = v109 / v113;
            v165 = (struct D2D_VECTOR_2F *)v17[13];
            v107.m128_f32[0] = 1.0 - v114;
            v163 = (struct D2D_VECTOR_2F)v17[17];
            v172 = v17[25];
            v173 = v17[21];
            v115 = v107;
            v115.m128_f32[0] = (float)((float)(1.0 - v114)
                                     * (float)((float)(v112 * v163.x) + (float)((float)(1.0 - v112) * *(float *)&v165)))
                             + (float)((float)((float)(v112 * *(float *)&v172)
                                             + (float)((float)(1.0 - v112) * *(float *)&v173))
                                     * v114);
            v116 = v107;
            v116.m128_f32[0] = (float)((float)(1.0 - v114)
                                     * (float)((float)(v112 * v163.y)
                                             + (float)((float)(1.0 - v112) * *((float *)&v165 + 1))))
                             + (float)((float)((float)(v112 * *((float *)&v172 + 1))
                                             + (float)((float)(1.0 - v112) * *((float *)&v173 + 1)))
                                     * v114);
            v189.m256i_i64[2] = _mm_unpacklo_ps(v115, v116).m128_u64[0];
            v117 = v103 + 1;
            v178 = v103 + 1;
            v118 = v107;
            v118.m128_f32[0] = (float)((float)(1.0 - v114)
                                     * (float)((float)(v112 * *(float *)&v169)
                                             + (float)((float)(1.0 - v112) * *(float *)&v170)))
                             + (float)((float)((float)(v112 * *(float *)&v171)
                                             + (float)((float)(1.0 - v112) * *(float *)&v162))
                                     * v114);
            v107.m128_f32[0] = (float)((float)(1.0 - v114)
                                     * (float)((float)(v112 * *((float *)&v169 + 1))
                                             + (float)((float)(1.0 - v112) * *((float *)&v170 + 1))))
                             + (float)((float)((float)(v112 * *((float *)&v171 + 1))
                                             + (float)((float)(1.0 - v112) * *((float *)&v162 + 1)))
                                     * v114);
            v189.m256i_i64[3] = _mm_unpacklo_ps(v118, v107).m128_u64[0];
            v191 = *(_OWORD *)&v189.m256i_u64[2];
            if ( v103 + 1 < v103 )
            {
              v160 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_167:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v160, 0x1D9u);
              goto LABEL_190;
            }
            if ( v117 > v71 )
            {
              v159 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v174, 64, 1, &v189);
              v160 = v159;
              if ( v159 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v159, 0xC0u);
              v3 = v160;
              if ( v160 < 0 )
                goto LABEL_167;
              v117 = v176;
              v76 = v174[0];
              v178 = v176;
            }
            else
            {
              v119 = (char *)v76 + 64 * (unsigned __int64)v103;
              v176 = v103 + 1;
              *(__m256i *)v119 = v189;
              *((_OWORD *)v119 + 2) = v190;
              *((_OWORD *)v119 + 3) = v191;
            }
            v20 = v181;
            v35 = (unsigned int)(v164 + 1);
            v36 = v182;
            v164 = v35;
            if ( (int)v35 >= v185 )
              goto LABEL_72;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v145 = -2147024362;
          v3 = -2147024362;
          goto LABEL_185;
        }
        v76 = v174[0];
        v117 = v178;
LABEL_72:
        v120 = *((float *)v17 + 22);
        v121 = *((float *)v17 + 46);
        v122 = *((float *)v17 + 23);
        v123 = *((float *)v17 + 47);
        if ( v121 <= v120 || v123 <= v122 )
          v124 = 0.0;
        else
          v124 = (float)(v121 - v120) * (float)(v123 - v122);
        CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v124 - v36;
        v163 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
        v125 = CDrawListPrimitive::Create(1, v76, v117, v34, v22, &v163, 1, &v187);
        v3 = v125;
        if ( v125 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v125, 0x1F6u);
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)v174);
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)v166);
          DynArrayImpl<1>::~DynArrayImpl<1>(v179);
          DynArrayImpl<1>::~DynArrayImpl<1>(v183);
          v4 = v187;
          goto LABEL_103;
        }
        v126 = *v17;
        v127 = *(_QWORD *)(*v17 + 16LL);
        if ( v127 )
        {
          v128 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v127 + 8LL);
          if ( v128 == CMILRefCountBase::Release )
            CMILRefCountBase::Release(*(CMILRefCountBase **)(*v17 + 16LL));
          else
            v128(*(CMILRefCountBase **)(*v17 + 16LL));
        }
        v4 = v187;
        *(_QWORD *)(v126 + 16) = v187;
        if ( v4 )
          (**(void (__fastcall ***)(struct CDrawListPrimitive *))v4)(v4);
        *(_DWORD *)(v126 + 136) = 1065353216;
        *(_QWORD *)(v126 + 128) = 0LL;
        *(_QWORD *)(v126 + 120) = 0LL;
        *(_QWORD *)(v126 + 108) = 0LL;
        *(_QWORD *)(v126 + 100) = 0LL;
        *(_QWORD *)(v126 + 88) = 0LL;
        *(_QWORD *)(v126 + 80) = 0LL;
        *(_DWORD *)(v126 + 116) = 1065353216;
        *(_DWORD *)(v126 + 96) = 1065353216;
        *(_DWORD *)(v126 + 76) = 1065353216;
        if ( v4 )
        {
          v129 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 8LL);
          if ( v129 == CMILRefCountBase::Release )
            CMILRefCountBase::Release(v4);
          else
            v129(v4);
          v4 = 0LL;
          v187 = 0LL;
        }
        v130 = (struct D2D_VECTOR_2F *)v17[10];
        v165 = v130;
        if ( v130 )
        {
          v163 = *v130;
          if ( &v130[1] != *(struct D2D_VECTOR_2F **)&v163 )
          {
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct D2D_VECTOR_2F))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v163);
            v130 = v165;
            v144 = v165 + 1;
            *v165 = (struct D2D_VECTOR_2F)&v165[1];
            v144->x = 0.0;
          }
          v163 = *(struct D2D_VECTOR_2F *)(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))&v163 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v130);
          else
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct D2D_VECTOR_2F *))&v163)(WPF::g_pProcessHeap, v130);
        }
        v131 = v174[0];
        v17[10] = 0LL;
        if ( v131 != v174[1] )
        {
          v132 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v132 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v131);
          else
            v132(WPF::g_pProcessHeap, v131);
        }
        if ( v34 != v166[1] )
        {
          v133 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v133 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v34);
          else
            v133(WPF::g_pProcessHeap, v34);
        }
        if ( v179[0] != v179[1] )
        {
          v134 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v134 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v179[0]);
          else
            v134(WPF::g_pProcessHeap, v179[0]);
        }
        if ( v183[0] != v183[1] )
        {
          v135 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v135 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v183[0]);
          else
            v135(WPF::g_pProcessHeap, v183[0]);
        }
LABEL_102:
        v16 = (unsigned int)(v186 + 1);
        v186 = v16;
        if ( (int)v16 >= *((_DWORD *)this + 6) )
          goto LABEL_103;
      }
      v24 = *v18;
      v164 = 0;
      v189.m256i_i64[0] = (__int64)v24;
      if ( *v24 )
      {
        v25 = (int)v24[4];
        v26 = (FastRegion::Internal::CRgnData *)(*v24 - 1);
        v27 = 0;
        LODWORD(v190) = 0;
        v28 = (unsigned __int64)&v24[2 * (_QWORD)v26 + 3];
        v29 = v24 + 3;
        v30 = (int)v29[3];
        v31 = (__int64)v29 + v25;
        v189.m256i_i64[1] = v28;
        v189.m256i_i64[2] = (__int64)v29;
        v189.m256i_i64[3] = v31;
        v32 = ((__int64)v29 + v30 - v31 + 8) >> 3;
        DWORD1(v190) = v32;
        if ( (int)v32 > 0 )
          goto LABEL_24;
        FastRegion::Internal::CRgnData::StepIterator(v26, (struct FastRegion::CRegion::Iterator *)&v189);
      }
      else
      {
        *(_OWORD *)&v189.m256i_u64[1] = 0LL;
      }
      v28 = v189.m256i_u64[1];
      v31 = v189.m256i_i64[3];
      v29 = (_DWORD *)v189.m256i_i64[2];
      v27 = v190;
      LODWORD(v32) = DWORD1(v190);
LABEL_24:
      v33 = v183[0];
      while ( (unsigned __int64)v29 < v28 )
      {
        v136 = v29 + 2;
        DWORD1(v188) = *v29;
        HIDWORD(v188) = v29[2];
        v137 = v27++;
        LODWORD(v188) = *(_DWORD *)(v31 + 8 * v137);
        v138 = *(_DWORD *)(v31 + 8 * v137 + 4);
        v139 = v164;
        DWORD2(v188) = v138;
        v33[v164] = v188;
        if ( v27 >= (int)v32 )
        {
          while ( 1 )
          {
            v29 = v136;
            v140 = (int)v136[3];
            v31 = (__int64)v136 + (int)v136[1];
            v136 += 2;
            LODWORD(v32) = ((__int64)v136 + v140 - v31) >> 3;
            if ( (_DWORD)v32 )
              break;
            if ( (unsigned __int64)v29 >= v28 )
              goto LABEL_108;
          }
          v27 = 0;
        }
LABEL_108:
        v164 = v139 + 1;
      }
      v22 = v177;
      v20 = v181;
      goto LABEL_27;
    }
  }
LABEL_2:
  for ( j = 0; j < *((_DWORD *)this + 6); *(_QWORD *)(*(_QWORD *)this + v6 + 80) = 0LL )
  {
    v6 = 216LL * j;
    v7 = *(CRegion **)(*(_QWORD *)this + v6 + 80);
    if ( v7 )
      CRegion::`scalar deleting destructor'(v7, 0);
    ++j;
  }
  return (unsigned int)v3;
}
