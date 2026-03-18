/*
 * XREFs of ?Compare@RadialEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x18000A150
 * Callers:
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180009F0C (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::RadialEdgeList::Compare(
        Mesh::RadialEdgeList *this,
        const struct Mesh::MeshEdge *a2,
        const struct Mesh::MeshEdge *a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4

  v3 = *(float *)(*((_QWORD *)a2 + 1) + 36LL);
  v4 = *(float *)(*((_QWORD *)a3 + 1) + 36LL);
  if ( v4 > v3 )
    return 0xFFFFFFFFLL;
  else
    return v3 > v4;
}
