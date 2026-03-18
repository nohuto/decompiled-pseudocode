/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x1800917B8 (-LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z.c)
 *     ?MergeRectangleMeshSplits@Mesh@@AEAAXMMMPEAV?$ArrayRef@M@@@Z @ 0x180092000 (-MergeRectangleMeshSplits@Mesh@@AEAAXMMMPEAV-$ArrayRef@M@@@Z.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800920C8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800AD500 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800B0D94 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800B0FE0 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800B101C (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800B1058 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180133910 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?FindRectIndices@Mesh@@AEAA_NAEBUD2D_RECT_F@@V?$ArrayRef@M@@1PEAH222@Z @ 0x180135148 (-FindRectIndices@Mesh@@AEAA_NAEBUD2D_RECT_F@@V-$ArrayRef@M@@1PEAH222@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18013528C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeTexPositions@CoordMap@@QEAAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180135BAC (-ComputeTexPositions@CoordMap@@QEAAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180136008 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@@Z @ 0x18013605C (-GetAllPositions@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@AEAV-$DynArray@M$0A@@@.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  const struct D2D_RECT_F *v4; // r14
  __int64 v7; // r15
  _DWORD *v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // ecx
  float *v13; // rax
  float v14; // xmm1_4
  __m128 right_low; // xmm0
  __m128 top_low; // xmm1
  char *v17; // rcx
  __int64 v18; // r8
  int v19; // edi
  CoordMap *v20; // rcx
  int AllPositions; // eax
  float right; // xmm3_4
  float left; // xmm2_4
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // r12d
  __int64 v31; // r9
  unsigned int v32; // r8d
  unsigned int v33; // edx
  __int128 v34; // xmm2
  __int64 v35; // rcx
  __m128 v36; // xmm0
  __m128 v37; // xmm1
  __int64 v38; // rax
  __int64 v39; // rcx
  bool v40; // cc
  int v41; // esi
  _DWORD *v42; // r12
  __int64 v43; // r10
  _BYTE *v44; // rdi
  _BYTE *v45; // rdx
  int v46; // r11d
  unsigned int v47; // r8d
  _BYTE *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rax
  _BYTE *v51; // rdx
  _BYTE *v52; // rdx
  unsigned int v53; // esi
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  _DWORD *v62; // rax
  int v63; // eax
  int AllHollowRects; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned int v67; // esi
  unsigned int v68; // r15d
  int v69; // edi
  FLOAT *v70; // rax
  int v71; // r10d
  int v72; // r11d
  __int64 v73; // rcx
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r8
  unsigned int v81; // [rsp+20h] [rbp-E0h]
  char v82; // [rsp+40h] [rbp-C0h]
  int v83; // [rsp+44h] [rbp-BCh] BYREF
  int v84; // [rsp+48h] [rbp-B8h] BYREF
  int v85; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE *v86; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_RECT_F v87; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v88; // [rsp+68h] [rbp-98h]
  const struct D2D_RECT_F *v89; // [rsp+70h] [rbp-90h]
  _BYTE *v90; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v91; // [rsp+80h] [rbp-80h]
  _BYTE *v92; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v93; // [rsp+90h] [rbp-70h]
  _BYTE *v94; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v95; // [rsp+A0h] [rbp-60h]
  _BYTE *v96; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v97; // [rsp+B0h] [rbp-50h]
  _BYTE *v98; // [rsp+B8h] [rbp-48h] BYREF
  int v99; // [rsp+C0h] [rbp-40h]
  _BYTE *v100; // [rsp+C8h] [rbp-38h] BYREF
  int v101; // [rsp+D0h] [rbp-30h]
  _BYTE *v102; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v103; // [rsp+E8h] [rbp-18h]
  int v104; // [rsp+F0h] [rbp-10h]
  __int64 v105; // [rsp+F4h] [rbp-Ch]
  _BYTE v106[48]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *v107; // [rsp+130h] [rbp+30h] BYREF
  _BYTE *v108; // [rsp+138h] [rbp+38h]
  int v109; // [rsp+140h] [rbp+40h]
  __int64 v110; // [rsp+144h] [rbp+44h]
  _BYTE v111[48]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v112; // [rsp+180h] [rbp+80h] BYREF
  _BYTE *v113; // [rsp+188h] [rbp+88h]
  int v114; // [rsp+190h] [rbp+90h]
  __int64 v115; // [rsp+194h] [rbp+94h]
  _BYTE v116[48]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE *v117; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE *v118; // [rsp+1D8h] [rbp+D8h]
  int v119; // [rsp+1E0h] [rbp+E0h]
  __int64 v120; // [rsp+1E4h] [rbp+E4h]
  _BYTE v121[48]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v122[2]; // [rsp+220h] [rbp+120h] BYREF
  int v123; // [rsp+230h] [rbp+130h]
  __int64 v124; // [rsp+234h] [rbp+134h]
  _BYTE v125[48]; // [rsp+240h] [rbp+140h] BYREF

  v4 = a3;
  v88 = a4;
  v89 = a3;
  v7 = 0LL;
  while ( 1 )
  {
    v82 = 1;
    if ( (*((_BYTE *)this + 192) & 4) != 0 )
    {
      v55 = Mesh::GrowPreallocatedGraphObjects(this);
      v19 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x36u);
        goto LABEL_14;
      }
      *((_DWORD *)this + 48) &= ~4u;
    }
    *((_QWORD *)this + 3) = 0LL;
    v8 = (_DWORD *)((char *)this + 104);
    *((_DWORD *)this + 3) = 0;
    v9 = 0;
    *((_DWORD *)this + 12) = 0;
    do
    {
      ++v9;
      *v8 = 0;
      v8 += 14;
    }
    while ( (unsigned __int64)v9 < 2 );
    v10 = *((_QWORD *)this + 2);
    *(_QWORD *)((char *)this + 164) = 0LL;
    *((_DWORD *)this + 43) = 0;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 64) = 0LL;
      *(_DWORD *)(v10 + 32) = 0;
      *(_DWORD *)(v10 + 56) = 0;
      *(_QWORD *)(v10 + 88) = 0LL;
      *(_QWORD *)(v10 + 96) = 0LL;
      *(_DWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 128) = 0;
    }
    v11 = 0;
    v12 = *((_DWORD *)this + 48) & 0xFFFFFF04 | 1;
    *((_DWORD *)this + 48) = v12;
    *((_DWORD *)this + 48) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*((_BYTE *)a2 + 16) << 7)) & 0x80;
    v13 = (float *)*((_QWORD *)this + 2);
    v14 = fmaxf(fmaxf(v4->right - v4->left, v4->bottom - v4->top), 1.0) * 0.0000099999997;
    *v13 = v14;
    v13[1] = v14 * 2.0;
    v13[2] = v14 * v14;
    right_low = (__m128)LODWORD(v4->right);
    top_low = (__m128)LODWORD(v4->top);
    right_low.m128_f32[0] = (float)(right_low.m128_f32[0] + v4->left) * 0.5;
    top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v4->bottom) * 0.5;
    *((_QWORD *)this + 5) = _mm_unpacklo_ps(right_low, top_low).m128_u64[0];
    *((_DWORD *)this + 12) = *((_DWORD *)a2 + 33);
    if ( *((int *)a2 + 33) > 0 )
    {
      v17 = (char *)a2 + 20;
      v18 = this - a2;
      do
      {
        if ( (unsigned __int64)v11 >= 2 )
          break;
        if ( *((_DWORD *)v17 + 13) )
        {
          *(_OWORD *)&v17[v18 + 32] = *(_OWORD *)v17;
          *(_OWORD *)&v17[v18 + 48] = *((_OWORD *)v17 + 1);
          *(_OWORD *)&v17[v18 + 64] = *((_OWORD *)v17 + 2);
          *(_QWORD *)&v17[v18 + 80] = *((_QWORD *)v17 + 6);
        }
        ++v11;
        v17 += 56;
      }
      while ( v11 < *((_DWORD *)a2 + 33) );
    }
    v19 = 0;
