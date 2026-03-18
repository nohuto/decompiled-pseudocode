/*
 * XREFs of UIntAdd @ 0x1C0070A70
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00F1C10 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0111590 (NtUserfnINDEVICECHANGE.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C0118360 (NtUserfnPOWERBROADCAST.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0142F04 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01D9E28 (ProbeAndCaptureSoftKbdData.c)
 *     NtUserMagSetContextInformation @ 0x1C0217550 (NtUserMagSetContextInformation.c)
 *     NtUserSlicerControl @ 0x1C021B160 (NtUserSlicerControl.c)
 *     NtUserUserHandleGrantAccess @ 0x1C021BCF0 (NtUserUserHandleGrantAccess.c)
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
