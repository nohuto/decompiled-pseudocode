/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1800024B8 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x180001C50 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180002698 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180002774 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z @ 0x1800027C8 (-ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x1800A31E8 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x1800A39D0 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x1800A39F8 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1800A3A28 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1800A3A58 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800B0D94 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh::MeshGraph **this,
        const struct D2D_POINT_2F *a2,
        const enum D2D1_EDGE_FLAGS *a3,
        int a4,
        const struct _D3DCOLORVALUE *a5)
{
  unsigned int v5; // esi
  __int64 x_low; // r8
  __int64 v7; // rdx
  int v9; // r14d
  int v11; // r9d
  struct Mesh::MeshEdge *v12; // r12
  char *v13; // rbx
  float *v14; // rcx
  int v15; // r15d
  __int64 v16; // rax
  FLOAT v17; // xmm9_4
  FLOAT v18; // xmm6_4
  FLOAT v19; // xmm7_4
  FLOAT v20; // xmm10_4
  FLOAT v21; // xmm11_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm12_4
  float v25; // xmm10_4
  float v26; // xmm11_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm4_4
  float v30; // xmm0_4
  _DWORD *v31; // r9
  struct Mesh::MeshVertex *v32; // rcx
  int Vertex; // eax
  int v34; // edx
  int v35; // ebx
  Mesh::MeshGraph *v36; // rcx
  Mesh::MeshGraph *v37; // rcx
  Mesh::MeshGraph *v38; // rcx
  unsigned int v39; // ecx
  __int64 v40; // r11
  int v41; // esi
  __m128i v42; // xmm2
  int v43; // r10d
  char *v44; // r9
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  unsigned int v47; // r9d
  _QWORD *v48; // r12
  char *v49; // r13
  __int64 v50; // r11
  char *v51; // rsi
  __int64 v52; // rcx
  float *v53; // rbx
  float v54; // xmm7_4
  float v55; // xmm6_4
  char *v56; // r15
  float *v57; // rax
  char *v58; // r14
  float v59; // xmm7_4
  float v60; // xmm6_4
  float v61; // xmm0_4
  unsigned int v62; // xmm7_4
  unsigned int v63; // xmm6_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  __int128 v66; // xmm0
  __int64 v67; // xmm1_8
  __int64 v68; // rdx
  Mesh::MeshGraph *v69; // rax
  Mesh::MeshGraph *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  Mesh::MeshGraph *v74; // rax
  Mesh::MeshGraph *v75; // rax
  __int64 v76; // rdx
  int v77; // eax
  int v78; // r9d
  int v79; // eax
  unsigned int v80; // [rsp+28h] [rbp-E0h]
  int v81[2]; // [rsp+38h] [rbp-D0h] BYREF
  D2D_VECTOR_2F v82; // [rsp+40h] [rbp-C8h] BYREF
  struct Mesh::MeshVertex *v83; // [rsp+48h] [rbp-C0h] BYREF
  struct Mesh::MeshLine *v84; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshEdge *v85; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_VECTOR_2F v86; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v87; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+70h] [rbp-98h]
  _QWORD v89[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v90; // [rsp+90h] [rbp-78h]
  struct D2D_VECTOR_2F v91; // [rsp+98h] [rbp-70h] BYREF
  const enum D2D1_EDGE_FLAGS *v92; // [rsp+A0h] [rbp-68h]
  _BYTE v93[32]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v94[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v95; // [rsp+D8h] [rbp-30h]
  unsigned int v96; // [rsp+DCh] [rbp-2Ch]
  unsigned int v97; // [rsp+E0h] [rbp-28h]
  _BYTE v98[32]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v99[2]; // [rsp+108h] [rbp+0h] BYREF
  int v100; // [rsp+118h] [rbp+10h]
  int v101[3]; // [rsp+11Ch] [rbp+14h]
  _BYTE v102[64]; // [rsp+128h] [rbp+20h] BYREF

  v92 = a3;
  v99[0] = v102;
  v5 = 0;
  v97 = 0;
  v99[1] = v102;
  x_low = (__int64)a2;
  v89[0] = a2;
  v7 = -1LL;
  v94[0] = v98;
  v87 = -1LL;
  v9 = 0;
  v94[1] = v98;
  v100 = 8;
  *(_QWORD *)v101 = 8LL;
  v95 = 8;
  v96 = 8;
  if ( a4 <= 0 )
    goto LABEL_71;
  v11 = a4 - 1;
  v12 = 0LL;
  v13 = (char *)(8LL * v11);
  v14 = (float *)x_low;
  v85 = (struct Mesh::MeshEdge *)-1LL;
  v88 = -x_low;
  v15 = a4;
  v83 = (struct Mesh::MeshVertex *)x_low;
  while ( 1 )
  {
    if ( v15 < 3 )
    {
LABEL_21:
      if ( v5 >= 3 )
      {
        Vertex = Mesh::AllocateVertex((Mesh *)this, v5, v81);
        v35 = Vertex;
        if ( Vertex < 0 )
        {
          v80 = 1216;
        }
        else
        {
          v36 = this[2];
          v83 = 0LL;
          Vertex = Mesh::MeshGraph::AllocateVertex(v36, v34, &v83);
          v35 = Vertex;
          if ( Vertex < 0 )
          {
            v80 = 1219;
          }
          else
          {
            v37 = this[2];
            v84 = 0LL;
            Vertex = Mesh::MeshGraph::AllocateLine(v37, v101[1], &v84);
            v35 = Vertex;
            if ( Vertex < 0 )
            {
              v80 = 1222;
            }
            else
            {
              v38 = this[2];
              v85 = 0LL;
              Vertex = Mesh::MeshGraph::AllocateEdge(v38, 2 * v101[1], &v85);
              v35 = Vertex;
              if ( Vertex >= 0 )
              {
                v39 = v101[1];
                v40 = 0LL;
                if ( v101[1] )
                {
                  v41 = v81[0];
                  do
                  {
                    v42 = _mm_loadu_si128((const __m128i *)a5);
                    v43 = v40 + v41;
                    v44 = (char *)v83 + 64 * (unsigned __int64)(unsigned int)v40;
                    v7 = (__int64)*this + 40 * (int)v40 + 40 * v41;
                    v45 = (__m128)*(unsigned int *)(v99[0] + 8 * v40 + 4);
                    v46 = (__m128)*(unsigned int *)(v99[0] + 8 * v40);
                    v40 = (unsigned int)(v40 + 1);
                    *(_QWORD *)v7 = _mm_unpacklo_ps(v46, v45).m128_u64[0];
                    *(__m128i *)((char *)*this + 40 * v43 + 8) = v42;
                    *(_DWORD *)v44 = v43;
                    *((_QWORD *)v44 + 1) = v7;
                    *((_QWORD *)v44 + 3) = 0LL;
                    *((_QWORD *)v44 + 4) = 0LL;
                    *((_DWORD *)v44 + 10) = 0;
                    *((_DWORD *)v44 + 13) = 0;
                    *((_DWORD *)v44 + 12) = 0;
                    v39 = v101[1];
                  }
                  while ( (unsigned int)v40 < v101[1] );
                }
                x_low = 0LL;
                if ( !v39 )
                {
LABEL_42:
                  v35 = 0;
                  *((_QWORD *)this[2] + 8) = v84;
                  goto LABEL_43;
                }
                v47 = 0;
                v81[0] = 0;
                while ( 1 )
                {
                  LODWORD(v82.x) = x_low + 1;
                  v48 = (_QWORD *)((char *)v83 + 64 * (unsigned __int64)(((int)x_low + 1) % v39));
                  v49 = (char *)v83 + 64 * (unsigned __int64)(unsigned int)x_low;
                  v50 = ((int)x_low + 1) % v39;
                  v51 = (char *)v84 + 88 * (unsigned int)x_low;
                  v88 = (unsigned int)x_low;
                  if ( (_DWORD)x_low )
                    v52 = (unsigned int)(x_low - 1);
                  else
                    v52 = v39 - 1;
                  v86 = (struct D2D_VECTOR_2F)((char *)v84 + 88 * v52);
                  v53 = (float *)*((_QWORD *)v49 + 1);
                  v54 = *v53;
                  v55 = v53[1];
                  v89[0] = (char *)v84 + 88 * v50;
                  v56 = (char *)v85 + 88 * v47 + 88;
                  v57 = (float *)v48[1];
                  v58 = (char *)v85 + 88 * v47;
                  v59 = v54 - *v57;
                  v60 = v55 - v57[1];
                  v61 = sqrtf_0((float)(v60 * v60) + (float)(v59 * v59));
                  *(float *)&v62 = v59 * (float)(1.0 / v61);
                  *(float *)&v63 = v60 * (float)(1.0 / v61);
                  v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v61) & _xmm);
                  v65 = *(float *)this[2];
                  v87 = __PAIR64__(v63, v62);
                  if ( v65 > v64 )
                    goto LABEL_71;
                  Mesh::MeshGraph::ComputeNormalizedLine(&v89[1], v53, &v87);
                  if ( (_DWORD)v90 )
                    break;
                  if ( HIDWORD(v90) )
                  {
                    v53[1] = *(float *)(v48[1] + 4LL);
                    goto LABEL_36;
                  }
LABEL_37:
                  v66 = *(_OWORD *)&v89[1];
                  *(_QWORD *)v51 = this[2];
                  v67 = v90;
                  *(_OWORD *)(v51 + 8) = v66;
                  *((_DWORD *)v51 + 8) = 0;
                  *((_QWORD *)v51 + 3) = v67;
                  *((_QWORD *)v51 + 6) = 0LL;
                  *((_QWORD *)v51 + 7) = 0LL;
                  *((_DWORD *)v51 + 16) = 0;
                  *(float *)&v66 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v51 + 8));
                  *((struct D2D_VECTOR_2F *)v51 + 9) = v86;
                  *((_QWORD *)v51 + 10) = v89[0];
                  *((_DWORD *)v51 + 9) = v66;
                  *((_DWORD *)v58 + 4) = v68;
                  *((_QWORD *)v58 + 9) = v68;
                  *((_QWORD *)v58 + 10) = v68;
                  *((_QWORD *)v58 + 7) = v68;
                  *((_QWORD *)v58 + 8) = v68;
                  *(_QWORD *)v58 = v49;
                  *((_QWORD *)v58 + 1) = v51;
                  *((_QWORD *)v58 + 4) = v49;
                  *((_QWORD *)v58 + 3) = v49;
                  *((_QWORD *)v58 + 6) = v49;
                  *((_QWORD *)v58 + 5) = v49;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v49 + 16), (struct Mesh::MeshEdge *)v58);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v51 + 40), (struct Mesh::MeshEdge *)v58);
                  *(_QWORD *)v56 = v48;
                  *((_DWORD *)v56 + 4) = 0;
                  *((_QWORD *)v56 + 9) = 0LL;
                  *((_QWORD *)v56 + 10) = 0LL;
                  *((_QWORD *)v56 + 7) = 0LL;
                  *((_QWORD *)v56 + 8) = 0LL;
                  *((_QWORD *)v56 + 1) = v51;
                  *((_QWORD *)v56 + 4) = v48;
                  *((_QWORD *)v56 + 3) = v48;
                  *((_QWORD *)v56 + 6) = v48;
                  *((_QWORD *)v56 + 5) = v48;
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v48 + 2), (struct Mesh::MeshEdge *)v56);
                  Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v51 + 40), (struct Mesh::MeshEdge *)v56);
                  if ( *((char **)v51 + 6) == v58 )
                  {
                    *((_DWORD *)v51 + 8) |= 1u;
                    v69 = this[2];
                    *((_DWORD *)v58 + 4) |= 4u;
                    ++*((_DWORD *)v69 + 25);
                    v70 = this[2];
                    *((_DWORD *)v56 + 4) |= 2u;
                    ++*((_DWORD *)v70 + 24);
                    if ( (*(_BYTE *)(*((_QWORD *)v49 + 4) + 16LL) & 8) != 0 )
                    {
                      Vertex = Mesh::MeshGraph::AddPolygon(this[2], *((struct Mesh::MeshEdge **)v49 + 3));
                      v35 = Vertex;
                      if ( Vertex < 0 )
                      {
                        v80 = 1305;
                        goto LABEL_64;
                      }
                    }
                  }
                  else
                  {
                    *((_DWORD *)v51 + 8) |= 2u;
                    v74 = this[2];
                    *((_DWORD *)v56 + 4) |= 8u;
                    ++*((_DWORD *)v74 + 25);
                    v75 = this[2];
                    *((_DWORD *)v58 + 4) |= 2u;
                    ++*((_DWORD *)v75 + 24);
                    v76 = v48[3];
                    if ( (*(_BYTE *)(v76 + 16) & 4) != 0 )
                    {
                      Vertex = Mesh::MeshGraph::AddPolygon(this[2], (struct Mesh::MeshEdge *)v76);
                      v35 = Vertex;
                      if ( Vertex < 0 )
                      {
                        v80 = 1317;
                        goto LABEL_64;
                      }
                    }
                  }
                  *((_DWORD *)v51 + 8) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*(unsigned int *)(v94[0] + 4 * v88));
                  if ( (v51[32] & 0xC) != 0 )
                    *((_DWORD *)this + 48) |= 0x40u;
                  x_low = LODWORD(v82.x);
                  v47 = v81[0] + 2;
                  v39 = v101[1];
                  v81[0] += 2;
                  if ( LODWORD(v82.x) >= v101[1] )
                    goto LABEL_42;
                }
                *v53 = *(float *)v48[1];
