/*
 * XREFs of ??0MeshVertex@Mesh@@QEAA@XZ @ 0x180065F50
 * Callers:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

Mesh::MeshVertex *__fastcall Mesh::MeshVertex::MeshVertex(Mesh::MeshVertex *this)
{
  *((_QWORD *)this + 3) = &Mesh::RadialEdgeList::`vftable';
  return this;
}
