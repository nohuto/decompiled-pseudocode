/*
 * XREFs of ?IsOfType@CAtlasedRectsMesh@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026D30
 * Callers:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasedRectsMesh::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 4) <= 1;
}
