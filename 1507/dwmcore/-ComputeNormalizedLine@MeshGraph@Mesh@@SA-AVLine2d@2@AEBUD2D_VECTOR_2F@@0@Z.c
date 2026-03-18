/*
 * XREFs of ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180009FF4
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009594 (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180051DB8 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x18005CA8C (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 */

unsigned int *__fastcall Mesh::MeshGraph::ComputeNormalizedLine(
        Mesh::Line2d *a1,
        _QWORD *a2,
        const struct D2D_VECTOR_2F *a3)
{
  unsigned int *v3; // rcx
  __m128 v4; // xmm5
  __m128 v5; // xmm4
  float *v7; // r8
  float v8; // xmm0_4
  float v9; // xmm2_4
  __m128 v10; // xmm0
  struct D2D_VECTOR_2F v11; // xmm0_8
  __m128 v12; // xmm1
  struct D2D_VECTOR_2F v13; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = *a2;
  Mesh::Line2d::SetDirection(a1, a3);
  v4.m128_i32[0] = 0;
  if ( !v3[5] && !v3[4] )
  {
    v8 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)v3);
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - v4.m128_f32[0])) & _xmm);
    if ( v9 <= 0.000099999997 )
    {
      if ( v4.m128_f32[0] <= *v7 )
        v10 = (__m128)LODWORD(FLOAT_1_0);
      else
        v10 = (__m128)LODWORD(FLOAT_N1_0);
      v11 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v10, v4).m128_u64[0];
    }
    else
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm)
                                                            - 1.4142135)) & _xmm) > 0.000099999997 )
        goto LABEL_3;
      if ( v4.m128_f32[0] <= v7[1] )
        v12 = (__m128)LODWORD(FLOAT_1_0);
      else
        v12 = (__m128)LODWORD(FLOAT_N1_0);
      v11 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v4, v12).m128_u64[0];
    }
    v13 = v11;
    Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v13);
  }
LABEL_3:
  v5 = (__m128)v3[2];
  if ( v4.m128_f32[0] > v5.m128_f32[0] || v5.m128_f32[0] == v4.m128_f32[0] && v4.m128_f32[0] >= *((float *)v3 + 3) )
  {
    v13 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(_mm_xor_ps(v5, (__m128)_xmm), _mm_xor_ps((__m128)v3[3], (__m128)_xmm)).m128_u64[0];
    Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v13);
  }
  return v3;
}
