/*
 * XREFs of ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18003E3A0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18004005C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180041D10 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800881A0 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180088DA4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800DE9BC (--_GCRegion@@QEAAPEAXI@Z.c)
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
  const struct CRegion *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
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
  int v36; // ecx
  __m128 v37; // xmm1
  __m128 v38; // xmm0
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  __int64 v43; // rcx
  __m128 v44; // xmm0
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
  unsigned int v71; // ecx
  int v72; // eax
  _OWORD *v73; // rax
  _OWORD *v74; // rcx
  __int128 v75; // xmm0
  __m128 v76; // xmm6
  __int64 v77; // xmm1_8
  float v78; // xmm7_4
  float v79; // xmm8_4
  float v80; // xmm0_4
  __m128 *v81; // xmm1_8
  float v82; // xmm7_4
  float v83; // xmm0_4
  float v84; // xmm8_4
  __m128 v85; // xmm2
  __m128 v86; // xmm1
  __int64 v87; // xmm0_8
  __m128 v88; // xmm1
  unsigned int v89; // r8d
  __int64 v90; // rax
  const struct CVertexXYAAColorDUV2 *v91; // rbx
  char *v92; // rax
  __int64 v93; // xmm1_8
  __m128 v94; // xmm5
  float v95; // xmm7_4
  float v96; // xmm8_4
  float v97; // xmm0_4
  __m128 *v98; // xmm1_8
  float v99; // xmm7_4
  float v100; // xmm0_4
  float v101; // xmm8_4
  __m128 v102; // xmm0
  __m128 v103; // xmm1
  unsigned int v104; // edx
  __m128 v105; // xmm0
  char *v106; // rax
  __int64 v107; // xmm1_8
  __m128 v108; // xmm5
  float v109; // xmm8_4
  float v110; // xmm7_4
  float v111; // xmm0_4
  __int64 v112; // xmm1_8
  float v113; // xmm8_4
  float v114; // xmm0_4
  float v115; // xmm7_4
  __m128 v116; // xmm0
  __m128 v117; // xmm1
  unsigned int v118; // r8d
  __m128 v119; // xmm0
  char *v120; // rax
  float v121; // xmm3_4
  float v122; // xmm0_4
  float v123; // xmm2_4
  float v124; // xmm1_4
  float v125; // xmm0_4
  int v126; // eax
  __int64 v127; // rdi
  CMILRefCountBase *v128; // r12
  __int64 (__fastcall *v129)(CMILRefCountBase *); // rdi
  struct D2D_VECTOR_2F *v130; // rdi
  void (__fastcall *v131)(WPF::ProcessHeapImpl *, void *); // r15
  void (__fastcall *v132)(WPF::ProcessHeapImpl *, void *); // rdi
  void (__fastcall *v133)(WPF::ProcessHeapImpl *, void *); // rdi
  void (__fastcall *v134)(WPF::ProcessHeapImpl *, void *); // rdi
  _DWORD *v135; // rbx
  __int64 v136; // rcx
  int v137; // eax
  int v138; // ecx
  __int64 v139; // rax
  char *v140; // rax
  int v141; // eax
  int v142; // eax
  int v143; // r13d
  int v144; // eax
  int v145; // r13d
  int v146; // eax
  int v147; // r13d
  int v148; // eax
  int v149; // r13d
  int v150; // eax
  int v151; // ebx
  int v152; // eax
  int v153; // eax
  int v154; // ebx
  int v155; // eax
  int v156; // ebx
  int v157; // eax
  int v158; // ebx
  struct D2D_VECTOR_2F *v159; // rax
  unsigned __int16 v160; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_VECTOR_2F v161; // [rsp+48h] [rbp-B8h] BYREF
  __m128 *v162; // [rsp+50h] [rbp-B0h] BYREF
  int v163; // [rsp+58h] [rbp-A8h]
  struct D2D_VECTOR_2F *v164; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v165[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v166; // [rsp+78h] [rbp-88h]
  unsigned int v167; // [rsp+80h] [rbp-80h]
  __int64 v168; // [rsp+88h] [rbp-78h]
  __int64 v169; // [rsp+90h] [rbp-70h]
  __int64 v170; // [rsp+98h] [rbp-68h]
  __int64 v171; // [rsp+A0h] [rbp-60h]
  __int64 v172; // [rsp+A8h] [rbp-58h]
  struct CVertexXYAAColorDUV2 *v173[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v174; // [rsp+C0h] [rbp-40h]
  unsigned int v175; // [rsp+C8h] [rbp-38h]
  unsigned int v176; // [rsp+D0h] [rbp-30h]
  unsigned int v177; // [rsp+D4h] [rbp-2Ch]
  void *v178[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v179; // [rsp+E8h] [rbp-18h]
  unsigned int v180; // [rsp+F0h] [rbp-10h]
  int v181; // [rsp+F8h] [rbp-8h]
  void *v182[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v183; // [rsp+110h] [rbp+10h]
  int v184; // [rsp+118h] [rbp+18h]
  int v185; // [rsp+120h] [rbp+20h]
  struct CDrawListPrimitive *v186; // [rsp+128h] [rbp+28h] BYREF
  __int128 v187; // [rsp+130h] [rbp+30h]
  __m256i v188; // [rsp+140h] [rbp+40h] BYREF
  __int128 v189; // [rsp+160h] [rbp+60h]
  __int128 v190; // [rsp+170h] [rbp+70h]
  __m128 v191; // [rsp+180h] [rbp+80h] BYREF

  v1 = *((_DWORD *)this + 6) < 2u;
  v3 = 0;
  v186 = 0LL;
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
            v14 = *(const struct CRegion **)(216LL * (unsigned int)v13 + *(_QWORD *)this + 80);
            if ( v14 )
            {
              v15 = FastRegion::CRegion::Subtract(*(FastRegion::CRegion **)(*(_QWORD *)this + v12 + 80), v14);
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
    v185 = 0;
    if ( *((int *)this + 6) > 0 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)this + 216 * v16;
        v18 = *(_DWORD ***)(v17 + 80);
        if ( !v18 )
          goto LABEL_102;
        v19 = *v18;
        *(_OWORD *)v182 = 0LL;
        v183 = 0LL;
        v20 = 0;
        *(_OWORD *)v178 = 0LL;
        v21 = *v19 == 0;
        v22 = 0;
        v179 = 0LL;
        v180 = 0;
        *(_OWORD *)v165 = 0LL;
        v166 = 0LL;
        v176 = 0;
        v167 = 0;
        *(_OWORD *)v173 = 0LL;
        v174 = 0LL;
        v177 = 0;
        v175 = 0;
        v184 = 0;
        if ( v21 )
          v23 = 0LL;
        else
          v23 = *v19 ? (8LL * (*v19 - 1) + (int)v19[2 * *v19 + 2] - (__int64)(int)v19[4]) >> 3 : 0LL;
        v3 = DynArrayImpl<0>::AddMultiple(v182, 16LL, v23);
        if ( v3 >= 0 )
          break;
LABEL_27:
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x17Fu);
          goto LABEL_191;
        }
        v34 = v165[0];
        v35 = 0LL;
        v36 = 0;
        v163 = 0;
        if ( v184 > 0 )
        {
          while ( 1 )
          {
            v37 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)v182[0] + v35)), (__m128)_xmm);
            v38 = v37;
            v39 = _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
            v191 = v37;
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
            v181 = (int)v42 + v36;
            if ( v20 + 1 < v20 )
            {
              v45 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
              goto LABEL_188;
            }
            if ( v20 + 1 <= HIDWORD(v179) )
            {
              v180 = v20 + 1;
              *((__m128 *)v178[0] + v20) = v38;
            }
            else
            {
              v162 = &v191;
              v3 = DynArrayImpl<0>::Grow((unsigned int)v178, 16, 1, 0, (__int64)&v162);
              if ( v3 >= 0 )
              {
                v43 = 16 * v180;
                v44 = *v162;
                ++v180;
                *(__m128 *)((char *)v178[0] + v43) = v44;
              }
              v45 = v3;
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC0u);
LABEL_188:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x18Eu);
                goto LABEL_191;
              }
            }
            v46 = 4 * v163;
            v47 = v22 + 1;
            v160 = 4 * v163;
            if ( v47 < v176 )
              break;
            v48 = HIDWORD(v166);
            if ( v47 <= HIDWORD(v166) )
            {
              v34[v176] = v46;
              v167 = v47;
            }
            else
            {
              v162 = (__m128 *)&v160;
              v49 = DynArrayImpl<0>::Grow((unsigned int)v165, 2, 1, 0, (__int64)&v162);
              v34 = v165[0];
              v3 = v49;
              if ( v49 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xC0u);
                v141 = v3;
LABEL_186:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v141, 0x190u);
                goto LABEL_191;
              }
              v50 = v167;
              v47 = ++v167;
              v165[0][v50] = v162->m128_i16[0];
              v48 = HIDWORD(v166);
            }
            v51 = v47 + 1;
            v160 = v46 + 1;
            if ( v47 + 1 < v47 )
            {
              v143 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_184:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v143, 0x191u);
LABEL_191:
              DynArrayImpl<1>::~DynArrayImpl<1>(v173);
              DynArrayImpl<1>::~DynArrayImpl<1>(v165);
              DynArrayImpl<1>::~DynArrayImpl<1>(v178);
              DynArrayImpl<1>::~DynArrayImpl<1>(v182);
LABEL_103:
              if ( v4 )
                (*(void (__fastcall **)(struct CDrawListPrimitive *, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, 0LL);
              goto LABEL_2;
            }
            if ( v51 > v48 )
            {
              v142 = DynArrayImpl<0>::AddMultipleAndSet(v165, 2LL, 1LL, &v160);
              v143 = v142;
              if ( v142 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v142, 0xC0u);
              v3 = v143;
              if ( v143 < 0 )
                goto LABEL_184;
              v51 = v167;
              v34 = v165[0];
              v48 = HIDWORD(v166);
            }
            else
            {
              v167 = v47 + 1;
              v34[v47] = v46 + 1;
            }
            v52 = v51 + 1;
            v53 = v46 + 3;
            v160 = v46 + 3;
            if ( v51 + 1 < v51 )
            {
              v145 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_182:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v145, 0x192u);
              goto LABEL_191;
            }
            if ( v52 > v48 )
            {
              v144 = DynArrayImpl<0>::AddMultipleAndSet(v165, 2LL, 1LL, &v160);
              v145 = v144;
              if ( v144 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v144, 0xC0u);
              v3 = v145;
              if ( v145 < 0 )
                goto LABEL_182;
              v52 = v167;
              v34 = v165[0];
              v48 = HIDWORD(v166);
            }
            else
            {
              v167 = v51 + 1;
              v34[v51] = v53;
            }
            v54 = v52 + 1;
            v160 = v46;
            if ( v52 + 1 < v52 )
            {
              v147 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_180:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v147, 0x193u);
              goto LABEL_191;
            }
            if ( v54 > v48 )
            {
              v146 = DynArrayImpl<0>::AddMultipleAndSet(v165, 2LL, 1LL, &v160);
              v147 = v146;
              if ( v146 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v146, 0xC0u);
              v3 = v147;
              if ( v147 < 0 )
                goto LABEL_180;
              v54 = v167;
              v34 = v165[0];
              v48 = HIDWORD(v166);
            }
            else
            {
              v167 = v52 + 1;
              v34[v52] = v46;
            }
            v55 = v54 + 1;
            v160 = v46 + 3;
            if ( v54 + 1 < v54 )
            {
              v149 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_178:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v149, 0x194u);
              goto LABEL_191;
            }
            if ( v55 > v48 )
            {
              v148 = DynArrayImpl<0>::AddMultipleAndSet(v165, 2LL, 1LL, &v160);
              v149 = v148;
              if ( v148 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v148, 0xC0u);
              v3 = v149;
              if ( v149 < 0 )
                goto LABEL_178;
              v55 = v167;
              v34 = v165[0];
              v48 = HIDWORD(v166);
            }
            else
            {
              v167 = v54 + 1;
              v34[v54] = v53;
            }
            v56 = v46 + 2;
            v22 = v55 + 1;
            v160 = v56;
            v176 = v55 + 1;
            if ( v55 + 1 < v55 )
            {
              v151 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_176:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v151, 0x195u);
              goto LABEL_191;
            }
            if ( v22 > v48 )
            {
              v150 = DynArrayImpl<0>::AddMultipleAndSet(v165, 2LL, 1LL, &v160);
              v151 = v150;
              if ( v150 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v150, 0xC0u);
              v3 = v151;
              if ( v151 < 0 )
                goto LABEL_176;
              v22 = v167;
              v34 = v165[0];
              v176 = v167;
            }
            else
            {
              v167 = v55 + 1;
              v34[v55] = v56;
            }
            v57 = *(_QWORD *)(v17 + 112);
            v58 = (__m128)LODWORD(FLOAT_1_0);
            v59 = *(_DWORD *)(v17 + 100);
            *(_QWORD *)&v189 = _mm_unpacklo_ps((__m128)v191.m128_u32[0], (__m128)v191.m128_u32[1]).m128_u64[0];
            v60 = v191.m128_f32[0] - *(float *)(v17 + 88);
            v61 = v191.m128_f32[1] - *(float *)(v17 + 92);
            v188.m256i_i64[0] = v189;
            v62 = *(float *)(v17 + 184) - *(float *)(v17 + 88);
            v172 = v57;
            v171 = *(_QWORD *)(v17 + 144);
            v63 = *(struct D2D_VECTOR_2F *)(v17 + 208);
            v64 = v60 / v62;
            *((_QWORD *)&v189 + 1) = 0x3F80000000000000LL;
            v188.m256i_i32[3] = v59;
            v188.m256i_i32[2] = 1065353216;
            v65 = *(float *)(v17 + 188) - *(float *)(v17 + 92);
            v161 = v63;
            v164 = *(struct D2D_VECTOR_2F **)(v17 + 176);
            v66 = v61 / v65;
            v162 = *(__m128 **)(v17 + 104);
            v58.m128_f32[0] = 1.0 - v66;
            v170 = *(_QWORD *)(v17 + 136);
            v168 = *(_QWORD *)(v17 + 200);
            v169 = *(_QWORD *)(v17 + 168);
            v67 = v58;
            v67.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *(float *)&v162)
                                            + (float)(*(float *)&v170 * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *(float *)&v169)
                                            + (float)(*(float *)&v168 * v64))
                                    * v66);
            v68 = v58;
            v68.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *((float *)&v162 + 1))
                                            + (float)(*((float *)&v170 + 1) * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *((float *)&v169 + 1))
                                            + (float)(*((float *)&v168 + 1) * v64))
                                    * v66);
            v188.m256i_i64[2] = _mm_unpacklo_ps(v67, v68).m128_u64[0];
            v69 = v177 + 1;
            v70 = v58;
            v70.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *(float *)&v172)
                                            + (float)(*(float *)&v171 * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *(float *)&v164) + (float)(v161.x * v64))
                                    * v66);
            v58.m128_f32[0] = (float)((float)(1.0 - v66)
                                    * (float)((float)((float)(1.0 - v64) * *((float *)&v172 + 1))
                                            + (float)(*((float *)&v171 + 1) * v64)))
                            + (float)((float)((float)((float)(1.0 - v64) * *((float *)&v164 + 1)) + (float)(v161.y * v64))
                                    * v66);
            v188.m256i_i64[3] = _mm_unpacklo_ps(v70, v58).m128_u64[0];
            v190 = *(_OWORD *)&v188.m256i_u64[2];
            if ( v177 + 1 < v177 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v152 = -2147024362;
              v3 = -2147024362;
              goto LABEL_174;
            }
            v71 = HIDWORD(v174);
            if ( v69 <= HIDWORD(v174) )
            {
              v140 = (char *)v173[0] + 64 * (unsigned __int64)v177;
              v175 = v177 + 1;
              *(__m256i *)v140 = v188;
              *((_OWORD *)v140 + 2) = v189;
              *((_OWORD *)v140 + 3) = v190;
            }
            else
            {
              v161 = (struct D2D_VECTOR_2F)&v188;
              v72 = DynArrayImpl<0>::Grow((unsigned int)v173, 64, 1, 0, (__int64)&v161);
              v69 = v175;
              v3 = v72;
              if ( v72 >= 0 )
              {
                v73 = (_OWORD *)v161;
                v74 = (_OWORD *)((char *)v173[0] + 64 * v175);
                v69 = v175 + 1;
                v75 = *(_OWORD *)*(_QWORD *)&v161;
                ++v175;
                *v74 = v75;
                v74[1] = v73[1];
                v74[2] = v73[2];
                v74[3] = v73[3];
              }
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC0u);
                v152 = v3;
LABEL_174:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v152, 0x1B2u);
                goto LABEL_191;
              }
              v71 = HIDWORD(v174);
            }
            v76 = (__m128)LODWORD(FLOAT_1_0);
            v77 = *(_QWORD *)(v17 + 112);
            *(_QWORD *)&v189 = _mm_unpacklo_ps((__m128)v191.m128_u32[2], (__m128)v191.m128_u32[1]).m128_u64[0];
            v78 = v191.m128_f32[2] - *(float *)(v17 + 88);
            v79 = v191.m128_f32[1] - *(float *)(v17 + 92);
            v188.m256i_i64[0] = v189;
            v80 = *(float *)(v17 + 184) - *(float *)(v17 + 88);
            v168 = v77;
            v169 = *(_QWORD *)(v17 + 144);
            v81 = *(__m128 **)(v17 + 208);
            v82 = v78 / v80;
            v188.m256i_i32[2] = 1065353216;
            v83 = *(float *)(v17 + 188) - *(float *)(v17 + 92);
            v162 = v81;
            v76.m128_f32[0] = 1.0 - v82;
            v170 = *(_QWORD *)(v17 + 176);
            v84 = v79 / v83;
            v85 = v76;
            v161 = *(struct D2D_VECTOR_2F *)(v17 + 104);
            v86 = v76;
            v164 = *(struct D2D_VECTOR_2F **)(v17 + 136);
            v172 = *(_QWORD *)(v17 + 200);
            v171 = *(_QWORD *)(v17 + 168);
            v85.m128_f32[0] = (float)((float)((float)((float)(1.0 - v82) * *(float *)&v171)
                                            + (float)(v82 * *(float *)&v172))
                                    * v84)
                            + (float)((float)(1.0 - v84)
                                    * (float)((float)((float)(1.0 - v82) * v161.x) + (float)(v82 * *(float *)&v164)));
            v86.m128_f32[0] = (float)((float)((float)((float)(1.0 - v82) * *((float *)&v171 + 1))
                                            + (float)(v82 * *((float *)&v172 + 1)))
                                    * v84)
                            + (float)((float)(1.0 - v84)
                                    * (float)((float)((float)(1.0 - v82) * v161.y) + (float)(v82 * *((float *)&v164 + 1))));
            v87 = _mm_unpacklo_ps(v85, v86).m128_u64[0];
            v88 = v76;
            v188.m256i_i64[2] = v87;
            v89 = v69 + 1;
            *(_QWORD *)&v190 = v87;
            v88.m128_f32[0] = (float)((float)((float)((float)(1.0 - v82) * *(float *)&v170)
                                            + (float)(v82 * *(float *)&v162))
                                    * v84)
                            + (float)((float)(1.0 - v84)
                                    * (float)((float)((float)(1.0 - v82) * *(float *)&v168)
                                            + (float)(v82 * *(float *)&v169)));
            v76.m128_f32[0] = (float)((float)((float)((float)(1.0 - v82) * *((float *)&v170 + 1))
                                            + (float)(v82 * *((float *)&v162 + 1)))
                                    * v84)
                            + (float)((float)(1.0 - v84)
                                    * (float)((float)((float)(1.0 - v82) * *((float *)&v168 + 1))
                                            + (float)(v82 * *((float *)&v169 + 1))));
            v188.m256i_i64[3] = _mm_unpacklo_ps(v88, v76).m128_u64[0];
            *((_QWORD *)&v190 + 1) = v188.m256i_i64[3];
            if ( v69 + 1 < v69 )
            {
              v154 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_172:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v154, 0x1BFu);
              goto LABEL_191;
            }
            if ( v89 > v71 )
            {
              v153 = DynArrayImpl<0>::AddMultipleAndSet(v173, 64LL, 1LL, &v188);
              v154 = v153;
              if ( v153 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v153, 0xC0u);
              v3 = v154;
              if ( v154 < 0 )
                goto LABEL_172;
              v89 = v175;
              v91 = v173[0];
              v71 = HIDWORD(v174);
            }
            else
            {
              v90 = v69;
              v91 = v173[0];
              v92 = (char *)v173[0] + 64 * v90;
              v175 = v89;
              *(__m256i *)v92 = v188;
              *((_OWORD *)v92 + 2) = v189;
              *((_OWORD *)v92 + 3) = v190;
            }
            v93 = *(_QWORD *)(v17 + 112);
            v94 = (__m128)LODWORD(FLOAT_1_0);
            *(_QWORD *)&v189 = _mm_unpacklo_ps((__m128)v191.m128_u32[0], (__m128)v191.m128_u32[3]).m128_u64[0];
            v95 = v191.m128_f32[0] - *(float *)(v17 + 88);
            v96 = v191.m128_f32[3] - *(float *)(v17 + 92);
            v188.m256i_i64[0] = v189;
            v97 = *(float *)(v17 + 184) - *(float *)(v17 + 88);
            v168 = v93;
            v169 = *(_QWORD *)(v17 + 144);
            v98 = *(__m128 **)(v17 + 208);
            v99 = v95 / v97;
            v188.m256i_i32[2] = 1065353216;
            v100 = *(float *)(v17 + 188) - *(float *)(v17 + 92);
            v162 = v98;
            v170 = *(_QWORD *)(v17 + 176);
            v101 = v96 / v100;
            v161 = *(struct D2D_VECTOR_2F *)(v17 + 104);
            v94.m128_f32[0] = 1.0 - v101;
            v164 = *(struct D2D_VECTOR_2F **)(v17 + 136);
            v172 = *(_QWORD *)(v17 + 200);
            v171 = *(_QWORD *)(v17 + 168);
            v102 = v94;
            v102.m128_f32[0] = (float)((float)(1.0 - v101)
                                     * (float)((float)((float)(1.0 - v99) * v161.x) + (float)(v99 * *(float *)&v164)))
                             + (float)((float)((float)((float)(1.0 - v99) * *(float *)&v171)
                                             + (float)(v99 * *(float *)&v172))
                                     * v101);
            v103 = v94;
            v103.m128_f32[0] = (float)((float)(1.0 - v101)
                                     * (float)((float)((float)(1.0 - v99) * v161.y)
                                             + (float)(v99 * *((float *)&v164 + 1))))
                             + (float)((float)((float)((float)(1.0 - v99) * *((float *)&v171 + 1))
                                             + (float)(v99 * *((float *)&v172 + 1)))
                                     * v101);
            v188.m256i_i64[2] = _mm_unpacklo_ps(v102, v103).m128_u64[0];
            v104 = v89 + 1;
            v105 = v94;
            v105.m128_f32[0] = (float)((float)(1.0 - v101)
                                     * (float)((float)((float)(1.0 - v99) * *(float *)&v168)
                                             + (float)(v99 * *(float *)&v169)))
                             + (float)((float)((float)((float)(1.0 - v99) * *(float *)&v170)
                                             + (float)(v99 * *(float *)&v162))
                                     * v101);
            v94.m128_f32[0] = (float)((float)(1.0 - v101)
                                    * (float)((float)((float)(1.0 - v99) * *((float *)&v168 + 1))
                                            + (float)(v99 * *((float *)&v169 + 1))))
                            + (float)((float)((float)((float)(1.0 - v99) * *((float *)&v170 + 1))
                                            + (float)(v99 * *((float *)&v162 + 1)))
                                    * v101);
            v188.m256i_i64[3] = _mm_unpacklo_ps(v105, v94).m128_u64[0];
            v190 = *(_OWORD *)&v188.m256i_u64[2];
            if ( v89 + 1 < v89 )
            {
              v156 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_170:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v156, 0x1CCu);
              goto LABEL_191;
            }
            if ( v104 > v71 )
            {
              v155 = DynArrayImpl<0>::AddMultipleAndSet(v173, 64LL, 1LL, &v188);
              v156 = v155;
              if ( v155 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v155, 0xC0u);
              v3 = v156;
              if ( v156 < 0 )
                goto LABEL_170;
              v104 = v175;
              v91 = v173[0];
              v71 = HIDWORD(v174);
            }
            else
            {
              v106 = (char *)v91 + 64 * (unsigned __int64)v89;
              v175 = v89 + 1;
              *(__m256i *)v106 = v188;
              *((_OWORD *)v106 + 2) = v189;
              *((_OWORD *)v106 + 3) = v190;
            }
            v107 = *(_QWORD *)(v17 + 112);
            v108 = (__m128)LODWORD(FLOAT_1_0);
            *(_QWORD *)&v189 = _mm_unpacklo_ps((__m128)v191.m128_u32[2], (__m128)v191.m128_u32[3]).m128_u64[0];
            v109 = v191.m128_f32[2] - *(float *)(v17 + 88);
            v110 = v191.m128_f32[3] - *(float *)(v17 + 92);
            v188.m256i_i64[0] = v189;
            v111 = *(float *)(v17 + 184) - *(float *)(v17 + 88);
            v169 = v107;
            v168 = *(_QWORD *)(v17 + 144);
            v112 = *(_QWORD *)(v17 + 208);
            v113 = v109 / v111;
            v188.m256i_i32[2] = 1065353216;
            v114 = *(float *)(v17 + 188) - *(float *)(v17 + 92);
            v170 = v112;
            v162 = *(__m128 **)(v17 + 176);
            v115 = v110 / v114;
            v164 = *(struct D2D_VECTOR_2F **)(v17 + 104);
            v108.m128_f32[0] = 1.0 - v115;
            v161 = *(struct D2D_VECTOR_2F *)(v17 + 136);
            v171 = *(_QWORD *)(v17 + 200);
            v172 = *(_QWORD *)(v17 + 168);
            v116 = v108;
            v116.m128_f32[0] = (float)((float)(1.0 - v115)
                                     * (float)((float)(v113 * v161.x) + (float)((float)(1.0 - v113) * *(float *)&v164)))
                             + (float)((float)((float)(v113 * *(float *)&v171)
                                             + (float)((float)(1.0 - v113) * *(float *)&v172))
                                     * v115);
            v117 = v108;
            v117.m128_f32[0] = (float)((float)(1.0 - v115)
                                     * (float)((float)(v113 * v161.y)
                                             + (float)((float)(1.0 - v113) * *((float *)&v164 + 1))))
                             + (float)((float)((float)(v113 * *((float *)&v171 + 1))
                                             + (float)((float)(1.0 - v113) * *((float *)&v172 + 1)))
                                     * v115);
            v188.m256i_i64[2] = _mm_unpacklo_ps(v116, v117).m128_u64[0];
            v118 = v104 + 1;
            v177 = v104 + 1;
            v119 = v108;
            v119.m128_f32[0] = (float)((float)(1.0 - v115)
                                     * (float)((float)(v113 * *(float *)&v168)
                                             + (float)((float)(1.0 - v113) * *(float *)&v169)))
                             + (float)((float)((float)(v113 * *(float *)&v170)
                                             + (float)((float)(1.0 - v113) * *(float *)&v162))
                                     * v115);
            v108.m128_f32[0] = (float)((float)(1.0 - v115)
                                     * (float)((float)(v113 * *((float *)&v168 + 1))
                                             + (float)((float)(1.0 - v113) * *((float *)&v169 + 1))))
                             + (float)((float)((float)(v113 * *((float *)&v170 + 1))
                                             + (float)((float)(1.0 - v113) * *((float *)&v162 + 1)))
                                     * v115);
            v188.m256i_i64[3] = _mm_unpacklo_ps(v119, v108).m128_u64[0];
            v190 = *(_OWORD *)&v188.m256i_u64[2];
            if ( v104 + 1 < v104 )
            {
              v158 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v3 = -2147024362;
LABEL_168:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v158, 0x1D9u);
              goto LABEL_191;
            }
            if ( v118 > v71 )
            {
              v157 = DynArrayImpl<0>::AddMultipleAndSet(v173, 64LL, 1LL, &v188);
              v158 = v157;
              if ( v157 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v157, 0xC0u);
              v3 = v158;
              if ( v158 < 0 )
                goto LABEL_168;
              v118 = v175;
              v91 = v173[0];
              v177 = v175;
            }
            else
            {
              v120 = (char *)v91 + 64 * (unsigned __int64)v104;
              v175 = v104 + 1;
              *(__m256i *)v120 = v188;
              *((_OWORD *)v120 + 2) = v189;
              *((_OWORD *)v120 + 3) = v190;
            }
            v36 = v181;
            v35 = (unsigned int)(v163 + 1);
            v163 = v35;
            if ( (int)v35 >= v184 )
              goto LABEL_72;
            v20 = v180;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v141 = -2147024362;
          v3 = -2147024362;
          goto LABEL_186;
        }
        v91 = v173[0];
        v118 = v177;
LABEL_72:
        v121 = *(float *)(v17 + 88);
        v122 = *(float *)(v17 + 184);
        v123 = *(float *)(v17 + 92);
        v124 = *(float *)(v17 + 188);
        if ( v122 <= v121 || v124 <= v123 )
          v125 = 0.0;
        else
          v125 = (float)(v122 - v121) * (float)(v124 - v123);
        CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v125 - v36;
        v161 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
        v126 = CDrawListPrimitive::Create(1, v91, v118, v34, v22, &v161, 1, &v186);
        v3 = v126;
        if ( v126 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x1F6u);
          DynArrayImpl<1>::~DynArrayImpl<1>(v173);
          DynArrayImpl<1>::~DynArrayImpl<1>(v165);
          DynArrayImpl<1>::~DynArrayImpl<1>(v178);
          DynArrayImpl<1>::~DynArrayImpl<1>(v182);
          v4 = v186;
          goto LABEL_103;
        }
        v127 = *(_QWORD *)v17;
        v128 = *(CMILRefCountBase **)(*(_QWORD *)v17 + 16LL);
        if ( v128 )
        {
          v161 = *(struct D2D_VECTOR_2F *)(*(_QWORD *)v128 + 8LL);
          if ( *(__int64 (__fastcall **)(CMILRefCountBase *))&v161 == CMILRefCountBase::Release )
            CMILRefCountBase::Release(v128);
          else
            (*(void (__fastcall **)(CMILRefCountBase *))&v161)(v128);
        }
        v4 = v186;
        *(_QWORD *)(v127 + 16) = v186;
        if ( v4 )
        {
          (**(void (__fastcall ***)(struct CDrawListPrimitive *))v4)(v4);
          v91 = v173[0];
        }
        *(_DWORD *)(v127 + 136) = 1065353216;
        *(_QWORD *)(v127 + 128) = 0LL;
        *(_QWORD *)(v127 + 120) = 0LL;
        *(_QWORD *)(v127 + 108) = 0LL;
        *(_QWORD *)(v127 + 100) = 0LL;
        *(_QWORD *)(v127 + 88) = 0LL;
        *(_QWORD *)(v127 + 80) = 0LL;
        *(_DWORD *)(v127 + 116) = 1065353216;
        *(_DWORD *)(v127 + 96) = 1065353216;
        *(_DWORD *)(v127 + 76) = 1065353216;
        if ( v4 )
        {
          v129 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 8LL);
          if ( v129 == CMILRefCountBase::Release )
            CMILRefCountBase::Release(v4);
          else
            v129(v4);
          v4 = 0LL;
          v186 = 0LL;
        }
        v130 = *(struct D2D_VECTOR_2F **)(v17 + 80);
        v164 = v130;
        if ( v130 )
        {
          v161 = *v130;
          if ( &v130[1] != *(struct D2D_VECTOR_2F **)&v161 )
          {
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct D2D_VECTOR_2F))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v161);
            v130 = v164;
            v91 = v173[0];
            v159 = v164 + 1;
            *v164 = (struct D2D_VECTOR_2F)&v164[1];
            v159->x = 0.0;
          }
          v161 = *(struct D2D_VECTOR_2F *)(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))&v161 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v130);
          else
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct D2D_VECTOR_2F *))&v161)(WPF::g_pProcessHeap, v130);
        }
        *(_QWORD *)(v17 + 80) = 0LL;
        if ( v91 != v173[1] )
        {
          v131 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v131 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v91);
          else
            v131(WPF::g_pProcessHeap, v91);
        }
        if ( v34 != v165[1] )
        {
          v132 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v132 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v34);
          else
            v132(WPF::g_pProcessHeap, v34);
        }
        if ( v178[0] != v178[1] )
        {
          v133 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v133 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v178[0]);
          else
            v133(WPF::g_pProcessHeap, v178[0]);
        }
        if ( v182[0] != v182[1] )
        {
          v134 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v134 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v182[0]);
          else
            v134(WPF::g_pProcessHeap, v182[0]);
        }
LABEL_102:
        v16 = (unsigned int)(v185 + 1);
        v185 = v16;
        if ( (int)v16 >= *((_DWORD *)this + 6) )
          goto LABEL_103;
      }
      v24 = *v18;
      v163 = 0;
      v188.m256i_i64[0] = (__int64)v24;
      if ( *v24 )
      {
        v25 = (int)v24[4];
        v26 = (FastRegion::Internal::CRgnData *)(*v24 - 1);
        v27 = 0;
        LODWORD(v189) = 0;
        v28 = (unsigned __int64)&v24[2 * (_QWORD)v26 + 3];
        v29 = v24 + 3;
        v30 = (int)v29[3];
        v31 = (__int64)v29 + v25;
        v188.m256i_i64[1] = v28;
        v188.m256i_i64[2] = (__int64)v29;
        v188.m256i_i64[3] = v31;
        v32 = ((__int64)v29 + v30 - v31 + 8) >> 3;
        DWORD1(v189) = v32;
        if ( (int)v32 > 0 )
          goto LABEL_24;
        FastRegion::Internal::CRgnData::StepIterator(v26, (struct FastRegion::CRegion::Iterator *)&v188);
      }
      else
      {
        *(_OWORD *)&v188.m256i_u64[1] = 0LL;
      }
      v28 = v188.m256i_u64[1];
      v31 = v188.m256i_i64[3];
      v29 = (_DWORD *)v188.m256i_i64[2];
      v27 = v189;
      LODWORD(v32) = DWORD1(v189);
LABEL_24:
      v33 = v182[0];
      while ( (unsigned __int64)v29 < v28 )
      {
        v135 = v29 + 2;
        DWORD1(v187) = *v29;
        HIDWORD(v187) = v29[2];
        v136 = v27++;
        LODWORD(v187) = *(_DWORD *)(v31 + 8 * v136);
        v137 = *(_DWORD *)(v31 + 8 * v136 + 4);
        v138 = v163;
        DWORD2(v187) = v137;
        v33[v163] = v187;
        if ( v27 >= (int)v32 )
        {
          while ( 1 )
          {
            v29 = v135;
            v139 = (int)v135[3];
            v31 = (__int64)v135 + (int)v135[1];
            v135 += 2;
            LODWORD(v32) = ((__int64)v135 + v139 - v31) >> 3;
            if ( (_DWORD)v32 )
              break;
            if ( (unsigned __int64)v29 >= v28 )
              goto LABEL_108;
          }
          v27 = 0;
        }
LABEL_108:
        v163 = v138 + 1;
      }
      v22 = v176;
      v20 = v180;
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
