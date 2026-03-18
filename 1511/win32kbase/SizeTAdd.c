/*
 * XREFs of SizeTAdd @ 0x1C00D9EDC
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z @ 0x1C00D9D84 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z.c)
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
