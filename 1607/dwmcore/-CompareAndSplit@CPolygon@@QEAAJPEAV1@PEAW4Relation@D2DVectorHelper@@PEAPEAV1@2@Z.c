/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18015384C
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180199750 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180110B1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x1801537F0 (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x180154530 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180154E7C (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x180162134 (-GetTranspose@CMILMatrix@@QEBA-AV1@XZ.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x180188B84 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // ebx
  __int128 v11; // xmm0
  int v12; // r12d
  __int128 v13; // xmm1
  int v14; // r15d
  int v15; // eax
  struct CPolygon *v16; // r14
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // r9d
  __int64 Transpose; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rdx
  int v26; // r8d
  __int128 v27; // xmm0
  int v28; // edi
  struct D2D_VECTOR_4F v29; // xmm6
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rax
  struct D2D_VECTOR_4F v34; // xmm7
  int v35; // eax
  int v36; // r8d
  unsigned int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  __m128i v40; // xmm0
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  unsigned int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // eax
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // eax
  __m128i v55; // xmm0
  unsigned int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // rdx
  int v59; // eax
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  unsigned int v64; // r8d
  __int64 v65; // rcx
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  unsigned int v72; // r8d
  __int64 v73; // rcx
  __int64 v74; // rdx
  int v75; // eax
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdx
  int v79; // eax
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int64 v86; // r9
  int v87; // eax
  struct D2D_VECTOR_4F *v89; // [rsp+28h] [rbp-E0h]
  unsigned int v90; // [rsp+28h] [rbp-E0h]
  unsigned int v91; // [rsp+30h] [rbp-D8h]
  int v92; // [rsp+3Ch] [rbp-CCh]
  int v93; // [rsp+44h] [rbp-C4h]
  struct CPolygon *v94; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v95[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+68h] [rbp-A0h]
  struct CPolygon **v97; // [rsp+70h] [rbp-98h]
  struct CPolygon **v98; // [rsp+78h] [rbp-90h]
  __int128 v99; // [rsp+88h] [rbp-80h] BYREF
  __int128 v100; // [rsp+98h] [rbp-70h]
  __int128 v101; // [rsp+A8h] [rbp-60h]
  __int128 v102; // [rsp+B8h] [rbp-50h]
  int v103; // [rsp+C8h] [rbp-40h]
  struct D2D_VECTOR_4F v104; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v105; // [rsp+E8h] [rbp-20h]
  __int128 v106; // [rsp+F8h] [rbp-10h]
  __int128 v107; // [rsp+108h] [rbp+0h]
  int v108; // [rsp+118h] [rbp+10h]
  struct D2D_VECTOR_4F v109; // [rsp+128h] [rbp+20h] BYREF
  int v110; // [rsp+138h] [rbp+30h]
  char v111[16]; // [rsp+140h] [rbp+38h] BYREF
  char v112[72]; // [rsp+150h] [rbp+48h] BYREF
  D2D_VECTOR_4F v113; // [rsp+198h] [rbp+90h] BYREF
  __m128i v114; // [rsp+1A8h] [rbp+A0h] BYREF
  int v115; // [rsp+1B8h] [rbp+B0h]
  struct D2D_VECTOR_4F v116; // [rsp+1C0h] [rbp+B8h] BYREF
  int v117; // [rsp+1D0h] [rbp+C8h]
  D2D_VECTOR_4F v118; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v119[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v120; // [rsp+1F8h] [rbp+F0h]
  __int64 v121; // [rsp+1FCh] [rbp+F4h]
  _BYTE v122[128]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v123[2]; // [rsp+288h] [rbp+180h] BYREF
  int v124; // [rsp+298h] [rbp+190h]
  __int64 v125; // [rsp+29Ch] [rbp+194h]
  _BYTE v126[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v97 = a4;
  v119[0] = v122;
  v98 = a5;
  *a4 = 0LL;
  *a5 = 0LL;
  v8 = *((_OWORD *)a2 + 9);
  v119[1] = v122;
  v9 = *((_OWORD *)a2 + 10);
  v120 = 6;
  v99 = v8;
  v10 = 0;
  v11 = *((_OWORD *)a2 + 11);
  v123[0] = v126;
  v12 = 0;
  v100 = v9;
  v13 = *((_OWORD *)a2 + 12);
  v123[1] = v126;
  v14 = 0;
  v15 = *((_DWORD *)a2 + 52);
  v121 = 6LL;
  v16 = 0LL;
  v124 = 6;
  v125 = 6LL;
  v101 = v11;
  v102 = v13;
  v103 = v15;
  v108 = 0;
  v95[0] = 0LL;
  v94 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v99, (__int64)a2, 0LL) )
  {
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v99, (struct CMILMatrix *)&v99);
  }
  else
  {
    v99 = _xmm;
    LOWORD(v103) = 32085;
    v100 = _xmm;
    v101 = _xmm;
    v102 = _xmm;
  }
  if ( CMILMatrix::Invert((CMILMatrix *)&v99, v17, v18) )
  {
    Transpose = CMILMatrix::GetTranspose(&v99, v112);
    v20 = HIDWORD(v121);
    v22 = *(_OWORD *)(Transpose + 16);
    v104 = *(struct D2D_VECTOR_4F *)Transpose;
    v23 = *(_OWORD *)(Transpose + 32);
    v105 = v22;
    v24 = *(_OWORD *)(Transpose + 48);
    LODWORD(Transpose) = *(_DWORD *)(Transpose + 64);
    v106 = v23;
    v107 = v24;
    v108 = Transpose;
  }
  else
  {
    v104 = (struct D2D_VECTOR_4F)_xmm;
    LOWORD(v108) = 32085;
    v105 = _xmm;
    v106 = _xmm;
    v107 = _xmm;
  }
  v113 = (D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v118 = v113;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v113,
    v19,
    (const struct D2DVector4 *)&v118,
    v20,
    (const struct D2DMatrix *)&v104,
    v91);
  v25 = *((_QWORD *)a2 + 2);
  v26 = *((_DWORD *)a2 + 10);
  v118 = v113;
  v27 = *(_OWORD *)(v25 + 20LL * (unsigned int)(v26 - 2));
  v28 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 2) + 16);
  LODWORD(v96) = v28;
  *(_OWORD *)&v95[1] = v27;
  v116 = *(struct D2D_VECTOR_4F *)(v25 + 20LL * (unsigned int)(v26 - 1));
  v29 = v116;
  v117 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v113.x, (float *)&v95[1]);
  D2DVectorHelper::ClassifyPoint(&v113.x, &v116.x);
  v30 = 0LL;
  v92 = 0;
  if ( !v31 )
  {
LABEL_137:
    *(_DWORD *)a3 = 0;
    goto LABEL_138;
  }
  do
  {
    v32 = 5 * v30;
    v33 = *((_QWORD *)a2 + 2);
    v93 = *(_DWORD *)(v33 + 4 * v32 + 16);
    v34 = *(struct D2D_VECTOR_4F *)(v33 + 4 * v32);
    v110 = v93;
    v109 = v34;
    v35 = D2DVectorHelper::ClassifyPoint(&v113.x, &v109.x);
    if ( v36 == 1 )
    {
      if ( v38 != 2 )
      {
LABEL_25:
        v49 = v37 + 1;
        if ( v37 + 1 >= v37 )
        {
          v10 = 0;
          if ( v49 <= (unsigned int)v121 )
          {
            v50 = v119[0];
            v51 = v37;
            v52 = v49;
            v53 = 5 * v51;
            *(struct D2D_VECTOR_4F *)(v119[0] + 4 * v53) = v29;
            *(_DWORD *)(v50 + 4 * v53 + 16) = v117;
            HIDWORD(v121) = v49;
LABEL_33:
            ++v12;
            goto LABEL_108;
          }
          v54 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v119, 0x14u, 1, &v116);
          v10 = v54;
          if ( v54 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xC0u);
        }
        else
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v10 >= 0 )
        {
          v52 = HIDWORD(v121);
          goto LABEL_33;
        }
        v90 = 295;
LABEL_113:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v90);
        goto LABEL_138;
      }
      v40 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)&v118,
                                               &v113,
                                               (const struct D2D_VECTOR_4F *)&v95[1],
                                               &v116,
                                               v89));
      v115 = v28;
      v114 = v40;
      v41 = HIDWORD(v121) + 1;
      if ( (unsigned int)(HIDWORD(v121) + 1) >= HIDWORD(v121) )
      {
        if ( v41 <= (unsigned int)v121 )
        {
          v42 = v119[0];
          v43 = 5LL * HIDWORD(v121);
          *(__m128i *)(v119[0] + 4 * v43) = v40;
          *(_DWORD *)(v42 + 4 * v43 + 16) = v115;
          HIDWORD(v121) = v41;
          goto LABEL_17;
        }
        v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v119, 0x14u, 1, &v114);
        v10 = v44;
        if ( v44 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xC0u);
      }
      else
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v10 < 0 )
      {
        v90 = 287;
        goto LABEL_113;
      }
