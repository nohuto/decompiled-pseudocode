/*
 * XREFs of ??0MeshLine@Mesh@@QEAA@XZ @ 0x180051DA0
 * Callers:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

Mesh::MeshLine *__fastcall Mesh::MeshLine::MeshLine(Mesh::MeshLine *this)
{
  *((_QWORD *)this + 5) = &Mesh::LinearEdgeList::`vftable';
  return this;
}
