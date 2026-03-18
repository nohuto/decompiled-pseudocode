/*
 * XREFs of ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x180071024
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009594 (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180074ED8 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
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