LABEL_17:
      v115 = 0;
      v45 = HIDWORD(v125) + 1;
      if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
      {
        if ( v45 <= (unsigned int)v125 )
        {
          v46 = v123[0];
          v47 = 5LL * HIDWORD(v125);
          *(__m128i *)(v123[0] + 4 * v47) = v114;
          *(_DWORD *)(v46 + 4 * v47 + 16) = v115;
          HIDWORD(v125) = v45;
LABEL_24:
          v29 = v116;
          v37 = HIDWORD(v121);
          goto LABEL_25;
        }
        v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v123, 0x14u, 1, &v114);
        v10 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xC0u);
      }
      else
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v10 < 0 )
      {
        v90 = 290;
        goto LABEL_113;
      }
      goto LABEL_24;
    }
    if ( v36 == 2 )
    {
      if ( v38 != 1 )
        goto LABEL_51;
      v55 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)v111,
                                               &v113,
                                               (const struct D2D_VECTOR_4F *)&v95[1],
                                               &v116,
                                               v89));
      v115 = 0;
      v114 = v55;
      v56 = HIDWORD(v121) + 1;
      if ( (unsigned int)(HIDWORD(v121) + 1) >= HIDWORD(v121) )
      {
        if ( v56 <= (unsigned int)v121 )
        {
          v57 = v119[0];
          v58 = 5LL * HIDWORD(v121);
          *(__m128i *)(v119[0] + 4 * v58) = v55;
          *(_DWORD *)(v57 + 4 * v58 + 16) = v115;
          HIDWORD(v121) = v56;
          goto LABEL_43;
        }
        v59 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v119, 0x14u, 1, &v114);
        v10 = v59;
        if ( v59 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xC0u);
      }
      else
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v10 < 0 )
      {
        v90 = 312;
        goto LABEL_113;
      }
