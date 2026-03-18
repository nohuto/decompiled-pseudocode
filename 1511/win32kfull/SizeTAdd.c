/*
 * XREFs of SizeTAdd @ 0x1C02136BC
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C0213ED8 (xxxClientCopyDDEIn1.c)
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
