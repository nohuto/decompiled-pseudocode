/*
 * XREFs of ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x18001DEE4
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x18001F720 (-CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV-$ArrayRef@M@@2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::ComputeAntialiasBorderFlags<3,1,2>(char a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = (a1 & 3) - 1;
  if ( !v1 )
    return 4LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 8LL;
  if ( v2 == 1 )
    return 12LL;
  return 0LL;
}
