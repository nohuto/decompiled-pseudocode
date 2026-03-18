/*
 * XREFs of ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1800024B8
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180002A00 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180001B10 (-Init@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall Mesh::CreatePolygonMesh(
        float **this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_POINT_2F *a3,
        const enum D2D1_EDGE_FLAGS *a4,
        unsigned int a5)
{
  float x; // xmm8_4
  float y; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  __int64 v13; // rcx
  FLOAT *p_y; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // eax
  unsigned int v18; // ebx
  float v19; // xmm1_4
  int v20; // eax
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // r11
  int v24; // r10d
  __int64 v25; // rbx
  _DWORD *v26; // r8
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  struct D2D_RECT_F v30; // [rsp+30h] [rbp-68h] BYREF

  do
  {
    x = a3->x;
    y = a3->y;
    v11 = x;
    v12 = y;
    v30.right = a3->x;
    v30.bottom = y;
    v30.left = x;
    v30.top = y;
    if ( (int)a5 > 0 )
    {
      v13 = a5;
      p_y = &a3->y;
      do
      {
        v15 = *(p_y - 1);
        if ( v15 <= x )
        {
          x = *(p_y - 1);
          v30.left = x;
        }
        v16 = *p_y;
        if ( *p_y <= y )
        {
          y = *p_y;
          v30.top = *p_y;
        }
        if ( v11 <= v15 )
        {
          v11 = v15;
          v30.right = v15;
        }
        if ( v12 <= v16 )
        {
          v12 = v16;
          v30.bottom = v16;
        }
        p_y += 2;
        --v13;
      }
      while ( v13 );
    }
    v17 = Mesh::Init(this, a2, &v30);
    v18 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1C9u);
LABEL_31:
      if ( !v18 )
        return v18;
      goto LABEL_32;
    }
    v19 = this[2][1];
    if ( v19 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - x)) & _xmm)
      && v19 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - y)) & _xmm) )
    {
      v18 = 1;
LABEL_32:
      *((_DWORD *)this + 48) &= ~1u;
      return v18;
    }
    v20 = Mesh::BuildPolygon((Mesh::MeshGraph **)this, a3, a4, a5, (const struct _D3DCOLORVALUE *)a2);
    v18 = v20;
  }
  while ( ((_BYTE)this[24] & 4) != 0 );
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1D9u);
    goto LABEL_31;
  }
  if ( v20 == 1 )
    goto LABEL_31;
  v21 = 0;
  if ( *((int *)this + 3) > 0 )
  {
    v22 = 0LL;
    v23 = 3LL;
    do
    {
      v24 = 0;
      v25 = 0LL;
      if ( *((int *)this + 12) > 0 )
      {
        v26 = this + 13;
        do
        {
          if ( *v26 )
          {
            v27 = (__m128)*((unsigned int *)this + 10);
            v28 = (__m128)LODWORD((*this)[v22 + 1]);
            v28.m128_f32[0] = v28.m128_f32[0] + *((float *)this + 11);
            v27.m128_f32[0] = v27.m128_f32[0] + (*this)[v22];
            *(_QWORD *)&(*this)[2 * v23 + 2 * v25] = _mm_unpacklo_ps(v27, v28).m128_u64[0];
          }
          ++v24;
          ++v25;
          v26 += 14;
        }
        while ( v24 < *((_DWORD *)this + 12) );
      }
      ++v21;
      v22 += 10LL;
      v23 += 5LL;
    }
    while ( v21 < *((_DWORD *)this + 3) );
  }
  *((_DWORD *)this + 48) &= 0xFFFFFFDD;
  return 0;
}
