/*
 * XREFs of ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1800A3A58
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800918E0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateVertex(Mesh::MeshGraph *this, int a2, struct Mesh::MeshVertex **a3)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 result; // rax

  v3 = *((int *)this + 8);
  v4 = v3 + a2;
  if ( (int)v3 + a2 > *((_DWORD *)this + 6) )
    return 2147942414LL;
  *a3 = (struct Mesh::MeshVertex *)(*((_QWORD *)this + 2) + (v3 << 6));
  result = 0LL;
  *((_DWORD *)this + 8) = v4;
  return result;
}
