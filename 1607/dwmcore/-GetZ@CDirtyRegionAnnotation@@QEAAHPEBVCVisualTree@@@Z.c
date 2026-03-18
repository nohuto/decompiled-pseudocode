/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@@Z @ 0x1801319A0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1801098FC (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CDirtyRegionAnnotation::GetZ(CVisual **this, const struct CVisualTree *a2)
{
  unsigned int *OcclusionInfo; // rcx
  __int64 result; // rax

  OcclusionInfo = (unsigned int *)CVisual::GetOcclusionInfo(this[2], a2);
  result = 0LL;
  if ( OcclusionInfo )
  {
    if ( *((_BYTE *)this + 24) )
      return OcclusionInfo[3];
    else
      return (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
  }
  return result;
}
