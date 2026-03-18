/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18011A6F0
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x18011A694 (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x18011B3C0 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18011BB98 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?Invert@CMILMatrix@@QEAAHXZ @ 0x180124FB4 (-Invert@CMILMatrix@@QEAAHXZ.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x180149650 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x180149900 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  unsigned int v7; // edi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // r13d
  int v11; // r12d
  __int128 v12; // xmm0
  struct CPolygon *v13; // r15
  __int128 v14; // xmm1
  unsigned int v15; // edx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  int v18; // r8d
  __int128 v19; // xmm0
  int v20; // esi
  struct D2D_VECTOR_4F v21; // xmm6
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rdx
  struct D2D_VECTOR_4F v25; // xmm0
  struct D2D_VECTOR_4F v26; // xmm7
  int v27; // eax
  unsigned int v28; // r8d
  int v29; // r9d
  int v30; // r10d
  int v31; // r11d
  __m128i v32; // xmm0
  unsigned int v33; // r8d
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // ebx
  unsigned int v38; // r8d
  _DWORD *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  int v42; // ebx
  _DWORD *v43; // rcx
  __int64 v44; // rdx
  int v45; // eax
  int v46; // ebx
  __m128i v47; // xmm0
  unsigned int v48; // r8d
  _DWORD *v49; // rcx
  __int64 v50; // rdx
  int v51; // eax
  int v52; // ebx
  unsigned int v53; // r8d
  _DWORD *v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  int v57; // ebx
  unsigned int v58; // r8d
  _DWORD *v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  int v62; // ebx
  _DWORD *v63; // rcx
  __int64 v64; // rdx
  int v65; // eax
  int v66; // ebx
  __int64 v67; // rax
  unsigned int v68; // r8d
  _DWORD *v69; // rcx
  __int64 v70; // rdx
  int v71; // eax
  int v72; // eax
  int v73; // ebx
  _DWORD *v74; // rcx
  __int64 v75; // rdx
  int v76; // eax
  int v77; // ebx
  int v78; // eax
  int v79; // ebx
  _DWORD *v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  int v83; // ebx
  int v84; // eax
  int v85; // ebx
  __int64 v86; // r9
  int v87; // eax
  __int64 v88; // r9
  struct CPolygon *v89; // rsi
  int v90; // eax
  struct D2D_VECTOR_4F *v92; // [rsp+28h] [rbp-E0h]
  unsigned int v93; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v94; // [rsp+38h] [rbp-D0h]
  struct CPolygon *v96; // [rsp+48h] [rbp-C0h] BYREF
  struct CPolygon *v97; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v98[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v99; // [rsp+70h] [rbp-98h]
  struct CPolygon **v100; // [rsp+78h] [rbp-90h]
  struct CPolygon **v101; // [rsp+80h] [rbp-88h]
  struct D2D_VECTOR_4F v102; // [rsp+88h] [rbp-80h] BYREF
  int v103; // [rsp+98h] [rbp-70h]
  char v104[16]; // [rsp+A0h] [rbp-68h] BYREF
  D2D_VECTOR_4F v105; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v106; // [rsp+C0h] [rbp-48h] BYREF
  int v107; // [rsp+D0h] [rbp-38h]
  struct D2D_VECTOR_4F v108; // [rsp+D8h] [rbp-30h] BYREF
  int v109; // [rsp+E8h] [rbp-20h]
  D2D_VECTOR_4F v110; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v111; // [rsp+108h] [rbp+0h] BYREF
  __int128 v112; // [rsp+118h] [rbp+10h]
  __int128 v113; // [rsp+128h] [rbp+20h]
  __int128 v114; // [rsp+138h] [rbp+30h]
  void *v115[2]; // [rsp+148h] [rbp+40h] BYREF
  int v116; // [rsp+158h] [rbp+50h]
  __int64 v117; // [rsp+15Ch] [rbp+54h]
  _BYTE v118[128]; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_VECTOR_4F v119; // [rsp+1E8h] [rbp+E0h] BYREF
  int v120; // [rsp+1F8h] [rbp+F0h]
  int v121; // [rsp+1FCh] [rbp+F4h]
  int v122; // [rsp+200h] [rbp+F8h]
  int v123; // [rsp+204h] [rbp+FCh]
  int v124; // [rsp+208h] [rbp+100h]
  int v125; // [rsp+20Ch] [rbp+104h]
  int v126; // [rsp+210h] [rbp+108h]
  int v127; // [rsp+214h] [rbp+10Ch]
  int v128; // [rsp+218h] [rbp+110h]
  int v129; // [rsp+21Ch] [rbp+114h]
  int v130; // [rsp+220h] [rbp+118h]
  int v131; // [rsp+224h] [rbp+11Ch]
  void *v132[2]; // [rsp+228h] [rbp+120h] BYREF
  int v133; // [rsp+238h] [rbp+130h]
  __int64 v134; // [rsp+23Ch] [rbp+134h]
  _BYTE v135[128]; // [rsp+248h] [rbp+140h] BYREF

  v100 = a4;
  *a4 = 0LL;
  v115[0] = v118;
  v115[1] = v118;
  v101 = a5;
  v132[0] = v135;
  v7 = 0;
  *a5 = 0LL;
  v8 = *((_OWORD *)a2 + 9);
  v9 = *((_OWORD *)a2 + 10);
  v10 = 0;
  v116 = 6;
  v111 = v8;
  v11 = 0;
  v12 = *((_OWORD *)a2 + 11);
  v13 = 0LL;
  v117 = 6LL;
  v112 = v9;
  v14 = *((_OWORD *)a2 + 12);
  v133 = 6;
  v134 = 6LL;
  v113 = v12;
  v114 = v14;
  v132[1] = v135;
  v96 = 0LL;
  v97 = 0LL;
  if ( (unsigned int)CMILMatrix::Invert((CMILMatrix *)&v111) )
  {
    D2DMatrixMultiply((struct D2DMatrix *)&v111, (CPolygon *)((char *)this + 144), (const struct D2DMatrix *)&v111);
  }
  else
  {
    *(_QWORD *)((char *)&v114 + 4) = 0LL;
    LODWORD(v114) = 0;
    *(_QWORD *)&v113 = 0LL;
    v112 = 0x3F80000000000000uLL;
    HIDWORD(v114) = 1065353216;
    *((_QWORD *)&v113 + 1) = 1065353216LL;
    v111 = 0x3F800000uLL;
  }
  if ( (unsigned int)CMILMatrix::Invert((CMILMatrix *)&v111) )
  {
    D2DMatrixTranspose((struct D2DMatrix *)&v119, (const struct D2DMatrix *)&v111);
  }
  else
  {
    v130 = 0;
    v129 = 0;
    v128 = 0;
    v127 = 0;
    v125 = 0;
    v124 = 0;
    v123 = 0;
    v122 = 0;
    v120 = 0;
    v119.w = 0.0;
    v119.z = 0.0;
    v119.y = 0.0;
    v131 = 1065353216;
    v126 = 1065353216;
    v121 = 1065353216;
    v119.x = 1.0;
  }
  v105 = (D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v110 = v105;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v105,
    v15,
    (const struct D2DVector4 *)&v110,
    v16,
    (const struct D2DMatrix *)&v119,
    v93);
  v17 = *((_QWORD *)a2 + 2);
  v18 = *((_DWORD *)a2 + 10);
  v110 = v105;
  v19 = *(_OWORD *)(v17 + 20LL * (unsigned int)(v18 - 2));
  v20 = *(_DWORD *)(v17 + 20LL * (unsigned int)(v18 - 2) + 16);
  LODWORD(v99) = v20;
  *(_OWORD *)&v98[1] = v19;
  v108 = *(struct D2D_VECTOR_4F *)(v17 + 20LL * (unsigned int)(v18 - 1));
  v21 = v108;
  v109 = *(_DWORD *)(v17 + 20LL * (unsigned int)(v18 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v105.x, (float *)&v98[1]);
  v94 = (unsigned int)D2DVectorHelper::ClassifyPoint(&v105.x, &v108.x);
  v22 = 0LL;
  if ( !v23 )
  {
LABEL_136:
    *(_DWORD *)a3 = 0;
    goto LABEL_137;
  }
  do
  {
    v24 = *((_QWORD *)a2 + 2);
    v25 = *(struct D2D_VECTOR_4F *)(v24 + 20 * v22);
    LODWORD(v98[0]) = *(_DWORD *)(v24 + 20 * v22 + 16);
    v26 = v25;
    v103 = v98[0];
    v102 = v25;
    v27 = D2DVectorHelper::ClassifyPoint(&v105.x, &v102.x);
    HIDWORD(v98[0]) = v27;
    if ( v31 == 1 )
    {
      if ( v29 == 2 )
      {
        v32 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                                 (D2DVectorHelper *)&v110,
                                                 &v105,
                                                 (const struct D2D_VECTOR_4F *)&v98[1],
                                                 &v108,
                                                 v92));
        v107 = v20;
        v106 = v32;
        v33 = HIDWORD(v117) + 1;
        if ( (unsigned int)(HIDWORD(v117) + 1) < HIDWORD(v117) )
        {
          v37 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v7 = -2147024362;
LABEL_101:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x112u);
          goto LABEL_137;
        }
        if ( v33 > (unsigned int)v117 )
        {
          v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 0x14u, 1, &v106);
          v37 = v36;
          if ( v36 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xC0u);
          v7 = v37;
          if ( v37 < 0 )
            goto LABEL_101;
        }
        else
        {
          v34 = v115[0];
          v35 = 5LL * HIDWORD(v117);
          *(__m128i *)((char *)v115[0] + 4 * v35) = v32;
          v34[v35 + 4] = v107;
          HIDWORD(v117) = v33;
        }
        v107 = 0;
        v38 = HIDWORD(v134) + 1;
        if ( (unsigned int)(HIDWORD(v134) + 1) < HIDWORD(v134) )
        {
          v42 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v7 = -2147024362;
LABEL_99:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x115u);
          goto LABEL_137;
        }
        if ( v38 > (unsigned int)v134 )
        {
          v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v132, 0x14u, 1, &v106);
          v42 = v41;
          if ( v41 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xC0u);
          v7 = v42;
          if ( v42 < 0 )
            goto LABEL_99;
        }
        else
        {
          v39 = v132[0];
          v40 = 5LL * HIDWORD(v134);
          *(__m128i *)((char *)v132[0] + 4 * v40) = v106;
          v39[v40 + 4] = v107;
          HIDWORD(v134) = v38;
        }
        v21 = v108;
        v28 = HIDWORD(v117);
      }
      if ( v28 + 1 < v28 )
      {
        v46 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_103:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x11Au);
        goto LABEL_137;
      }
      v7 = 0;
      if ( v28 + 1 > (unsigned int)v117 )
      {
        v45 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 0x14u, 1, &v108);
        v46 = v45;
        if ( v45 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xC0u);
        v7 = v46;
        if ( v46 < 0 )
          goto LABEL_103;
      }
      else
      {
        v43 = v115[0];
        v44 = 5LL * v28;
        *(struct D2D_VECTOR_4F *)((char *)v115[0] + 4 * v44) = v21;
        v43[v44 + 4] = v109;
        HIDWORD(v117) = v28 + 1;
      }
      ++v10;
      goto LABEL_94;
    }
    if ( v31 == 2 )
    {
      if ( v29 == 1 )
      {
        v47 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                                 (D2DVectorHelper *)v104,
                                                 &v105,
                                                 (const struct D2D_VECTOR_4F *)&v98[1],
                                                 &v108,
                                                 v92));
        v107 = 0;
        v106 = v47;
        v48 = HIDWORD(v117) + 1;
        if ( (unsigned int)(HIDWORD(v117) + 1) < HIDWORD(v117) )
        {
          v52 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v7 = -2147024362;
LABEL_107:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x12Bu);
          goto LABEL_137;
        }
        if ( v48 > (unsigned int)v117 )
        {
          v51 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 0x14u, 1, &v106);
          v52 = v51;
          if ( v51 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0xC0u);
          v7 = v52;
          if ( v52 < 0 )
            goto LABEL_107;
        }
        else
        {
          v49 = v115[0];
          v50 = 5LL * HIDWORD(v117);
          *(__m128i *)((char *)v115[0] + 4 * v50) = v47;
          v49[v50 + 4] = v107;
          HIDWORD(v117) = v48;
        }
        v107 = v20;
        v53 = HIDWORD(v134) + 1;
        if ( (unsigned int)(HIDWORD(v134) + 1) < HIDWORD(v134) )
        {
          v57 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v7 = -2147024362;
LABEL_105:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x12Eu);
          goto LABEL_137;
        }
        if ( v53 > (unsigned int)v134 )
        {
          v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v132, 0x14u, 1, &v106);
          v57 = v56;
          if ( v56 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xC0u);
          v7 = v57;
          if ( v57 < 0 )
            goto LABEL_105;
        }
        else
        {
          v54 = v132[0];
          v55 = 5LL * HIDWORD(v134);
          *(__m128i *)((char *)v132[0] + 4 * v55) = v106;
          v54[v55 + 4] = v107;
          HIDWORD(v134) = v53;
        }
        v21 = v108;
      }
      v58 = HIDWORD(v134) + 1;
      if ( (unsigned int)(HIDWORD(v134) + 1) < HIDWORD(v134) )
      {
        v62 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_109:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x134u);
        goto LABEL_137;
      }
      v7 = 0;
      if ( v58 > (unsigned int)v134 )
      {
        v61 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v132, 0x14u, 1, &v108);
        v62 = v61;
        if ( v61 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0xC0u);
        v7 = v62;
        if ( v62 < 0 )
          goto LABEL_109;
      }
      else
      {
        v59 = v132[0];
        v60 = 5LL * HIDWORD(v134);
        *(struct D2D_VECTOR_4F *)((char *)v132[0] + 4 * v60) = v21;
        v59[v60 + 4] = v109;
        HIDWORD(v134) = v58;
      }
      ++v11;
      goto LABEL_94;
    }
    v106 = (__m128i)v21;
    if ( v29 == 1 )
    {
      if ( v27 == 2 )
      {
        v107 = 0;
        if ( v28 + 1 < v28 )
        {
          v66 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v7 = -2147024362;
LABEL_113:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x146u);
          goto LABEL_137;
        }
        if ( v28 + 1 > (unsigned int)v117 )
        {
          v65 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 0x14u, 1, &v106);
          v66 = v65;
          if ( v65 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0xC0u);
          v7 = v66;
          if ( v66 < 0 )
            goto LABEL_113;
        }
        else
        {
          v63 = v115[0];
          v64 = 5LL * v28;
          *(struct D2D_VECTOR_4F *)((char *)v115[0] + 4 * v64) = v21;
          v63[v64 + 4] = v107;
          HIDWORD(v117) = v28 + 1;
        }
        v107 = v109;
        v67 = HIDWORD(v134);
        v68 = HIDWORD(v134) + 1;
        if ( (unsigned int)(HIDWORD(v134) + 1) < HIDWORD(v134) )
        {
          v73 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v7 = -2147024362;
LABEL_111:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0x149u);
          goto LABEL_137;
        }
        v7 = 0;
        if ( v68 <= (unsigned int)v134 )
          goto LABEL_62;
        v72 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v132, 0x14u, 1, &v106);
        v73 = v72;
        if ( v72 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0xC0u);
        v7 = v73;
        if ( v73 < 0 )
          goto LABEL_111;
        goto LABEL_94;
      }
