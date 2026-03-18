/*
 * XREFs of ULongLongToULong @ 0x1C00F1BDC
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C013A3F8 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongToULong(ULONGLONG ullOperand, ULONG *pulResult)
{
  if ( ullOperand > 0xFFFFFFFF )
  {
    *pulResult = -1;
    return -2147024362;
  }
  else
  {
    *pulResult = ullOperand;
    return 0;
  }
}
