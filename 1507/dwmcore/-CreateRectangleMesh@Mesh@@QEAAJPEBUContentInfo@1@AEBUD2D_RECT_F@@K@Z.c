/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeMeshConstants@MeshGraph@Mesh@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800710B8 (-ComputeMeshConstants@MeshGraph@Mesh@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18007416C (-Clear@Mesh@@AEAAXXZ.c)
 *     ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x180074DB0 (-LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z.c)
 *     ?MergeRectangleMeshSplits@Mesh@@AEAAXMMMPEAV?$ArrayRef@M@@PEAH@Z @ 0x180075658 (-MergeRectangleMeshSplits@Mesh@@AEAAXMMMPEAV-$ArrayRef@M@@PEAH@Z.c)
 *     ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x180075724 (-CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV-$ArrayRef@M@@2@Z.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800759D8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 *     ?ComputeUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@AEBUD2D_RECT_F@@HHV?$ArrayRef@M@@2V?$ArrayRef@URampPair@CoordMap@@@@3V4@4@Z @ 0x1800FFBF4 (-ComputeUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@AEBUD2D_RECT_F@@HHV-$ArrayRef@M@@2V-$ArrayRef@URa.c)
 *     ?MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z @ 0x1800FFDD0 (-MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z.c)
 *     ?MapTextureCoordsFromUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@HHHHV?$ArrayRef@M@@1@Z @ 0x1800FFF0C (-MapTextureCoordsFromUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@HHHHV-$ArrayRef@M@@1@Z.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(Mesh *this, const __m128i *a2, const struct D2D_RECT_F *a3, int a4)
{
  int v4; // esi
  int v8; // ebx
  __m128 v9; // xmm6
  float v10; // xmm0_4
  float v11; // xmm2_4
  __int64 v12; // rax
  float v13; // xmm1_4
  __int64 v14; // rcx
  __int64 v15; // rcx
  float v16; // xmm5_4
  int v17; // r15d
  int RectangleMeshWorker; // eax
  int v19; // edx
  int v20; // r9d
  int v21; // ebx
  int v23; // eax
  int v24; // r14d
  const __m128i *v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // r9d
  int v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  _DWORD *v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+68h] [rbp-98h]
  _DWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v36[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v37; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+88h] [rbp-78h]
  char v39; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+98h] [rbp-68h] BYREF
  char v41; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v42; // [rsp+A8h] [rbp-58h] BYREF
  int v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  int v45; // [rsp+C0h] [rbp-40h]
  _DWORD *v46; // [rsp+C8h] [rbp-38h] BYREF
  int v47; // [rsp+D0h] [rbp-30h]
  _DWORD *v48; // [rsp+D8h] [rbp-28h] BYREF
  int v49; // [rsp+E0h] [rbp-20h]
  char *v50; // [rsp+E8h] [rbp-18h] BYREF
  int v51; // [rsp+F0h] [rbp-10h]
  _DWORD *v52; // [rsp+F8h] [rbp-8h] BYREF
  int v53; // [rsp+100h] [rbp+0h]
  char *v54; // [rsp+108h] [rbp+8h] BYREF
  int v55; // [rsp+110h] [rbp+10h]
  char *v56; // [rsp+118h] [rbp+18h] BYREF
  int v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h] BYREF
  int v59; // [rsp+130h] [rbp+30h]
  char *v60; // [rsp+138h] [rbp+38h] BYREF
  int v61; // [rsp+140h] [rbp+40h]
  int v62; // [rsp+1A0h] [rbp+A0h] BYREF
  int v63; // [rsp+1B8h] [rbp+B8h]

  v63 = a4;
  v4 = a4;
  if ( (*((_BYTE *)this + 104) & 4) != 0 )
    goto LABEL_12;
LABEL_2:
  Mesh::Clear(this);
  v8 = 0;
  while ( v8 >= 0 )
  {
    Mesh::MeshGraph::ComputeMeshConstants(*((Mesh::MeshGraph **)this + 2), a3);
    v9 = (__m128)_mm_loadu_si128((const __m128i *)a3);
    v35[0] = 0;
    v10 = a3->bottom - a3->top;
    v11 = a3->right - a3->left;
    v36[0] = 0;
    v33 = v35;
    *(float *)&v36[1] = v10;
    v37 = v36;
    v12 = *((_QWORD *)this + 2);
    *(float *)&v35[1] = v11;
    v34 = 2;
    v13 = *(float *)(v12 + 4);
    v38 = 2;
    Mesh::MergeRectangleMeshSplits(
      v14,
      v13,
      0.0,
      _mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v9.m128_f32[0],
      (__int64)&v33,
      &v62);
    Mesh::MergeRectangleMeshSplits(
      v15,
      v16,
      0.0,
      _mm_shuffle_ps(v9, v9, 255).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0],
      (__int64)&v37,
      &v40);
    if ( v34 < 2 || (v17 = v38, v38 < 2) )
    {
      v8 = 1;
      goto LABEL_15;
    }
    v46 = v37;
    v42 = v33;
    v43 = v34;
    v47 = v38;
    RectangleMeshWorker = Mesh::CreateRectangleMeshWorker(
                            (__int64 *)this,
                            a2,
                            &a3->left,
                            v4,
                            v30,
                            (__int64)&v42,
                            (__int64)&v46);
    v8 = RectangleMeshWorker;
    if ( RectangleMeshWorker < 0 )
    {
      v32 = 398;
LABEL_30:
      v29 = RectangleMeshWorker;
      goto LABEL_32;
    }
    v21 = 0;
    if ( *((int *)this + 16) > 0 )
    {
      v24 = dword_18019655C;
      v25 = a2 + 1;
      do
      {
        if ( v25->m128i_i32[0] == 1 )
        {
          if ( (v24 & 1) != 0 )
          {
            v26 = dword_180196568;
            v27 = qword_180196560;
          }
          else
          {
            v26 = 0;
            v24 |= 1u;
            v27 = 0LL;
            dword_180196568 = 0;
            qword_180196560 = 0LL;
          }
          v59 = v26;
          v45 = v26;
          v48 = v37;
          v53 = v34;
          v52 = v33;
          v54 = &v39;
          v55 = 2;
          v51 = 2;
          v50 = &v41;
          v58 = v27;
          v44 = v27;
          v49 = v17;
          Mesh::ComputeUVOffsets(
            (_DWORD)this,
            (_DWORD)a2,
            (_DWORD)a3,
            v21,
            v31,
            (__int64)&v52,
            (__int64)&v48,
            (__int64)&v44,
            (__int64)&v58,
            (__int64)&v50,
            (__int64)&v54);
          v56 = &v39;
          v57 = 2;
          v60 = &v41;
          v61 = 2;
          Mesh::MapTextureCoordsFromUVOffsets(
            (_DWORD)this,
            (_DWORD)a2,
            v21,
            v28,
            v34,
            v17,
            (__int64)&v60,
            (__int64)&v56);
        }
        else if ( v25->m128i_i32[0] == 2 )
        {
          Mesh::MapTextureCoordsFromBitmapBrush(
            this,
            (const struct Mesh::ContentInfo *)a2,
            v21,
            v20,
            *((_DWORD *)this + 3));
        }
        ++v21;
        v25 += 3;
      }
      while ( v21 < *((_DWORD *)this + 16) );
      v4 = v63;
      dword_18019655C = v24;
    }
    RectangleMeshWorker = Mesh::LookupCachedGridGraph(this, v19, (struct Mesh::MeshGraph **)this + 3);
    v8 = RectangleMeshWorker;
    if ( (*((_BYTE *)this + 104) & 4) == 0 )
    {
      if ( RectangleMeshWorker >= 0 )
        return 0;
      v32 = 464;
      goto LABEL_30;
    }
LABEL_12:
    v23 = Mesh::GrowPreallocatedGraphObjects(this);
    v8 = v23;
    if ( v23 >= 0 )
    {
      *((_DWORD *)this + 26) &= ~4u;
      goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x35u);
  }
  v32 = 361;
  v29 = v8;
LABEL_32:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, v32);
LABEL_15:
  if ( v8 )
    *((_DWORD *)this + 26) &= ~1u;
  return (unsigned int)v8;
}
