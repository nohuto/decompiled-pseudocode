/*
 * XREFs of ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x1800184A4
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?Compare@RadialEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x1800186B0 (-Compare@RadialEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z.c)
 *     ?Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z @ 0x1800186E0 (-Compare@LinearEdgeList@Mesh@@MEBAHPEBUMeshEdge@2@0@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall Mesh::MeshEdgeList::InsertEdge(Mesh::MeshEdgeList *this, struct Mesh::MeshEdge *a2)
{
  const struct Mesh::MeshEdge *v2; // rsi
  struct Mesh::MeshEdge *v5; // rbp
  __int64 (__fastcall *v6)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *, const struct Mesh::MeshEdge *); // rbx
  int v7; // eax

  v2 = (const struct Mesh::MeshEdge *)*((_QWORD *)this + 1);
  v5 = 0LL;
  while ( v2 )
  {
    v6 = *(__int64 (__fastcall **)(Mesh::RadialEdgeList *__hidden, const struct Mesh::MeshEdge *, const struct Mesh::MeshEdge *))(*(_QWORD *)this + 8LL);
    if ( v6 == Mesh::RadialEdgeList::Compare )
    {
      v7 = Mesh::RadialEdgeList::Compare(this, a2, v2);
    }
    else if ( v6 == Mesh::LinearEdgeList::Compare )
    {
      v7 = Mesh::LinearEdgeList::Compare(this, a2, v2);
    }
    else
    {
      v7 = v6(this, a2, v2);
    }
    if ( v7 < 0 )
    {
      v5 = v2;
      break;
    }
    v2 = *(const struct Mesh::MeshEdge **)((**(__int64 (__fastcall ***)(Mesh::MeshEdgeList *, const struct Mesh::MeshEdge *))this)(
                                             this,
                                             v2)
                                         + 8);
  }
  Mesh::MeshEdgeList::InsertEdgeBefore(this, a2, v5);
}
