/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800918E0
 * Callers:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180002488 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 *     ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x1800917B8 (-LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x1800A31E8 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x1800A39D0 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x1800A39F8 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1800A3A28 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1800A3A58 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x1800AE4B8 (-InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800AF270 (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall Mesh::BuildGrid(float **this, __int64 a2, unsigned int a3, int a4)
{
  float *v4; // r10
  float *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // edi
  char v10; // r9
  float v11; // xmm2_4
  float v12; // xmm0_4
  __int64 v13; // rdx
  int v14; // r8d
  float v15; // xmm1_4
  int v16; // r11d
  float v17; // xmm0_4
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // r15
  float *v21; // r10
  float v22; // xmm1_4
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  int v26; // r11d
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // r11d
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __int64 v33; // r9
  _DWORD *v34; // r10
  unsigned __int64 v35; // xmm1_8
  __int128 v36; // xmm0
  __int64 v37; // r8
  char *v38; // xmm1_8
  __int64 v39; // r8
  struct Mesh::MeshLine *v40; // rdx
  struct Mesh::MeshLine *v41; // r13
  __int64 v42; // r9
  _BYTE *v43; // rbx
  _DWORD *v44; // r10
  unsigned __int64 v45; // xmm1_8
  float *v46; // rax
  __int64 v47; // r8
  __int128 v48; // xmm0
  char *v49; // xmm1_8
  __int64 v50; // r8
  int v51; // r10d
  __int64 v52; // r14
  __int64 v53; // r15
  int v54; // r12d
  __int64 v55; // rbx
  char *v56; // r9
  char *v57; // r8
  __int64 v58; // rcx
  float *v59; // rax
  struct D2D_VECTOR_2F v60; // rcx
  int v61; // edx
  __int64 v62; // r10
  __int64 v63; // rax
  int v64; // r8d
  bool v65; // r14
  struct Mesh::MeshEdge *v66; // rcx
  int v67; // r9d
  struct Mesh::MeshEdge **v68; // r11
  _BYTE *v69; // r15
  char v70; // al
  struct Mesh::MeshEdge *v71; // rdi
  char *v72; // r15
  _BYTE *v73; // r8
  float *v74; // rax
  struct Mesh::MeshEdge *v75; // rbx
  _BYTE *v76; // r15
  float *v77; // rax
  int v78; // r8d
  int v79; // eax
  __int64 *v80; // r8
  char *v81; // r9
  int v82; // edx
  char *v83; // rax
  __int64 v84; // rcx
  int v86; // eax
  char *v87; // rcx
  char *v88; // rcx
  char *v89; // rcx
  bool v90; // [rsp+38h] [rbp-D0h]
  int v91; // [rsp+3Ch] [rbp-CCh]
  int v92; // [rsp+3Ch] [rbp-CCh]
  int v93; // [rsp+3Ch] [rbp-CCh]
  struct D2D_VECTOR_2F v94; // [rsp+40h] [rbp-C8h] BYREF
  int v95; // [rsp+48h] [rbp-C0h]
  int v96; // [rsp+4Ch] [rbp-BCh]
  __int64 v97; // [rsp+50h] [rbp-B8h]
  struct Mesh::MeshVertex *v98; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE *v99; // [rsp+60h] [rbp-A8h]
  struct Mesh::MeshLine *v100; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v101; // [rsp+70h] [rbp-98h]
  _BYTE *v102; // [rsp+78h] [rbp-90h]
  struct Mesh::MeshEdge *v103; // [rsp+80h] [rbp-88h]
  __int64 v104; // [rsp+88h] [rbp-80h]
  struct Mesh::MeshLine *v105; // [rsp+90h] [rbp-78h] BYREF
  struct Mesh::MeshEdge *v106; // [rsp+98h] [rbp-70h] BYREF
  Mesh::MeshEdgeList *v107; // [rsp+A0h] [rbp-68h]
  __int64 v108; // [rsp+A8h] [rbp-60h]
  __int64 i; // [rsp+B0h] [rbp-58h]
  char *v110; // [rsp+B8h] [rbp-50h]
  char *v111; // [rsp+C0h] [rbp-48h]
  __int128 v112; // [rsp+C8h] [rbp-40h] BYREF
  char *v113; // [rsp+D8h] [rbp-30h]
  char *v114; // [rsp+E0h] [rbp-28h]
  _DWORD v115[28]; // [rsp+E8h] [rbp-20h]
  float v116[28]; // [rsp+158h] [rbp+50h]

  v4 = *this;
  v6 = this[2];
  v7 = a3;
  v8 = a4;
  v9 = 1;
  v10 = 1;
  v11 = v6[1];
  v12 = (*this)[1] + v11;
  *(float *)v115 = (*this)[1];
  v13 = 1LL;
  v91 = v8;
  if ( (int)a3 > 1LL )
  {
    v14 = v8;
    do
    {
      v15 = v4[10 * v14 + 1];
      if ( v10 && v12 > v15 )
      {
        v10 = 0;
        v115[v13] = v115[v13 - 1];
      }
      else
      {
        if ( v15 <= v12 )
          v15 = v12;
        *(float *)&v115[v13] = v15;
        v12 = v11 + v15;
        ++v9;
        v10 = 1;
      }
      v14 += v8;
      ++v13;
    }
    while ( v13 < (int)v7 );
  }
  v16 = 1;
  v116[0] = *v4;
  v17 = v116[0] + v11;
  v18 = 1;
  v19 = 1LL;
  v20 = v8;
  if ( v8 > 1 )
  {
    v21 = v4 + 10;
    do
    {
      v22 = *v21;
      if ( v18 && v17 > v22 )
      {
        v116[v19] = *(float *)&v115[v19 + 27];
        v18 = 0;
      }
      else
      {
        if ( v22 <= v17 )
          v22 = v17;
        v116[v19] = v22;
        v17 = v11 + v22;
        ++v16;
        v18 = 1;
      }
      ++v19;
      v21 += 10;
    }
    while ( v19 < v8 );
  }
  v23 = Mesh::MeshGraph::AllocateVertex((Mesh::MeshGraph *)v6, (int)v7 * (int)v8, &v98);
  v24 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x35Fu);
    return v24;
  }
  v25 = Mesh::MeshGraph::AllocateLine((Mesh::MeshGraph *)this[2], v9, &v105);
  v24 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x362u);
    return v24;
  }
  v27 = Mesh::MeshGraph::AllocateLine((Mesh::MeshGraph *)this[2], v26, &v100);
  v24 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x365u);
    return v24;
  }
  v29 = Mesh::MeshGraph::AllocateEdge((Mesh::MeshGraph *)this[2], 2 * v9 * v28, &v106);
  v24 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x369u);
    return v24;
  }
  v33 = 0LL;
  if ( (int)v7 > 0 )
  {
    v34 = (_DWORD *)((char *)v105 - 56);
    do
    {
      if ( v33 > 0 && *(float *)&v115[v33] == *(float *)&v115[v33 - 1] )
      {
        *v34 |= 0x10u;
      }
      else
      {
        v35 = _mm_unpacklo_ps(v31, (__m128)(unsigned int)v115[v33]).m128_u64[0];
        v94 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)0LL).m128_u64[0];
        *(_QWORD *)&v112 = v35;
        Mesh::Line2d::SetDirection((Mesh::Line2d *)&v112, &v94);
        v36 = v112;
        *(_QWORD *)v37 = this[2];
        v38 = v113;
        *(_OWORD *)(v37 + 8) = v36;
        *(_DWORD *)(v37 + 32) = 0;
        *(_QWORD *)(v37 + 24) = v38;
        *(_QWORD *)(v37 + 48) = 0LL;
        *(_QWORD *)(v37 + 56) = 0LL;
        *(_DWORD *)(v37 + 64) = 0;
        *(float *)&v36 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v37 + 8));
        *(_DWORD *)(v39 + 36) = v36;
        *(_QWORD *)(v39 + 72) = 0LL;
        *(_QWORD *)(v39 + 80) = 0LL;
      }
      ++v33;
    }
    while ( v33 < (int)v7 );
  }
  v40 = v105;
  v41 = v100;
  v42 = 0LL;
  v43 = (char *)v105 + 32;
  *((_DWORD *)v105 + 8) |= 1u;
  v99 = v43;
  v111 = (char *)v40 + 88 * v9 - 88;
  *((_DWORD *)v111 + 8) |= 2u;
  if ( v20 > 0 )
  {
    v44 = (_DWORD *)((char *)v41 - 56);
    do
    {
      if ( v42 > 0 && v116[v42] == *(float *)&v115[v42 + 27] )
      {
        *v44 |= 0x10u;
      }
      else
      {
        v45 = _mm_unpacklo_ps((__m128)LODWORD(v116[v42]), v32).m128_u64[0];
        v94 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
        *(_QWORD *)&v112 = v45;
        Mesh::Line2d::SetDirection((Mesh::Line2d *)&v112, &v94);
        v46 = this[2];
        *(_DWORD *)(v47 + 32) = 0;
        v48 = v112;
        *(_QWORD *)v47 = v46;
        v49 = v113;
        *(_OWORD *)(v47 + 8) = v48;
        *(_QWORD *)(v47 + 24) = v49;
        *(_QWORD *)(v47 + 48) = 0LL;
        *(_QWORD *)(v47 + 56) = 0LL;
        *(_DWORD *)(v47 + 64) = 0;
        *(float *)&v48 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v47 + 8));
        *(_QWORD *)(v50 + 72) = 0LL;
        *(_QWORD *)(v50 + 80) = 0LL;
        *(_DWORD *)(v50 + 36) = v48;
      }
      ++v42;
    }
    while ( v42 < v20 );
  }
  *((_DWORD *)v41 + 8) |= 2u;
  v51 = 0;
  v110 = (char *)v41 + 88 * v30 - 88;
  *((_DWORD *)v110 + 8) |= 1u;
  if ( (int)v7 <= 0 )
  {
    v54 = v20;
  }
  else
  {
    v52 = 0LL;
    v53 = v7;
    v54 = v91;
    do
    {
      if ( v91 > 0 )
      {
        v55 = (unsigned int)v91;
        v56 = (char *)v98 + 64 * v52;
        v52 += (unsigned int)v91;
        do
        {
          v57 = v56;
          v56 += 64;
          v58 = 5LL * v51;
          v59 = *this;
          *(_DWORD *)v57 = v51++;
          *((_QWORD *)v57 + 1) = &v59[2 * v58];
          *((_QWORD *)v57 + 3) = 0LL;
          *((_QWORD *)v57 + 4) = 0LL;
          *((_DWORD *)v57 + 10) = 0;
          *((_QWORD *)v57 + 6) = 0LL;
          --v55;
        }
        while ( v55 );
      }
      --v53;
    }
    while ( v53 );
    v43 = v99;
  }
  v60 = 0LL;
  v61 = 0;
  v92 = 0;
  LODWORD(v97) = 0;
  v94 = 0LL;
  v108 = v9;
  if ( v9 > 0 )
  {
    v62 = 0LL;
    v63 = v30 - 1LL;
    for ( i = v63; ; v63 = i )
    {
      v64 = v54 - 1;
      v65 = (*v43 & 0x10) != 0;
      v100 = (struct Mesh::MeshLine *)v63;
      v96 = v54 - 1;
      if ( v63 >= 0 )
        break;
LABEL_62:
      v94 = (struct D2D_VECTOR_2F)++*(_QWORD *)&v60;
      v43 += 88;
      v61 += v65 + 1;
      v99 = v43;
      LODWORD(v97) = v61;
      if ( *(_QWORD *)&v60 >= v108 )
        goto LABEL_63;
    }
    v66 = (struct Mesh::MeshEdge *)((char *)v106 + 88 * v62);
    v67 = v61 * v54;
    v68 = (struct Mesh::MeshEdge **)(v43 + 8);
    v69 = (char *)v41 + 88 * v63 + 32;
    v102 = v69;
    LODWORD(v101) = v61 * v54;
    while ( 1 )
    {
      v70 = *v69;
      v71 = v66;
      v93 = v92 + 1;
      v103 = (struct Mesh::MeshEdge *)((char *)v66 + 88);
      v90 = (v70 & 0x10) != 0;
      v104 = v62 + 1;
      v95 = v67 + v64;
      *((_QWORD *)v66 + 1) = v43 - 32;
      *((_DWORD *)v66 + 4) = 0;
      *((_QWORD *)v66 + 9) = 0LL;
      *((_QWORD *)v66 + 10) = 0LL;
      *((_QWORD *)v66 + 7) = 0LL;
      *((_QWORD *)v66 + 8) = 0LL;
      v72 = (char *)v98 + 64 * (__int64)(v67 + v64);
      *(_QWORD *)v66 = v72;
      *((_QWORD *)v66 + 4) = v72;
      *((_QWORD *)v66 + 3) = v72;
      *((_QWORD *)v66 + 6) = v72;
      *((_QWORD *)v66 + 5) = v72;
      Mesh::MeshEdgeList::InsertEdgeBefore((Mesh::MeshEdgeList *)v68, v66, v68[1]);
      v107 = (Mesh::MeshEdgeList *)(v72 + 16);
      Mesh::MeshEdgeList::InsertEdgeBefore((Mesh::MeshEdgeList *)(v72 + 16), v71, 0LL);
      v73 = v102;
      v74 = this[2];
      if ( (*v102 & 1) != 0 )
      {
        *((_DWORD *)v71 + 4) |= 2u;
        ++*((_DWORD *)v74 + 24);
      }
      else
      {
        if ( (*v43 & 2) != 0 )
        {
          *((_DWORD *)v71 + 4) |= 8u;
        }
        else
        {
          if ( (*v43 & 1) == 0 )
          {
            *((_DWORD *)v71 + 4) |= 1u;
            ++*((_DWORD *)v74 + 23);
            goto LABEL_48;
          }
          *((_DWORD *)v71 + 4) |= 4u;
        }
        ++*((_DWORD *)v74 + 25);
      }
LABEL_48:
      if ( (*((_BYTE *)v71 + 16) & 5) != 0 )
      {
        v86 = Mesh::MeshGraph::AddPolygon((Mesh::MeshGraph *)this[2], v71);
        v24 = v86;
        if ( v86 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v86, 0x3DEu);
          return v24;
        }
      }
      v92 = v93 + 1;
      v75 = v103;
      ++v104;
      v103 = (struct Mesh::MeshEdge *)((char *)v103 + 88);
      *((_QWORD *)v75 + 1) = v73 - 32;
      *(_QWORD *)v75 = v72;
      *((_QWORD *)v75 + 4) = v72;
      *((_QWORD *)v75 + 3) = v72;
      *((_QWORD *)v75 + 6) = v72;
      *((_QWORD *)v75 + 5) = v72;
      v76 = v73;
      *((_DWORD *)v75 + 4) = 0;
      *((_QWORD *)v75 + 9) = 0LL;
      *((_QWORD *)v75 + 10) = 0LL;
      *((_QWORD *)v75 + 7) = 0LL;
      *((_QWORD *)v75 + 8) = 0LL;
      Mesh::MeshEdgeList::InsertEdgeBefore((Mesh::MeshEdgeList *)(v73 + 8), v75, 0LL);
      Mesh::MeshEdgeList::InsertEdgeBefore(v107, v75, 0LL);
      v77 = this[2];
      if ( (*v99 & 2) != 0 )
      {
        *((_DWORD *)v75 + 4) |= 2u;
        ++*((_DWORD *)v77 + 24);
        goto LABEL_53;
      }
      if ( (*v76 & 1) != 0 )
      {
        *((_DWORD *)v75 + 4) |= 4u;
LABEL_52:
        ++*((_DWORD *)v77 + 25);
        goto LABEL_53;
      }
      if ( (*v76 & 2) != 0 )
      {
        *((_DWORD *)v75 + 4) |= 8u;
        goto LABEL_52;
      }
      *((_DWORD *)v75 + 4) |= 1u;
      ++*((_DWORD *)v77 + 23);
LABEL_53:
      v78 = v95;
      if ( v65 )
      {
        ++*(_DWORD *)(*(_QWORD *)v71 + 48LL);
        v87 = (char *)v98 + 64 * (__int64)(v54 + v78);
        *((_QWORD *)v71 + 6) = v87;
        *((_QWORD *)v71 + 5) = v87;
        *((_QWORD *)v75 + 4) = v87;
        *((_QWORD *)v75 + 6) = v87;
      }
      if ( v90 )
      {
        ++*(_DWORD *)(*(_QWORD *)v75 + 48LL);
        v88 = (char *)v98 + 64 * (__int64)(v78 - 1);
        *((_QWORD *)v75 + 6) = v88;
        *((_QWORD *)v75 + 5) = v88;
        *((_QWORD *)v71 + 3) = v88;
        *((_QWORD *)v71 + 5) = v88;
      }
      if ( v65 )
      {
        if ( !v90 )
        {
LABEL_59:
          v79 = 1;
          goto LABEL_60;
        }
        v89 = (char *)v98 + 64 * (__int64)(v78 + v54 - 1);
        *((_QWORD *)v71 + 5) = v89;
        *((_QWORD *)v75 + 6) = v89;
      }
      v79 = 2;
      if ( !v90 )
        goto LABEL_59;
LABEL_60:
      v69 = v76 - 88;
      v43 = v99;
      v64 = v96 - v79;
      v66 = v103;
      v67 = v101;
      v62 = v104;
      v68 = (struct Mesh::MeshEdge **)(v99 + 8);
      v96 -= v79;
      v100 = (struct Mesh::MeshLine *)((char *)v100 - 1);
      v102 = v69;
      if ( (__int64)v100 < 0 )
      {
        v60 = v94;
        v61 = v97;
        goto LABEL_62;
      }
    }
  }
LABEL_63:
  v80 = (__int64 *)&v112;
  v81 = v111;
  v82 = 0;
  *((_QWORD *)&v112 + 1) = v105;
  v113 = v110;
  *(_QWORD *)&v112 = v41;
  v114 = v111;
  do
  {
    if ( v82 <= 0 )
      v83 = v81;
    else
      v83 = (char *)*(v80 - 1);
    v84 = *v80;
    ++v82;
    ++v80;
    *(_QWORD *)(v84 + 72) = v83;
    *(_QWORD *)(v84 + 80) = *((_QWORD *)&v112 + (v82 & 3));
  }
  while ( (unsigned __int64)v82 < 4 );
  v24 = 0;
  *((_QWORD *)this[2] + 8) = v41;
  return v24;
}
