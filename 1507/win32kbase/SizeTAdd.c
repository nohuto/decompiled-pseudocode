/*
 * XREFs of SizeTAdd @ 0x1C00D60DC
 * Callers:
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D5FBC (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z @ 0x1C00D7BD8 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall SizeTAdd(size_t Augend, size_t Addend, size_t *pResult)
{
  if ( Augend + Addend < Augend )
  {
    *pResult = -1LL;
    return -2147024362;
  }
  else
  {
    *pResult = Augend + Addend;
    return 0;
  }
}
