/*
 * XREFs of ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1800A3A28
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800918E0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateLine(Mesh::MeshGraph *this, int a2, struct Mesh::MeshLine **a3)
{
  __int64 v3; // rax

  v3 = *((int *)this + 14);
  if ( (int)v3 + a2 > *((_DWORD *)this + 12) )
    return 2147942414LL;
  *((_DWORD *)this + 14) = v3 + a2;
  *a3 = (struct Mesh::MeshLine *)(*((_QWORD *)this + 5) + 88 * v3);
  return 0LL;
}
