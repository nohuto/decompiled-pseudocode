/*
 * XREFs of ??0MeshLine@Mesh@@QEAA@XZ @ 0x1800A31D0
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

Mesh::MeshLine *__fastcall Mesh::MeshLine::MeshLine(Mesh::MeshLine *this)
{
  *((_QWORD *)this + 5) = &Mesh::LinearEdgeList::`vftable';
  return this;
}
