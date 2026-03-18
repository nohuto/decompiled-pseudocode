/*
 * XREFs of ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x180002880
 * Callers:
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180002698 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::LinearEdgeList::Compare(
        Mesh::LinearEdgeList *this,
        Mesh::MeshGraph ***a2,
        const struct Mesh::MeshEdge *a3)
{
  return Mesh::MeshGraph::ComparePoints(
           *a2[1],
           (const struct D2D_VECTOR_2F *)(*a2)[1],
           *(const struct D2D_VECTOR_2F **)(*(_QWORD *)a3 + 8LL),
           (const struct Mesh::Line2d *)(a2[1] + 1));
}
