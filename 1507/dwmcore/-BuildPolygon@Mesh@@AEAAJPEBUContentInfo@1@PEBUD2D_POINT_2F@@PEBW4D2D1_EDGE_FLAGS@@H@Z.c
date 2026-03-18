/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009594
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009D74 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?SetupVertex@Mesh@@AEAAXHMMU_D3DCOLORVALUE@@M@Z @ 0x1800094F8 (-SetupVertex@Mesh@@AEAAXHMMU_D3DCOLORVALUE@@M@Z.c)
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x180009570 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180009F0C (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180009FF4 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z @ 0x18000A0C4 (-ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180051DB8 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x180070FFC (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x180071024 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x180071054 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x180071084 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x18007349C (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh::MeshGraph **this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        int a5)
{
  unsigned int v5; // edi
  int v6; // r14d
  const struct D2D_POINT_2F *v9; // r12
  float x; // xmm6_4
  float y; // xmm7_4
  __int64 v12; // rcx
  int v13; // edx
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm13_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  _DWORD *v26; // r9
  unsigned int v27; // r8d
  int Vertex; // eax
  int v29; // edx
  unsigned int v30; // ebx
  Mesh::MeshGraph *v31; // rcx
  Mesh::MeshGraph *v32; // rcx
  Mesh::MeshGraph *v33; // rcx
  unsigned int v34; // ecx
  __int64 v35; // r14
  struct D2D_VECTOR_2F v36; // r12
  int v37; // r15d
  struct _D3DCOLORVALUE *v38; // r13
  __int64 v39; // rbx
  double v40; // xmm3_8
  double v41; // xmm2_8
  __int64 v42; // rdi
  int v43; // r11d
  FLOAT v44; // r8d
  unsigned int v45; // r10d
  __int64 v46; // rbx
  __int64 v47; // r11
  char *v48; // rdi
  __int64 v49; // r13
  __int64 v50; // rcx
  float v51; // xmm7_4
  float v52; // xmm6_4
  char *v53; // r15
  char *v54; // r14
  float v55; // xmm0_4
  float *v56; // rax
  FLOAT v57; // xmm6_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  _DWORD *v60; // r9
  __int128 v61; // xmm0
  __int64 v62; // xmm1_8
  __int64 v63; // rdx
  Mesh::MeshGraph *v64; // rax
  Mesh::MeshGraph *v65; // rax
  Mesh::MeshGraph *v67; // rax
  Mesh::MeshGraph *v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  int v71; // edi
  int v72; // eax
  int v73; // r9d
  unsigned int v74; // [rsp+28h] [rbp-E0h]
  int v75[2]; // [rsp+38h] [rbp-D0h] BYREF
  D2D_VECTOR_2F v76; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_VECTOR_2F v77; // [rsp+48h] [rbp-C0h] BYREF
  struct Mesh::MeshLine *v78; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshEdge *v79; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_2F v80; // [rsp+60h] [rbp-A8h] BYREF
  const enum D2D1_EDGE_FLAGS *v81; // [rsp+68h] [rbp-A0h]
  _QWORD v82[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v83; // [rsp+88h] [rbp-80h]
  struct _D3DCOLORVALUE v84; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v85[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v86; // [rsp+C8h] [rbp-40h]
  unsigned int v87; // [rsp+CCh] [rbp-3Ch]
  unsigned int v88; // [rsp+D0h] [rbp-38h]
  _BYTE v89[32]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v90[2]; // [rsp+F8h] [rbp-10h] BYREF
  int v91; // [rsp+108h] [rbp+0h]
  int v92[3]; // [rsp+10Ch] [rbp+4h]
  _BYTE v93[64]; // [rsp+118h] [rbp+10h] BYREF

  v90[0] = v93;
  v5 = 0;
  v88 = 0;
  v90[1] = v93;
  v6 = 0;
  v81 = a4;
  v85[0] = v89;
  v85[1] = v89;
  v82[0] = a2;
  v91 = 8;
  *(_QWORD *)v92 = 8LL;
  v86 = 8;
  v87 = 8;
  if ( a5 <= 0 )
  {
LABEL_65:
    v30 = 1;
    goto LABEL_39;
  }
  v9 = a3;
  do
  {
    x = v9->x;
    y = v9->y;
    v76.x = x;
    v76.y = y;
    v75[0] = v6 + 1;
    v12 = (v6 + 1 + a5 - 2) % a5;
    v13 = (v6 + 1) % a5;
    v14 = a3[v12].y;
    v80.x = a3[v12].x;
    v15 = v80.x - x;
    v80.y = v14;
    v16 = v14 - y;
    v18 = a3[v13].y;
    v77.x = a3[v13].x;
    v17 = v77.x;
    v77.y = v18;
    v78 = (struct Mesh::MeshLine *)__PAIR64__(LODWORD(v16), v80.x - x);
    v19 = sqrtf_0((float)(v16 * v16) + (float)(v15 * v15));
    v20 = v17 - x;
    v21 = v18 - y;
    v79 = (struct Mesh::MeshEdge *)__PAIR64__(LODWORD(v21), LODWORD(v20));
    v22 = sqrtf_0((float)(v21 * v21) + (float)(v20 * v20));
    if ( v19 != 0.0 && v22 != 0.0 )
    {
      *(float *)&v78 = v15 * (float)(1.0 / v19);
      *(float *)&v79 = v20 * (float)(1.0 / v22);
      *((float *)&v78 + 1) = v16 * (float)(1.0 / v19);
      *((float *)&v79 + 1) = v21 * (float)(1.0 / v22);
      Mesh::MeshGraph::ComputeNormalizedLine(&v82[1], &v76, &v78);
      Mesh::MeshGraph::ComputeNormalizedLine(&v84, &v76, &v79);
      Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)&v82[1]);
      v23 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)&v84);
      v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - v23)) & _xmm);
      if ( v25 > 0.000099999997
        && (unsigned int)Mesh::MeshGraph::ComparePoints(this[2], &v76, &v80, (const struct Mesh::Line2d *)&v82[1])
        && (unsigned int)Mesh::MeshGraph::ComparePoints(this[2], &v76, &v77, (const struct Mesh::Line2d *)&v84) )
      {
        if ( v5 + 1 < v5 )
        {
          v71 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v30 = -2147024362;
LABEL_57:
          v74 = 2014;
LABEL_58:
          v73 = v71;
          goto LABEL_61;
        }
        if ( v5 + 1 > v92[0] )
        {
          v70 = DynArrayImpl<0>::AddMultipleAndSet(v90, 8LL, 1LL, &v76);
          v71 = v70;
          if ( v70 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0xC0u);
          v30 = v71;
          if ( v71 < 0 )
            goto LABEL_57;
        }
        else
        {
          *(D2D_VECTOR_2F *)(v90[0] + 8LL * v5) = v76;
          v92[1] = v5 + 1;
        }
        v26 = (_DWORD *)((char *)v81 + 4 * v6);
        v27 = v88 + 1;
        if ( v88 + 1 < v88 )
        {
          v71 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v30 = -2147024362;
LABEL_55:
          v74 = 2015;
          goto LABEL_58;
        }
        if ( v27 > v87 )
        {
          v72 = DynArrayImpl<0>::AddMultipleAndSet(v85, 4LL, 1LL, v26);
          v71 = v72;
          if ( v72 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0xC0u);
          v30 = v71;
          if ( v71 < 0 )
            goto LABEL_55;
        }
        else
        {
          *(_DWORD *)(v85[0] + 4LL * v88) = *v26;
          v88 = v27;
        }
        v5 = v92[1];
      }
    }
    v6 = v75[0];
    ++v9;
  }
  while ( v75[0] < a5 );
  if ( v5 < 3 )
    goto LABEL_65;
  Vertex = Mesh::AllocateVertex((Mesh *)this, v5, v75);
  v30 = Vertex;
  if ( Vertex < 0 )
  {
    v74 = 2026;
LABEL_60:
    v73 = Vertex;
LABEL_61:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, v74);
    goto LABEL_39;
  }
  v31 = this[2];
  v77 = 0LL;
  Vertex = Mesh::MeshGraph::AllocateVertex(v31, v29, (struct Mesh::MeshVertex **)&v77);
  v30 = Vertex;
  if ( Vertex < 0 )
  {
    v74 = 2029;
    goto LABEL_60;
  }
  v32 = this[2];
  v78 = 0LL;
  Vertex = Mesh::MeshGraph::AllocateLine(v32, v92[1], &v78);
  v30 = Vertex;
  if ( Vertex < 0 )
  {
    v74 = 2032;
    goto LABEL_60;
  }
  v33 = this[2];
  v79 = 0LL;
  Vertex = Mesh::MeshGraph::AllocateEdge(v33, 2 * v92[1], &v79);
  v30 = Vertex;
  if ( Vertex < 0 )
  {
    v74 = 2035;
    goto LABEL_60;
  }
  v34 = v92[1];
  v35 = 0LL;
  v36 = v77;
  if ( v92[1] )
  {
    v37 = v75[0];
    v38 = (struct _D3DCOLORVALUE *)v82[0];
    do
    {
      v39 = 9 * v35;
      *(_QWORD *)&v40 = *(unsigned int *)(v90[0] + 8 * v35 + 4);
      *(_QWORD *)&v41 = *(unsigned int *)(v90[0] + 8 * v35);
      v42 = (__int64)*this + 64 * (__int64)((int)v35 + v37);
      *(struct _D3DCOLORVALUE *)&v84.r = *(struct _D3DCOLORVALUE *)&v38->r;
      Mesh::SetupVertex((Mesh *)this, v35 + v37, v41, v40, &v84, 1.0);
      *(_DWORD *)(*(_QWORD *)&v36 + 72 * v35) = v43;
      v35 = (unsigned int)(v35 + 1);
      *(_QWORD *)(*(_QWORD *)&v36 + 8 * v39 + 8) = v42;
      *(_QWORD *)(*(_QWORD *)&v36 + 8 * v39 + 32) = 0LL;
      *(_QWORD *)(*(_QWORD *)&v36 + 8 * v39 + 40) = 0LL;
      *(_DWORD *)(*(_QWORD *)&v36 + 8 * v39 + 48) = 0;
      *(_DWORD *)(*(_QWORD *)&v36 + 8 * v39 + 60) = 0;
      *(_DWORD *)(*(_QWORD *)&v36 + 8 * v39 + 56) = 0;
      *(float *)(*(_QWORD *)&v36 + 8 * v39 + 16) = *(float *)(v42 + 32) - *((float *)this + 14);
      *(float *)(*(_QWORD *)&v36 + 8 * v39 + 20) = *(float *)(v42 + 36) - *((float *)this + 15);
      v34 = v92[1];
    }
    while ( (unsigned int)v35 < v92[1] );
  }
  v44 = 0.0;
  if ( v34 )
  {
    v45 = 0;
    v75[0] = 0;
    do
    {
      *(_QWORD *)&v84.r = LODWORD(v44);
      v46 = *(_QWORD *)&v36 + 72LL * LODWORD(v44);
      LODWORD(v76.x) = LODWORD(v44) + 1;
      v47 = (LODWORD(v44) + 1) % v34;
      v48 = (char *)v78 + 88 * LODWORD(v44);
      v49 = *(_QWORD *)&v36 + 72 * v47;
      if ( v44 == 0.0 )
        v50 = v34 - 1;
      else
        v50 = (unsigned int)(LODWORD(v44) - 1);
      v51 = *(float *)(v46 + 16) - *(float *)(v49 + 16);
      v52 = *(float *)(v46 + 20) - *(float *)(v49 + 20);
      v80 = (struct D2D_VECTOR_2F)((char *)v78 + 88 * v50);
      v82[0] = (char *)v78 + 88 * v47;
      v53 = (char *)v79 + 88 * v45 + 88;
      v54 = (char *)v79 + 88 * v45;
      v55 = sqrtf_0((float)(v52 * v52) + (float)(v51 * v51));
      v56 = (float *)this[2];
      v57 = v52 * (float)(1.0 / v55);
      v77.x = v51 * (float)(1.0 / v55);
      v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v55) & _xmm);
      v59 = *v56;
      v77.y = v57;
      if ( v59 > v58 )
        goto LABEL_65;
      Mesh::MeshGraph::ComputeNormalizedLine(&v82[1], v46 + 16, &v77);
      if ( (_DWORD)v83 )
      {
        *v60 = *(_DWORD *)(v49 + 16);
      }
      else
      {
        if ( !HIDWORD(v83) )
          goto LABEL_33;
        *(_DWORD *)(v46 + 20) = *(_DWORD *)(v49 + 20);
      }
      v82[1] = *(_QWORD *)v60;
