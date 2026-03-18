/*
 * XREFs of ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x18001DF4C
 * Callers:
 *     ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x18001F720 (-CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV-$ArrayRef@M@@2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(int a1)
{
  int v1; // ecx
  __int64 result; // rax

  v1 = a1 & 0x30000;
  if ( v1 == 0x10000 )
    return 4LL;
  if ( v1 == 0x20000 )
    return 8LL;
  result = 12LL;
  if ( v1 != 196608 )
    return 0LL;
  return result;
}
