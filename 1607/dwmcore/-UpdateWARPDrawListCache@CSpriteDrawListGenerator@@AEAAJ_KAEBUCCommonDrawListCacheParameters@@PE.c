/*
 * XREFs of ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C
 * Callers:
 *     ?UpdateDrawListCache@CSpriteDrawListGenerator@@QEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133AE4 (-UpdateDrawListCache@CSpriteDrawListGenerator@@QEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCD.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800586B8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1800C019C (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ??0CoordMap@@QEAA@XZ @ 0x180110FDC (--0CoordMap@@QEAA@XZ.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x180111044 (--1CoordMap@@QEAA@XZ.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180133910 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z @ 0x180133934 (-ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z.c)
 *     ?ComputeTexPositions@CoordMap@@QEAAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180135BAC (-ComputeTexPositions@CoordMap@@QEAAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 *     ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@@Z @ 0x18013605C (-GetAllPositions@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@AEAV-$DynArray@M$0A@@@.c)
 *     ?IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z @ 0x180136374 (-IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?D2DExtendModeFromExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4ExtendMode@@@Z @ 0x180136E34 (-D2DExtendModeFromExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4ExtendMode@@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x180137314 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801642D0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CSpriteDrawListGenerator::UpdateWARPDrawListCache(
        CSpriteDrawListGenerator *this,
        __int64 a2,
        const struct CCommonDrawListCacheParameters *a3,
        struct CDrawListCache *a4)
{
  CDrawListCache *v4; // r12
  const struct CCommonDrawListCacheParameters *v5; // rsi
  __int64 v6; // r15
  unsigned int v7; // r14d
  CMILRefCountBase *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // eax
  __int64 v19; // rcx
  __m128 v20; // xmm1
  struct D2D_RECT_F v21; // xmm9
  __m128 v22; // xmm3
  unsigned __int64 v23; // xmm10_8
  int v24; // eax
  __int64 v25; // rcx
  struct _D3DCOLORVALUE *v26; // rax
  int v27; // eax
  __m128 v28; // xmm7
  __m128 v29; // xmm6
  __int64 v30; // rcx
  struct D2D_RECT_F v31; // xmm8
  unsigned __int64 v32; // xmm7_8
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  int AllPositions; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  D3DVALUE _23; // edx
  __int64 v43; // rcx
  __int64 v44; // r12
  unsigned int v45; // r15d
  float v46; // xmm3_4
  float v47; // xmm4_4
  FLOAT v48; // xmm1_4
  struct D2D_MATRIX_3X2_F *v49; // r9
  __int64 v50; // r10
  __int64 v51; // r11
  unsigned int v52; // xmm1_4
  __m128 v53; // xmm3
  __m128 v54; // xmm1
  D3DVALUE v55; // xmm1_4
  D3DVALUE v56; // xmm0_4
  D3DVALUE v57; // xmm1_4
  __m128 v58; // xmm3
  __m128 v59; // xmm1
  int v60; // eax
  unsigned int v61; // edx
  int v62; // eax
  int v63; // eax
  unsigned int v64; // edx
  int v65; // eax
  int v66; // eax
  unsigned int v67; // eax
  unsigned int i; // edi
  __int64 v69; // rcx
  struct D2D_RECT_F v71; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v72; // [rsp+60h] [rbp-A8h] BYREF
  float v73; // [rsp+70h] [rbp-98h]
  float v74; // [rsp+74h] [rbp-94h]
  int v75; // [rsp+78h] [rbp-90h] BYREF
  int v76; // [rsp+7Ch] [rbp-8Ch] BYREF
  CMILRefCountBase *v77; // [rsp+80h] [rbp-88h] BYREF
  struct _D3DCOLORVALUE v78; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_RECT_F v79; // [rsp+98h] [rbp-70h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-58h] BYREF
  const struct CCommonDrawListCacheParameters *v82; // [rsp+B8h] [rbp-50h]
  __int64 v83; // [rsp+C0h] [rbp-48h]
  struct CDrawListCache *v84; // [rsp+C8h] [rbp-40h]
  int v85; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v86; // [rsp+E0h] [rbp-28h]
  struct D2D_RECT_F v87; // [rsp+E8h] [rbp-20h] BYREF
  int v88; // [rsp+F8h] [rbp-10h]
  __int128 v89; // [rsp+FCh] [rbp-Ch]
  __int64 v90; // [rsp+110h] [rbp+8h]
  struct D2D_RECT_F v91; // [rsp+118h] [rbp+10h]
  unsigned __int64 v92; // [rsp+128h] [rbp+20h]
  int v93; // [rsp+140h] [rbp+38h]
  int v94; // [rsp+144h] [rbp+3Ch]
  BOOL v95; // [rsp+148h] [rbp+40h]
  __int64 v96; // [rsp+150h] [rbp+48h]
  struct D2D_RECT_F v97; // [rsp+158h] [rbp+50h]
  unsigned __int64 v98; // [rsp+168h] [rbp+60h]
  int v99; // [rsp+180h] [rbp+78h]
  int v100; // [rsp+184h] [rbp+7Ch]
  BOOL v101; // [rsp+188h] [rbp+80h]
  __int128 v102; // [rsp+18Ch] [rbp+84h]
  __int128 v103; // [rsp+19Ch] [rbp+94h]
  __int128 v104; // [rsp+1ACh] [rbp+A4h]
  __int128 v105; // [rsp+1BCh] [rbp+B4h]
  char v106; // [rsp+1CCh] [rbp+C4h]
  char v107; // [rsp+1CDh] [rbp+C5h]
  __int16 v108; // [rsp+1CEh] [rbp+C6h]
  struct D2D_RECT_F v109; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _D3DCOLORVALUE v110; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v111; // [rsp+218h] [rbp+110h]
  float v112; // [rsp+230h] [rbp+128h]
  float v113; // [rsp+234h] [rbp+12Ch]
  float v114; // [rsp+238h] [rbp+130h]
  float v115; // [rsp+23Ch] [rbp+134h]
  float v116; // [rsp+240h] [rbp+138h]
  float v117; // [rsp+244h] [rbp+13Ch]
  __int16 v118; // [rsp+248h] [rbp+140h]
  char v119; // [rsp+24Ah] [rbp+142h]
  __int64 v120; // [rsp+288h] [rbp+180h]
  float v121; // [rsp+2A0h] [rbp+198h]
  float v122; // [rsp+2A4h] [rbp+19Ch]
  float v123; // [rsp+2A8h] [rbp+1A0h]
  float v124; // [rsp+2ACh] [rbp+1A4h]
  float v125; // [rsp+2B0h] [rbp+1A8h]
  float v126; // [rsp+2B4h] [rbp+1ACh]
  __int16 v127; // [rsp+2B8h] [rbp+1B0h]
  char v128; // [rsp+2BAh] [rbp+1B2h]
  char v129; // [rsp+2F8h] [rbp+1F0h]
  char v130; // [rsp+2F9h] [rbp+1F1h]
  char v131; // [rsp+2FBh] [rbp+1F3h]
  struct D2D_RECT_F v132; // [rsp+308h] [rbp+200h]
  unsigned __int64 v133; // [rsp+318h] [rbp+210h]
  struct D2D_RECT_F v134; // [rsp+320h] [rbp+218h]
  unsigned __int64 v135; // [rsp+330h] [rbp+228h]
  struct _D3DMATRIX v136; // [rsp+338h] [rbp+230h] BYREF
  _QWORD v137[2]; // [rsp+388h] [rbp+280h] BYREF
  int v138; // [rsp+398h] [rbp+290h]
  __int64 v139; // [rsp+39Ch] [rbp+294h]
  _BYTE v140[48]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _QWORD v141[2]; // [rsp+3D8h] [rbp+2D0h] BYREF
  int v142; // [rsp+3E8h] [rbp+2E0h]
  __int64 v143; // [rsp+3ECh] [rbp+2E4h]
  _BYTE v144[48]; // [rsp+3F8h] [rbp+2F0h] BYREF
  _QWORD v145[2]; // [rsp+428h] [rbp+320h] BYREF
  int v146; // [rsp+438h] [rbp+330h]
  __int64 v147; // [rsp+43Ch] [rbp+334h]
  _BYTE v148[48]; // [rsp+448h] [rbp+340h] BYREF
  _QWORD v149[2]; // [rsp+478h] [rbp+370h] BYREF
  int v150; // [rsp+488h] [rbp+380h]
  __int64 v151; // [rsp+48Ch] [rbp+384h]
  _BYTE v152[48]; // [rsp+498h] [rbp+390h] BYREF
  _QWORD v153[2]; // [rsp+4C8h] [rbp+3C0h] BYREF
  int v154; // [rsp+4D8h] [rbp+3D0h]
  __int64 v155; // [rsp+4DCh] [rbp+3D4h]
  _BYTE v156[48]; // [rsp+4E8h] [rbp+3E0h] BYREF
  struct CDrawListEntry **v157[2]; // [rsp+518h] [rbp+410h] BYREF
  int v158; // [rsp+528h] [rbp+420h]
  unsigned int v159[3]; // [rsp+52Ch] [rbp+424h]
  _BYTE v160[80]; // [rsp+538h] [rbp+430h] BYREF
  _BYTE v161[192]; // [rsp+588h] [rbp+480h] BYREF
  _BYTE v162[272]; // [rsp+648h] [rbp+540h] BYREF

  v84 = a4;
  v82 = a3;
  v157[0] = (struct CDrawListEntry **)v160;
  v4 = a4;
  v83 = a2;
  v157[1] = (struct CDrawListEntry **)v160;
  v77 = 0LL;
  v158 = 10;
  v5 = a3;
  *(_QWORD *)v159 = 10LL;
  v6 = a2;
  v80 = 0LL;
  v7 = 1;
  v81 = 0LL;
  v118 = 1;
  v8 = 0LL;
  v127 = 1;
  v119 = 0;
  v128 = 0;
  CoordMap::CoordMap((CoordMap *)v161);
  v11 = v10 - 112;
  if ( !v10 )
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct D2D_RECT_F *, __int64 *))(*(_QWORD *)v11 + 168LL))(
          v11,
          v9 + 88,
          0LL,
          &v109,
          &v81);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x125u);
    goto LABEL_79;
  }
  memset_0(&v85, 0, 0xF8uLL);
  v88 = *((_DWORD *)v5 + 24);
  v108 = 256;
  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)v5 + 8), &v136);
  v15 = *(_OWORD *)&D3DMatrix->_21;
  v102 = *(_OWORD *)&D3DMatrix->_11;
  v16 = *(_OWORD *)&D3DMatrix->_31;
  v103 = v15;
  v17 = *(_OWORD *)&D3DMatrix->_41;
  v104 = v16;
  v85 |= (v131 != 0 ? 0x10 : 0) | (v130 != 0 ? 2 : 0) | (v129 != 0 ? 4 : 0);
  v105 = v17;
  if ( v111 )
  {
    *(_QWORD *)&v71.left = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v111 + 72LL))(v111, &v71);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x135u);
      goto LABEL_8;
    }
    (*(void (__fastcall **)(_QWORD, int *, int *))(**(_QWORD **)&v71.left + 24LL))(*(_QWORD *)&v71.left, &v75, &v76);
    LOBYTE(v19) = HIBYTE(v118);
    v90 = v111;
    v106 = 0;
    v72.left = (float)(v112 * (float)v75) + (float)(v113 * 0.0);
    v72.top = (float)((float)v76 * v113) + (float)(v112 * 0.0);
    v72.bottom = (float)(v115 * (float)v76) + (float)(v114 * 0.0);
    v20 = (__m128)LODWORD(v117);
    v72.right = (float)(v114 * (float)v75) + (float)(v115 * 0.0);
    v21 = v72;
    v22 = (__m128)LODWORD(v116);
    v91 = v72;
    v22.m128_f32[0] = (float)((float)(v116 * (float)v75) + (float)(v117 * 0.0))
                    + (float)(0.0 - (float)((float)v75 * 0.0));
    v20.m128_f32[0] = (float)((float)(v117 * (float)v76) + (float)(v116 * 0.0))
                    + (float)(0.0 - (float)((float)v76 * 0.0));
    v23 = _mm_unpacklo_ps(v22, v20).m128_u64[0];
    v92 = v23;
    v24 = D2DExtendModeFromExtendMode(v19);
    LOBYTE(v25) = v119;
    v93 = v24;
    v94 = D2DExtendModeFromExtendMode(v25);
    v95 = (_BYTE)v118 != 0;
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v71);
  }
  else
  {
    v26 = Premultiply(&v78, &v110);
    v23 = v92;
    v21 = v91;
    v89 = *(_OWORD *)&v26->r;
  }
  if ( v120 )
  {
    *(_QWORD *)&v71.left = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v120 + 72LL))(v120, &v71);
    v13 = v27;
    if ( v27 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, int *, int *))(**(_QWORD **)&v71.left + 24LL))(*(_QWORD *)&v71.left, &v76, &v75);
      v28 = 0LL;
      v29 = 0LL;
      LOBYTE(v30) = HIBYTE(v127);
      v96 = v120;
      v107 = 0;
      v72.left = (float)(v121 * (float)v76) + (float)(v122 * 0.0);
      v72.top = (float)((float)v75 * v122) + (float)(v121 * 0.0);
      v72.right = (float)((float)v76 * v123) + (float)(v124 * 0.0);
      v72.bottom = (float)((float)v75 * v124) + (float)(v123 * 0.0);
      v31 = v72;
      v97 = v72;
      v28.m128_f32[0] = (float)((float)((float)v76 * v125) + (float)(v126 * 0.0))
                      + (float)(0.0 - (float)((float)v76 * 0.0));
      v29.m128_f32[0] = (float)((float)((float)v75 * v126) + (float)(v125 * 0.0))
                      + (float)(0.0 - (float)((float)v75 * 0.0));
      v32 = _mm_unpacklo_ps(v28, v29).m128_u64[0];
      v98 = v32;
      v33 = D2DExtendModeFromExtendMode(v30);
      LOBYTE(v34) = v128;
      v99 = v33;
      v100 = D2DExtendModeFromExtendMode(v34);
      v101 = (_BYTE)v127 != 0;
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v71);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x14Cu);
LABEL_8:
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v71);
    goto LABEL_81;
  }
  v32 = v98;
  v31 = v97;
LABEL_15:
  if ( v81 )
  {
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v81 + 16LL))(v81, 0LL, &v80);
    v13 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x15Du);
      goto LABEL_81;
    }
    v86 = v80;
  }
  v36 = CSpriteDrawListGenerator::ComputeCoordMap(&v109, (struct CoordMap *)v161);
  v13 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x161u);
    goto LABEL_81;
  }
  if ( CoordMap::IsEmpty((CoordMap *)v161) )
  {
    v87 = v109;
    v63 = CWARPDrawListEntry::Create((const struct WARPAlphaBltParameters *)&v85, &v77);
    v13 = v63;
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x1E8u);
      v8 = v77;
      goto LABEL_79;
    }
    v8 = v77;
    *(_QWORD *)&v71.left = v77;
    v64 = v159[1] + 1;
    if ( v159[1] + 1 >= v159[1] )
    {
      if ( v64 <= v159[0] )
      {
        v157[0][v159[1]] = *(struct CDrawListEntry **)&v71.left;
        v159[1] = v64;
LABEL_73:
        v66 = CDrawListCache::Update(v4, v6, v157[0], v159[1], (enum D2D1_ANTIALIAS_MODE)*((_DWORD *)v5 + 24), 0, 0);
        v13 = v66;
        if ( v66 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x1F5u);
        goto LABEL_81;
      }
      v65 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, 8u, 1, &v71);
      v13 = v65;
      if ( v65 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0xC0u);
    }
    else
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v5 = v82;
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1EAu);
      goto LABEL_79;
    }
    goto LABEL_73;
  }
  v137[0] = v140;
  v138 = 10;
  v137[1] = v140;
  v139 = 10LL;
  *(_QWORD *)&v136._11 = &v136._31;
  *(_QWORD *)&v136._13 = &v136._31;
  v153[0] = v156;
  v153[1] = v156;
  v149[0] = v152;
  v149[1] = v152;
  v145[0] = v148;
  v145[1] = v148;
  v141[0] = v144;
  v141[1] = v144;
  LODWORD(v136._21) = 10;
  *(_QWORD *)&v136._22 = 10LL;
  v154 = 10;
  v155 = 10LL;
  v150 = 10;
  v151 = 10LL;
  v146 = 10;
  v147 = 10LL;
  v142 = 10;
  v143 = 10LL;
  AllPositions = CoordMap::GetAllPositions(10LL, v161, v137);
  v13 = AllPositions;
  if ( AllPositions < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AllPositions, 0x16Fu);
    goto LABEL_25;
  }
  v39 = CoordMap::GetAllPositions(v38, v162, &v136);
  v13 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x170u);
    goto LABEL_25;
  }
  if ( v111 )
  {
    v78.b = v136._23;
    *(_QWORD *)&v78.r = *(_QWORD *)&v136._11;
    v79.right = *((FLOAT *)&v139 + 1);
    *(_QWORD *)&v79.left = v137[0];
    v134 = v21;
    v135 = v23;
    v40 = CoordMap::ComputeTexPositions(
            (unsigned int)v161,
            0,
            (unsigned int)&v79,
            (unsigned int)&v78,
            (__int64)v153,
            (__int64)v149,
            LODWORD(FLOAT_1_1920929eN7));
    v13 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x17Du);
LABEL_25:
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v141);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v145);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v149);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v153);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v136);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v137);
      goto LABEL_81;
    }
  }
  else
  {
    v23 = v135;
    v21 = v134;
  }
  if ( v120 )
  {
    v78.b = v136._23;
    *(_QWORD *)&v78.r = *(_QWORD *)&v136._11;
    v79.right = *((FLOAT *)&v139 + 1);
    *(_QWORD *)&v79.left = v137[0];
    v132 = v31;
    v133 = v32;
    v41 = CoordMap::ComputeTexPositions(
            (unsigned int)v161,
            1,
            (unsigned int)&v79,
            (unsigned int)&v78,
            (__int64)v145,
            (__int64)v141,
            LODWORD(FLOAT_1_1920929eN7));
    v13 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x18Bu);
      goto LABEL_25;
    }
  }
  else
  {
    v32 = v133;
    v31 = v132;
  }
  _23 = v136._23;
  if ( LODWORD(v136._23) <= 1 )
  {
LABEL_60:
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v141);
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v145);
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v149);
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v153);
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v136);
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v137);
    goto LABEL_73;
  }
  v43 = *(_QWORD *)&v136._11;
  while ( 1 )
  {
    v44 = v7 - 1;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v43 + 4 * v44) - *(float *)(v43 + 4LL * v7))) & _xmm) > 0.0000011920929 )
    {
      v45 = 1;
      if ( HIDWORD(v139) > 1 )
        break;
    }
LABEL_58:
    if ( ++v7 >= LODWORD(_23) )
    {
      v5 = v82;
      v6 = v83;
      v4 = v84;
      goto LABEL_60;
    }
  }
  while ( 1 )
  {
    v46 = *(float *)(v137[0] + 4LL * (v45 - 1));
    v47 = *(float *)(v137[0] + 4LL * v45);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v46 - v47)) & _xmm) > 0.0000011920929 )
      break;
LABEL_56:
    if ( ++v45 >= HIDWORD(v139) )
    {
      _23 = v136._23;
      goto LABEL_58;
    }
  }
  v48 = *(float *)(v43 + 4LL * v7);
  v87.top = *(FLOAT *)(v43 + 4 * v44);
  v87.bottom = v48;
  v87.left = v46;
  v87.right = v47;
  if ( CoordMap::IsHollowRect((CoordMap *)v161, &v87) )
  {
LABEL_55:
    v43 = *(_QWORD *)&v136._11;
    goto LABEL_56;
  }
  if ( v111 )
  {
    v52 = *(_DWORD *)(v149[0] + 4 * v44);
    v79.left = *(FLOAT *)(v153[0] + 4 * v50);
    *(_QWORD *)&v79.top = __PAIR64__(*(_DWORD *)(v153[0] + 4 * v51), v52);
    v79.bottom = *(FLOAT *)(v149[0] + 4LL * v7);
    v71 = v79;
    if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v87, &v71, &v72, v49) )
    {
      v71.left = (float)(v134.right * v72.top) + (float)(v134.left * v72.left);
      v71.top = (float)(v134.top * v72.left) + (float)(v134.bottom * v72.top);
      v53 = (__m128)LODWORD(v74);
      v71.bottom = (float)(v72.bottom * v134.bottom) + (float)(v72.right * v134.top);
      v71.right = (float)(v72.right * v134.left) + (float)(v72.bottom * v134.right);
      v54 = (__m128)LODWORD(v73);
      v53.m128_f32[0] = (float)((float)(v74 * v134.bottom) + (float)(v73 * v134.top)) + *((float *)&v135 + 1);
      v91 = v71;
      v54.m128_f32[0] = (float)((float)(v73 * v134.left) + (float)(v74 * v134.right)) + *(float *)&v135;
      v92 = _mm_unpacklo_ps(v54, v53).m128_u64[0];
    }
    else
    {
      v91 = v21;
      v92 = v23;
    }
  }
  if ( v120 )
  {
    v55 = *(float *)(v141[0] + 4 * v44);
    v78.r = *(D3DVALUE *)(v145[0] + 4 * v50);
    v56 = *(float *)(v145[0] + 4 * v51);
    v78.g = v55;
    v57 = *(float *)(v141[0] + 4LL * v7);
    v78.b = v56;
    v78.a = v57;
    v71 = *(struct D2D_RECT_F *)&v78.r;
    if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v87, &v71, &v72, v49) )
    {
      v71.left = (float)(v132.left * v72.left) + (float)(v132.right * v72.top);
      v71.top = (float)(v132.top * v72.left) + (float)(v132.bottom * v72.top);
      v58 = (__m128)LODWORD(v74);
      v71.bottom = (float)(v72.bottom * v132.bottom) + (float)(v72.right * v132.top);
      v71.right = (float)(v72.right * v132.left) + (float)(v72.bottom * v132.right);
      v59 = (__m128)LODWORD(v73);
      v58.m128_f32[0] = (float)((float)(v74 * v132.bottom) + (float)(v73 * v132.top)) + *((float *)&v133 + 1);
      v97 = v71;
      v59.m128_f32[0] = (float)((float)(v73 * v132.left) + (float)(v74 * v132.right)) + *(float *)&v133;
      v98 = _mm_unpacklo_ps(v59, v58).m128_u64[0];
    }
    else
    {
      v97 = v31;
      v98 = v32;
    }
  }
  v60 = CWARPDrawListEntry::Create((const struct WARPAlphaBltParameters *)&v85, &v77);
  v13 = v60;
  if ( v60 >= 0 )
  {
    v8 = v77;
    *(_QWORD *)&v71.left = v77;
    v61 = v159[1] + 1;
    if ( v159[1] + 1 >= v159[1] )
    {
      if ( v61 <= v159[0] )
      {
        v157[0][v159[1]] = *(struct CDrawListEntry **)&v71.left;
        v159[1] = v61;
LABEL_54:
        v77 = 0LL;
        goto LABEL_55;
      }
      v62 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, 8u, 1, &v71);
      v13 = v62;
      if ( v62 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0xC0u);
    }
    else
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1DDu);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v141);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v145);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v149);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v153);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v136);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v137);
      goto LABEL_79;
    }
    goto LABEL_54;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x1DBu);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v141);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v145);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v149);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v153);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v136);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v137);
  v8 = v77;
LABEL_79:
  if ( v8 )
    CMILRefCountBase::Release(v8);
LABEL_81:
  v67 = v159[1];
  for ( i = 0; i < v67; ++i )
  {
    if ( v157[0][i] )
    {
      (*(void (__fastcall **)(struct CDrawListEntry *))(*(_QWORD *)v157[0][i] + 8LL))(v157[0][i]);
      v157[0][i] = 0LL;
      v67 = v159[1];
    }
  }
  CoordMap::~CoordMap((CoordMap *)v161);
  v69 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v157);
  return (unsigned int)v13;
}