LABEL_33:
      v61 = *(_OWORD *)&v82[1];
      *(_QWORD *)v48 = this[2];
      v62 = v83;
      *(_OWORD *)(v48 + 8) = v61;
      *((_DWORD *)v48 + 8) = 0;
      *((_QWORD *)v48 + 3) = v62;
      *((_QWORD *)v48 + 6) = 0LL;
      *((_QWORD *)v48 + 7) = 0LL;
      *((_DWORD *)v48 + 16) = 0;
      *(float *)&v61 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v48 + 8));
      *((struct D2D_VECTOR_2F *)v48 + 9) = v80;
      *((_QWORD *)v48 + 10) = v82[0];
      *((_DWORD *)v48 + 9) = v61;
      *((_DWORD *)v54 + 4) = v63;
      *((_QWORD *)v54 + 9) = v63;
      *((_QWORD *)v54 + 10) = v63;
      *((_QWORD *)v54 + 7) = v63;
      *((_QWORD *)v54 + 8) = v63;
      *(_QWORD *)v54 = v46;
      *((_QWORD *)v54 + 1) = v48;
      *((_QWORD *)v54 + 4) = v46;
      *((_QWORD *)v54 + 3) = v46;
      *((_QWORD *)v54 + 6) = v46;
      *((_QWORD *)v54 + 5) = v46;
      Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v46 + 24), (struct Mesh::MeshEdge *)v54);
      Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v48 + 40), (struct Mesh::MeshEdge *)v54);
      *(_QWORD *)v53 = v49;
      *((_DWORD *)v53 + 4) = 0;
      *((_QWORD *)v53 + 9) = 0LL;
      *((_QWORD *)v53 + 10) = 0LL;
      *((_QWORD *)v53 + 7) = 0LL;
      *((_QWORD *)v53 + 8) = 0LL;
      *((_QWORD *)v53 + 1) = v48;
      *((_QWORD *)v53 + 4) = v49;
      *((_QWORD *)v53 + 3) = v49;
      *((_QWORD *)v53 + 6) = v49;
      *((_QWORD *)v53 + 5) = v49;
      Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v49 + 24), (struct Mesh::MeshEdge *)v53);
      Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v48 + 40), (struct Mesh::MeshEdge *)v53);
      if ( *((char **)v48 + 6) == v54 )
      {
        *((_DWORD *)v48 + 8) |= 1u;
        v64 = this[2];
        *((_DWORD *)v54 + 4) |= 4u;
        ++*((_DWORD *)v64 + 25);
        v65 = this[2];
        *((_DWORD *)v53 + 4) |= 2u;
        ++*((_DWORD *)v65 + 24);
        if ( (*(_BYTE *)(*(_QWORD *)(v46 + 40) + 16LL) & 8) != 0 )
        {
          v69 = *(_QWORD *)(v46 + 32);
LABEL_45:
          Mesh::MeshGraph::AddPolygon(this[2], (struct Mesh::MeshEdge *)v69);
        }
      }
      else
      {
        *((_DWORD *)v48 + 8) |= 2u;
        v67 = this[2];
        *((_DWORD *)v53 + 4) |= 8u;
        ++*((_DWORD *)v67 + 25);
        v68 = this[2];
        *((_DWORD *)v54 + 4) |= 2u;
        ++*((_DWORD *)v68 + 24);
        v69 = *(_QWORD *)(v49 + 32);
        if ( (*(_BYTE *)(v69 + 16) & 4) != 0 )
          goto LABEL_45;
      }
      *((_DWORD *)v48 + 8) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*(unsigned int *)(v85[0] + 4LL
                                                                                                * *(_QWORD *)&v84.r));
      if ( (v48[32] & 0xC) != 0 )
        *((_DWORD *)this + 26) |= 0x40u;
      v44 = v76.x;
      v45 = v75[0] + 2;
      v34 = v92[1];
      v75[0] += 2;
    }
    while ( LODWORD(v76.x) < v92[1] );
  }
  v30 = 0;
  *((_QWORD *)this[2] + 8) = v78;
LABEL_39:
  DynArrayImpl<1>::~DynArrayImpl<1>(v85);
  DynArrayImpl<1>::~DynArrayImpl<1>(v90);
  return v30;
}
