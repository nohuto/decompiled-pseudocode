/*
 * XREFs of ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180018310
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180017490 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@@Z @ 0x1800179FC (-Init@Mesh@@AEAAJPEBUContentInfo@1@@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?ComputeMeshConstants@MeshGraph@Mesh@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800185C0 (-ComputeMeshConstants@MeshGraph@Mesh@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z @ 0x180118E18 (-MapTextureCoordsFromBitmapBrush@Mesh@@AEAAXPEBUContentInfo@1@HHH@Z.c)
 */

__int64 __fastcall Mesh::CreatePolygonMesh(
        Mesh *this,
        const struct Mesh::ContentInfo *a2,
        struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        unsigned int a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int128 x_low; // xmm6
  FLOAT *p_y; // rax
  float y; // xmm5_4
  __m128 v14; // xmm7
  float v15; // xmm4_4
  __int64 v16; // rcx
  __int128 v17; // xmm0
  float v18; // xmm1_4
  __int64 v19; // rcx
  __m128 v20; // xmm1
  __m128 v21; // xmm4
  __m128 v22; // xmm2
  float v23; // xmm5_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  int v27; // eax
  int v28; // r9d
  int v29; // ebx
  _DWORD *v31; // rbp
  D2D_RECT_F v32; // [rsp+30h] [rbp-48h] BYREF

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
    y = a3->y;
    v14 = (__m128)x_low;
    v32.left = a3->x;
    v15 = y;
    v32.bottom = y;
    v32.top = y;
    LODWORD(v32.right) = x_low;
    if ( (int)a5 > 0 )
    {
      v16 = a5;
      do
      {
        v17 = *((unsigned int *)p_y - 1);
        if ( *(float *)&v17 <= *(float *)&x_low )
        {
          *(FLOAT *)&x_low = *(p_y - 1);
          LODWORD(v32.left) = x_low;
        }
        v18 = *p_y;
        if ( *p_y <= y )
        {
          y = *p_y;
          v32.top = *p_y;
        }
        if ( v14.m128_f32[0] <= *(float *)&v17 )
        {
          v14 = (__m128)v17;
          LODWORD(v32.right) = v17;
        }
        if ( v15 <= v18 )
        {
          v15 = v18;
          v32.bottom = v18;
        }
        p_y += 2;
        --v16;
      }
      while ( v16 );
    }
    Mesh::MeshGraph::ComputeMeshConstants(*((Mesh::MeshGraph **)this + 2), &v32);
    v19 = *((_QWORD *)this + 2);
    v20 = v14;
    v22 = v21;
    v20.m128_f32[0] = (float)(v14.m128_f32[0] + *(float *)&x_low) * 0.5;
    v22.m128_f32[0] = (float)(v21.m128_f32[0] + v23) * 0.5;
    *((_QWORD *)this + 7) = _mm_unpacklo_ps(v20, v22).m128_u64[0];
    v24 = *(float *)(v19 + 4);
    if ( (unsigned int)IsCloseRealZero(v14.m128_f32[0] - *(float *)&x_low, v24)
      && (unsigned int)IsCloseRealZero(v25 - v26, v24) )
    {
      v10 = 1;
      goto LABEL_22;
    }
    v27 = Mesh::BuildPolygon((Mesh::MeshGraph **)this, a2, a3, a4, a5);
    v10 = v27;
  }
  while ( (*((_BYTE *)this + 104) & 4) != 0 );
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x352u);
  }
  else if ( v27 != 1 )
  {
    v29 = 0;
    if ( *((int *)a2 + 28) > 0 )
    {
      v31 = (_DWORD *)((char *)a2 + 16);
      do
      {
        if ( *v31 == 2 )
          Mesh::MapTextureCoordsFromBitmapBrush(this, a2, v29, v28, *((_DWORD *)this + 3));
        ++v29;
        v31 += 12;
      }
      while ( v29 < *((_DWORD *)a2 + 28) );
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
