/*
 * XREFs of ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180057620 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJPEBVCMILMatrix@@@Z @ 0x18006F774 (-PrepMegaRectData@CMegaRectCollection@@AEAAJPEBVCMILMatrix@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@VCVertexXYAAColorDUV2@@$0A@@@QEAAJPEFBVCVertexXYAAColorDUV2@@I@Z @ 0x18009A3A8 (-AddMultipleAndSet@-$DynArray@VCVertexXYAAColorDUV2@@$0A@@@QEAAJPEFBVCVertexXYAAColorDUV2@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009A468 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18009AEB4 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B6C0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18009D0AC (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800ADBEC (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1801108B4 (--_GCRegion@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMegaRectCollection::ReplaceMegaRectsWithClippedRects(
        CMegaRectCollection *this,
        const struct CMILMatrix *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  bool v5; // cf
  CMegaRectCollection *v6; // r15
  int v7; // edi
  struct CDrawListPrimitive *v8; // r13
  unsigned int i; // ebx
  __int64 v10; // rsi
  CRegion *v11; // rcx
  int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // rax
  signed int v17; // r14d
  const struct FastRegion::Internal::CRgnData **v18; // rsi
  const struct FastRegion::Internal::CRgnData *v19; // rdx
  FastRegion::CRegion *v20; // rbx
  int v21; // eax
  FastRegion::Internal::CRgnData *v22; // rcx
  int *v23; // rsi
  FastRegion::CRegion *v24; // rdi
  _BYTE *v25; // rbx
  int v26; // edx
  int v27; // eax
  int *v28; // r9
  int v29; // edi
  int v30; // ecx
  __int64 v31; // r10
  int *v32; // r8
  _DWORD *v33; // r11
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r10
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rsi
  _DWORD **v43; // r12
  _DWORD *v44; // r8
  unsigned int v45; // ebx
  bool v46; // zf
  _DWORD *v47; // rdx
  int v48; // eax
  _DWORD *v49; // r8
  __int64 v50; // r10
  FastRegion::Internal::CRgnData *v51; // rcx
  int v52; // r11d
  _DWORD *v53; // r14
  _DWORD *v54; // r8
  __int64 v55; // r9
  char *v56; // r10
  __int64 v57; // r9
  _OWORD *v58; // r15
  unsigned __int16 *v59; // r12
  int v60; // r14d
  int v61; // ecx
  __m128 v62; // xmm3
  float v63; // xmm2_4
  float v64; // xmm0_4
  int v65; // eax
  unsigned __int16 v66; // r14
  unsigned int v67; // ecx
  __int64 v68; // rax
  unsigned int v69; // ebx
  unsigned int v70; // edx
  __int64 v71; // rax
  unsigned int v72; // ebx
  unsigned __int16 v73; // cx
  unsigned int v74; // edx
  __int64 v75; // rax
  unsigned int v76; // ebx
  unsigned int v77; // edx
  __int64 v78; // rax
  unsigned int v79; // ebx
  unsigned int v80; // edx
  __int64 v81; // rax
  unsigned int v82; // ebx
  unsigned __int16 v83; // r14
  unsigned int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // xmm1_8
  int v87; // eax
  float v88; // xmm8_4
  float v89; // xmm9_4
  float v90; // xmm0_4
  __int64 v91; // xmm1_8
  float v92; // xmm8_4
  float v93; // xmm0_4
  float v94; // xmm9_4
  __m128 v95; // xmm2
  __m128 v96; // xmm1
  __m128 v97; // xmm2
  __m128 v98; // xmm1
  int v99; // eax
  __m128 v100; // xmm7
  __int64 v101; // xmm1_8
  float v102; // xmm9_4
  float v103; // xmm10_4
  float v104; // xmm0_4
  __int64 **v105; // xmm1_8
  float v106; // xmm9_4
  float v107; // xmm0_4
  float v108; // xmm10_4
  __m128 v109; // xmm0
  __m128 v110; // xmm1
  __m128 v111; // xmm0
  int v112; // eax
  __m128 v113; // xmm7
  __int64 v114; // xmm1_8
  float v115; // xmm9_4
  float v116; // xmm10_4
  float v117; // xmm0_4
  __int64 **v118; // xmm1_8
  float v119; // xmm9_4
  float v120; // xmm0_4
  float v121; // xmm10_4
  __m128 v122; // xmm0
  __m128 v123; // xmm1
  __m128 v124; // xmm0
  int v125; // eax
  __int64 v126; // xmm1_8
  __m128 v127; // xmm5
  float v128; // xmm7_4
  float v129; // xmm8_4
  float v130; // xmm0_4
  __int64 *v131; // xmm1_8
  float v132; // xmm7_4
  float v133; // xmm0_4
  float v134; // xmm8_4
  __m128 v135; // xmm2
  __m128 v136; // xmm1
  __m128 v137; // xmm0
  int v138; // eax
  float v139; // xmm3_4
  float v140; // xmm0_4
  float v141; // xmm2_4
  float v142; // xmm1_4
  float v143; // xmm0_4
  struct CVertexXYAAColorDUV2 *v144; // r14
  __int64 v145; // rax
  int v146; // eax
  __int64 v147; // rbx
  CMILRefCountBase *v148; // rcx
  void (*v149)(void); // rax
  unsigned int (__fastcall *v150)(CMILRefCountBase *__hidden); // rax
  _DWORD *v151; // rbx
  void (__fastcall *v152)(WPF::ProcessHeapImpl *, void *); // rax
  void (__fastcall *v153)(WPF::ProcessHeapImpl *, void *); // rax
  void (__fastcall *v154)(WPF::ProcessHeapImpl *, void *); // rax
  void (*v155)(void); // rax
  void (*v156)(void); // rax
  int v157; // edx
  _DWORD *v158; // r12
  int v159; // ecx
  __int64 v160; // rax
  int v161; // eax
  __int64 v162; // rdx
  int v163; // eax
  __int64 v164; // rdx
  int v165; // eax
  __int64 v166; // rdx
  int v167; // eax
  __int64 v168; // rdx
  int v169; // eax
  __int64 v170; // rdx
  int v171; // eax
  __int64 v172; // rdx
  __int64 v173; // rax
  int v174; // ebx
  FastRegion::CRegion *v175; // rax
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // rdx
  __int64 v179; // r8
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // rdx
  __int64 v183; // r8
  __int64 v184; // rdx
  __int64 v185; // r8
  __int64 v186; // rdx
  __int64 v187; // r8
  __int64 v188; // rdx
  __int64 v189; // r8
  __int64 v190; // rdx
  __int64 v191; // r8
  __int64 *v192; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v193; // [rsp+50h] [rbp-B8h] BYREF
  __int64 **v194; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_2F v195; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_VECTOR_2F v196[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v197; // [rsp+78h] [rbp-90h]
  unsigned int v198; // [rsp+80h] [rbp-88h]
  int v199; // [rsp+88h] [rbp-80h]
  __int64 v200; // [rsp+90h] [rbp-78h]
  __int64 v201; // [rsp+98h] [rbp-70h]
  __int64 v202; // [rsp+A0h] [rbp-68h]
  __int64 v203; // [rsp+A8h] [rbp-60h]
  __int64 v204; // [rsp+B0h] [rbp-58h]
  FastRegion::CRegion *v205; // [rsp+B8h] [rbp-50h]
  void *v206[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v207; // [rsp+D0h] [rbp-38h]
  int v208; // [rsp+D8h] [rbp-30h]
  int v209; // [rsp+E0h] [rbp-28h]
  struct CVertexXYAAColorDUV2 *v210[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v211; // [rsp+F8h] [rbp-10h]
  unsigned int v212; // [rsp+100h] [rbp-8h]
  struct CDrawListPrimitive *v213; // [rsp+108h] [rbp+0h] BYREF
  void *v214[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v215; // [rsp+120h] [rbp+18h]
  int v216; // [rsp+128h] [rbp+20h]
  __int128 v217; // [rsp+130h] [rbp+28h]
  CMegaRectCollection *v218; // [rsp+140h] [rbp+38h]
  _DWORD *v219; // [rsp+148h] [rbp+40h] BYREF
  __int128 v220; // [rsp+150h] [rbp+48h]
  unsigned __int64 v221; // [rsp+160h] [rbp+58h]
  unsigned __int64 v222; // [rsp+168h] [rbp+60h]
  int v223; // [rsp+170h] [rbp+68h]
  int v224; // [rsp+174h] [rbp+6Ch]
  __int64 v225; // [rsp+178h] [rbp+70h]
  unsigned __int64 v226; // [rsp+180h] [rbp+78h]
  __m128 v227; // [rsp+188h] [rbp+80h] BYREF
  int v228; // [rsp+198h] [rbp+90h] BYREF
  _BYTE *v229; // [rsp+1A0h] [rbp+98h]
  _BYTE v230[256]; // [rsp+1A8h] [rbp+A0h] BYREF

  LODWORD(v4) = 0;
  v5 = *((_DWORD *)this + 6) < 2u;
  v6 = this;
  v7 = 0;
  v218 = this;
  v8 = 0LL;
  v213 = 0LL;
  if ( v5 )
    goto LABEL_2;
  v13 = CMegaRectCollection::PrepMegaRectData(this, a2, a3, a4);
  v7 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x156u);
    goto LABEL_2;
  }
  LODWORD(a2) = *((_DWORD *)v6 + 6);
  v14 = 0;
  if ( (int)a2 - 1 > 0 )
  {
    while ( 1 )
    {
      v15 = 224LL * v14;
      v16 = *(_QWORD *)v6;
      v200 = v15;
      if ( *(_QWORD *)(v16 + v15 + 16) )
      {
        v17 = v14 + 1;
        if ( (int)(v14 + 1) < (int)a2 )
          break;
      }
LABEL_34:
      LODWORD(a2) = *((_DWORD *)v6 + 6);
      if ( (int)++v14 >= (int)a2 - 1 )
      {
        LODWORD(v4) = 0;
        goto LABEL_36;
      }
    }
    while ( 1 )
    {
      if ( v17 >= (int)(v14 + CCommonRegistryData::m_dwMegaRectSearchCount) )
        goto LABEL_34;
      v18 = *(const struct FastRegion::Internal::CRgnData ***)(224LL * (unsigned int)v17 + *(_QWORD *)v6 + 16);
      if ( v18 )
        break;
LABEL_33:
      if ( ++v17 >= *((_DWORD *)v6 + 6) )
        goto LABEL_34;
    }
    v19 = *v18;
    v20 = *(FastRegion::CRegion **)(*(_QWORD *)v6 + v15 + 16);
    v205 = v20;
    if ( !*(_DWORD *)v19 )
    {
      v7 = 0;
      goto LABEL_33;
    }
    if ( !**(_DWORD **)v20 )
    {
      v7 = 0;
      goto LABEL_33;
    }
    v21 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(
            *(const struct FastRegion::Internal::CRgnData **)v20,
            v19);
    v22 = (FastRegion::Internal::CRgnData *)v230;
    v229 = v230;
    v228 = v21;
    if ( (unsigned __int64)v21 > 0x100 )
    {
      v173 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(WPF::g_pProcessHeap);
      v22 = (FastRegion::Internal::CRgnData *)v173;
      if ( !v173 )
      {
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v228);
        v40 = -2147024882;
        v7 = -2147024882;
LABEL_150:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x166u);
        goto LABEL_2;
      }
      v229 = (_BYTE *)v173;
    }
    FastRegion::Internal::CRgnData::Subtract(v22, *(const struct FastRegion::Internal::CRgnData **)v20, *v18);
    v23 = (int *)v229;
    v7 = 0;
    if ( *(_DWORD *)v229 )
    {
      if ( v230 == v229 )
      {
        v24 = v205;
        v25 = v229 + 12;
        v26 = *(_DWORD *)&v229[8 * *(_DWORD *)v229 + 8]
            - *((_DWORD *)v229 + 4)
            + 8 * *(_DWORD *)v229
            - 12
            + 8 * (*(_DWORD *)v229 - 1)
            + 24;
        v199 = v26;
        if ( (FastRegion::CRegion *)((char *)v205 + 8) == *(FastRegion::CRegion **)v205 )
          v27 = 60;
        else
          v27 = *((_DWORD *)v205 + 2);
        if ( v27 >= v26 )
          goto LABEL_21;
        v195 = (struct D2D_VECTOR_2F)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                       WPF::g_pProcessHeap,
                                       v26);
        if ( v195 )
        {
          FastRegion::CRegion::FreeMemory(v205);
          *(struct D2D_VECTOR_2F *)v205 = v195;
          *((_DWORD *)v24 + 2) = v199;
LABEL_21:
          v28 = *(int **)v24;
          v29 = 0;
          v30 = *v23;
          *v28 = *v23;
          v28[1] = v23[1];
          v28[2] = v23[2];
          v31 = (__int64)v23 + v23[4] + 12;
          v32 = &v28[2 * v30 + 3];
          if ( v30 > 0 )
          {
            v199 = 4 * (((__int64)v32 - v31) >> 2);
            v33 = v28 + 3;
            do
            {
              *v33 = *(_DWORD *)((char *)v33 + (char *)v23 - (char *)v28);
              v34 = v29;
              v33 += 2;
              v35 = (__int64)&v28[2 * v29++ + 3];
              *(_DWORD *)(v35 + 4) = (_DWORD)v23 + 12 + 8 * v34 + v199 + v23[2 * v34 + 4] - v35;
            }
            while ( v29 < *v28 );
            v25 = v23 + 3;
          }
          v36 = (__int64)&v23[2 * *v23 + 1];
          v37 = (unsigned __int64)((int)v36 + *(_DWORD *)(v36 + 4) - *((_DWORD *)v25 + 1) - (int)v25) >> 2;
          v38 = (int)v37;
          if ( (int)v37 > 0 )
          {
            v39 = v31 - (_QWORD)v32;
            do
            {
              *v32 = *(int *)((char *)v32 + v39);
              ++v32;
              --v38;
            }
            while ( v38 );
          }
          v7 = 0;
          goto LABEL_29;
        }
        v7 = -2147024882;
      }
      else
      {
        v174 = v228;
        v229 = v230;
        v228 = 0;
        FastRegion::CRegion::FreeMemory(v205);
        v175 = v205;
        *(_QWORD *)v205 = v23;
        *((_DWORD *)v175 + 2) = v174;
      }
    }
    else
    {
      **(_DWORD **)v20 = 0;
    }
LABEL_29:
    if ( v230 != v229 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v40 = v7;
    if ( v7 < 0 )
      goto LABEL_150;
    v15 = v200;
    goto LABEL_33;
  }
LABEL_36:
  v41 = 0LL;
  v199 = 0;
  if ( *((int *)v6 + 6) <= 0 )
    goto LABEL_2;
  while ( 1 )
  {
    v42 = *(_QWORD *)v6 + 224 * v41;
    v43 = *(_DWORD ***)(v42 + 16);
    if ( v43 )
      break;
LABEL_107:
    v41 = (unsigned int)(v199 + 1);
    v199 = v41;
    if ( (int)v41 >= *((_DWORD *)v6 + 6) )
      goto LABEL_108;
  }
  v44 = *v43;
  v45 = 0;
  v207 = 0LL;
  *(_OWORD *)v206 = 0LL;
  v215 = 0LL;
  v46 = *v44 == 0;
  *(_OWORD *)v214 = 0LL;
  v216 = 0;
  *(_OWORD *)&v196[0].x = 0LL;
  v197 = 0LL;
  v198 = 0;
  *(_OWORD *)v210 = 0LL;
  v211 = 0LL;
  v212 = 0;
  v208 = 0;
  if ( !v46 && *v44 )
  {
    v47 = &v44[2 * *v44 + 1];
    v4 = ((__int64)v47 + (int)v47[1] - (__int64)(int)v44[4] - (__int64)(v44 + 3)) >> 3;
  }
  v48 = DynArrayImpl<0>::Grow((unsigned int)v206, 16, v4, 0, 0LL);
  v7 = v48;
  if ( v48 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x1A7u);
  else
    v208 += v4;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17Eu);
    goto LABEL_178;
  }
  v49 = *v43;
  LODWORD(v192) = 0;
  v219 = v49;
  if ( !*v49 )
  {
    v220 = 0LL;
LABEL_116:
    v54 = (_DWORD *)*((_QWORD *)&v220 + 1);
    v53 = (_DWORD *)v220;
    v56 = (char *)v221;
    v52 = v222;
    LODWORD(v57) = HIDWORD(v222);
    goto LABEL_46;
  }
  v50 = (int)v49[4];
  v51 = (FastRegion::Internal::CRgnData *)(*v49 - 1);
  v52 = 0;
  LODWORD(v222) = 0;
  v53 = &v49[2 * (_QWORD)v51 + 3];
  v54 = v49 + 3;
  v55 = (int)v54[3];
  v56 = (char *)v54 + v50;
  *(_QWORD *)&v220 = v53;
  *((_QWORD *)&v220 + 1) = v54;
  v221 = (unsigned __int64)v56;
  v57 = ((__int64)v54 + v55 - (__int64)v56 + 8) >> 3;
  HIDWORD(v222) = v57;
  if ( (int)v57 <= 0 )
  {
    FastRegion::Internal::CRgnData::StepIterator(v51, (struct FastRegion::CRegion::Iterator *)&v219);
    goto LABEL_116;
  }
LABEL_46:
  v58 = v206[0];
  while ( v54 < v53 )
  {
    v157 = 2 * v52;
    DWORD1(v217) = *v54;
    v158 = v54 + 2;
    ++v52;
    HIDWORD(v217) = v54[2];
    LODWORD(v217) = *(_DWORD *)&v56[4 * v157];
    v159 = (int)v192;
    DWORD2(v217) = *(_DWORD *)&v56[4 * v157 + 4];
    v58[(unsigned int)v192] = v217;
    if ( v52 >= (int)v57 )
    {
      while ( 1 )
      {
        v54 = v158;
        v160 = (int)v158[3];
        v56 = (char *)v158 + (int)v158[1];
        v158 += 2;
        LODWORD(v57) = ((__int64)v158 + v160 - (__int64)v56) >> 3;
        if ( (_DWORD)v57 )
          break;
        if ( v54 >= v53 )
          goto LABEL_113;
      }
      v52 = 0;
    }
LABEL_113:
    LODWORD(v192) = v159 + 1;
  }
  v6 = v218;
  v59 = (unsigned __int16 *)v196[0];
  v60 = 0;
  v61 = 0;
  v209 = 0;
  if ( v208 <= 0 )
  {
LABEL_76:
    v139 = *(float *)(v42 + 92);
    v140 = *(float *)(v42 + 188);
    v141 = *(float *)(v42 + 96);
    v142 = *(float *)(v42 + 192);
    if ( v140 <= v139 || v142 <= v141 )
      v143 = 0.0;
    else
      v143 = (float)(v140 - v139) * (float)(v142 - v141);
    v144 = v210[0];
    CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v143 - v61;
    v145 = *(_QWORD *)(v42 + 8);
    v195 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
    v146 = CDrawListPrimitive::Create(1, v210[0], v212, v59, v45, &v195, *(_BYTE *)(v145 + 101), &v213);
    v7 = v146;
    if ( v146 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v146, 0x1F5u);
      DynArrayImpl<1>::~DynArrayImpl<1>(v210, v178, v179);
      DynArrayImpl<1>::~DynArrayImpl<1>(v196, v180, v181);
      DynArrayImpl<1>::~DynArrayImpl<1>(v214, v182, v183);
      DynArrayImpl<1>::~DynArrayImpl<1>(v206, v184, v185);
      v8 = v213;
      goto LABEL_108;
    }
    v147 = *(_QWORD *)v42;
    v148 = *(CMILRefCountBase **)(*(_QWORD *)v42 + 32LL);
    if ( v148 )
    {
      v149 = *(void (**)(void))(*(_QWORD *)v148 + 8LL);
      if ( (char *)v149 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v148);
      else
        v149();
    }
    v8 = v213;
    *(_QWORD *)(v147 + 32) = v213;
    if ( v8 )
      (**(void (__fastcall ***)(struct CDrawListPrimitive *))v8)(v8);
    *(_WORD *)(v147 + 160) = 32085;
    *(_OWORD *)(v147 + 96) = _xmm;
    *(_OWORD *)(v147 + 112) = _xmm;
    *(_OWORD *)(v147 + 128) = _xmm;
    *(_OWORD *)(v147 + 144) = _xmm;
    if ( v8 )
    {
      v150 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v8 + 8LL);
      if ( v150 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v8);
      else
        v150(v8);
      v8 = 0LL;
      v213 = 0LL;
    }
    v151 = *(_DWORD **)(v42 + 16);
    if ( v151 )
    {
      if ( v151 + 2 != *(_DWORD **)v151 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        *(_QWORD *)v151 = v151 + 2;
        v151[2] = 0;
      }
      v152 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v152 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v151);
      else
        v152(WPF::g_pProcessHeap, v151);
    }
    *(_QWORD *)(v42 + 16) = 0LL;
    if ( v144 != v210[1] )
    {
      v153 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v153 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v144);
      else
        v153(WPF::g_pProcessHeap, v144);
    }
    if ( v59 != (unsigned __int16 *)v196[1] )
    {
      v154 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v154 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v59);
      else
        v154(WPF::g_pProcessHeap, v59);
    }
    if ( v214[0] != v214[1] )
    {
      v155 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( (char *)v155 == (char *)WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v214[0]);
      else
        v155();
    }
    LODWORD(a2) = v206[0];
    if ( v206[0] != v206[1] )
    {
      v156 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( (char *)v156 == (char *)WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v206[0]);
      else
        v156();
    }
    LODWORD(v4) = 0;
    goto LABEL_107;
  }
  while ( 1 )
  {
    v62 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)v206[0] + (unsigned int)v60)), (__m128)_xmm);
    v63 = _mm_shuffle_ps(v62, v62, 170).m128_f32[0];
    v227 = v62;
    if ( v63 <= v62.m128_f32[0] || v227.m128_f32[3] <= v227.m128_f32[1] )
      v64 = 0.0;
    else
      v64 = (float)(v227.m128_f32[3] - v227.m128_f32[1]) * (float)(v63 - v62.m128_f32[0]);
    LODWORD(v205) = (int)v64 + v61;
    v65 = DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
            v214,
            &v227,
            1LL);
    v7 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x18Du);
      goto LABEL_178;
    }
    v66 = 4 * v60;
    v67 = v45 + 1;
    LOWORD(v193) = v66;
    if ( v45 + 1 < v45 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_157;
    }
    if ( v67 <= HIDWORD(v197) )
    {
      v68 = v45;
      v69 = v45 + 1;
      v198 = v67;
      v59[v68] = v66;
      goto LABEL_56;
    }
    v192 = &v193;
    v161 = DynArrayImpl<0>::Grow((unsigned int)v196, 2, 1, 0, (__int64)&v192);
    v59 = (unsigned __int16 *)v196[0];
    v7 = v161;
    if ( v161 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v161, 0xC0u);
LABEL_157:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x18Fu);
      goto LABEL_178;
    }
    v162 = 2 * v198;
    v69 = ++v198;
    *(_WORD *)(v162 + *(_QWORD *)v196) = *(_WORD *)v192;
LABEL_56:
    v70 = v69 + 1;
    LOWORD(v193) = v66 + 1;
    if ( v69 + 1 < v69 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_159;
    }
    if ( v70 <= HIDWORD(v197) )
    {
      v71 = v69;
      v72 = v69 + 1;
      v198 = v70;
      v59[v71] = v66 + 1;
      goto LABEL_59;
    }
    v192 = &v193;
    v163 = DynArrayImpl<0>::Grow((unsigned int)v196, 2, 1, 0, (__int64)&v192);
    v59 = (unsigned __int16 *)v196[0];
    v7 = v163;
    if ( v163 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v163, 0xC0u);
LABEL_159:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x190u);
      goto LABEL_178;
    }
    v164 = 2 * v198;
    v72 = ++v198;
    *(_WORD *)(v164 + *(_QWORD *)v196) = *(_WORD *)v192;
LABEL_59:
    v73 = v66 + 3;
    v74 = v72 + 1;
    LOWORD(v193) = v66 + 3;
    LOWORD(v192) = v66 + 3;
    if ( v72 + 1 < v72 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_162:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x191u);
      goto LABEL_178;
    }
    if ( v74 <= HIDWORD(v197) )
    {
      v75 = v72;
      v76 = v72 + 1;
      v198 = v74;
      v59[v75] = v73;
      goto LABEL_62;
    }
    v194 = &v192;
    v165 = DynArrayImpl<0>::Grow((unsigned int)v196, 2, 1, 0, (__int64)&v194);
    v59 = (unsigned __int16 *)v196[0];
    v7 = v165;
    if ( v165 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v165, 0xC0u);
      goto LABEL_162;
    }
    v166 = 2 * v198;
    v76 = ++v198;
    *(_WORD *)(v166 + *(_QWORD *)v196) = *(_WORD *)v194;
    v73 = v193;
LABEL_62:
    v77 = v76 + 1;
    LOWORD(v192) = v66;
    if ( v76 + 1 < v76 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_165:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x192u);
      goto LABEL_178;
    }
    if ( v77 <= HIDWORD(v197) )
    {
      v78 = v76;
      v79 = v76 + 1;
      v198 = v77;
      v59[v78] = v66;
      goto LABEL_65;
    }
    v194 = &v192;
    v167 = DynArrayImpl<0>::Grow((unsigned int)v196, 2, 1, 0, (__int64)&v194);
    v59 = (unsigned __int16 *)v196[0];
    v7 = v167;
    if ( v167 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v167, 0xC0u);
      goto LABEL_165;
    }
    v168 = 2 * v198;
    v79 = ++v198;
    *(_WORD *)(v168 + *(_QWORD *)v196) = *(_WORD *)v194;
    v73 = v193;
LABEL_65:
    v80 = v79 + 1;
    LOWORD(v192) = v73;
    if ( v79 + 1 < v79 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_167;
    }
    if ( v80 > HIDWORD(v197) )
    {
      v194 = &v192;
      v169 = DynArrayImpl<0>::Grow((unsigned int)v196, 2, 1, 0, (__int64)&v194);
      v59 = (unsigned __int16 *)v196[0];
      v7 = v169;
      if ( v169 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v169, 0xC0u);
LABEL_167:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x193u);
        goto LABEL_178;
      }
      v170 = 2 * v198;
      v82 = ++v198;
      *(_WORD *)(v170 + *(_QWORD *)v196) = *(_WORD *)v194;
    }
    else
    {
      v81 = v79;
      v82 = v79 + 1;
      v198 = v80;
      v59[v81] = v73;
    }
    v83 = v66 + 2;
    v84 = v82 + 1;
    LOWORD(v192) = v83;
    if ( v82 + 1 < v82 )
      break;
    if ( v84 > HIDWORD(v197) )
    {
      v194 = &v192;
      v171 = DynArrayImpl<0>::Grow((unsigned int)v196, 2, 1, 0, (__int64)&v194);
      v59 = (unsigned __int16 *)v196[0];
      v7 = v171;
      if ( v171 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v171, 0xC0u);
        goto LABEL_169;
      }
      v172 = 2 * v198;
      v45 = ++v198;
      *(_WORD *)(v172 + *(_QWORD *)v196) = *(_WORD *)v194;
    }
    else
    {
      v85 = v82;
      v45 = v82 + 1;
      v198 = v84;
      v59[v85] = v83;
    }
    v86 = *(_QWORD *)(v42 + 116);
    v87 = *(_DWORD *)(v42 + 104);
    v222 = _mm_unpacklo_ps((__m128)v227.m128_u32[0], (__m128)v227.m128_u32[1]).m128_u64[0];
    v88 = v227.m128_f32[0] - *(float *)(v42 + 92);
    v89 = v227.m128_f32[1] - *(float *)(v42 + 96);
    v219 = (_DWORD *)v222;
    v90 = *(float *)(v42 + 188) - *(float *)(v42 + 92);
    v204 = v86;
    v203 = *(_QWORD *)(v42 + 148);
    v91 = *(_QWORD *)(v42 + 212);
    v92 = v88 / v90;
    v223 = 0;
    v224 = 1065353216;
    DWORD1(v220) = v87;
    LODWORD(v220) = 1065353216;
    v93 = *(float *)(v42 + 192) - *(float *)(v42 + 96);
    v200 = v91;
    v195 = *(struct D2D_VECTOR_2F *)(v42 + 180);
    v94 = v89 / v93;
    v192 = *(__int64 **)(v42 + 108);
    v194 = *(__int64 ***)(v42 + 140);
    v201 = *(_QWORD *)(v42 + 204);
    v95 = (__m128)(unsigned int)v201;
    v96 = (__m128)HIDWORD(v201);
    v202 = *(_QWORD *)(v42 + 172);
    v95.m128_f32[0] = (float)((float)((float)(*(float *)&v201 * v92) + (float)(*(float *)&v202 * (float)(1.0 - v92)))
                            * v94)
                    + (float)((float)(1.0 - v94)
                            * (float)((float)(*(float *)&v194 * v92) + (float)(*(float *)&v192 * (float)(1.0 - v92))));
    v96.m128_f32[0] = (float)((float)((float)(*((float *)&v201 + 1) * v92)
                                    + (float)(*((float *)&v202 + 1) * (float)(1.0 - v92)))
                            * v94)
                    + (float)((float)(1.0 - v94)
                            * (float)((float)(*((float *)&v194 + 1) * v92)
                                    + (float)(*((float *)&v192 + 1) * (float)(1.0 - v92))));
    *((_QWORD *)&v220 + 1) = _mm_unpacklo_ps(v95, v96).m128_u64[0];
    v97 = (__m128)(unsigned int)v200;
    v98 = (__m128)HIDWORD(v200);
    v225 = *((_QWORD *)&v220 + 1);
    v97.m128_f32[0] = (float)((float)((float)(*(float *)&v200 * v92) + (float)(v195.x * (float)(1.0 - v92))) * v94)
                    + (float)((float)(1.0 - v94)
                            * (float)((float)(*(float *)&v203 * v92) + (float)(*(float *)&v204 * (float)(1.0 - v92))));
    v98.m128_f32[0] = (float)((float)((float)(*((float *)&v200 + 1) * v92) + (float)(v195.y * (float)(1.0 - v92))) * v94)
                    + (float)((float)(1.0 - v94)
                            * (float)((float)(*((float *)&v203 + 1) * v92)
                                    + (float)(*((float *)&v204 + 1) * (float)(1.0 - v92))));
    v221 = _mm_unpacklo_ps(v97, v98).m128_u64[0];
    v226 = v221;
    v99 = DynArray<CVertexXYAAColorDUV2,0>::AddMultipleAndSet(v210, &v219);
    v7 = v99;
    if ( v99 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0x1B1u);
      goto LABEL_178;
    }
    v100 = (__m128)LODWORD(FLOAT_1_0);
    v101 = *(_QWORD *)(v42 + 116);
    v222 = _mm_unpacklo_ps((__m128)v227.m128_u32[2], (__m128)v227.m128_u32[1]).m128_u64[0];
    v102 = v227.m128_f32[2] - *(float *)(v42 + 92);
    v103 = v227.m128_f32[1] - *(float *)(v42 + 96);
    v219 = (_DWORD *)v222;
    v104 = *(float *)(v42 + 188) - *(float *)(v42 + 92);
    v201 = v101;
    v202 = *(_QWORD *)(v42 + 148);
    v105 = *(__int64 ***)(v42 + 212);
    v106 = v102 / v104;
    LODWORD(v220) = 1065353216;
    v107 = *(float *)(v42 + 192) - *(float *)(v42 + 96);
    v194 = v105;
    v192 = *(__int64 **)(v42 + 180);
    v108 = v103 / v107;
    v200 = *(_QWORD *)(v42 + 108);
    v100.m128_f32[0] = 1.0 - v108;
    v195 = *(struct D2D_VECTOR_2F *)(v42 + 140);
    v204 = *(_QWORD *)(v42 + 204);
    v203 = *(_QWORD *)(v42 + 172);
    v109 = v100;
    v109.m128_f32[0] = (float)((float)(1.0 - v108)
                             * (float)((float)(v195.x * v106) + (float)(*(float *)&v200 * (float)(1.0 - v106))))
                     + (float)((float)((float)(*(float *)&v204 * v106) + (float)(*(float *)&v203 * (float)(1.0 - v106)))
                             * v108);
    v110 = v100;
    v110.m128_f32[0] = (float)((float)(1.0 - v108)
                             * (float)((float)(v195.y * v106) + (float)(*((float *)&v200 + 1) * (float)(1.0 - v106))))
                     + (float)((float)((float)(*((float *)&v204 + 1) * v106)
                                     + (float)(*((float *)&v203 + 1) * (float)(1.0 - v106)))
                             * v108);
    *((_QWORD *)&v220 + 1) = _mm_unpacklo_ps(v109, v110).m128_u64[0];
    v225 = *((_QWORD *)&v220 + 1);
    v111 = v100;
    v111.m128_f32[0] = (float)((float)(1.0 - v108)
                             * (float)((float)(*(float *)&v202 * v106) + (float)(*(float *)&v201 * (float)(1.0 - v106))))
                     + (float)((float)((float)(*(float *)&v194 * v106) + (float)(*(float *)&v192 * (float)(1.0 - v106)))
                             * v108);
    v100.m128_f32[0] = (float)((float)(1.0 - v108)
                             * (float)((float)(*((float *)&v202 + 1) * v106)
                                     + (float)(*((float *)&v201 + 1) * (float)(1.0 - v106))))
                     + (float)((float)((float)(*((float *)&v194 + 1) * v106)
                                     + (float)(*((float *)&v192 + 1) * (float)(1.0 - v106)))
                             * v108);
    v221 = _mm_unpacklo_ps(v111, v100).m128_u64[0];
    v226 = v221;
    v112 = DynArray<CVertexXYAAColorDUV2,0>::AddMultipleAndSet(v210, &v219);
    v7 = v112;
    if ( v112 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0x1BEu);
      goto LABEL_178;
    }
    v113 = (__m128)LODWORD(FLOAT_1_0);
    v114 = *(_QWORD *)(v42 + 116);
    v222 = _mm_unpacklo_ps((__m128)v227.m128_u32[0], (__m128)v227.m128_u32[3]).m128_u64[0];
    v115 = v227.m128_f32[0] - *(float *)(v42 + 92);
    v116 = v227.m128_f32[3] - *(float *)(v42 + 96);
    v219 = (_DWORD *)v222;
    v117 = *(float *)(v42 + 188) - *(float *)(v42 + 92);
    v201 = v114;
    v202 = *(_QWORD *)(v42 + 148);
    v118 = *(__int64 ***)(v42 + 212);
    v119 = v115 / v117;
    LODWORD(v220) = 1065353216;
    v120 = *(float *)(v42 + 192) - *(float *)(v42 + 96);
    v194 = v118;
    v192 = *(__int64 **)(v42 + 180);
    v121 = v116 / v120;
    v200 = *(_QWORD *)(v42 + 108);
    v113.m128_f32[0] = 1.0 - v121;
    v195 = *(struct D2D_VECTOR_2F *)(v42 + 140);
    v204 = *(_QWORD *)(v42 + 204);
    v203 = *(_QWORD *)(v42 + 172);
    v122 = v113;
    v122.m128_f32[0] = (float)((float)(1.0 - v121)
                             * (float)((float)(v195.x * v119) + (float)(*(float *)&v200 * (float)(1.0 - v119))))
                     + (float)((float)((float)(*(float *)&v204 * v119) + (float)(*(float *)&v203 * (float)(1.0 - v119)))
                             * v121);
    v123 = v113;
    v123.m128_f32[0] = (float)((float)(1.0 - v121)
                             * (float)((float)(v195.y * v119) + (float)(*((float *)&v200 + 1) * (float)(1.0 - v119))))
                     + (float)((float)((float)(*((float *)&v204 + 1) * v119)
                                     + (float)(*((float *)&v203 + 1) * (float)(1.0 - v119)))
                             * v121);
    *((_QWORD *)&v220 + 1) = _mm_unpacklo_ps(v122, v123).m128_u64[0];
    v225 = *((_QWORD *)&v220 + 1);
    v124 = v113;
    v124.m128_f32[0] = (float)((float)(1.0 - v121)
                             * (float)((float)(*(float *)&v202 * v119) + (float)(*(float *)&v201 * (float)(1.0 - v119))))
                     + (float)((float)((float)(*(float *)&v194 * v119) + (float)(*(float *)&v192 * (float)(1.0 - v119)))
                             * v121);
    v113.m128_f32[0] = (float)((float)(1.0 - v121)
                             * (float)((float)(*((float *)&v202 + 1) * v119)
                                     + (float)(*((float *)&v201 + 1) * (float)(1.0 - v119))))
                     + (float)((float)((float)(*((float *)&v194 + 1) * v119)
                                     + (float)(*((float *)&v192 + 1) * (float)(1.0 - v119)))
                             * v121);
    v221 = _mm_unpacklo_ps(v124, v113).m128_u64[0];
    v226 = v221;
    v125 = DynArray<CVertexXYAAColorDUV2,0>::AddMultipleAndSet(v210, &v219);
    v7 = v125;
    if ( v125 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v125, 0x1CBu);
      goto LABEL_178;
    }
    v126 = *(_QWORD *)(v42 + 116);
    v127 = (__m128)LODWORD(FLOAT_1_0);
    v222 = _mm_unpacklo_ps((__m128)v227.m128_u32[2], (__m128)v227.m128_u32[3]).m128_u64[0];
    v128 = v227.m128_f32[2] - *(float *)(v42 + 92);
    v129 = v227.m128_f32[3] - *(float *)(v42 + 96);
    v219 = (_DWORD *)v222;
    v130 = *(float *)(v42 + 188) - *(float *)(v42 + 92);
    v202 = v126;
    v201 = *(_QWORD *)(v42 + 148);
    v131 = *(__int64 **)(v42 + 212);
    v132 = v128 / v130;
    LODWORD(v220) = 1065353216;
    v133 = *(float *)(v42 + 192) - *(float *)(v42 + 96);
    v192 = v131;
    v194 = *(__int64 ***)(v42 + 180);
    v134 = v129 / v133;
    v195 = *(struct D2D_VECTOR_2F *)(v42 + 108);
    v127.m128_f32[0] = 1.0 - v134;
    v200 = *(_QWORD *)(v42 + 140);
    v203 = *(_QWORD *)(v42 + 204);
    v204 = *(_QWORD *)(v42 + 172);
    v135 = (__m128)(unsigned int)v204;
    v136 = (__m128)HIDWORD(v204);
    v135.m128_f32[0] = (float)((float)((float)(*(float *)&v204 * (float)(1.0 - v132)) + (float)(*(float *)&v203 * v132))
                             * v134)
                     + (float)((float)(1.0 - v134)
                             * (float)((float)(v195.x * (float)(1.0 - v132)) + (float)(*(float *)&v200 * v132)));
    v136.m128_f32[0] = (float)((float)((float)(*((float *)&v204 + 1) * (float)(1.0 - v132))
                                     + (float)(*((float *)&v203 + 1) * v132))
                             * v134)
                     + (float)((float)(1.0 - v134)
                             * (float)((float)(v195.y * (float)(1.0 - v132)) + (float)(*((float *)&v200 + 1) * v132)));
    *((_QWORD *)&v220 + 1) = _mm_unpacklo_ps(v135, v136).m128_u64[0];
    v225 = *((_QWORD *)&v220 + 1);
    v137 = v127;
    v137.m128_f32[0] = (float)((float)(1.0 - v134)
                             * (float)((float)((float)(1.0 - v132) * *(float *)&v202) + (float)(v132 * *(float *)&v201)))
                     + (float)((float)((float)((float)(1.0 - v132) * *(float *)&v194) + (float)(v132 * *(float *)&v192))
                             * v134);
    v127.m128_f32[0] = (float)((float)(1.0 - v134)
                             * (float)((float)((float)(1.0 - v132) * *((float *)&v202 + 1))
                                     + (float)(v132 * *((float *)&v201 + 1))))
                     + (float)((float)((float)((float)(1.0 - v132) * *((float *)&v194 + 1))
                                     + (float)(v132 * *((float *)&v192 + 1)))
                             * v134);
    v221 = _mm_unpacklo_ps(v137, v127).m128_u64[0];
    v226 = v221;
    v138 = DynArray<CVertexXYAAColorDUV2,0>::AddMultipleAndSet(v210, &v219);
    v7 = v138;
    if ( v138 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v138, 0x1D8u);
      goto LABEL_178;
    }
    v61 = (int)v205;
    v60 = v209 + 1;
    v209 = v60;
    if ( v60 >= v208 )
      goto LABEL_76;
  }
  v7 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_169:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x194u);
LABEL_178:
  DynArrayImpl<1>::~DynArrayImpl<1>(v210, v176, v177);
  DynArrayImpl<1>::~DynArrayImpl<1>(v196, v186, v187);
  DynArrayImpl<1>::~DynArrayImpl<1>(v214, v188, v189);
  DynArrayImpl<1>::~DynArrayImpl<1>(v206, v190, v191);
LABEL_108:
  if ( v8 )
    (*(void (__fastcall **)(struct CDrawListPrimitive *))(*(_QWORD *)v8 + 8LL))(v8);
LABEL_2:
  for ( i = 0; i < *((_DWORD *)v6 + 6); *(_QWORD *)(v10 + *(_QWORD *)v6 + 16) = 0LL )
  {
    v10 = 224LL * i;
    v11 = *(CRegion **)(v10 + *(_QWORD *)v6 + 16);
    if ( v11 )
      CRegion::`scalar deleting destructor'(v11, (unsigned int)a2);
    ++i;
  }
  return (unsigned int)v7;
}
