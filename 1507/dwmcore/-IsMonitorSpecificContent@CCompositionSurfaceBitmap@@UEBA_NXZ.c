/*
 * XREFs of ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008C70
 * Callers:
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@WBI@EBA_NXZ @ 0x18009A250 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@WBI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::IsMonitorSpecificContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 50);
  result = 0;
  if ( v1 && *(_DWORD *)(v1 + 144) )
  {
    if ( *(_QWORD *)(v1 + 136) )
      return 1;
  }
  return result;
}
