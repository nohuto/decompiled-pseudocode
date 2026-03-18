/*
 * XREFs of ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180068498
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180018568 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18001EF94 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Mesh::MeshGraph::ComputeRadialIndex(const struct Mesh::Line2d *a1)
{
  float result; // xmm0_4
  float v2; // xmm2_4
  float v3; // xmm3_4

  if ( *((_DWORD *)a1 + 4) )
    return FLOAT_1_4142135;
  if ( *((_DWORD *)a1 + 5) )
    return 0.0;
  v2 = *((float *)a1 + 3);
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 2)) & _xmm);
  result = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2) & _xmm);
  if ( v3 <= result )
    result = 1.4142135 - v3;
  if ( (float)(v2 * *((float *)a1 + 2)) < 0.0 )
    LODWORD(result) ^= _xmm;
  return result;
}
