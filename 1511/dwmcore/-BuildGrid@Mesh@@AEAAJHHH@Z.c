/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18001EF94
 * Callers:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1800182E4 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 *     ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x18001EE6C (-LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z.c)
 * Callees:
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180068498 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x180068E14 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x180068E3C (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x180068E6C (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x180068E9C (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x1800AC9EC (-InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800ADE8C (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  int v28; // edx
  int v29; // eax
  __int64 v30; // r11
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __int64 v33; // rdx
  struct Mesh::MeshLine *v34; // r13
  __int64 v35; // r10
  _DWORD *v36; // rbx
  unsigned __int64 v37; // xmm1_8
  __int128 v38; // xmm0
  __int64 v39; // r9
  char *v40; // xmm1_8
  __int64 v41; // r9
  __int64 v42; // rax
  unsigned __int8 *v43; // r12
  __int64 v44; // r10
  struct Mesh::MeshLine *v45; // r15
  _DWORD *v46; // rbx
  unsigned __int64 v47; // xmm1_8
  __int128 v48; // xmm0
  __int64 v49; // r9
  char *v50; // xmm1_8
  __int64 v51; // r9
  int v52; // r10d
  __int64 v53; // r8
  struct Mesh::MeshLine *v54; // rax
  struct Mesh::MeshVertex *v55; // r13
  __int64 v56; // r8
  __int64 v57; // r9
  char *v58; // rbx
  float v59; // xmm0_4
  char *v60; // rcx
  struct Mesh::MeshEdge *v61; // xmm1_8
  int v62; // ecx
  __int64 v63; // rdx
  int v64; // r9d
  int v65; // r10d
  int v66; // r14d
  __int64 v67; // r8
  int v68; // r11d
  struct Mesh::MeshVertex *v69; // r10
  struct Mesh::MeshLine *v70; // rdx
  int v71; // r11d
  struct Mesh::MeshEdge *v72; // r8
  unsigned int v73; // eax
  struct Mesh::MeshEdge *v74; // rsi
  struct Mesh::MeshEdge *v75; // rdx
  char *v76; // rbx
  struct Mesh::MeshEdge *v77; // r8
  struct Mesh::MeshLine *v78; // r8
  _DWORD *v79; // rax
  char *v80; // rdx
  struct Mesh::MeshEdge *v81; // rbx
  struct Mesh::MeshLine *v82; // rdx
  _DWORD *v83; // rax
  int v84; // r9d
  int v85; // r8d
  int v86; // eax
  __int64 *v87; // r8
  char *v88; // r9
  int v89; // edx
  char *v90; // rax
  __int64 v91; // rcx
  char *v93; // rcx
  char *v94; // rcx
  char *v95; // rcx
  unsigned int v96; // [rsp+28h] [rbp-E0h]
  int v97; // [rsp+38h] [rbp-D0h]
  int v98; // [rsp+38h] [rbp-D0h]
  struct Mesh::MeshLine *v99; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v100; // [rsp+48h] [rbp-C0h]
  struct Mesh::MeshEdge *v101; // [rsp+50h] [rbp-B8h]
  D2D_VECTOR_2F v102; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v103; // [rsp+60h] [rbp-A8h]
  int v104; // [rsp+68h] [rbp-A0h]
  int v105; // [rsp+6Ch] [rbp-9Ch]
  int v106; // [rsp+70h] [rbp-98h]
  int v107; // [rsp+74h] [rbp-94h]
  int v108; // [rsp+78h] [rbp-90h]
  int v109; // [rsp+7Ch] [rbp-8Ch]
  struct Mesh::MeshVertex *v110; // [rsp+80h] [rbp-88h] BYREF
  struct Mesh::MeshLine *v111; // [rsp+88h] [rbp-80h] BYREF
  int v112; // [rsp+90h] [rbp-78h]
  int v113; // [rsp+94h] [rbp-74h]
  __int64 v114; // [rsp+98h] [rbp-70h]
  __int64 v115; // [rsp+A0h] [rbp-68h]
  __int64 v116; // [rsp+A8h] [rbp-60h]
  char *v117; // [rsp+B0h] [rbp-58h]
  struct Mesh::MeshEdge *v118; // [rsp+B8h] [rbp-50h] BYREF
  Mesh::MeshEdgeList *v119; // [rsp+C0h] [rbp-48h]
  __int128 v120; // [rsp+C8h] [rbp-40h] BYREF
  char *v121; // [rsp+D8h] [rbp-30h]
  char *v122; // [rsp+E0h] [rbp-28h]
  _DWORD v123[28]; // [rsp+E8h] [rbp-20h]
  float v124[28]; // [rsp+158h] [rbp+50h]

  v4 = *(_QWORD *)this;
  v5 = a4;
  v7 = (float *)*((_QWORD *)this + 2);
  v8 = 1;
  v9 = a3;
  v10 = 1;
  v11 = *(float *)(*(_QWORD *)this + 36LL);
  LODWORD(v100) = v5;
  v12 = a3;
  v13 = v7[1];
  v105 = 1;
  v14 = v11 - *((float *)this + 15);
  v15 = 1LL;
  *(float *)v123 = v14;
  v16 = v14 + v13;
  if ( a3 > 1LL )
  {
    v17 = (float *)((v5 << 6) + v4 + 36);
    do
    {
      v18 = *v17 - *((float *)this + 15);
      if ( v10 && v16 > v18 )
      {
        v123[v15] = v123[v15 - 1];
        v10 = 0;
      }
      else
      {
        if ( v18 <= v16 )
          v18 = v16;
        *(float *)&v123[v15] = v18;
        v16 = v13 + v18;
        ++v8;
        v10 = 1;
      }
      ++v15;
      v17 += 16 * v5;
    }
    while ( v15 < v9 );
    v105 = v8;
  }
  v19 = *(float *)(v4 + 32);
  v20 = 1;
  v108 = 1;
  v21 = 1;
  v22 = 1LL;
  v124[0] = v19 - *((float *)this + 14);
  v23 = v124[0] + v13;
  if ( v5 > 1 )
  {
    v24 = (float *)(v4 + 96);
    do
    {
      v25 = *v24 - *((float *)this + 14);
      if ( v21 && v23 > v25 )
      {
        v124[v22] = *(float *)&v123[v22 + 27];
        v21 = 0;
      }
      else
      {
        if ( v25 <= v23 )
          v25 = v23;
        v124[v22] = v25;
        v23 = v13 + v25;
        ++v20;
        v21 = 1;
      }
      ++v22;
      v24 += 16;
    }
    while ( v22 < v5 );
    v108 = v20;
  }
  v26 = Mesh::MeshGraph::AllocateVertex((Mesh::MeshGraph *)v7, (int)v9 * (int)v5, &v110);
  v27 = v26;
  if ( v26 < 0 )
  {
    v96 = 1696;
LABEL_94:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v96);
    return v27;
  }
  v26 = Mesh::MeshGraph::AllocateLine(*((Mesh::MeshGraph **)this + 2), v8, &v99);
  v27 = v26;
  if ( v26 < 0 )
  {
    v96 = 1699;
    goto LABEL_94;
  }
  v26 = Mesh::MeshGraph::AllocateLine(*((Mesh::MeshGraph **)this + 2), v20, &v111);
  v27 = v26;
  if ( v26 < 0 )
  {
    v96 = 1702;
    goto LABEL_94;
  }
  v29 = Mesh::MeshGraph::AllocateEdge(*((Mesh::MeshGraph **)this + 2), 2 * v8 * v28, &v118);
  v33 = 0LL;
  v27 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x6AAu);
  }
  else
  {
    v34 = v99;
    v35 = 0LL;
    if ( v12 > 0 )
    {
      v36 = (_DWORD *)((char *)v99 - 56);
      do
      {
        if ( v35 > 0 && *(float *)&v123[v35] == *(float *)&v123[v35 - 1] )
        {
          *v36 |= 0x10u;
        }
        else
        {
          v37 = _mm_unpacklo_ps(v31, (__m128)(unsigned int)v123[v35]).m128_u64[0];
          v102 = (D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)0LL).m128_u64[0];
          v36 += 22;
          *(_QWORD *)&v120 = v37;
          Mesh::Line2d::SetDirection((Mesh::Line2d *)&v120, &v102);
          v38 = v120;
          *(_QWORD *)v39 = *((_QWORD *)this + 2);
          v40 = v121;
          *(_OWORD *)(v39 + 8) = v38;
          *(_DWORD *)(v39 + 32) = 0;
          *(_QWORD *)(v39 + 24) = v40;
          *(_QWORD *)(v39 + 48) = 0LL;
          *(_QWORD *)(v39 + 56) = 0LL;
          *(_DWORD *)(v39 + 64) = 0;
          *(float *)&v38 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v39 + 8));
          *(_DWORD *)(v41 + 36) = v38;
          *(_QWORD *)(v41 + 72) = v33;
          *(_QWORD *)(v41 + 80) = v33;
        }
        ++v35;
      }
      while ( v35 < v12 );
    }
    v42 = v8;
    v43 = (unsigned __int8 *)v34 + 32;
    *((_DWORD *)v34 + 8) |= 1u;
    v44 = v33;
    v45 = v111;
    v115 = v42;
    *((_DWORD *)v34 + 22 * v42 - 14) |= 2u;
    if ( v30 > 0 )
    {
      v46 = (_DWORD *)((char *)v45 - 56);
      do
      {
        if ( v44 > 0 && v124[v44] == *(float *)&v123[v44 + 27] )
        {
          *v46 |= 0x10u;
        }
        else
        {
          v47 = _mm_unpacklo_ps((__m128)LODWORD(v124[v44]), v32).m128_u64[0];
          v102 = (D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
          *(_QWORD *)&v120 = v47;
          v46 += 22;
          Mesh::Line2d::SetDirection((Mesh::Line2d *)&v120, &v102);
          v48 = v120;
          *(_QWORD *)v49 = *((_QWORD *)this + 2);
          v50 = v121;
          *(_OWORD *)(v49 + 8) = v48;
          *(_DWORD *)(v49 + 32) = 0;
          *(_QWORD *)(v49 + 24) = v50;
          *(_QWORD *)(v49 + 48) = 0LL;
          *(_QWORD *)(v49 + 56) = 0LL;
          *(_DWORD *)(v49 + 64) = 0;
          *(float *)&v48 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v49 + 8));
          *(_DWORD *)(v51 + 36) = v48;
          *(_QWORD *)(v51 + 72) = v33;
          *(_QWORD *)(v51 + 80) = v33;
        }
        ++v44;
      }
      while ( v44 < v30 );
    }
    *((_DWORD *)v45 + 8) |= 2u;
    v52 = v33;
    v53 = v20 - 1LL;
    v116 = v53;
    v54 = (struct Mesh::MeshLine *)((char *)v45 + 88 * v53 + 32);
    v102 = (D2D_VECTOR_2F)v54;
    *(_DWORD *)v54 |= 1u;
    if ( v12 > 0 )
    {
      v55 = v110;
      v56 = 0LL;
      do
      {
        v57 = 0LL;
        if ( v30 > 0 )
        {
          HIDWORD(v101) = v123[v33];
          v58 = (char *)v55 + 72 * v56;
          v56 += v30;
          do
          {
            v59 = v124[v57];
            v60 = v58;
            v58 += 72;
            ++v57;
            *((_QWORD *)v60 + 1) = *(_QWORD *)this + ((__int64)v52 << 6);
            *(_DWORD *)v60 = v52++;
            *((_QWORD *)v60 + 4) = 0LL;
            *((_QWORD *)v60 + 5) = 0LL;
            *((_DWORD *)v60 + 12) = 0;
            *(float *)&v101 = v59;
            v61 = v101;
            *((_QWORD *)v60 + 7) = 0LL;
            *((_QWORD *)v60 + 2) = v61;
          }
          while ( v57 < v30 );
        }
        ++v33;
      }
      while ( v33 < v12 );
      v34 = v99;
      v53 = v116;
      v54 = (struct Mesh::MeshLine *)v102;
    }
    v62 = 0;
    v63 = 0LL;
    v111 = 0LL;
    v106 = 0;
    v97 = 0;
    if ( v115 > 0 )
    {
      v64 = v30 - 1;
      v103 = 0LL;
      v104 = v30 - 1;
      v65 = v30;
      while ( 1 )
      {
        v66 = (*v43 >> 4) & 1;
        v114 = v53;
        v107 = v64;
        if ( v53 >= 0 )
          break;
LABEL_64:
        v43 += 88;
        v62 += (v66 != 0) + 1;
        v106 = v62;
        v111 = (struct Mesh::MeshLine *)((char *)v111 + 1);
        if ( (__int64)v111 >= v115 )
        {
          v20 = v108;
          goto LABEL_66;
        }
        v54 = (struct Mesh::MeshLine *)v102;
        v64 = v104;
      }
      v67 = 88 * v63;
      v68 = v65;
      v99 = v54;
      v69 = v110;
      v70 = v54;
      v71 = v62 * v68;
      v72 = (struct Mesh::MeshEdge *)((char *)v118 + v67);
      v112 = v71;
      while ( 1 )
      {
        v73 = *(unsigned __int8 *)v70;
        v74 = v72;
        v98 = v97 + 1;
        ++v103;
        v75 = v72;
        v101 = (struct Mesh::MeshEdge *)((char *)v72 + 88);
        v113 = (v73 >> 4) & 1;
        v109 = v71 + v64;
        v76 = (char *)v69 + 72 * v71 + 72 * v64;
        *(_QWORD *)v72 = v76;
        *((_QWORD *)v72 + 1) = v43 - 32;
        *((_QWORD *)v72 + 4) = v76;
        *((_DWORD *)v72 + 4) = 0;
        *((_QWORD *)v72 + 9) = 0LL;
        *((_QWORD *)v72 + 10) = 0LL;
        *((_QWORD *)v72 + 7) = 0LL;
        *((_QWORD *)v72 + 8) = 0LL;
        *((_QWORD *)v72 + 3) = v76;
        *((_QWORD *)v72 + 6) = v76;
        *((_QWORD *)v72 + 5) = v76;
        v77 = (struct Mesh::MeshEdge *)*((_QWORD *)v43 + 2);
        v117 = v76;
        Mesh::MeshEdgeList::InsertEdgeBefore((Mesh::MeshEdgeList *)(v43 + 8), v75, v77);
        v119 = (Mesh::MeshEdgeList *)(v76 + 24);
        Mesh::MeshEdgeList::InsertEdgeBefore((Mesh::MeshEdgeList *)(v76 + 24), v74, 0LL);
        v78 = v99;
        v79 = (_DWORD *)*((_QWORD *)this + 2);
        if ( (*(_BYTE *)v99 & 1) != 0 )
        {
          *((_DWORD *)v74 + 4) |= 2u;
          ++v79[24];
        }
        else
        {
          if ( (*v43 & 2) != 0 )
          {
            *((_DWORD *)v74 + 4) |= 8u;
          }
          else
          {
            if ( (*v43 & 1) == 0 )
            {
              *((_DWORD *)v74 + 4) |= 1u;
              ++v79[23];
              goto LABEL_50;
            }
            *((_DWORD *)v74 + 4) |= 4u;
          }
          ++v79[25];
        }
LABEL_50:
        if ( (*((_BYTE *)v74 + 16) & 5) != 0 )
        {
          v26 = Mesh::MeshGraph::AddPolygon(*((Mesh::MeshGraph **)this + 2), v74);
          v27 = v26;
          if ( v26 < 0 )
          {
            v96 = 1824;
            goto LABEL_94;
          }
        }
        v80 = v117;
        v97 = v98 + 1;
        v81 = v101;
        ++v103;
        v101 = (struct Mesh::MeshEdge *)((char *)v101 + 88);
        *((_QWORD *)v81 + 1) = (char *)v78 - 32;
        *(_QWORD *)v81 = v80;
        *((_QWORD *)v81 + 4) = v80;
        *((_QWORD *)v81 + 3) = v80;
        *((_QWORD *)v81 + 6) = v80;
        *((_QWORD *)v81 + 5) = v80;
        *((_DWORD *)v81 + 4) = 0;
        *((_QWORD *)v81 + 9) = 0LL;
        *((_QWORD *)v81 + 10) = 0LL;
        *((_QWORD *)v81 + 7) = 0LL;
        *((_QWORD *)v81 + 8) = 0LL;
        Mesh::MeshEdgeList::InsertEdgeBefore((struct Mesh::MeshLine *)((char *)v78 + 8), v81, 0LL);
        Mesh::MeshEdgeList::InsertEdgeBefore(v119, v81, 0LL);
        v82 = v99;
        v83 = (_DWORD *)*((_QWORD *)this + 2);
        if ( (*v43 & 2) != 0 )
        {
          *((_DWORD *)v81 + 4) |= 2u;
          ++v83[24];
          goto LABEL_55;
        }
        if ( (*(_BYTE *)v99 & 1) != 0 )
        {
          *((_DWORD *)v81 + 4) |= 4u;
LABEL_54:
          ++v83[25];
          goto LABEL_55;
        }
        if ( (*(_BYTE *)v99 & 2) != 0 )
        {
          *((_DWORD *)v81 + 4) |= 8u;
          goto LABEL_54;
        }
        *((_DWORD *)v81 + 4) |= 1u;
        ++v83[23];
LABEL_55:
        v84 = v109;
        v69 = v110;
        if ( v66 )
        {
          ++*(_DWORD *)(*(_QWORD *)v74 + 56LL);
          v93 = (char *)v69 + 72 * v84 + 72 * (int)v100;
          *((_QWORD *)v74 + 6) = v93;
          *((_QWORD *)v74 + 5) = v93;
          *((_QWORD *)v81 + 4) = v93;
          *((_QWORD *)v81 + 6) = v93;
        }
        v85 = v113;
        if ( v113 )
        {
          ++*(_DWORD *)(*(_QWORD *)v81 + 56LL);
          v94 = (char *)v69 + 72 * v84 - 72;
          *((_QWORD *)v81 + 6) = v94;
          *((_QWORD *)v81 + 5) = v94;
          *((_QWORD *)v74 + 3) = v94;
          *((_QWORD *)v74 + 5) = v94;
        }
        if ( v66 )
        {
          if ( !v85 )
          {
LABEL_61:
            v86 = 1;
            goto LABEL_62;
          }
          v95 = (char *)v69 + 72 * v84 + 72 * v104;
          *((_QWORD *)v74 + 5) = v95;
          *((_QWORD *)v81 + 6) = v95;
        }
        v86 = 2;
        if ( !v85 )
          goto LABEL_61;
LABEL_62:
        v70 = (struct Mesh::MeshLine *)((char *)v82 - 88);
        v72 = v101;
        v64 = v107 - v86;
        v71 = v112;
        v107 -= v86;
        --v114;
        v99 = v70;
        if ( v114 < 0 )
        {
          v62 = v106;
          v53 = v116;
          v63 = v103;
          v65 = v100;
          goto LABEL_64;
        }
      }
    }
LABEL_66:
    *(_QWORD *)&v120 = v45;
    v87 = (__int64 *)&v120;
    *((_QWORD *)&v120 + 1) = v34;
    v121 = (char *)v45 + 88 * v20 - 88;
    v88 = (char *)v34 + 88 * v105 - 88;
    v122 = v88;
    v89 = 0;
    do
    {
      if ( v89 <= 0 )
        v90 = v88;
      else
        v90 = (char *)*(v87 - 1);
      v91 = *v87;
      ++v89;
      ++v87;
      *(_QWORD *)(v91 + 72) = v90;
      *(_QWORD *)(v91 + 80) = *((_QWORD *)&v120 + (v89 & 3));
    }
    while ( (unsigned __int64)v89 < 4 );
    v27 = 0;
    *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) = v45;
  }
  return v27;
}