LABEL_43:
      v115 = v28;
      v60 = HIDWORD(v125) + 1;
      if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
      {
        if ( v60 <= (unsigned int)v125 )
        {
          v61 = v123[0];
          v62 = 5LL * HIDWORD(v125);
          *(__m128i *)(v123[0] + 4 * v62) = v114;
          *(_DWORD *)(v61 + 4 * v62 + 16) = v115;
          HIDWORD(v125) = v60;
LABEL_50:
          v29 = v116;
LABEL_51:
          v64 = HIDWORD(v125) + 1;
          if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
          {
            v10 = 0;
            if ( v64 <= (unsigned int)v125 )
            {
              v65 = v123[0];
              v66 = 5LL * HIDWORD(v125);
              *(struct D2D_VECTOR_4F *)(v123[0] + 4 * v66) = v29;
              *(_DWORD *)(v65 + 4 * v66 + 16) = v117;
              HIDWORD(v125) = v64;
LABEL_58:
              ++v14;
              goto LABEL_107;
            }
            v67 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v123, 0x14u, 1, &v116);
            v10 = v67;
            if ( v67 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0xC0u);
          }
          else
          {
            v10 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          if ( v10 < 0 )
          {
            v90 = 321;
            goto LABEL_113;
          }
          goto LABEL_58;
        }
        v63 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v123, 0x14u, 1, &v114);
        v10 = v63;
        if ( v63 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0xC0u);
      }
      else
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v10 < 0 )
      {
        v90 = 315;
        goto LABEL_113;
      }
      goto LABEL_50;
    }
    v114 = (__m128i)v29;
    if ( v38 != 1 )
    {
      if ( v38 == 2 && v35 == 1 )
      {
        v115 = v39;
        if ( v37 + 1 >= v37 )
        {
          if ( v37 + 1 <= (unsigned int)v121 )
          {
            v77 = v119[0];
            v78 = 5LL * v37;
            *(struct D2D_VECTOR_4F *)(v119[0] + 4 * v78) = v29;
            *(_DWORD *)(v77 + 4 * v78 + 16) = v115;
            HIDWORD(v121) = v37 + 1;
LABEL_86:
            v71 = HIDWORD(v125);
            v115 = 0;
            v72 = HIDWORD(v125) + 1;
            if ( (unsigned int)(HIDWORD(v125) + 1) < HIDWORD(v125) )
            {
              v10 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              goto LABEL_91;
            }
            v10 = 0;
            if ( v72 > (unsigned int)v125 )
            {
              v80 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v123, 0x14u, 1, &v114);
              v10 = v80;
              if ( v80 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0xC0u);
LABEL_91:
              if ( v10 < 0 )
              {
                v90 = 353;
                goto LABEL_113;
              }
              goto LABEL_107;
            }
LABEL_71:
            v73 = v123[0];
            v74 = 5 * v71;
            *(__m128i *)(v123[0] + 20 * v71) = v114;
            v75 = v115;
LABEL_72:
            *(_DWORD *)(v73 + 4 * v74 + 16) = v75;
            HIDWORD(v125) = v72;
            goto LABEL_107;
          }
          v79 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v119, 0x14u, 1, &v114);
          v10 = v79;
          if ( v79 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0xC0u);
        }
        else
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v10 < 0 )
        {
          v90 = 350;
          goto LABEL_113;
        }
        goto LABEL_86;
      }
