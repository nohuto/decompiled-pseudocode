/*
 * XREFs of ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x180073460
 * Callers:
 *     ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x180075724 (-CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV-$ArrayRef@M@@2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(int a1)
{
  int v1; // ecx
  __int64 result; // rax

  v1 = a1 & 0x3000000;
  if ( v1 == 0x1000000 )
    return 4LL;
  if ( v1 == 0x2000000 )
    return 8LL;
  result = 12LL;
  if ( v1 != 50331648 )
    return 0LL;
  return result;
}
