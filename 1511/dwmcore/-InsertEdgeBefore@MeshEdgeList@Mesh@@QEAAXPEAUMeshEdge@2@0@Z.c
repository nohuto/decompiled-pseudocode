/*
 * XREFs of ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x1800AC9EC
 * Callers:
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x1800184A4 (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18001EF94 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x1800ACB80 (-GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x1800ACB90 (-GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 */

void __fastcall Mesh::MeshEdgeList::InsertEdgeBefore(
        struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***this)(Mesh::RadialEdgeList *__hidden this, const struct Mesh::MeshEdge *),
        struct Mesh::MeshEdge *a2,
        struct Mesh::MeshEdge *a3)
{
  const struct Mesh::MeshEdge *v6; // r14
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v7)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbx
  struct Mesh::MeshEdge::MeshEdgeNode *v8; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v9)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbx
  struct Mesh::MeshEdge::MeshEdgeNode *v10; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v11)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbx
  struct Mesh::MeshEdge::MeshEdgeNode *Node; // rax

  if ( a3 )
    v6 = *(const struct Mesh::MeshEdge **)(**this)((Mesh::MeshEdgeList *)this, a3);
  else
    v6 = (const struct Mesh::MeshEdge *)this[2];
  if ( v6 )
  {
    v11 = **this;
    if ( v11 == Mesh::RadialEdgeList::GetNode )
      Node = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)this, v6);
    else
      Node = v11((Mesh::RadialEdgeList *)this, v6);
    *((_QWORD *)Node + 1) = a2;
  }
  v7 = **this;
  if ( v7 == Mesh::LinearEdgeList::GetNode )
  {
    v8 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)this, a2);
  }
  else if ( v7 == Mesh::RadialEdgeList::GetNode )
  {
    v8 = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)this, a2);
  }
  else
  {
    v8 = v7((Mesh::RadialEdgeList *)this, a2);
  }
  *(_QWORD *)v8 = v6;
  v9 = **this;
  if ( v9 == Mesh::LinearEdgeList::GetNode )
  {
    v10 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)this, a2);
  }
  else if ( v9 == Mesh::RadialEdgeList::GetNode )
  {
    v10 = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)this, a2);
  }
  else
  {
    v10 = v9((Mesh::RadialEdgeList *)this, a2);
  }
  *((_QWORD *)v10 + 1) = a3;
  if ( a3 )
    *(_QWORD *)(**this)((Mesh::MeshEdgeList *)this, a3) = a2;
  if ( a3 == (struct Mesh::MeshEdge *)this[1] )
    this[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))a2;
  if ( v6 == (const struct Mesh::MeshEdge *)this[2] )
    this[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))a2;
  ++*((_DWORD *)this + 6);
}
