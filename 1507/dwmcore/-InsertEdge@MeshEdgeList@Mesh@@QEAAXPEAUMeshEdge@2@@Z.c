/*
 * XREFs of ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180009F0C
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009594 (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?Compare@RadialEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x18000A150 (-Compare@RadialEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z.c)
 *     ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x18000A180 (-Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z.c)
 *     ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18005C540 (-GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18005C550 (-GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall Mesh::MeshEdgeList::InsertEdge(
        struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall ***this)(Mesh::RadialEdgeList *__hidden this, const struct Mesh::MeshEdge *),
        struct Mesh::MeshEdge *a2)
{
  const struct Mesh::MeshEdge *v2; // rbx
  struct Mesh::MeshEdge *v5; // rsi
  __int64 (__fastcall *v6)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *, const struct Mesh::MeshEdge *); // rbp
  int v7; // eax
  struct Mesh::MeshEdge::MeshEdgeNode *(__fastcall *v8)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *); // rbp
  struct Mesh::MeshEdge::MeshEdgeNode *Node; // rax

  v2 = (const struct Mesh::MeshEdge *)this[1];
  v5 = 0LL;
  while ( v2 )
  {
    v6 = (__int64 (__fastcall *)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *, const struct Mesh::MeshEdge *))(*this)[1];
    if ( v6 == Mesh::RadialEdgeList::Compare )
    {
      v7 = Mesh::RadialEdgeList::Compare((Mesh::RadialEdgeList *)this, a2, v2);
    }
    else if ( v6 == Mesh::LinearEdgeList::Compare )
    {
      v7 = Mesh::LinearEdgeList::Compare((Mesh::LinearEdgeList *)this, a2, v2);
    }
    else
    {
      v7 = v6((Mesh::RadialEdgeList *)this, a2, v2);
    }
    if ( v7 < 0 )
    {
      v5 = v2;
      break;
    }
    v8 = **this;
    if ( v8 == Mesh::RadialEdgeList::GetNode )
    {
      Node = Mesh::RadialEdgeList::GetNode((Mesh::RadialEdgeList *)this, v2);
    }
    else if ( v8 == Mesh::LinearEdgeList::GetNode )
    {
      Node = Mesh::LinearEdgeList::GetNode((Mesh::LinearEdgeList *)this, v2);
    }
    else
    {
      Node = v8((Mesh::RadialEdgeList *)this, v2);
    }
    v2 = (const struct Mesh::MeshEdge *)*((_QWORD *)Node + 1);
  }
  Mesh::MeshEdgeList::InsertEdgeBefore((Mesh::MeshEdgeList *)this, a2, v5);
}
