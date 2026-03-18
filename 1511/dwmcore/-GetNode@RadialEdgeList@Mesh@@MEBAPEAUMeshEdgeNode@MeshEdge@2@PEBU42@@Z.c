/*
 * XREFs of ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x1800ACB90
 * Callers:
 *     ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x1800AC9EC (-InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z.c)
 * Callees:
 *     <none>
 */

struct Mesh::MeshEdge::MeshEdgeNode *__fastcall Mesh::RadialEdgeList::GetNode(
        Mesh::RadialEdgeList *this,
        const struct Mesh::MeshEdge *a2)
{
  return (const struct Mesh::MeshEdge *)((char *)a2 + 72);
}
