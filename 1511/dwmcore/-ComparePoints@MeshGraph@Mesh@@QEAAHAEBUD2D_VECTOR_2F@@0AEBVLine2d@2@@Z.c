/*
 * XREFs of ?ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z @ 0x18001861C
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x1800186E0 (-Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z.c)
 * Callees:
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 */

__int64 __fastcall Mesh::MeshGraph::ComparePoints(
        Mesh::MeshGraph *this,
        const struct D2D_VECTOR_2F *a2,
        const struct D2D_VECTOR_2F *a3,
        const struct Mesh::Line2d *a4)
{
  float v4; // xmm3_4
  float v5; // xmm4_4
  int v6; // eax
  float v7; // xmm4_4
  unsigned int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h]

  v4 = a2->x - a3->x;
  v5 = a2->y - a3->y;
  v10 = *((_QWORD *)a4 + 1);
  if ( *((float *)this + 2) >= (float)((float)(v5 * v5) + (float)(v4 * v4)) )
  {
    return 0;
  }
  else
  {
    v6 = IsCloseRealZero(v4, *(float *)this);
    v8 = 1;
    if ( v6 )
    {
      if ( v7 < 0.0 )
        v8 = -1;
      if ( *((float *)&v10 + 1) < 0.0 )
        return -v8;
    }
    else if ( v4 < 0.0 )
    {
      return (unsigned int)-1;
    }
  }
  return v8;
}
