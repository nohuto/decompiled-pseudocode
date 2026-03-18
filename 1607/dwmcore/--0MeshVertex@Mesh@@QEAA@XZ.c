/*
 * XREFs of ??0MeshVertex@Mesh@@QEAA@XZ @ 0x1800A31B0
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

Mesh::MeshVertex *__fastcall Mesh::MeshVertex::MeshVertex(Mesh::MeshVertex *this)
{
  *((_QWORD *)this + 2) = &Mesh::RadialEdgeList::`vftable';
  return this;
}
