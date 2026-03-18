/*
 * XREFs of LongLongToLong @ 0x140198FAC
 * Callers:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x140198F34 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  HRESULT result; // eax

  if ( (unsigned __int64)(llOperand + 0x80000000LL) <= 0xFFFFFFFF )
  {
    result = 0;
  }
  else
  {
    result = -2147024362;
    LODWORD(llOperand) = -1;
  }
  *plResult = llOperand;
  return result;
}
