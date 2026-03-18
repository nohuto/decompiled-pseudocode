/*
 * XREFs of ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x1800A39F8
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800918E0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateEdge(Mesh::MeshGraph *this, int a2, struct Mesh::MeshEdge **a3)
{
  __int64 v3; // rax

  v3 = *((int *)this + 22);
  if ( (int)v3 + a2 > *((_DWORD *)this + 20) )
    return 2147942414LL;
  *((_DWORD *)this + 22) = v3 + a2;
  *a3 = (struct Mesh::MeshEdge *)(*((_QWORD *)this + 9) + 88 * v3);
  return 0LL;
}
