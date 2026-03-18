/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180018310 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?SetupVertex@Mesh@@AEAAXHMMU_D3DCOLORVALUE@@M@Z @ 0x180017A30 (-SetupVertex@Mesh@@AEAAXHMMU_D3DCOLORVALUE@@M@Z.c)
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x180017AA8 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x1800184A4 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180018568 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z @ 0x18001861C (-ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x18001DEE4 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180068498 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x180068E14 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x180068E3C (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x180068E6C (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x180068E9C (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh::MeshGraph **this,
        const struct Mesh::ContentInfo *a2,
        struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        int a5)
{
  __int64 v5; // rdx
  unsigned int v7; // edi
  int v8; // esi
  int v9; // r9d
  char *v10; // rbx
  struct D2D_POINT_2F *v11; // rcx
  struct Mesh::MeshLine *v12; // r13
  int v13; // r15d
  __int64 v14; // rax
  FLOAT v15; // xmm9_4
  FLOAT v16; // xmm6_4
  FLOAT v17; // xmm7_4
  FLOAT v18; // xmm10_4
  FLOAT v19; // xmm11_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm12_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm1_4
  _DWORD *v29; // r9
  unsigned int v30; // r8d
  struct Mesh::MeshEdge *v31; // rcx
  int Vertex; // eax
  int v33; // edx
  unsigned int v34; // ebx
  Mesh::MeshGraph *v35; // rcx
  struct Mesh::MeshLine *v36; // r11
  Mesh::MeshGraph *v37; // rcx
  struct Mesh::MeshEdge *v38; // r11
  Mesh::MeshGraph *v39; // rcx
  int v40; // r11d
  unsigned int v41; // ecx
  unsigned int v42; // r15d
  struct Mesh::MeshVertex *v43; // r12
  int v44; // r13d
  double v45; // xmm2_8
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rbx
  double v49; // xmm3_8
  int v50; // r11d
  FLOAT x; // r8d
  unsigned int v52; // r10d
  float *v53; // rbx
  __int64 v54; // r11
  char *v55; // rdi
  float *v56; // r13
  __int64 v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm6_4
  char *v60; // r15
  char *v61; // rsi
  float v62; // xmm0_4
  float v63; // xmm1_4
  _DWORD *v64; // r10
  __int64 v65; // r11
  __int128 v66; // xmm0
  __int64 v67; // xmm1_8
  __int64 v68; // r11
  Mesh::MeshGraph *v69; // rax
  Mesh::MeshGraph *v70; // rax
  Mesh::MeshGraph *v72; // rax
  Mesh::MeshGraph *v73; // rax
  __int64 v74; // rdx
  int v75; // eax
  int v76; // edi
  int v77; // eax
  int v78; // r9d
  unsigned int v79; // [rsp+28h] [rbp-E0h]
  int v80[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_2F v81; // [rsp+40h] [rbp-C8h] BYREF
  struct Mesh::MeshVertex *v82; // [rsp+48h] [rbp-C0h] BYREF
  struct Mesh::MeshLine *v83; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshEdge *v84; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_2F v85; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_VECTOR_2F v86; // [rsp+68h] [rbp-A0h] BYREF
  float v87; // [rsp+70h] [rbp-98h] BYREF
  float v88; // [rsp+74h] [rbp-94h]
  _QWORD v89[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v90; // [rsp+90h] [rbp-78h]
  struct _D3DCOLORVALUE v91; // [rsp+98h] [rbp-70h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-60h]
  const enum D2D1_EDGE_FLAGS *v93; // [rsp+B0h] [rbp-58h]
  _BYTE v94[32]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v95[2]; // [rsp+D8h] [rbp-30h] BYREF
  int v96; // [rsp+E8h] [rbp-20h]
  int v97[3]; // [rsp+ECh] [rbp-1Ch]
  _BYTE v98[64]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v99[2]; // [rsp+138h] [rbp+30h] BYREF
  int v100; // [rsp+148h] [rbp+40h]
  __int64 v101; // [rsp+14Ch] [rbp+44h]
  _BYTE v102[32]; // [rsp+158h] [rbp+50h] BYREF

  v95[0] = v98;
  v89[0] = a2;
  v95[1] = v98;
  v5 = -1LL;
  v93 = a4;
  v99[0] = v102;
  *(_QWORD *)&v91.r = a3;
  v96 = 8;
  v99[1] = v102;
  v7 = 0;
  *(_QWORD *)v97 = 8LL;
  v8 = 0;
  v100 = 8;
  v101 = 8LL;
  v82 = (struct Mesh::MeshVertex *)-1LL;
  if ( a5 <= 0 )
    goto LABEL_72;
  v9 = a5 - 1;
  v10 = (char *)(8LL * (a5 - 1));
  v11 = a3;
  v83 = (struct Mesh::MeshLine *)-1LL;
  v92 = -(__int64)a3;
  v12 = 0LL;
  v84 = (struct Mesh::MeshEdge *)a3;
  v13 = a5;
  while ( 1 )
  {
    if ( v13 < 3 )
    {
LABEL_21:
      if ( v7 >= 3 )
      {
        Vertex = Mesh::AllocateVertex((Mesh *)this, v7, v80);
        v34 = Vertex;
        if ( Vertex < 0 )
        {
          v79 = 2049;
        }
        else
        {
          v35 = this[2];
          v82 = 0LL;
          Vertex = Mesh::MeshGraph::AllocateVertex(v35, v33, &v82);
          v34 = Vertex;
          if ( Vertex < 0 )
          {
            v79 = 2052;
          }
          else
          {
            v37 = this[2];
            v83 = v36;
            Vertex = Mesh::MeshGraph::AllocateLine(v37, v97[1], &v83);
            v34 = Vertex;
            if ( Vertex < 0 )
            {
              v79 = 2055;
            }
            else
            {
              v39 = this[2];
              v84 = v38;
              Vertex = Mesh::MeshGraph::AllocateEdge(v39, 2 * v97[1], &v84);
              v34 = Vertex;
              if ( Vertex >= 0 )
              {
                v41 = v97[1];
                v42 = v40;
                v43 = v82;
                if ( v97[1] )
                {
                  v44 = v80[0];
                  do
                  {
                    *(_QWORD *)&v45 = *((unsigned int *)this + 14);
                    v46 = v42;
                    v47 = 9LL * v42;
                    v48 = (__int64)*this + 64 * (__int64)(int)(v42 + v44);
                    *(_QWORD *)&v49 = *(unsigned int *)(v95[0] + 8LL * v42 + 4);
                    *(float *)&v45 = *(float *)&v45 + *(float *)(v95[0] + 8LL * v42);
                    *(float *)&v49 = *(float *)&v49 + *((float *)this + 15);
                    *(struct _D3DCOLORVALUE *)&v91.r = *(struct _D3DCOLORVALUE *)v89[0];
                    Mesh::SetupVertex((Mesh *)this, v42 + v44, v45, v49, &v91, 1.0);
                    *((_DWORD *)v43 + 18 * v42++) = v50;
                    *((_QWORD *)v43 + v47 + 1) = v48;
                    v40 = 0;
                    *((_QWORD *)v43 + v47 + 4) = 0LL;
                    *((_QWORD *)v43 + v47 + 5) = 0LL;
                    *((_DWORD *)v43 + 2 * v47 + 12) = 0;
                    *((_QWORD *)v43 + v47 + 7) = 0LL;
                    *((_DWORD *)v43 + 2 * v47 + 4) = *(_DWORD *)(v95[0] + 8 * v46);
                    *((_DWORD *)v43 + 2 * v47 + 5) = *(_DWORD *)(v95[0] + 8 * v46 + 4);
                    v41 = v97[1];
                  }
                  while ( v42 < v97[1] );
                }
                x = *(float *)&v40;
                if ( !v41 )
                {
LABEL_43:
                  v34 = v40;
                  *((_QWORD *)this[2] + 8) = v83;
                  goto LABEL_44;
                }
                v52 = v40;
                v80[0] = v40;
                while ( 1 )
                {
                  *(_QWORD *)&v91.r = LODWORD(x);
                  v53 = (float *)((char *)v43 + 72 * LODWORD(x));
                  LODWORD(v81.x) = LODWORD(x) + 1;
                  v54 = (LODWORD(x) + 1) % v41;
                  v55 = (char *)v83 + 88 * LODWORD(x);
                  v56 = (float *)((char *)v43 + 72 * v54);
                  if ( x == 0.0 )
                    v57 = v41 - 1;
                  else
                    v57 = (unsigned int)(LODWORD(x) - 1);
                  v58 = v53[4] - v56[4];
                  v59 = v53[5] - v56[5];
                  v85 = (struct D2D_VECTOR_2F)((char *)v83 + 88 * v57);
                  v89[0] = (char *)v83 + 88 * v54;
                  v60 = (char *)v84 + 88 * v52 + 88;
                  v61 = (char *)v84 + 88 * v52;
                  v62 = sqrtf_0((float)(v59 * v59) + (float)(v58 * v58));
                  v63 = *(float *)this[2];
                  *(float *)&v82 = v58 * (float)(1.0 / v62);
                  *((float *)&v82 + 1) = v59 * (float)(1.0 / v62);
                  if ( (unsigned int)IsCloseRealZero(v62, v63) )
                    goto LABEL_72;
                  Mesh::MeshGraph::ComputeNormalizedLine(&v89[1], v53 + 4, &v82);
                  if ( (_DWORD)v90 != (_DWORD)v65 )
                    break;
                  if ( HIDWORD(v90) != (_DWORD)v65 )
                  {
                    v53[5] = v56[5];
                    goto LABEL_36;
                  }
LABEL_37:
                  v66 = *(_OWORD *)&v89[1];
                  *(_QWORD *)v55 = this[2];
                  v67 = v90;
                  *(_OWORD *)(v55 + 8) = v66;
                  *((_DWORD *)v55 + 8) = v65;
                  *((_QWORD *)v55 + 3) = v67;
                  *((_QWORD *)v55 + 6) = v65;
                  *((_QWORD *)v55 + 7) = v65;
                  *((_DWORD *)v55 + 16) = v65;
                  *(float *)&v66 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v55 + 8));
                  *((struct D2D_VECTOR_2F *)v55 + 9) = v85;
                  *((_QWORD *)v55 + 10) = v89[0];
                  *((_DWORD *)v55 + 9) = v66;
                  *(_QWORD *)v61 = v53;
                  *((_QWORD *)v61 + 1) = v55;
                  *((_DWORD *)v61 + 4) = v68;
                  *((_QWORD *)v61 + 9) = v68;
                  *((_QWORD *)v61 + 10) = v68;
                  *((_QWORD *)v61 + 7) = v68;
                  *((_QWORD *)v61 + 8) = v68;
                  *((_QWORD *)v61 + 4) = v53;
                  *((_QWORD *)v61 + 3) = v53;
                  *((_QWORD *)v61 + 6) = v53;
                  *((_QWORD *)v61 + 5) = v53;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v53 + 6), (struct Mesh::MeshEdge *)v61);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v55 + 40), (struct Mesh::MeshEdge *)v61);
                  *(_QWORD *)v60 = v56;
                  *((_DWORD *)v60 + 4) = 0;
                  *((_QWORD *)v60 + 9) = 0LL;
                  *((_QWORD *)v60 + 10) = 0LL;
                  *((_QWORD *)v60 + 7) = 0LL;
                  *((_QWORD *)v60 + 8) = 0LL;
                  *((_QWORD *)v60 + 1) = v55;
                  *((_QWORD *)v60 + 4) = v56;
                  *((_QWORD *)v60 + 3) = v56;
                  *((_QWORD *)v60 + 6) = v56;
                  *((_QWORD *)v60 + 5) = v56;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v56 + 6), (struct Mesh::MeshEdge *)v60);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v55 + 40), (struct Mesh::MeshEdge *)v60);
                  if ( *((char **)v55 + 6) == v61 )
                  {
                    *((_DWORD *)v55 + 8) |= 1u;
                    v69 = this[2];
                    *((_DWORD *)v61 + 4) |= 4u;
                    ++*((_DWORD *)v69 + 25);
                    v70 = this[2];
                    *((_DWORD *)v60 + 4) |= 2u;
                    ++*((_DWORD *)v70 + 24);
                    if ( (*(_BYTE *)(*((_QWORD *)v53 + 5) + 16LL) & 8) != 0 )
                    {
                      v74 = *((_QWORD *)v53 + 4);
LABEL_48:
                      Mesh::MeshGraph::AddPolygon(this[2], (struct Mesh::MeshEdge *)v74);
                    }
                  }
                  else
                  {
                    *((_DWORD *)v55 + 8) |= 2u;
                    v72 = this[2];
                    *((_DWORD *)v60 + 4) |= 8u;
                    ++*((_DWORD *)v72 + 25);
                    v73 = this[2];
                    *((_DWORD *)v61 + 4) |= 2u;
                    ++*((_DWORD *)v73 + 24);
                    v74 = *((_QWORD *)v56 + 4);
                    if ( (*(_BYTE *)(v74 + 16) & 4) != 0 )
                      goto LABEL_48;
                  }
                  *((_DWORD *)v55 + 8) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*(unsigned int *)(v99[0] + 4LL * *(_QWORD *)&v91.r));
                  if ( (v55[32] & 0xC) != 0 )
                    *((_DWORD *)this + 26) |= 0x40u;
                  x = v81.x;
                  v52 = v80[0] + 2;
                  v41 = v97[1];
                  v80[0] += 2;
                  if ( LODWORD(v81.x) >= v97[1] )
                  {
                    v40 = 0;
                    goto LABEL_43;
                  }
                }
                *v64 = *((_DWORD *)v56 + 4);
LABEL_36:
                v89[1] = *(_QWORD *)v64;
                goto LABEL_37;
              }
              v79 = 2058;
            }
          }
        }
        v78 = Vertex;
        goto LABEL_67;
      }
