/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18001FD70
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 * Callees:
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18001E020 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x18001EE6C (-LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z.c)
 *     ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x18001F720 (-CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV-$ArrayRef@M@@2@Z.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x18001FB98 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@AEBUD2D_RECT_F@@HHV?$ArrayRef@M@@2V?$ArrayRef@URampPair@CoordMap@@@@3V4@4@Z @ 0x180118C3C (-ComputeUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@AEBUD2D_RECT_F@@HHV-$ArrayRef@M@@2V-$ArrayRef@URa.c)
 *     ?MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z @ 0x180118E18 (-MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z.c)
 *     ?MapTextureCoordsFromUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@HHHHV?$ArrayRef@M@@1@Z @ 0x180118F54 (-MapTextureCoordsFromUVOffsets@Mesh@@AEAAXPEBUContentInfo@1@HHHHV-$ArrayRef@M@@1@Z.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(Mesh *this, const struct Mesh::ContentInfo *a2, const __m128i *a3, int a4)
{
  int v4; // r12d
  struct Mesh::ContentInfo *v6; // r15
  int v8; // ebx
  float v9; // xmm3_4
  float v10; // xmm2_4
  float *v11; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  __m128 v14; // xmm1
  __int64 v15; // rax
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  float *v19; // rcx
  int v20; // r14d
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // r8
  int v24; // edx
  float v25; // xmm1_4
  float v26; // xmm2_4
  int v27; // esi
  float *v28; // rcx
  __int64 v29; // rax
  int v30; // r9d
  __int64 v31; // r8
  int v32; // edx
  float v33; // xmm1_4
  int RectangleMeshWorker; // eax
  struct Mesh::ContentInfo *v35; // rdx
  int v36; // r9d
  int v37; // ebx
  int v39; // eax
  int v40; // r12d
  _DWORD *v41; // r15
  int v42; // eax
  __int64 v43; // rcx
  int v44; // r9d
  int v45; // r9d
  int v46; // [rsp+28h] [rbp-E0h]
  unsigned int v47; // [rsp+28h] [rbp-E0h]
  _DWORD v49[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v50; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v52; // [rsp+80h] [rbp-88h] BYREF
  int v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h] BYREF
  int v55; // [rsp+98h] [rbp-70h]
  _DWORD *v56; // [rsp+A0h] [rbp-68h] BYREF
  int v57; // [rsp+A8h] [rbp-60h]
  float *v58; // [rsp+B0h] [rbp-58h] BYREF
  int v59; // [rsp+B8h] [rbp-50h]
  float *v60; // [rsp+C0h] [rbp-48h] BYREF
  int v61; // [rsp+C8h] [rbp-40h]
  _DWORD *v62; // [rsp+D0h] [rbp-38h] BYREF
  int v63; // [rsp+D8h] [rbp-30h]
  char *v64; // [rsp+E0h] [rbp-28h] BYREF
  int v65; // [rsp+E8h] [rbp-20h]
  char *v66; // [rsp+F0h] [rbp-18h] BYREF
  int v67; // [rsp+F8h] [rbp-10h]
  __int64 v68; // [rsp+100h] [rbp-8h] BYREF
  int v69; // [rsp+108h] [rbp+0h]
  __int64 *v70; // [rsp+110h] [rbp+8h] BYREF
  int v71; // [rsp+118h] [rbp+10h]
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h]
  float v73; // [rsp+188h] [rbp+80h] BYREF
  float v74; // [rsp+18Ch] [rbp+84h]
  struct Mesh::ContentInfo *v75; // [rsp+190h] [rbp+88h]
  int v76; // [rsp+1A0h] [rbp+98h]

  v76 = a4;
  v75 = a2;
  v4 = a4;
  v6 = a2;
  if ( (*((_BYTE *)this + 104) & 4) != 0 )
    goto LABEL_35;
LABEL_2:
  Mesh::Clear(this);
  v8 = 0;
  while ( v8 >= 0 )
  {
    v9 = *(float *)&a3->m128i_i32[3] - *(float *)&a3->m128i_i32[1];
    v10 = *(float *)&a3->m128i_i32[2] - *(float *)a3->m128i_i32;
    v11 = (float *)*((_QWORD *)this + 2);
    if ( v10 <= v9 )
      v12 = *(float *)&a3->m128i_i32[3] - *(float *)&a3->m128i_i32[1];
    else
      v12 = *(float *)&a3->m128i_i32[2] - *(float *)a3->m128i_i32;
    if ( v12 < 1.0 )
      v12 = FLOAT_1_0;
    v13 = v12 * 0.0000099999997;
    *v11 = v13;
    v11[1] = v13 * 2.0;
    v11[2] = v13 * v13;
    v14 = (__m128)_mm_loadu_si128(a3);
    v49[0] = 0;
    v73 = 0.0;
    v15 = *((_QWORD *)this + 2);
    v16 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0] - v14.m128_f32[0];
    *(float *)&v49[1] = v10;
    v74 = v9;
    v17 = _mm_shuffle_ps(v14, v14, 255).m128_f32[0] - _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    v18 = *(float *)(v15 + 4);
    if ( v10 <= v16 )
      v16 = v10;
    v19 = (float *)v49;
    v20 = 1;
    v21 = 1LL;
    v22 = 1;
    v23 = 1LL;
    v24 = 0;
    do
    {
      v25 = *(float *)&v49[v23];
      if ( v18 <= (float)(v25 - 0.0) )
      {
        if ( v18 > (float)(v16 - v25) )
          break;
        if ( v18 <= (float)(v25 - *v19) )
        {
          if ( v21 != v23 )
            *(float *)&v49[v21] = v25;
          ++v20;
          ++v21;
          ++v19;
          v24 = 0;
        }
        else
        {
          ++v24;
          *(float *)&v49[v21] = v25;
          if ( v24 == 1 )
          {
            ++v20;
            ++v21;
            ++v19;
          }
        }
      }
      ++v22;
      ++v23;
    }
    while ( v22 < 2 );
    if ( (float)(v16 - *(float *)&v49[v21 - 1]) >= v18 )
    {
      *(float *)&v49[v21] = v16;
      ++v20;
    }
    v26 = 0.0;
    if ( v73 >= 0.0 )
      v26 = v73;
    if ( v74 <= v17 )
      v17 = v74;
    if ( v26 > v73 )
      v73 = v26;
    v27 = 1;
    v28 = &v73;
    v29 = 1LL;
    v30 = 1;
    v31 = 1LL;
    v32 = 0;
    do
    {
      v33 = *(&v73 + v31);
      if ( v18 <= (float)(v33 - v26) )
      {
        if ( v18 > (float)(v17 - v33) )
          break;
        if ( v18 <= (float)(v33 - *v28) )
        {
          if ( v29 != v31 )
            *(&v73 + v29) = v33;
          ++v27;
          ++v29;
          ++v28;
          v32 = 0;
        }
        else
        {
          ++v32;
          *(&v73 + v29) = v33;
          if ( v32 == 1 )
          {
            ++v27;
            ++v29;
            ++v28;
          }
        }
      }
      ++v30;
      ++v31;
    }
    while ( v30 < 2 );
    if ( (float)(v17 - *((float *)&retaddr + v29 + 1)) >= v18 )
    {
      *(&v73 + v29) = v17;
      ++v27;
    }
    if ( v27 < 2 || v20 < 2 )
    {
      v8 = 1;
      goto LABEL_40;
    }
    v61 = v27;
    v60 = &v73;
    v57 = v20;
    v56 = v49;
    RectangleMeshWorker = Mesh::CreateRectangleMeshWorker(
                            (__int64 *)this,
                            (__int64)v6,
                            (float *)a3->m128i_i32,
                            v4,
                            v46,
                            (__int64 *)&v56,
                            (unsigned __int64 *)&v60);
    v8 = RectangleMeshWorker;
    if ( RectangleMeshWorker < 0 )
    {
      v47 = 398;
LABEL_69:
      v45 = RectangleMeshWorker;
      goto LABEL_71;
    }
    v37 = 0;
    if ( *((int *)this + 16) > 0 )
    {
      v40 = dword_1801A41D4;
      v41 = (_DWORD *)((char *)v6 + 16);
      v35 = v75;
      do
      {
        if ( *v41 == 1 )
        {
          if ( (v40 & 1) != 0 )
          {
            v42 = dword_1801A41E0;
            v43 = qword_1801A41D8;
          }
          else
          {
            v42 = 0;
            v40 |= 1u;
            v43 = 0LL;
            dword_1801A41E0 = 0;
            qword_1801A41D8 = 0LL;
          }
          v69 = v42;
          v55 = v42;
          v64 = &v50;
          v58 = &v73;
          v65 = 2;
          v62 = v49;
          v53 = 2;
          v52 = &v51;
          v68 = v43;
          v54 = v43;
          v59 = v27;
          v63 = v20;
          Mesh::ComputeUVOffsets(
            (_DWORD)this,
            (_DWORD)v35,
            (_DWORD)a3,
            v37,
            v46,
            (__int64)&v62,
            (__int64)&v58,
            (__int64)&v54,
            (__int64)&v68,
            (__int64)&v52,
            (__int64)&v64);
          v66 = &v50;
          v67 = 2;
          v70 = &v51;
          v71 = 2;
          Mesh::MapTextureCoordsFromUVOffsets(
            (_DWORD)this,
            (_DWORD)v75,
            v37,
            v44,
            v20,
            v27,
            (__int64)&v70,
            (__int64)&v66);
          v35 = v75;
        }
        else if ( *v41 == 2 )
        {
          Mesh::MapTextureCoordsFromBitmapBrush(this, v35, v37, v36, *((_DWORD *)this + 3));
        }
        ++v37;
        v41 += 12;
      }
      while ( v37 < *((_DWORD *)this + 16) );
      v6 = v75;
      dword_1801A41D4 = v40;
      v4 = v76;
    }
    RectangleMeshWorker = Mesh::LookupCachedGridGraph(this, (int)v35, (struct Mesh::MeshGraph **)this + 3);
    v8 = RectangleMeshWorker;
    if ( (*((_BYTE *)this + 104) & 4) == 0 )
    {
      if ( RectangleMeshWorker >= 0 )
        return 0;
      v47 = 464;
      goto LABEL_69;
    }
LABEL_35:
    v39 = Mesh::GrowPreallocatedGraphObjects(this);
    v8 = v39;
    if ( v39 >= 0 )
    {
      *((_DWORD *)this + 26) &= ~4u;
      goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x35u);
  }
  v47 = 361;
  v45 = v8;
LABEL_71:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, v47);
LABEL_40:
  if ( v8 )
    *((_DWORD *)this + 26) &= ~1u;
  return (unsigned int)v8;
}