LABEL_14:
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xBAu);
      goto LABEL_64;
    }
    v20 = (CoordMap *)*((_QWORD *)a2 + 17);
    v107 = v111;
    v108 = v111;
    v102 = v106;
    v103 = v106;
    v109 = 10;
    v110 = 10LL;
    v104 = 10;
    v105 = 10LL;
    if ( !v20 || CoordMap::IsEmpty(v20) )
    {
      AllPositions = DynArray<float,0>::AddMultipleAndSet(&v107, v4, 1LL);
      v19 = AllPositions;
      if ( AllPositions < 0 )
      {
        v81 = 200;
        goto LABEL_113;
      }
      AllPositions = DynArray<float,0>::AddMultipleAndSet(&v107, &v4->right, 1LL);
      v19 = AllPositions;
      if ( AllPositions < 0 )
      {
        v81 = 201;
        goto LABEL_113;
      }
      AllPositions = DynArray<float,0>::AddMultipleAndSet(&v102, &v4->top, 1LL);
      v19 = AllPositions;
      if ( AllPositions < 0 )
      {
        v81 = 202;
        goto LABEL_113;
      }
      AllPositions = DynArray<float,0>::AddMultipleAndSet(&v102, &v4->bottom, 1LL);
      v19 = AllPositions;
      if ( AllPositions < 0 )
      {
        v81 = 203;
        goto LABEL_113;
      }
    }
    else
    {
      AllPositions = CoordMap::GetAllPositions(v58, v58, &v107);
      v19 = AllPositions;
      if ( AllPositions < 0 )
      {
        v81 = 208;
        goto LABEL_113;
      }
      AllPositions = CoordMap::GetAllPositions(v59, *((_QWORD *)a2 + 17) + 192LL, &v102);
      v19 = AllPositions;
      if ( AllPositions < 0 )
      {
        v81 = 209;
LABEL_113:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AllPositions, v81);
        goto LABEL_63;
      }
    }
    right = v4->right;
    left = v4->left;
    v91 = HIDWORD(v110);
    v90 = v107;
    v93 = HIDWORD(v105);
    v92 = v102;
    Mesh::MergeRectangleMeshSplits((__int64)&v90, *(float *)(*((_QWORD *)this + 2) + 4LL), left, right, (__int64)&v90);
    Mesh::MergeRectangleMeshSplits(
      (__int64)&v92,
      *(float *)(*((_QWORD *)this + 2) + 4LL),
      v4->top,
      v4->bottom,
      (__int64)&v92);
    v26 = v91;
    v27 = v93;
    HIDWORD(v110) = v91;
    HIDWORD(v105) = v93;
    if ( v91 < 2 || v93 < 2 )
    {
      v19 = 1;
LABEL_63:
      DynArrayImpl<1>::~DynArrayImpl<1>(&v102, v24, v25);
      DynArrayImpl<1>::~DynArrayImpl<1>(&v107, v56, v57);
LABEL_64:
      *((_DWORD *)this + 48) &= ~1u;
      return (unsigned int)v19;
    }
    if ( v93 > 0x19 || v91 > 0x19 )
    {
      v19 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xE8u);
      goto LABEL_63;
    }
    v28 = *((unsigned int *)this + 2);
    v29 = v91 * v93;
    if ( (unsigned int)v29 > (unsigned int)v28 )
    {
      *((_DWORD *)this + 48) |= 4u;
      goto LABEL_71;
    }
    v30 = *((_DWORD *)this + 3);
    v83 = v30;
    if ( (int)(v29 + v30) > (int)v28 )
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFBu);
      goto LABEL_63;
    }
    *((_DWORD *)this + 3) = v29 + v30;
    v31 = v30;
    v32 = 0;
    do
    {
      v33 = 0;
      if ( v26 )
      {
        do
        {
          v34 = *(_OWORD *)a2;
          v35 = v33++;
          v36 = (__m128)*(unsigned int *)&v107[4 * v35];
          v36.m128_f32[0] = v36.m128_f32[0] - *((float *)this + 10);
          v37 = (__m128)*(unsigned int *)&v102[4 * v32];
          v37.m128_f32[0] = v37.m128_f32[0] - *((float *)this + 11);
          v38 = (int)v31;
          v31 = (unsigned int)(v31 + 1);
          v39 = 5 * v38;
          *(_QWORD *)(*(_QWORD *)this + 8 * v39) = _mm_unpacklo_ps(v36, v37).m128_u64[0];
          *(_OWORD *)(*(_QWORD *)this + 8 * v39 + 8) = v34;
          v26 = HIDWORD(v110);
        }
        while ( v33 < HIDWORD(v110) );
        v27 = HIDWORD(v105);
      }
      ++v32;
    }
    while ( v32 < v27 );
    v40 = *((_DWORD *)this + 12) <= 0;
    v117 = v121;
    v41 = 0;
    v119 = 10;
    v118 = v121;
    v112 = v116;
    v113 = v116;
    v120 = 10LL;
    v114 = 10;
    v115 = 10LL;
    if ( !v40 )
    {
      v42 = (_DWORD *)((char *)this + 104);
      while ( 1 )
      {
        if ( *v42 )
        {
          v43 = *((_QWORD *)a2 + 17);
          if ( v43 )
          {
            v95 = v27;
            v94 = v102;
            v96 = v107;
            v62 = (_DWORD *)*((_QWORD *)this + 2);
            v97 = v26;
            v63 = CoordMap::ComputeTexPositions(
                    v43,
                    v41,
                    (unsigned int)&v96,
                    (unsigned int)&v94,
                    (__int64)&v117,
                    (__int64)&v112,
                    *v62);
            v19 = v63;
            if ( v63 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x11Au);
              goto LABEL_105;
            }
            v44 = v117;
            v45 = v112;
            v26 = HIDWORD(v110);
            v27 = HIDWORD(v105);
          }
          else
          {
            v44 = v107;
            v45 = v102;
          }
          v46 = v83;
          v47 = 0;
          v86 = v45;
          if ( v27 )
          {
            v48 = v45;
            do
            {
              v31 = 0LL;
              if ( v26 )
              {
                do
                {
                  v49 = v46++;
                  v50 = (int)v31;
                  v31 = (unsigned int)(v31 + 1);
                  *(_QWORD *)(*(_QWORD *)this + 8 * (v7 + 4 * v49 + v49) + 24) = _mm_unpacklo_ps(
                                                                                   (__m128)*(unsigned int *)&v44[4 * v50],
                                                                                   (__m128)*(unsigned int *)&v48[4 * v47]).m128_u64[0];
                  v26 = HIDWORD(v110);
                }
                while ( (unsigned int)v31 < HIDWORD(v110) );
                v27 = HIDWORD(v105);
              }
              ++v47;
            }
            while ( v47 < v27 );
            v4 = v89;
          }
        }
        ++v41;
        ++v7;
        v42 += 14;
        if ( v41 >= *((_DWORD *)this + 12) )
        {
          v30 = v83;
          break;
        }
      }
    }
    v28 = *((_QWORD *)a2 + 17);
    if ( v28 )
    {
      v123 = 3;
      v122[0] = v125;
      v124 = 3LL;
      v122[1] = v125;
      AllHollowRects = CoordMap::GetAllHollowRects(v28, v122);
      v19 = AllHollowRects;
      if ( AllHollowRects < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AllHollowRects, 0x133u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v122, v77, v78);
LABEL_105:
        DynArrayImpl<1>::~DynArrayImpl<1>(&v112, v75, v76);
        DynArrayImpl<1>::~DynArrayImpl<1>(&v117, v79, v80);
        goto LABEL_63;
      }
      v67 = HIDWORD(v124);
      v68 = 0;
      if ( HIDWORD(v124) )
      {
        v69 = HIDWORD(v110);
        do
        {
          v70 = (FLOAT *)(v122[0] + 16LL * v68);
          if ( *v70 < v4->left )
            v87.left = v4->left;
          else
            v87.left = *v70;
          if ( v70[1] < v4->top )
            v87.top = v4->top;
          else
            v87.top = v70[1];
          if ( v4->right < v70[2] )
            v87.right = v4->right;
          else
            v87.right = v70[2];
          if ( v4->bottom < v70[3] )
            v87.bottom = v4->bottom;
          else
            v87.bottom = v70[3];
          if ( !IsEmpty(&v87) )
          {
            v99 = HIDWORD(v105);
            v98 = v102;
            v100 = v107;
            v85 = -1;
            LODWORD(v86) = -1;
            v83 = -1;
            v84 = -1;
            v101 = v69;
            if ( (unsigned __int8)Mesh::FindRectIndices(
                                    (_DWORD)this,
                                    (unsigned int)&v87,
                                    (unsigned int)&v100,
                                    (unsigned int)&v98,
                                    (__int64)&v85,
                                    (__int64)&v83,
                                    (__int64)&v86,
                                    (__int64)&v84) )
            {
              v65 = (unsigned int)v83;
              v71 = v84;
              v82 = 0;
              if ( v83 <= v84 )
              {
                v66 = v85;
                v72 = (int)v86;
                do
                {
                  if ( (int)v66 <= v72 )
                  {
                    v73 = 40 * (v66 + (int)(v30 + v65 * v69));
                    v74 = (unsigned int)(v72 - v66 + 1);
                    do
                    {
                      v73 += 40LL;
                      *(_OWORD *)(v73 + *(_QWORD *)this - 32) = 0LL;
                      --v74;
                    }
                    while ( v74 );
                    v69 = HIDWORD(v110);
                  }
                  v65 = (unsigned int)(v65 + 1);
                }
                while ( (int)v65 <= v71 );
                v67 = HIDWORD(v124);
              }
            }
          }
          ++v68;
        }
        while ( v68 < v67 );
      }
      DynArrayImpl<1>::~DynArrayImpl<1>(v122, v65, v66);
      v26 = HIDWORD(v110);
      v27 = HIDWORD(v105);
    }
    *((_DWORD *)this + 48) |= 0x22u;
    v51 = v112;
    *((_DWORD *)this + 42) = v26;
    *((_DWORD *)this + 41) = v27;
    if ( v51 == v113 )
    {
      v7 = 0LL;
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v51,
        v28,
        v31);
      v7 = 0LL;
      v112 = 0LL;
    }
    v52 = v117;
    if ( v117 != v118 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v117,
        v28,
        v31);
      v117 = 0LL;
    }
    v53 = v88;
    if ( v88 )
    {
      *((_DWORD *)this + 48) |= 0x40u;
      *((_DWORD *)this + 44) = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(v53, v52, v28, v31);
      *((_DWORD *)this + 45) = Mesh::ComputeAntialiasBorderFlags<3,1,2>(v53);
      *((_DWORD *)this + 46) = Mesh::ComputeAntialiasBorderFlags<768,256,512>(v53);
      *((_DWORD *)this + 47) = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(v53);
    }
    if ( !v82 )
      goto LABEL_55;
    AllPositions = Mesh::LookupCachedGridGraph(this, (struct Mesh::MeshGraph **)this + 3);
    v19 = AllPositions;
    if ( (*((_BYTE *)this + 192) & 4) == 0 )
      break;
LABEL_71:
    DynArrayImpl<1>::~DynArrayImpl<1>(&v102, v29, v28);
    DynArrayImpl<1>::~DynArrayImpl<1>(&v107, v60, v61);
  }
  if ( AllPositions < 0 )
  {
    v81 = 406;
    goto LABEL_113;
  }
LABEL_55:
  if ( v102 != v103 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v102,
      v28,
      v31);
    v102 = 0LL;
  }
  if ( v107 != v108 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *, _QWORD, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v107,
      *(_QWORD *)WPF::g_pProcessHeap,
      v31);
  return 0LL;
}
