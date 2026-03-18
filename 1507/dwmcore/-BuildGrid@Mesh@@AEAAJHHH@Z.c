/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180074ED8
 * Callers:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180009D48 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 *     ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x180074DB0 (-LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z.c)
 * Callees:
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180051DB8 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x18005C3B8 (-InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x18005CA8C (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x180070FFC (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x180071024 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x180071054 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x180071084 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall Mesh::BuildGrid(Mesh *this, __int64 a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r12
  float *v7; // r9
  int v8; // r15d
  __int64 v9; // rbx
  int v10; // eax
  float v11; // xmm5_4
  __int64 v12; // rsi
  float v13; // xmm2_4
  float v14; // xmm5_4
  __int64 v15; // rcx
  float v16; // xmm0_4
  float *v17; // r8
  float v18; // xmm1_4
  float v19; // xmm4_4
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm0_4
  float *v24; // r10
  float v25; // xmm1_4
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  __int64 v32; // r11
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  struct Mesh::MeshLine *v35; // r13
  __int64 v36; // r9
  _DWORD *v37; // r10
  unsigned __int64 v38; // xmm1_8
  __int128 v39; // xmm0
  __int64 v40; // r8
  char *v41; // xmm1_8
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int8 *v44; // r12
  __int64 v45; // r9
  struct Mesh::MeshLine *v46; // r15
  _DWORD *v47; // r10
  unsigned __int64 v48; // xmm1_8
  __int128 v49; // xmm0
  __int64 v50; // r8
  char *v51; // xmm1_8
  __int64 v52; // r8
  int v53; // r10d
  __int64 v54; // rdx
  __int64 v55; // r8
  struct Mesh::MeshLine *v56; // rax
  struct Mesh::MeshVertex *v57; // r13
  __int64 v58; // r8
  __int64 v59; // r9
  char *v60; // rbx
  float v61; // xmm0_4
  char *v62; // rcx
  struct Mesh::MeshEdge *v63; // xmm1_8
  int v64; // ecx
  int v65; // r9d
  __int64 v66; // rdx
  int v67; // r10d
  int v68; // r14d
  __int64 v69; // r8
  int v70; // r11d
  struct Mesh::MeshVertex *v71; // r10
  struct Mesh::MeshLine *v72; // rdx
  int v73; // r11d
  struct Mesh::MeshEdge *v74; // r8
  unsigned int v75; // eax
  struct Mesh::MeshEdge *v76; // rsi
  struct Mesh::MeshEdge *v77; // rdx
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v78)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbx
  struct Mesh::MeshEdge *v79; // r8
  struct Mesh::MeshLine *v80; // r8
  _DWORD *v81; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v82)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rdx
  struct Mesh::MeshEdge *v83; // rbx
  struct Mesh::MeshLine *v84; // rdx
  _DWORD *v85; // rax
  int v86; // r9d
  int v87; // r8d
  int v88; // eax
  __int64 *v89; // r8
  int v90; // edx
  char *v91; // r9
  char *v92; // rax
  __int64 v93; // rcx
  int v95; // eax
  char *v96; // rcx
  char *v97; // rcx
  char *v98; // rcx
  int v99; // [rsp+38h] [rbp-D0h]
  int v100; // [rsp+38h] [rbp-D0h]
  struct Mesh::MeshLine *v101; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+48h] [rbp-C0h]
  struct Mesh::MeshEdge *v103; // [rsp+50h] [rbp-B8h]
  struct D2D_VECTOR_2F v104; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v105; // [rsp+60h] [rbp-A8h]
  int v106; // [rsp+68h] [rbp-A0h]
  int v107; // [rsp+6Ch] [rbp-9Ch]
  int v108; // [rsp+70h] [rbp-98h]
  int v109; // [rsp+74h] [rbp-94h]
  int v110; // [rsp+78h] [rbp-90h]
  int v111; // [rsp+7Ch] [rbp-8Ch]
  struct Mesh::MeshVertex *v112; // [rsp+80h] [rbp-88h] BYREF
  struct Mesh::MeshLine *v113; // [rsp+88h] [rbp-80h] BYREF
  int v114; // [rsp+90h] [rbp-78h]
  int v115; // [rsp+94h] [rbp-74h]
  __int64 v116; // [rsp+98h] [rbp-70h]
  __int64 v117; // [rsp+A0h] [rbp-68h]
  __int64 v118; // [rsp+A8h] [rbp-60h]
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***v119)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // [rsp+B0h] [rbp-58h]
  struct Mesh::MeshEdge *v120; // [rsp+B8h] [rbp-50h] BYREF
  Mesh::MeshEdgeList *v121; // [rsp+C0h] [rbp-48h]
  __int128 v122; // [rsp+C8h] [rbp-40h] BYREF
  char *v123; // [rsp+D8h] [rbp-30h]
  char *v124; // [rsp+E0h] [rbp-28h]
  _DWORD v125[28]; // [rsp+E8h] [rbp-20h]
  float v126[28]; // [rsp+158h] [rbp+50h]

  v4 = *(_QWORD *)this;
  v5 = a4;
  v7 = (float *)*((_QWORD *)this + 2);
  v8 = 1;
  v9 = a3;
  v10 = 1;
  v11 = *(float *)(*(_QWORD *)this + 36LL);
  LODWORD(v102) = v5;
  v12 = a3;
  v13 = v7[1];
  v107 = 1;
  v14 = v11 - *((float *)this + 15);
  v15 = 1LL;
  *(float *)v125 = v14;
  v16 = v14 + v13;
  if ( a3 > 1LL )
  {
    v17 = (float *)((v5 << 6) + v4 + 36);
    do
    {
      v18 = *v17 - *((float *)this + 15);
      if ( v10 && v16 > v18 )
      {
        v125[v15] = v125[v15 - 1];
        v10 = 0;
      }
      else
      {
        if ( v18 <= v16 )
          v18 = v16;
        *(float *)&v125[v15] = v18;
        v16 = v13 + v18;
        ++v8;
        v10 = 1;
      }
      ++v15;
      v17 += 16 * v5;
    }
    while ( v15 < v9 );
    v107 = v8;
  }
  v19 = *(float *)(v4 + 32);
  v20 = 1;
  v110 = 1;
  v21 = 1;
  v22 = 1LL;
  v126[0] = v19 - *((float *)this + 14);
  v23 = v126[0] + v13;
  if ( v5 > 1 )
  {
    v24 = (float *)(v4 + 96);
    do
    {
      v25 = *v24 - *((float *)this + 14);
      if ( v21 && v23 > v25 )
      {
        v126[v22] = *(float *)&v125[v22 + 27];
        v21 = 0;
      }
      else
      {
        if ( v25 <= v23 )
          v25 = v23;
        v126[v22] = v25;
        v23 = v13 + v25;
        ++v20;
        v21 = 1;
      }
      ++v22;
      v24 += 16;
    }
    while ( v22 < v5 );
    v110 = v20;
  }
  v26 = Mesh::MeshGraph::AllocateVertex((Mesh::MeshGraph *)v7, (int)v9 * (int)v5, &v112);
  v27 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x6A0u);
    return v27;
  }
  v28 = Mesh::MeshGraph::AllocateLine(*((Mesh::MeshGraph **)this + 2), v8, &v101);
  v27 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x6A3u);
    return v27;
  }
  v29 = Mesh::MeshGraph::AllocateLine(*((Mesh::MeshGraph **)this + 2), v20, &v113);
  v27 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x6A6u);
    return v27;
  }
  v31 = Mesh::MeshGraph::AllocateEdge(*((Mesh::MeshGraph **)this + 2), 2 * v8 * v30, &v120);
  v27 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x6AAu);
    return v27;
  }
  v35 = v101;
  v27 = 0;
  v36 = 0LL;
  if ( v12 > 0 )
  {
    v37 = (_DWORD *)((char *)v101 - 56);
    do
    {
      if ( v36 > 0 && *(float *)&v125[v36] == *(float *)&v125[v36 - 1] )
      {
        *v37 |= 0x10u;
      }
      else
      {
        v38 = _mm_unpacklo_ps(v33, (__m128)(unsigned int)v125[v36]).m128_u64[0];
        v104 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)0LL).m128_u64[0];
        *(_QWORD *)&v122 = v38;
        Mesh::Line2d::SetDirection((Mesh::Line2d *)&v122, &v104);
        v39 = v122;
        *(_QWORD *)v40 = *((_QWORD *)this + 2);
        v41 = v123;
        *(_OWORD *)(v40 + 8) = v39;
        *(_DWORD *)(v40 + 32) = 0;
        *(_QWORD *)(v40 + 24) = v41;
        *(_QWORD *)(v40 + 48) = 0LL;
        *(_QWORD *)(v40 + 56) = 0LL;
        *(_DWORD *)(v40 + 64) = 0;
        *(float *)&v39 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v40 + 8));
        *(_DWORD *)(v42 + 36) = v39;
        *(_QWORD *)(v42 + 72) = 0LL;
        *(_QWORD *)(v42 + 80) = 0LL;
      }
      ++v36;
    }
    while ( v36 < v12 );
  }
  v43 = v8;
  v44 = (unsigned __int8 *)v35 + 32;
  *((_DWORD *)v35 + 8) |= 1u;
  v45 = 0LL;
  v46 = v113;
  v117 = v43;
  *((_DWORD *)v35 + 22 * v43 - 14) |= 2u;
  if ( v32 > 0 )
  {
    v47 = (_DWORD *)((char *)v46 - 56);
    do
    {
      if ( v45 > 0 && v126[v45] == *(float *)&v125[v45 + 27] )
      {
        *v47 |= 0x10u;
      }
      else
      {
        v48 = _mm_unpacklo_ps((__m128)LODWORD(v126[v45]), v34).m128_u64[0];
        v104 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
        *(_QWORD *)&v122 = v48;
        Mesh::Line2d::SetDirection((Mesh::Line2d *)&v122, &v104);
        v49 = v122;
        *(_QWORD *)v50 = *((_QWORD *)this + 2);
        v51 = v123;
        *(_OWORD *)(v50 + 8) = v49;
        *(_DWORD *)(v50 + 32) = 0;
        *(_QWORD *)(v50 + 24) = v51;
        *(_QWORD *)(v50 + 48) = 0LL;
        *(_QWORD *)(v50 + 56) = 0LL;
        *(_DWORD *)(v50 + 64) = 0;
        *(float *)&v49 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v50 + 8));
        *(_DWORD *)(v52 + 36) = v49;
        *(_QWORD *)(v52 + 72) = 0LL;
        *(_QWORD *)(v52 + 80) = 0LL;
      }
      ++v45;
    }
    while ( v45 < v32 );
  }
  *((_DWORD *)v46 + 8) |= 2u;
  v53 = 0;
  v54 = 0LL;
  v55 = v20 - 1LL;
  v118 = v55;
  v56 = (struct Mesh::MeshLine *)((char *)v46 + 88 * v55 + 32);
  v104 = (struct D2D_VECTOR_2F)v56;
  *(_DWORD *)v56 |= 1u;
  if ( v12 > 0 )
  {
    v57 = v112;
    v58 = 0LL;
    do
    {
      v59 = 0LL;
      if ( v32 > 0 )
      {
        HIDWORD(v103) = v125[v54];
        v60 = (char *)v57 + 72 * v58;
        v58 += v32;
        do
        {
          v61 = v126[v59];
          v62 = v60;
          v60 += 72;
          ++v59;
          *((_QWORD *)v62 + 1) = *(_QWORD *)this + ((__int64)v53 << 6);
          *(_DWORD *)v62 = v53++;
          *((_QWORD *)v62 + 4) = 0LL;
          *((_QWORD *)v62 + 5) = 0LL;
          *((_DWORD *)v62 + 12) = 0;
          *(float *)&v103 = v61;
          v63 = v103;
          *((_QWORD *)v62 + 7) = 0LL;
          *((_QWORD *)v62 + 2) = v63;
        }
        while ( v59 < v32 );
        v27 = 0;
      }
      ++v54;
    }
    while ( v54 < v12 );
    v35 = v101;
    v55 = v118;
    v56 = (struct Mesh::MeshLine *)v104;
  }
  v64 = 0;
  v108 = 0;
  v99 = 0;
  v113 = 0LL;
  if ( v117 <= 0 )
    goto LABEL_67;
  v65 = v32 - 1;
  v105 = 0LL;
  v106 = v32 - 1;
  v66 = 0LL;
  v67 = v32;
  while ( 1 )
  {
    v68 = (*v44 >> 4) & 1;
    v116 = v55;
    v109 = v65;
    if ( v55 >= 0 )
    {
      v69 = 88 * v66;
      v70 = v67;
      v101 = v56;
      v71 = v112;
      v72 = v56;
      v73 = v64 * v70;
      v74 = (struct Mesh::MeshEdge *)((char *)v120 + v69);
      v114 = v73;
      while ( 1 )
      {
        v75 = *(unsigned __int8 *)v72;
        v76 = v74;
        v100 = v99 + 1;
        ++v105;
        v77 = v74;
        v103 = (struct Mesh::MeshEdge *)((char *)v74 + 88);
        v115 = (v75 >> 4) & 1;
        v111 = v73 + v65;
        v78 = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))((char *)v71 + 72 * v73 + 72 * v65);
        *(_QWORD *)v74 = v78;
        *((_QWORD *)v74 + 1) = v44 - 32;
        *((_QWORD *)v74 + 4) = v78;
        *((_DWORD *)v74 + 4) = 0;
        *((_QWORD *)v74 + 9) = 0LL;
        *((_QWORD *)v74 + 10) = 0LL;
        *((_QWORD *)v74 + 7) = 0LL;
        *((_QWORD *)v74 + 8) = 0LL;
        *((_QWORD *)v74 + 3) = v78;
        *((_QWORD *)v74 + 6) = v78;
        *((_QWORD *)v74 + 5) = v78;
        v79 = (struct Mesh::MeshEdge *)*((_QWORD *)v44 + 2);
        v119 = v78;
        Mesh::MeshEdgeList::InsertEdgeBefore(
          (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v44
        + 1,
          v77,
          v79);
        v121 = (Mesh::MeshEdgeList *)(v78 + 3);
        Mesh::MeshEdgeList::InsertEdgeBefore(v78 + 3, v76, 0LL);
        v80 = v101;
        v81 = (_DWORD *)*((_QWORD *)this + 2);
        if ( (*(_BYTE *)v101 & 1) != 0 )
        {
          *((_DWORD *)v76 + 4) |= 2u;
          ++v81[24];
        }
        else
        {
          if ( (*v44 & 2) != 0 )
          {
            *((_DWORD *)v76 + 4) |= 8u;
          }
          else
          {
            if ( (*v44 & 1) == 0 )
            {
              *((_DWORD *)v76 + 4) |= 1u;
              ++v81[23];
              goto LABEL_51;
            }
            *((_DWORD *)v76 + 4) |= 4u;
          }
          ++v81[25];
        }
LABEL_51:
        if ( (*((_BYTE *)v76 + 16) & 5) != 0 )
        {
          v95 = Mesh::MeshGraph::AddPolygon(*((Mesh::MeshGraph **)this + 2), v76);
          v27 = v95;
          if ( v95 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0x720u);
            return v27;
          }
        }
        v82 = v119;
        v99 = v100 + 1;
        v83 = v103;
        ++v105;
        v103 = (struct Mesh::MeshEdge *)((char *)v103 + 88);
        *((_QWORD *)v83 + 1) = (char *)v80 - 32;
        *(_QWORD *)v83 = v82;
        *((_QWORD *)v83 + 4) = v82;
        *((_QWORD *)v83 + 3) = v82;
        *((_QWORD *)v83 + 6) = v82;
        *((_QWORD *)v83 + 5) = v82;
        *((_DWORD *)v83 + 4) = 0;
        *((_QWORD *)v83 + 9) = 0LL;
        *((_QWORD *)v83 + 10) = 0LL;
        *((_QWORD *)v83 + 7) = 0LL;
        *((_QWORD *)v83 + 8) = 0LL;
        Mesh::MeshEdgeList::InsertEdgeBefore(
          (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v80
        + 1,
          v83,
          0LL);
        Mesh::MeshEdgeList::InsertEdgeBefore(
          (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))v121,
          v83,
          0LL);
        v84 = v101;
        v85 = (_DWORD *)*((_QWORD *)this + 2);
        if ( (*v44 & 2) != 0 )
        {
          *((_DWORD *)v83 + 4) |= 2u;
          ++v85[24];
          goto LABEL_56;
        }
        if ( (*(_BYTE *)v101 & 1) != 0 )
        {
          *((_DWORD *)v83 + 4) |= 4u;
LABEL_55:
          ++v85[25];
          goto LABEL_56;
        }
        if ( (*(_BYTE *)v101 & 2) != 0 )
        {
          *((_DWORD *)v83 + 4) |= 8u;
          goto LABEL_55;
        }
        *((_DWORD *)v83 + 4) |= 1u;
        ++v85[23];
LABEL_56:
        v86 = v111;
        v71 = v112;
        if ( v68 )
        {
          ++*(_DWORD *)(*(_QWORD *)v76 + 56LL);
          v96 = (char *)v71 + 72 * v86 + 72 * (int)v102;
          *((_QWORD *)v76 + 6) = v96;
          *((_QWORD *)v76 + 5) = v96;
          *((_QWORD *)v83 + 4) = v96;
          *((_QWORD *)v83 + 6) = v96;
        }
        v87 = v115;
        if ( v115 )
        {
          ++*(_DWORD *)(*(_QWORD *)v83 + 56LL);
          v97 = (char *)v71 + 72 * v86 - 72;
          *((_QWORD *)v83 + 6) = v97;
          *((_QWORD *)v83 + 5) = v97;
          *((_QWORD *)v76 + 3) = v97;
          *((_QWORD *)v76 + 5) = v97;
        }
        if ( v68 )
        {
          if ( !v87 )
          {
            v27 = 0;
            goto LABEL_62;
          }
          v98 = (char *)v71 + 72 * v86 + 72 * v106;
          *((_QWORD *)v76 + 5) = v98;
          *((_QWORD *)v83 + 6) = v98;
        }
        v27 = 0;
        if ( v87 )
        {
          v88 = 2;
          goto LABEL_63;
        }
LABEL_62:
        v88 = 1;
LABEL_63:
        v72 = (struct Mesh::MeshLine *)((char *)v84 - 88);
        v74 = v103;
        v65 = v109 - v88;
        v73 = v114;
        v109 -= v88;
        --v116;
        v101 = v72;
        if ( v116 < 0 )
        {
          v64 = v108;
          v55 = v118;
          v66 = v105;
          v67 = v102;
          break;
        }
      }
    }
    v44 += 88;
    v64 += (v68 != 0) + 1;
    v108 = v64;
    v113 = (struct Mesh::MeshLine *)((char *)v113 + 1);
    if ( (__int64)v113 >= v117 )
      break;
    v56 = (struct Mesh::MeshLine *)v104;
    v65 = v106;
  }
  v20 = v110;
LABEL_67:
  *(_QWORD *)&v122 = v46;
  v89 = (__int64 *)&v122;
  *((_QWORD *)&v122 + 1) = v35;
  v90 = 0;
  v123 = (char *)v46 + 88 * v20 - 88;
  v91 = (char *)v35 + 88 * v107 - 88;
  v124 = v91;
  do
  {
    if ( v90 <= 0 )
      v92 = v91;
    else
      v92 = (char *)*(v89 - 1);
    v93 = *v89;
    ++v90;
    ++v89;
    *(_QWORD *)(v93 + 72) = v92;
    *(_QWORD *)(v93 + 80) = *((_QWORD *)&v122 + (v90 & 3));
  }
  while ( (unsigned __int64)v90 < 4 );
  *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) = v46;
  return v27;
}
