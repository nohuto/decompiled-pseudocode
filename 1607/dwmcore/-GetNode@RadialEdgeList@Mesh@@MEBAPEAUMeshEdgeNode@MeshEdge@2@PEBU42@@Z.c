/*
 * XREFs of ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x1800AE650
 * Callers:
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180002698 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x1800AE4B8 (-InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z.c)
 * Callees:
 *     <none>
 */

struct Mesh::MeshEdge::MeshEdgeNode *__fastcall Mesh::RadialEdgeList::GetNode(
        Mesh::RadialEdgeList *this,
        const struct Mesh::MeshEdge *a2)
{
  return (const struct Mesh::MeshEdge *)((char *)a2 + 72);
}
