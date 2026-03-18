/*
 * XREFs of UShortToShort @ 0x1C02D8718
 * Callers:
 *     sfac_ReadOutlineData @ 0x1C00B75B0 (sfac_ReadOutlineData.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortToShort(USHORT usOperand, SHORT *psResult)
{
  if ( usOperand > 0x7FFFu )
  {
    *psResult = -1;
    return -2147024362;
  }
  else
  {
    *psResult = usOperand;
    return 0;
  }
}
