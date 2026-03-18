/*
 * XREFs of imp_WdfDmaTransactionGetRequest @ 0x1C005EA00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFREQUEST__ *__fastcall imp_WdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction)
{
  FxDmaTransactionBase *v2; // rcx
  __int64 Offset; // r8
  unsigned __int64 v4; // rax
  FxDmaTransactionBase *pDmaTrans; // [rsp+48h] [rbp+10h] BYREF

  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v2 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DmaTransaction & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxDmaTransactionBase *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 5121 )
  {
    pDmaTrans = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pDmaTrans, (void *)DmaTransaction, 0x1401u, Offset);
    v2 = pDmaTrans;
  }
  v4 = (unsigned __int64)v2->m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v4 )
    return 0LL;
  if ( *(_WORD *)(v4 + 10) )
    return (WDFREQUEST__ *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
  return 0LL;
}