LABEL_82:
      if ( v28 + 1 < v28 )
      {
        v83 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_135:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0x158u);
        goto LABEL_137;
      }
      if ( v28 + 1 > (unsigned int)v117 )
      {
        v82 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 0x14u, 1, &v108);
        v83 = v82;
        if ( v82 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0xC0u);
        v7 = v83;
        if ( v83 < 0 )
          goto LABEL_135;
      }
      else
      {
        v80 = v115[0];
        v81 = 5LL * v28;
        *(struct D2D_VECTOR_4F *)((char *)v115[0] + 4 * v81) = v21;
        v80[v81 + 4] = v109;
        HIDWORD(v117) = v28 + 1;
      }
      v68 = HIDWORD(v134) + 1;
      if ( (unsigned int)(HIDWORD(v134) + 1) < HIDWORD(v134) )
      {
        v85 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
LABEL_133:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0x159u);
        goto LABEL_137;
      }
      v7 = 0;
      if ( v68 <= (unsigned int)v134 )
      {
        v69 = v132[0];
        v70 = 5LL * HIDWORD(v134);
        *(struct D2D_VECTOR_4F *)((char *)v132[0] + 20 * HIDWORD(v134)) = v108;
        v71 = v109;
        goto LABEL_63;
      }
      v84 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v132, 0x14u, 1, &v108);
      v85 = v84;
      if ( v84 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0xC0u);
      v7 = v85;
      if ( v85 < 0 )
        goto LABEL_133;
      goto LABEL_94;
    }
    if ( v29 != 2 || v27 != 1 )
      goto LABEL_82;
    v107 = v30;
    if ( v28 + 1 < v28 )
    {
      v77 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_117:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x151u);
      goto LABEL_137;
    }
    if ( v28 + 1 > (unsigned int)v117 )
    {
      v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v115, 0x14u, 1, &v106);
      v77 = v76;
      if ( v76 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0xC0u);
      v7 = v77;
      if ( v77 < 0 )
        goto LABEL_117;
    }
    else
    {
      v74 = v115[0];
      v75 = 5LL * v28;
      *(struct D2D_VECTOR_4F *)((char *)v115[0] + 4 * v75) = v21;
      v74[v75 + 4] = v107;
      HIDWORD(v117) = v28 + 1;
    }
    v67 = HIDWORD(v134);
    v107 = 0;
    v68 = HIDWORD(v134) + 1;
    if ( (unsigned int)(HIDWORD(v134) + 1) < HIDWORD(v134) )
    {
      v79 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_115:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0x154u);
      goto LABEL_137;
    }
    v7 = 0;
    if ( v68 <= (unsigned int)v134 )
    {
LABEL_62:
      v69 = v132[0];
      v70 = 5 * v67;
      *(__m128i *)((char *)v132[0] + 20 * v67) = v106;
      v71 = v107;
LABEL_63:
      v69[v70 + 4] = v71;
      HIDWORD(v134) = v68;
      goto LABEL_94;
    }
    v78 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v132, 0x14u, 1, &v106);
    v79 = v78;
    if ( v78 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0xC0u);
    v7 = v79;
    if ( v79 < 0 )
      goto LABEL_115;
