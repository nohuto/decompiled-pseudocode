/*
 * XREFs of SizeTAdd @ 0x1C00E58DC
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z @ 0x1C003C068 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00E57E0 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C00E6060 (-SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
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
