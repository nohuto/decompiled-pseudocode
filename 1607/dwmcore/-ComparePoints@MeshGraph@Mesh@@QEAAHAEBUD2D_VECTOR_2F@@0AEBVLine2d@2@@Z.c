/*
 * XREFs of ?ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z @ 0x1800027C8
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x180002880 (-Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::ComparePoints(
        Mesh::MeshGraph *this,
        const struct D2D_VECTOR_2F *a2,
        const struct D2D_VECTOR_2F *a3,
        const struct Mesh::Line2d *a4)
{
  float v4; // xmm2_4
  float v5; // xmm3_4
  __int64 result; // rax
  float v7; // xmm1_4

  v4 = a2->x - a3->x;
  v5 = a2->y - a3->y;
  if ( *((float *)this + 2) >= (float)((float)(v5 * v5) + (float)(v4 * v4)) )
    return 0LL;
  result = 1LL;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  if ( *(float *)this <= v7 )
  {
    if ( v4 < 0.0 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    if ( v5 < 0.0 )
      result = 0xFFFFFFFFLL;
    if ( COERCE_FLOAT(HIDWORD(*((_QWORD *)a4 + 1))) < 0.0 )
      return (unsigned int)-(int)result;
  }
  return result;
}