LABEL_93:
      if ( v37 + 1 >= v37 )
      {
        if ( v37 + 1 <= (unsigned int)v121 )
        {
          v81 = v119[0];
          v82 = 5LL * v37;
          *(struct D2D_VECTOR_4F *)(v119[0] + 4 * v82) = v29;
          *(_DWORD *)(v81 + 4 * v82 + 16) = v117;
          HIDWORD(v121) = v37 + 1;
          goto LABEL_100;
        }
        v83 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v119, 0x14u, 1, &v116);
        v10 = v83;
        if ( v83 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0xC0u);
      }
      else
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v10 < 0 )
      {
        v90 = 357;
        goto LABEL_113;
      }
LABEL_100:
      v72 = HIDWORD(v125) + 1;
      if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
      {
        v10 = 0;
        if ( v72 <= (unsigned int)v125 )
        {
          v73 = v123[0];
          v74 = 5LL * HIDWORD(v125);
          *(struct D2D_VECTOR_4F *)(v123[0] + 20LL * HIDWORD(v125)) = v116;
          v75 = v117;
          goto LABEL_72;
        }
        v84 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v123, 0x14u, 1, &v116);
        v10 = v84;
        if ( v84 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0xC0u);
      }
      else
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v10 < 0 )
      {
        v90 = 358;
        goto LABEL_113;
      }
      goto LABEL_107;
    }
    if ( v35 != 2 )
      goto LABEL_93;
    v115 = 0;
    if ( v37 + 1 < v37 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_67;
    }
    if ( v37 + 1 > (unsigned int)v121 )
    {
      v70 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v119, 0x14u, 1, &v114);
      v10 = v70;
      if ( v70 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0xC0u);
LABEL_67:
      if ( v10 < 0 )
      {
        v90 = 339;
        goto LABEL_113;
      }
      goto LABEL_68;
    }
    v68 = v119[0];
    v69 = 5LL * v37;
    *(struct D2D_VECTOR_4F *)(v119[0] + 4 * v69) = v29;
    *(_DWORD *)(v68 + 4 * v69 + 16) = v115;
    HIDWORD(v121) = v37 + 1;
LABEL_68:
    v115 = v117;
    v71 = HIDWORD(v125);
    v72 = HIDWORD(v125) + 1;
    if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
    {
      v10 = 0;
      if ( v72 <= (unsigned int)v125 )
        goto LABEL_71;
      v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v123, 0x14u, 1, &v114);
      v10 = v76;
      if ( v76 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0xC0u);
    }
    else
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v10 < 0 )
    {
      v90 = 342;
      goto LABEL_113;
    }
LABEL_107:
    v52 = HIDWORD(v121);
LABEL_108:
    v29 = v34;
    v28 = v117;
    v30 = (unsigned int)(v92 + 1);
    *(struct D2D_VECTOR_4F *)&v95[1] = v116;
    LODWORD(v96) = v117;
    v116 = v34;
    v117 = v93;
    v92 = v30;
  }
  while ( (unsigned int)v30 < *((_DWORD *)a2 + 10) );
  if ( !v12 )
  {
    if ( v14 )
      goto LABEL_122;
    goto LABEL_137;
  }
  if ( !v14 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_138;
  }
LABEL_122:
  if ( v12 )
  {
    *(_DWORD *)a3 = 3;
    v85 = CPolygon::Create(v119, a2, v95, v52);
    v10 = v85;
    if ( v85 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0x188u);
    }
    else
    {
      v87 = CPolygon::Create(v123, a2, &v94, v86);
      v10 = v87;
      if ( v87 >= 0 )
      {
        *v97 = (struct CPolygon *)v95[0];
        *v98 = v94;
        goto LABEL_138;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0x189u);
      v16 = v94;
    }
    if ( v95[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v95[0] + 8LL))(v95[0]);
    if ( v16 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  else
  {
    *(_DWORD *)a3 = 2;
  }
LABEL_138:
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v123);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v119);
  return (unsigned int)v10;
}
