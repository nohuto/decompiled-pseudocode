/*
 * XREFs of ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x180070FFC
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009594 (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180074ED8 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AddPolygon(Mesh::MeshGraph *this, struct Mesh::MeshEdge *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 4);
  if ( (v2 & 0x10A) != 0 )
    return 1LL;
  *((_DWORD *)a2 + 4) = v2 | 0x100;
  ++*((_DWORD *)this + 26);
  return 0LL;
}
