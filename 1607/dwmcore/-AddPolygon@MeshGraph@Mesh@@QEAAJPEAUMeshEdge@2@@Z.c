/*
 * XREFs of ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x1800A39D0
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800918E0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
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
