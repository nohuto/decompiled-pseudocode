/*
 * XREFs of ?ComputeMeshConstants@MeshGraph@Mesh@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800710B8
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009D74 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::MeshGraph::ComputeMeshConstants(Mesh::MeshGraph *this, const struct D2D_RECT_F *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4

  v2 = a2->right - a2->left;
  if ( v2 <= (float)(a2->bottom - a2->top) )
    v2 = a2->bottom - a2->top;
  if ( v2 < 1.0 )
    v2 = FLOAT_1_0;
  v3 = v2 * 0.0000099999997;
  *(float *)this = v3;
  *((float *)this + 1) = v3 * 2.0;
  *((float *)this + 2) = v3 * v3;
}
