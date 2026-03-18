/*
 * XREFs of ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009D74
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180009100 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@@Z @ 0x1800094C4 (-Init@Mesh@@AEAAJPEBUContentInfo@1@@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009594 (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeMeshConstants@MeshGraph@Mesh@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800710B8 (-ComputeMeshConstants@MeshGraph@Mesh@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z @ 0x1800FFDD0 (-MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z.c)
 */

__int64 __fastcall Mesh::CreatePolygonMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        unsigned int a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int128 x_low; // xmm5
  FLOAT *p_y; // rax
  __int128 y_low; // xmm4
  __m128 v14; // xmm6
  __m128 v15; // xmm3
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  float v19; // xmm4_4
  __int64 v20; // rax
  __m128 v21; // xmm0
  float v22; // xmm5_4
  __m128 v23; // xmm1
  float v24; // xmm1_4
  int v25; // eax
  int v26; // r9d
  int v27; // ebx
  _DWORD *v29; // rbp
  D2D_RECT_F v30; // [rsp+30h] [rbp-38h] BYREF

  do
  {
    v9 = Mesh::Init(this, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x336u);
      goto LABEL_19;
    }
    x_low = LODWORD(a3->x);
    p_y = &a3->y;
    y_low = LODWORD(a3->y);
    v14 = (__m128)x_low;
    v30.left = a3->x;
    v15 = (__m128)y_low;
    LODWORD(v30.bottom) = y_low;
    LODWORD(v30.top) = y_low;
    LODWORD(v30.right) = x_low;
    if ( (int)a5 > 0 )
    {
      v16 = a5;
      do
      {
        v17 = *((unsigned int *)p_y - 1);
        if ( *(float *)&v17 <= *(float *)&x_low )
        {
          *(FLOAT *)&x_low = *(p_y - 1);
          LODWORD(v30.left) = x_low;
        }
        v18 = *(unsigned int *)p_y;
        if ( *(float *)&v18 <= *(float *)&y_low )
        {
          *(FLOAT *)&y_low = *p_y;
          v30.top = *p_y;
        }
        if ( v14.m128_f32[0] <= *(float *)&v17 )
        {
          v14 = (__m128)v17;
          LODWORD(v30.right) = v17;
        }
        if ( v15.m128_f32[0] <= *(float *)&v18 )
        {
          v15 = (__m128)v18;
          LODWORD(v30.bottom) = v18;
        }
        p_y += 2;
        --v16;
      }
      while ( v16 );
    }
    Mesh::MeshGraph::ComputeMeshConstants(*((Mesh::MeshGraph **)this + 2), &v30);
    v20 = *((_QWORD *)this + 2);
    v21 = v14;
    v23 = v15;
    v21.m128_f32[0] = (float)(v14.m128_f32[0] + v22) * 0.5;
    v23.m128_f32[0] = (float)(v15.m128_f32[0] + v19) * 0.5;
    *((_QWORD *)this + 7) = _mm_unpacklo_ps(v21, v23).m128_u64[0];
    v24 = *(float *)(v20 + 4);
    if ( v24 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14.m128_f32[0] - v22)) & _xmm)
      && v24 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15.m128_f32[0] - v19)) & _xmm) )
    {
      v10 = 1;
      goto LABEL_22;
    }
    v25 = Mesh::BuildPolygon((Mesh::MeshGraph **)this, a2, a3, a4, a5);
    v10 = v25;
  }
  while ( (*((_BYTE *)this + 104) & 4) != 0 );
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x352u);
  }
  else if ( v25 != 1 )
  {
    v27 = 0;
    if ( *((int *)a2 + 28) > 0 )
    {
      v29 = (_DWORD *)((char *)a2 + 16);
      do
      {
        if ( *v29 == 2 )
          Mesh::MapTextureCoordsFromBitmapBrush(this, a2, v27, v26, *((_DWORD *)this + 3));
        ++v27;
        v29 += 12;
      }
      while ( v27 < *((_DWORD *)a2 + 28) );
    }
    *((_DWORD *)this + 26) &= 0xFFFFFFDD;
    v10 = 0;
    *((_DWORD *)this + 16) = *((_DWORD *)a2 + 28);
  }
LABEL_19:
  if ( !v10 )
    return v10;
LABEL_22:
  *((_DWORD *)this + 26) &= ~1u;
  return v10;
}