LABEL_36:
                v89[1] = **((_QWORD **)v49 + 1);
                goto LABEL_37;
              }
              v80 = 1225;
            }
          }
        }
LABEL_64:
        v78 = Vertex;
        goto LABEL_65;
      }
LABEL_71:
      v35 = 1;
      goto LABEL_43;
    }
    v16 = v7;
    if ( v9 != v11 )
      v16 = (__int64)v12 + 1;
    v17 = *(float *)&v13[x_low + 4] - *((float *)this + 11);
    v18 = *v14 - *((float *)this + 10);
    v19 = v14[1] - *((float *)this + 11);
    v20 = *(float *)(x_low + 8 * v16) - *((float *)this + 10);
    v21 = *(float *)(x_low + 8 * v16 + 4) - *((float *)this + 11);
    v91.x = *(float *)&v13[x_low] - *((float *)this + 10);
    v22 = v91.x - v18;
    v91.y = v17;
    v23 = v17 - v19;
    v82.x = v18;
    v82.y = v19;
    v86.x = v20;
    v86.y = v21;
    *(float *)v81 = v91.x - v18;
    *(float *)&v81[1] = v23;
    v24 = sqrtf_0((float)(v23 * v23) + (float)(v22 * v22));
    v25 = v20 - v18;
    v26 = v21 - v19;
    v84 = (struct Mesh::MeshLine *)__PAIR64__(LODWORD(v26), LODWORD(v25));
    v27 = sqrtf_0((float)(v26 * v26) + (float)(v25 * v25));
    if ( v24 == 0.0 )
      goto LABEL_62;
    if ( v27 == 0.0 )
      goto LABEL_62;
    *(float *)v81 = v22 * (float)(1.0 / v24);
    *(float *)&v84 = v25 * (float)(1.0 / v27);
    *(float *)&v81[1] = v23 * (float)(1.0 / v24);
    *((float *)&v84 + 1) = v26 * (float)(1.0 / v27);
    Mesh::MeshGraph::ComputeNormalizedLine(&v89[1], &v82, v81);
    Mesh::MeshGraph::ComputeNormalizedLine(v93, &v82, &v84);
    Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)&v89[1]);
    v28 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)v93);
    v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v29 - v28)) & _xmm);
    if ( v30 <= 0.000099999997
      || !(unsigned int)Mesh::MeshGraph::ComparePoints(this[2], &v82, &v91, (const struct Mesh::Line2d *)&v89[1])
      || !(unsigned int)Mesh::MeshGraph::ComparePoints(this[2], &v82, &v86, (const struct Mesh::Line2d *)v93) )
    {
LABEL_62:
      v32 = v83;
      --v15;
LABEL_18:
      v7 = (__int64)v85;
      goto LABEL_19;
    }
    if ( v5 + 1 < v5 )
    {
      v35 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v5 + 1 <= v101[0] )
      {
        *(D2D_VECTOR_2F *)(v99[0] + 8LL * v5) = v82;
        v101[1] = v5 + 1;
        goto LABEL_14;
      }
      v77 = DynArrayImpl<0>::AddMultipleAndSet(v99, 8LL, 1LL, &v82);
      v35 = v77;
      if ( v77 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0xC0u);
    }
    if ( v35 < 0 )
    {
      v80 = 1197;
      goto LABEL_56;
    }
