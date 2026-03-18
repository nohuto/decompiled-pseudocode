/*
 * XREFs of ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18005C540
 * Callers:
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180009F0C (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x18005C3B8 (-InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z.c)
 * Callees:
 *     <none>
 */

struct Mesh::MeshEdge::MeshEdgeNode *__fastcall Mesh::LinearEdgeList::GetNode(
        Mesh::LinearEdgeList *this,
        const struct Mesh::MeshEdge *a2)
{
  return (const struct Mesh::MeshEdge *)((char *)a2 + 56);
}
