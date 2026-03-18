/*
 * XREFs of ?IsCycle@PolygonPathIterator@Mesh@@CAHPEBUMeshEdge@2@0@Z @ 0x1800AF200
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800915B0 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800AF098 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Mesh::PolygonPathIterator::IsCycle(const struct Mesh::MeshEdge *a1, const struct Mesh::MeshEdge *a2)
{
  return **((_QWORD **)a1 + 8) == *(_QWORD *)a2 && **((_QWORD **)a2 + 8) == *(_QWORD *)a1;
}