LABEL_14:
    v31 = (_DWORD *)((char *)v92 + 4 * v9);
    x_low = v97 + 1;
    if ( (unsigned int)x_low < v97 )
    {
      v35 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( (unsigned int)x_low <= v96 )
      {
        *(_DWORD *)(v94[0] + 4LL * v97) = *v31;
        v97 = x_low;
        goto LABEL_17;
      }
      v79 = DynArrayImpl<0>::AddMultipleAndSet(v94, 4LL, 1LL, v31);
      v35 = v79;
      if ( v79 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0xC0u);
    }
    if ( v35 < 0 )
      break;
LABEL_17:
    v32 = v83;
    v5 = v101[1];
    v13 = (char *)v83 + v88;
    if ( (v87 & 0x80000000) == 0LL )
      goto LABEL_18;
    v7 = (__int64)v12;
    LODWORD(v87) = v9;
    v85 = v12;
LABEL_19:
    v14 = (float *)((char *)v32 + 8);
    ++v9;
    v12 = (struct Mesh::MeshEdge *)((char *)v12 + 1);
    v83 = (struct Mesh::MeshVertex *)v14;
    if ( v9 >= a4 )
      goto LABEL_21;
    x_low = v89[0];
    v11 = a4 - 1;
  }
  v80 = 1198;
LABEL_56:
  v78 = v35;
LABEL_65:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, v80);
LABEL_43:
  DynArrayImpl<1>::~DynArrayImpl<1>(v94, v7, x_low);
  DynArrayImpl<1>::~DynArrayImpl<1>(v99, v71, v72);
  return (unsigned int)v35;
}
