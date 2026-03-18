/*
 * XREFs of ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x180071084
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009594 (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180074ED8 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateVertex(Mesh::MeshGraph *this, int a2, struct Mesh::MeshVertex **a3)
{
  __int64 v3; // rax
  struct Mesh::MeshVertex *v4; // rcx
  __int64 result; // rax

  v3 = *((int *)this + 8);
  if ( (int)v3 + a2 > *((_DWORD *)this + 6) )
    return 2147942414LL;
  *((_DWORD *)this + 8) = v3 + a2;
  v4 = (struct Mesh::MeshVertex *)(*((_QWORD *)this + 2) + 72 * v3);
  result = 0LL;
  *a3 = v4;
  return result;
}
