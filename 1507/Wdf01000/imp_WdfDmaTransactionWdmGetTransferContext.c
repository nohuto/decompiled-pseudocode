/*
 * XREFs of imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C005F8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_ql @ 0x1C005DAD0 (WPP_IFR_SF_ql.c)
 */

void *__fastcall imp_WdfDmaTransactionWdmGetTransferContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction)
{
  unsigned __int16 *v3; // r10
  __int64 Offset; // rcx
  __int64 v5; // rcx
  _FX_DRIVER_GLOBALS *v6; // rdi
  const void *_a2; // rcx
  unsigned int v8; // eax
  FxDmaTransactionBase *pDmaTrans; // [rsp+60h] [rbp+18h] BYREF

  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v3 = (unsigned __int16 *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DmaTransaction & 1) != 0 )
  {
    Offset = *v3;
    v3 = (unsigned __int16 *)((char *)v3 - Offset);
  }
  if ( v3[4] == 5121 )
  {
    pDmaTrans = (FxDmaTransactionBase *)v3;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v3, (void **)&pDmaTrans, (void *)DmaTransaction, 0x1401u, Offset);
    v3 = (unsigned __int16 *)pDmaTrans;
  }
  v5 = *((_QWORD *)v3 + 16);
  v6 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v3 + 2);
  if ( *(_DWORD *)(v5 + 184) == 3 )
  {
    v8 = *((_DWORD *)v3 + 30);
    if ( v8 > 1 && v8 - 7 > 1 )
      return (void *)*((_QWORD *)v3 + 21);
    WPP_IFR_SF_ql(v6, 2u, 0xFu, 0x1Du, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)DmaTransaction, v8);
  }
  else
  {
    if ( *(_WORD *)(v5 + 10) )
      _a2 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qq(v6, 2u, 0xFu, 0x1Cu, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)DmaTransaction, _a2);
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( v6->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 0LL;
}
