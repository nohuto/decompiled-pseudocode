/*
 * XREFs of UIntAdd @ 0x1C00A93FC
 * Callers:
 *     ?bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z @ 0x1C0037338 (-bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C011EBA0 (NtUserfnINDEVICECHANGE.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C011FCD0 (NtUserfnPOWERBROADCAST.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C013A3F8 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01E3564 (ProbeAndCaptureSoftKbdData.c)
 *     NtUserMagSetContextInformation @ 0x1C021D950 (NtUserMagSetContextInformation.c)
 *     NtUserSlicerControl @ 0x1C02211D0 (NtUserSlicerControl.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0221BB0 (NtUserUserHandleGrantAccess.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C8D08 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C8E04 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  if ( uAugend + uAddend < uAugend )
  {
    *puResult = -1;
    return -2147024362;
  }
  else
  {
    *puResult = uAugend + uAddend;
    return 0;
  }
}
