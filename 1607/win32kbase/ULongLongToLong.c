/*
 * XREFs of ULongLongToLong @ 0x1C00BFC54
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongToLong(ULONGLONG ullOperand, LONG *plResult)
{
  if ( ullOperand > 0x7FFFFFFF )
  {
    *plResult = -1;
    return -2147024362;
  }
  else
  {
    *plResult = ullOperand;
    return 0;
  }
}