LABEL_94:
    v21 = v26;
    v20 = v109;
    v22 = (unsigned int)(HIDWORD(v94) + 1);
    v86 = (unsigned int)v94;
    v94 = __PAIR64__(v22, HIDWORD(v98[0]));
    *(struct D2D_VECTOR_4F *)&v98[1] = v108;
    LODWORD(v99) = v109;
    v108 = v26;
    v109 = v98[0];
  }
  while ( (unsigned int)v22 < *((_DWORD *)a2 + 10) );
  if ( v10 )
  {
    if ( !v11 )
    {
      *(_DWORD *)a3 = 1;
      goto LABEL_137;
    }
  }
  else if ( !v11 )
  {
    goto LABEL_136;
  }
  if ( v10 )
  {
    *(_DWORD *)a3 = 3;
    v87 = CPolygon::Create(v115, a2, &v96, v86);
    v7 = v87;
    if ( v87 >= 0 )
    {
      v90 = CPolygon::Create(v132, a2, &v97, v88);
      v7 = v90;
      if ( v90 >= 0 )
      {
        v89 = 0LL;
        *v100 = v96;
        *v101 = v97;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x17Cu);
        v89 = v96;
        v13 = v97;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0x17Bu);
      v89 = v96;
    }
    if ( v89 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v89 + 8LL))(v89);
    if ( v13 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  else
  {
    *(_DWORD *)a3 = 2;
  }
LABEL_137:
  DynArrayImpl<1>::~DynArrayImpl<1>(v132);
  DynArrayImpl<1>::~DynArrayImpl<1>(v115);
  return v7;
}
