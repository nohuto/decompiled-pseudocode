/*
 * XREFs of ULongMult @ 0x1C00BC1B4
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C002D9C0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongMult(ULONG ulMultiplicand, ULONG ulMultiplier, ULONG *pulResult)
{
  unsigned __int64 v3; // r9

  v3 = ulMultiplier * (unsigned __int64)ulMultiplicand;
  if ( v3 > 0xFFFFFFFF )
  {
    *pulResult = -1;
    return -2147024362;
  }
  else
  {
    *pulResult = v3;
    return 0;
  }
}
