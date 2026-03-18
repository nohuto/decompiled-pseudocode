/*
 * XREFs of ??0MeshVertex@Mesh@@QEAA@XZ @ 0x180051D80
 * Callers:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

Mesh::MeshVertex *__fastcall Mesh::MeshVertex::MeshVertex(Mesh::MeshVertex *this)
{
  *((_QWORD *)this + 3) = &Mesh::RadialEdgeList::`vftable';
  return this;
}
