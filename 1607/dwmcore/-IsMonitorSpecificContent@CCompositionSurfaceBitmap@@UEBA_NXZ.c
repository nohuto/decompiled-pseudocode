/*
 * XREFs of ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FC60
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FBB0 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BFD40 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BFD50 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::IsMonitorSpecificContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 52);
  result = 0;
  if ( v1 && (*(_BYTE *)(v1 + 244) & 1) != 0 )
  {
    if ( *(_QWORD *)(v1 + 136) )
      return 1;
  }
  return result;
}
