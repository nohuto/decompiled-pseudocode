/*
 * XREFs of ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180016204 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSamplingInfo@CCommonRenderingEffect@@UEBAXQEA_N@Z @ 0x180056510 (-GetSamplingInfo@CCommonRenderingEffect@@UEBAXQEA_N@Z.c)
 *     ?ReleaseResources@CCommonRenderingEffect@@UEAAXXZ @ 0x180056540 (-ReleaseResources@CCommonRenderingEffect@@UEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800586B8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180058CA4 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005B910 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180093980 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180094804 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x180095360 (--0SamplerMode@@QEAA@XZ.c)
 *     ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x180096168 (-Reset@CDrawListPrimitiveBuilder@@QEAAXXZ.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800961EC (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLOR.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180097968 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?EstimatedArea@CDrawListPrimitiveBuilder@@KAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0BFC (-EstimatedArea@CDrawListPrimitiveBuilder@@KAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::UpdateHWDrawListCache(
        CPrimitiveGroupDrawListGenerator *this,
        __int64 a2,
        struct CDrawListPrimitiveBuilder *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        const struct CMILMatrix *a5,
        struct CShape *a6,
        __int8 a7,
        struct CDrawListCache *a8)
{
  CPrimitiveGroupDrawListGenerator *v8; // rbx
  struct CShape *v9; // rsi
  __int64 v11; // r13
  enum D2D1_ANTIALIAS_MODE v12; // r14d
  CDrawListCache *v13; // r15
  __int64 v14; // rcx
  struct CShape *v15; // r12
  bool v16; // r8
  __int64 v17; // rdx
  __int128 v18; // xmm6
  _DWORD *v19; // r14
  __int32 v20; // r11d
  int v21; // edx
  CCompositionSurfaceBitmap *v22; // r15
  __int64 v23; // r12
  __int32 v24; // ebx
  int v25; // ecx
  int v26; // ecx
  char v27; // dl
  int v28; // ecx
  char v29; // r13
  int v30; // ecx
  char v31; // dl
  SamplerMode *v32; // rsi
  __int64 v33; // rbx
  int v34; // ebx
  unsigned int near **v35; // rax
  unsigned int v36; // ecx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  bool *v41; // rdx
  void (__fastcall *v42)(CCommonRenderingEffect *, bool *const); // rax
  CCommonRenderingEffect *v43; // rcx
  _OWORD *i; // rsi
  struct D2D_RECT_F v45; // xmm0
  int v46; // edx
  __int128 *v47; // r13
  unsigned int v48; // xmm1_4
  unsigned int v49; // ecx
  struct CPrimitiveColor *v50; // rax
  int appended; // eax
  int v52; // ebx
  bool v53; // dl
  int v54; // eax
  void (__fastcall *v55)(CCommonRenderingEffect *); // rax
  CCommonRenderingEffect *v56; // rcx
  bool v57; // al
  int v58; // eax
  int (__fastcall **v60)(CCompositionSurfaceBitmap *, GUID *, struct CPrimitiveColor **); // rax
  struct CPrimitiveColor *v61; // rcx
  char (__fastcall *v62)(CCompositionSurfaceBitmap *); // rax
  CShape *v64; // rcx
  const struct D2D_MATRIX_3X2_F *v65; // rdx
  int v66; // eax
  _DWORD *v67; // rbx
  __int64 v68; // rdx
  int v69; // eax
  int v70; // eax
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int BuiltPrimitiveEntry; // eax
  char v76; // [rsp+48h] [rbp-C0h]
  char v77; // [rsp+48h] [rbp-C0h]
  struct CShape *v78; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v79; // [rsp+58h] [rbp-B0h]
  __int16 v80; // [rsp+5Ch] [rbp-ACh]
  struct CPrimitiveColor *v81; // [rsp+60h] [rbp-A8h] BYREF
  int v82; // [rsp+68h] [rbp-A0h]
  __m256i v83; // [rsp+70h] [rbp-98h] BYREF
  enum D2D1_ANTIALIAS_MODE v84; // [rsp+90h] [rbp-78h]
  CPrimitiveGroupDrawListGenerator *v85; // [rsp+98h] [rbp-70h]
  __int128 v86; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v87; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v88; // [rsp+C0h] [rbp-48h]
  struct CShape *v89; // [rsp+D0h] [rbp-38h]
  struct CDrawListCache *v90; // [rsp+D8h] [rbp-30h]
  __int64 v91; // [rsp+E0h] [rbp-28h]
  _DWORD v92[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v93; // [rsp+F0h] [rbp-18h]
  int v94; // [rsp+F8h] [rbp-10h]
  int v95; // [rsp+FCh] [rbp-Ch]
  __int64 v96; // [rsp+100h] [rbp-8h]
  __int64 v97; // [rsp+108h] [rbp+0h]
  __int64 v98; // [rsp+110h] [rbp+8h]
  int v99; // [rsp+118h] [rbp+10h]
  int v100; // [rsp+11Ch] [rbp+14h]
  int v101; // [rsp+120h] [rbp+18h]
  int v102; // [rsp+124h] [rbp+1Ch]
  int v103; // [rsp+128h] [rbp+20h]
  struct D2D_RECT_F v104; // [rsp+138h] [rbp+30h] BYREF
  int v105; // [rsp+150h] [rbp+48h]
  char v106; // [rsp+154h] [rbp+4Ch]
  char v107[8]; // [rsp+158h] [rbp+50h] BYREF
  _OWORD *v108; // [rsp+160h] [rbp+58h]
  _OWORD *v109; // [rsp+168h] [rbp+60h]
  unsigned int v110; // [rsp+170h] [rbp+68h]
  __int128 v111; // [rsp+178h] [rbp+70h] BYREF
  __int64 v112; // [rsp+190h] [rbp+88h]
  int v113; // [rsp+198h] [rbp+90h]
  int v114; // [rsp+19Ch] [rbp+94h]
  int v115; // [rsp+1A0h] [rbp+98h]
  int v116; // [rsp+1A4h] [rbp+9Ch]
  int v117; // [rsp+1A8h] [rbp+A0h]
  int v118; // [rsp+1ACh] [rbp+A4h]
  int v119; // [rsp+1B0h] [rbp+A8h]
  int v120; // [rsp+1B4h] [rbp+ACh]
  int v121; // [rsp+1B8h] [rbp+B0h]
  __int128 v122; // [rsp+1BCh] [rbp+B4h]
  int v123; // [rsp+1CCh] [rbp+C4h]
  int v124; // [rsp+1D0h] [rbp+C8h]
  int v125; // [rsp+1D4h] [rbp+CCh]
  int v126; // [rsp+1D8h] [rbp+D0h]
  int v127; // [rsp+1DCh] [rbp+D4h]
  int v128; // [rsp+1E0h] [rbp+D8h]
  int v129; // [rsp+1E4h] [rbp+DCh]
  int v130; // [rsp+1E8h] [rbp+E0h]
  int v131; // [rsp+1ECh] [rbp+E4h]
  __int128 v132; // [rsp+1F0h] [rbp+E8h]
  __int128 v133; // [rsp+208h] [rbp+100h] BYREF
  __int128 v134; // [rsp+218h] [rbp+110h]
  struct ID2D1RegionGeometry *v135[8]; // [rsp+228h] [rbp+120h] BYREF

  v8 = this;
  v9 = a6;
  v11 = a2;
  v12 = a4;
  v13 = a8;
  v91 = a2;
  v90 = a8;
  v84 = a4;
  v85 = this;
  v89 = a6;
  _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 11, 1u);
  CDrawListCache::Invalidate(a8);
  v83.m256i_i64[0] = 0LL;
  v83.m256i_i32[2] = v12;
  memset((char *)&v83.m256i_u64[1] + 4, 0, 20);
  CMILMatrix::Get2DScaleDimensions(a5, (float *)v83.m256i_i32, (float *)&v83.m256i_i32[1]);
  v14 = *((_QWORD *)v8 + 2);
  v15 = 0LL;
  v16 = a7;
  v17 = 0LL;
  *(_QWORD *)&v86 = 0LL;
  v83.m256i_i64[2] = (__int64)a6;
  v83.m256i_i8[28] = a7;
  v83.m256i_i8[29] = 1;
  v78 = 0LL;
  v82 = 0;
  if ( !*(_DWORD *)(v14 + 8) )
  {
LABEL_72:
    v57 = v9 && *((_DWORD *)a3 + 36);
    v58 = CDrawListCache::Update(v13, v11, *((struct CDrawListEntry ***)a3 + 10), *((_DWORD *)a3 + 26), v12, v57, v16);
    v52 = v58;
    if ( v58 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x1EFu);
    goto LABEL_77;
  }
  v18 = *(_OWORD *)v83.m256i_i8;
  while ( 1 )
  {
    v19 = (_DWORD *)(*(_QWORD *)v14 + 144 * v17);
    CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)v8, (__int64)v107, v17);
    v21 = v19[1];
    if ( (v21 & 0x20) == 0 )
      break;
    if ( v15 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v15)(v15, 1LL);
    v67 = v108;
    v78 = 0LL;
    v133 = *v108;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v135, (const struct MilRectF *)&v133);
    v103 = 0;
    v92[0] = v67[4];
    v92[1] = v67[5];
    v93 = 0LL;
    v94 = v67[6];
    v95 = v67[7];
    v96 = 0LL;
    v97 = 0LL;
    v98 = 1065353216LL;
    v99 = v67[8];
    v100 = v67[9];
    v101 = 0;
    v102 = 1065353216;
    if ( v9 )
    {
      v69 = CShape::Combine((__int64)v9, v68, (__int64)v135, (__int64)v92, 1, &v78);
      v52 = v69;
      if ( v69 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x16Du);
LABEL_112:
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v135);
        goto LABEL_142;
      }
    }
    else
    {
      v70 = CShape::CopyShape(v135, (const struct CMILMatrix *)v92, &v78);
      v52 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0x176u);
        goto LABEL_112;
      }
    }
    v83.m256i_i64[2] = (__int64)v78;
    v83.m256i_i8[29] = 0;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v135);
LABEL_70:
    v8 = v85;
    v17 = (unsigned int)(v82 + 1);
    v15 = v78;
    v82 = v17;
    v14 = *((_QWORD *)v85 + 2);
    if ( (unsigned int)v17 >= *(_DWORD *)(v14 + 8) )
    {
      v12 = v84;
      v13 = v90;
      v16 = a7;
      v11 = v91;
      goto LABEL_72;
    }
  }
  v22 = 0LL;
  v23 = 0LL;
  if ( *v19 )
  {
    if ( v19[10] < *((_DWORD *)v8 + 16) )
      v22 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)v8 + 5) + 8LL * (unsigned int)v19[10]);
    if ( v19[14] < *((_DWORD *)v8 + 24) )
      v23 = *(_QWORD *)(*((_QWORD *)v8 + 9) + 8LL * (unsigned int)v19[14]);
  }
  v24 = 32;
  if ( (v21 & 0x10) != 0 )
    v24 = v20;
  v83.m256i_i32[6] = v24;
  if ( v22 )
  {
    v60 = *(int (__fastcall ***)(CCompositionSurfaceBitmap *, GUID *, struct CPrimitiveColor **))v22;
    v81 = 0LL;
    if ( (*v60)(v22, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v81) >= 0 )
      v83.m256i_i32[6] = v24 | 0x10;
    v61 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(struct CPrimitiveColor *))(*(_QWORD *)v61 + 16LL))(v61);
    }
  }
  v25 = v19[13];
  if ( !v25 )
    goto LABEL_13;
  v71 = v25 - 1;
  if ( !v71 )
  {
    v76 = 1;
    goto LABEL_14;
  }
  if ( v71 == 1 )
    v76 = 2;
  else
LABEL_13:
    v76 = 0;
LABEL_14:
  v26 = v19[12];
  if ( !v26 )
    goto LABEL_15;
  v72 = v26 - 1;
  if ( !v72 )
  {
    v27 = 1;
    goto LABEL_16;
  }
  if ( v72 == 1 )
    v27 = 2;
  else
LABEL_15:
    v27 = 0;
LABEL_16:
  v28 = v19[17];
  LOBYTE(v79) = v19[11] != 0;
  HIBYTE(v79) = v27;
  if ( !v28 )
    goto LABEL_17;
  v73 = v28 - 1;
  if ( !v73 )
  {
    v29 = 1;
    goto LABEL_18;
  }
  if ( v73 == 1 )
    v29 = 2;
  else
LABEL_17:
    v29 = 0;
LABEL_18:
  v30 = v19[16];
  if ( !v30 )
    goto LABEL_19;
  v74 = v30 - 1;
  if ( !v74 )
  {
    v31 = 1;
    goto LABEL_20;
  }
  if ( v74 == 1 )
    v31 = 2;
  else
LABEL_19:
    v31 = 0;
LABEL_20:
  LOBYTE(v80) = v19[15] != 0;
  v32 = (SamplerMode *)((char *)&v87 + 8);
  HIBYTE(v80) = v31;
  *(_QWORD *)&v86 = &CCommonRenderingEffect::`vftable';
  v33 = 2LL;
  do
  {
    SamplerMode::SamplerMode(v32);
    v32 = (SamplerMode *)((char *)v32 + 3);
    --v33;
  }
  while ( v33 );
  *((_QWORD *)&v86 + 1) = v22;
  if ( v22 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v22 + 8LL))(v22);
  *(_QWORD *)&v87 = v23;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  v34 = 1;
  WORD4(v87) = v79;
  BYTE10(v87) = v76;
  *(_WORD *)((char *)&v87 + 11) = v80;
  BYTE13(v87) = v29;
  if ( v22 )
  {
    v34 = 3;
    v62 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v22 + 96LL);
    if ( v62 == CCompositionSurfaceBitmap::IsOpaque ? CCompositionSurfaceBitmap::IsOpaque(v22) : v62(v22) )
      v34 = 11;
  }
  if ( v23 )
    v34 |= 4u;
  v35 = &CCommonRenderingEffect::s_rgCommonPixelShadersBitFlags;
  v36 = 0;
  while ( v34 != *(_DWORD *)v35 )
  {
    ++v36;
    v35 = (unsigned int near **)((char *)v35 + 4);
    if ( v36 >= 0xC )
    {
      v36 = 0;
      break;
    }
  }
  v37 = *(_OWORD *)&v83.m256i_u64[2];
  LODWORD(v88) = v36;
  *(_OWORD *)a3 = v18;
  *((_OWORD *)a3 + 1) = v37;
  if ( *((_QWORD *)a3 + 4) )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)a3 + 4) + 32LL))((char *)a3 + 32);
    *((_QWORD *)a3 + 4) = 0LL;
  }
  *((_QWORD *)a3 + 4) = 0LL;
  if ( (_QWORD)v86 )
  {
    v38 = v86;
    *(_QWORD *)&v86 = 0LL;
    v39 = v87;
    *((_OWORD *)a3 + 2) = v38;
    v40 = v88;
    *((_OWORD *)a3 + 3) = v39;
    *((_OWORD *)a3 + 4) = v40;
  }
  else
  {
    *((_QWORD *)a3 + 4) = 0LL;
  }
  v41 = (bool *)a3 + 2412;
  v42 = (void (__fastcall *)(CCommonRenderingEffect *, bool *const))**((_QWORD **)a3 + 4);
  v43 = (struct CDrawListPrimitiveBuilder *)((char *)a3 + 32);
  if ( v42 == CCommonRenderingEffect::GetSamplingInfo )
    CCommonRenderingEffect::GetSamplingInfo(v43, v41);
  else
    v42(v43, v41);
  if ( *((_QWORD *)a3 + 2) )
  {
    if ( *((_DWORD *)a3 + 2) == 1 )
      *((_BYTE *)a3 + 28) = 0;
  }
  else
  {
    *((_WORD *)a3 + 14) = 0;
  }
  *((_DWORD *)a3 + 96) = 0;
  *((_DWORD *)a3 + 584) = 0;
  *((_DWORD *)a3 + 602) = 0;
  *((_BYTE *)a3 + 2414) = (!*((_BYTE *)a3 + 29) || (*((_BYTE *)a3 + 24) & 0x20) != 0)
                       && CCommonRegistryData::m_fEnableCpuClipping != 0;
  for ( i = v108; ; i = (_OWORD *)((char *)i + v110) )
  {
    memset_0(&v104, 0, 0x20uLL);
    v45 = (struct D2D_RECT_F)*i;
    v46 = v19[1];
    v105 = *((_DWORD *)i + 11);
    v104 = v45;
    v106 ^= ((v106 ^ ((v46 & 2) == 0)) & 1 ^ v106 ^ (2 * ((v46 & 1) == 0))) & 2 ^ (v106 ^ ((v46 & 2) == 0)) & 1;
    memset_0(&v111, 0, 0x88uLL);
    v47 = 0LL;
    if ( *v19 )
    {
      v47 = &v111;
      HIDWORD(v134) = *((_DWORD *)i + 15);
      *(float *)&v48 = *((float *)&v134 + 3) * *((float *)i + 13);
      *(float *)&v134 = *((float *)&v134 + 3) * *((float *)i + 12);
      *(_QWORD *)((char *)&v134 + 4) = __PAIR64__(*((float *)&v134 + 3) * *((float *)i + 14), v48);
      v111 = v134;
      v49 = *((_DWORD *)i + 36);
      if ( v49 >= 7 )
        v49 = 7;
      if ( v49 < v19[3] )
        v112 = *(_QWORD *)(*((_QWORD *)v85 + 13) + 8LL * (v19[2] + v49));
      v113 = *((_DWORD *)i + 16);
      v114 = *((_DWORD *)i + 17);
      v115 = 0;
      v116 = *((_DWORD *)i + 18);
      v117 = *((_DWORD *)i + 19);
      v118 = 0;
      v119 = *((_DWORD *)i + 20);
      v120 = *((_DWORD *)i + 21);
      v121 = 1065353216;
      v122 = *(_OWORD *)((char *)i + 88);
      v123 = *((_DWORD *)i + 26);
      v124 = *((_DWORD *)i + 27);
      v125 = 0;
      v126 = *((_DWORD *)i + 28);
      v127 = *((_DWORD *)i + 29);
      v128 = 0;
      v129 = *((_DWORD *)i + 30);
      v130 = *((_DWORD *)i + 31);
      v131 = 1065353216;
      v132 = i[8];
    }
    v77 = 0;
    if ( v47 )
      v50 = (struct CPrimitiveColor *)*((_QWORD *)v47 + 3);
    else
      v50 = 0LL;
    v81 = v50;
    if ( CCommonRegistryData::m_fEnableMegaRects )
    {
      if ( (*((_BYTE *)a3 + 24) & 1) != 0
        && CDrawListPrimitiveBuilder::EstimatedArea(&v104, (const struct D2D_MATRIX_3X2_F *)(i + 1)) > (float)(int)CCommonRegistryData::m_dwMegaRectSize )
      {
        v64 = (CShape *)*((_QWORD *)a3 + 2);
        if ( !v64
          || CShape::IsAxisAlignedRectangle(v64)
          && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(i + 1), v65) )
        {
          if ( *((_DWORD *)a3 + 584) )
          {
            BuiltPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(a3, 0, 0LL, 0LL);
            v52 = BuiltPrimitiveEntry;
            if ( BuiltPrimitiveEntry < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltPrimitiveEntry, 0x1F1u);
              goto LABEL_60;
            }
          }
          v77 = 1;
        }
      }
    }
    appended = CDrawListPrimitiveBuilder::AppendRect(
                 a3,
                 (const struct PrimitiveGeometryDesc *)&v104,
                 (const struct PrimitiveVertexAttributesDesc *)v47,
                 (const struct D2D1::Matrix3x2F *)(i + 1));
    v52 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x1F8u);
      goto LABEL_60;
    }
    if ( *((_DWORD *)a3 + 602) >= 0xC8u )
    {
      if ( !v81 )
      {
        v53 = v77;
LABEL_99:
        v47 = 0LL;
        goto LABEL_100;
      }
    }
    else if ( !v81 )
    {
      v53 = v77;
      if ( !v77 )
        goto LABEL_60;
      goto LABEL_99;
    }
    v53 = v77;
LABEL_100:
    v66 = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(a3, v53, v81, (const struct _D3DCOLORVALUE *)v47);
    v52 = v66;
    if ( v66 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x208u);
LABEL_60:
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x1E1u);
      goto LABEL_142;
    }
    if ( i == v109 )
      break;
  }
  v54 = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(a3, 0, 0LL, 0LL);
  v52 = v54;
  if ( v54 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x214u);
  if ( *((_QWORD *)a3 + 4) )
  {
    v55 = *(void (__fastcall **)(CCommonRenderingEffect *))(*((_QWORD *)a3 + 4) + 32LL);
    v56 = (struct CDrawListPrimitiveBuilder *)((char *)a3 + 32);
    if ( v55 == CCommonRenderingEffect::ReleaseResources )
      CCommonRenderingEffect::ReleaseResources(v56);
    else
      v55(v56);
    *((_QWORD *)a3 + 4) = 0LL;
  }
  if ( v52 >= 0 )
  {
    v9 = v89;
    goto LABEL_70;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x1E5u);
LABEL_142:
  v15 = v78;
LABEL_77:
  if ( a3 )
    CDrawListPrimitiveBuilder::Reset(a3);
  if ( v15 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v15)(v15, 1LL);
  if ( (_QWORD)v86 )
    (*(void (__fastcall **)(__int128 *))(v86 + 32))(&v86);
  return (unsigned int)v52;
}
