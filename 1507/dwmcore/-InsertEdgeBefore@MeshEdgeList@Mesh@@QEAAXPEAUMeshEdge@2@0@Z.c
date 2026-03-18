/*
 * XREFs of ?InsertEdgeBefore@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@0@Z @ 0x18005C3B8
 * Callers:
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180009F0C (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180074ED8 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18005C540 (-GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18005C550 (-GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall Mesh::MeshEdgeList::InsertEdgeBefore(
        struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***this)(Mesh::RadialEdgeList *__hidden this, const struct Mesh::MeshEdge *),
        struct Mesh::MeshEdge *a2,
        struct Mesh::MeshEdge *a3)
{
  const struct Mesh::MeshEdge *v6; // rbp
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v7)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // r14
  struct Mesh::MeshEdge::MeshEdgeNode *v8; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v9)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // r14
  struct Mesh::MeshEdge::MeshEdgeNode *v10; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v11)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // r14
  struct Mesh::MeshEdge::MeshEdgeNode *v12; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v13)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbp
  struct Mesh::MeshEdge::MeshEdgeNode *Node; // rax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v15)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // r14
  struct Mesh::MeshEdge::MeshEdgeNode *v16; // rax

  if ( a3 )
  {
    v13 = **this;
    if ( v13 == Mesh::LinearEdgeList::GetNode )
    {
      Node = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)this, a3);
    }
    else if ( v13 == Mesh::RadialEdgeList::GetNode )
    {
      Node = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)this, a3);
    }
    else
    {
      Node = v13((Mesh::RadialEdgeList *)this, a3);
    }
    v6 = *(const struct Mesh::MeshEdge **)Node;
  }
  else
  {
    v6 = (const struct Mesh::MeshEdge *)this[2];
  }
  if ( v6 )
  {
    v11 = **this;
    if ( v11 == Mesh::RadialEdgeList::GetNode )
    {
      v12 = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)this, v6);
    }
    else if ( v11 == Mesh::LinearEdgeList::GetNode )
    {
      v12 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)this, v6);
    }
    else
    {
      v12 = v11((Mesh::RadialEdgeList *)this, v6);
    }
    *((_QWORD *)v12 + 1) = a2;
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
  {
    v15 = **this;
    if ( v15 == Mesh::LinearEdgeList::GetNode )
    {
      v16 = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)this, a3);
    }
    else if ( v15 == Mesh::RadialEdgeList::GetNode )
    {
      v16 = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)this, a3);
    }
    else
    {
      v16 = v15((Mesh::RadialEdgeList *)this, a3);
    }
    *(_QWORD *)v16 = a2;
  }
  if ( a3 == (struct Mesh::MeshEdge *)this[1] )
    this[1] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))a2;
  if ( v6 == (const struct Mesh::MeshEdge *)this[2] )
    this[2] = (struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *))a2;
  ++*((_DWORD *)this + 6);
}
