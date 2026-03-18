/*
 * XREFs of UIntMult @ 0x1C01DCF90
 * Callers:
 *     ?bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z @ 0x1C0037338 (-bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z.c)
 *     sbit_GetMetrics @ 0x1C00A1DA0 (sbit_GetMetrics.c)
 *     fsg_PrivateFontSpaceSize @ 0x1C00A6430 (fsg_PrivateFontSpaceSize.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C8D08 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C8E04 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C02C8FA4 (-bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z.c)
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02C9688 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntMult(UINT uMultiplicand, UINT uMultiplier, UINT *puResult)
{
  unsigned __int64 v3; // r9

  v3 = uMultiplier * (unsigned __int64)uMultiplicand;
  if ( v3 > 0xFFFFFFFF )
  {
    *puResult = -1;
    return -2147024362;
  }
  else
  {
    *puResult = v3;
    return 0;
  }
}