LABEL_72:
      v34 = 1;
      goto LABEL_44;
    }
    v14 = v5;
    if ( v8 != v9 )
      v14 = (__int64)v12 + 1;
    v15 = *(float *)((char *)&a3->y + (_QWORD)v10) - *((float *)this + 15);
    v16 = v11->x - *((float *)this + 14);
    v17 = v11->y - *((float *)this + 15);
    v18 = a3[v14].x - *((float *)this + 14);
    v19 = a3[v14].y - *((float *)this + 15);
    v86.x = *(float *)((char *)&a3->x + (_QWORD)v10) - *((float *)this + 14);
    v20 = v86.x - v16;
    v86.y = v15;
    v21 = v15 - v17;
    v81.x = v16;
    v81.y = v17;
    v85.x = v18;
    v85.y = v19;
    *(float *)v80 = v86.x - v16;
    *(float *)&v80[1] = v21;
    v22 = sqrtf_0((float)(v21 * v21) + (float)(v20 * v20));
    v23 = v18 - v16;
    v24 = v19 - v17;
    v87 = v23;
    v88 = v24;
    v25 = sqrtf_0((float)(v24 * v24) + (float)(v23 * v23));
    if ( v22 == 0.0 )
      goto LABEL_59;
    if ( v25 == 0.0 )
      goto LABEL_59;
    *(float *)v80 = v20 * (float)(1.0 / v22);
    v87 = v23 * (float)(1.0 / v25);
    *(float *)&v80[1] = v21 * (float)(1.0 / v22);
    v88 = v24 * (float)(1.0 / v25);
    Mesh::MeshGraph::ComputeNormalizedLine(&v89[1], &v81, v80);
    Mesh::MeshGraph::ComputeNormalizedLine(v94, &v81, &v87);
    Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)&v89[1]);
    v26 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)v94);
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - v26)) & _xmm);
    if ( v28 <= 0.000099999997
      || !(unsigned int)Mesh::MeshGraph::ComparePoints(this[2], &v81, &v86, (const struct Mesh::Line2d *)&v89[1])
      || !(unsigned int)Mesh::MeshGraph::ComparePoints(this[2], &v81, &v85, (const struct Mesh::Line2d *)v94) )
    {
LABEL_59:
      v31 = v84;
      --v13;
LABEL_18:
      v5 = (__int64)v83;
      goto LABEL_19;
    }
    if ( v7 + 1 < v7 )
      break;
    if ( v7 + 1 > v97[0] )
    {
      v75 = DynArrayImpl<0>::AddMultipleAndSet(v95, 8LL, 1LL, &v81);
      v76 = v75;
      if ( v75 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0xC0u);
      v34 = v76;
      if ( v76 < 0 )
        goto LABEL_63;
    }
    else
    {
      *(struct D2D_VECTOR_2F *)(v95[0] + 8LL * v7) = v81;
      v97[1] = v7 + 1;
    }
    v29 = (_DWORD *)((char *)v93 + 4 * v8);
    v30 = HIDWORD(v101) + 1;
    if ( (unsigned int)(HIDWORD(v101) + 1) < HIDWORD(v101) )
    {
      v76 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v34 = -2147024362;
LABEL_61:
      v79 = 2031;
      goto LABEL_64;
    }
    if ( v30 > (unsigned int)v101 )
    {
      v77 = DynArrayImpl<0>::AddMultipleAndSet(v99, 4LL, 1LL, v29);
      v76 = v77;
      if ( v77 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0xC0u);
      v34 = v76;
      if ( v76 < 0 )
        goto LABEL_61;
    }
    else
    {
      *(_DWORD *)(v99[0] + 4LL * HIDWORD(v101)) = *v29;
      HIDWORD(v101) = v30;
    }
    v31 = v84;
    v7 = v97[1];
    v10 = (char *)v84 + v92;
    if ( (int)v82 >= 0 )
      goto LABEL_18;
    v5 = (__int64)v12;
    LODWORD(v82) = v8;
    v83 = v12;
LABEL_19:
    v11 = (struct D2D_POINT_2F *)((char *)v31 + 8);
    ++v8;
    v12 = (struct Mesh::MeshLine *)((char *)v12 + 1);
    v84 = (struct Mesh::MeshEdge *)v11;
    if ( v8 >= a5 )
      goto LABEL_21;
    a3 = *(struct D2D_POINT_2F **)&v91.r;
    v9 = a5 - 1;
  }
  v76 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v34 = -2147024362;
LABEL_63:
  v79 = 2030;
LABEL_64:
  v78 = v76;
LABEL_67:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, v79);
LABEL_44:
  DynArrayImpl<1>::~DynArrayImpl<1>(v99);
  DynArrayImpl<1>::~DynArrayImpl<1>(v95);
  return v34;
}
