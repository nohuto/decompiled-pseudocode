/*
 * XREFs of ?IsOfType@CAtlasedRectsMesh@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006F460
 * Callers:
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasedRectsMesh::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 4) <= 1;
}
