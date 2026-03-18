/*
 * XREFs of ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x180068E6C
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18001EF94 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
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
