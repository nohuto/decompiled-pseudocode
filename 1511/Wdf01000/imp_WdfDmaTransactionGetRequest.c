/*
 * XREFs of imp_WdfDmaTransactionGetRequest @ 0x1C0058560
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFREQUEST__ *__fastcall imp_WdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  unsigned __int64 v2; // rax
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  v2 = (unsigned __int64)pDmaTrans->m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v2 )
    return 0LL;
  if ( *(_WORD *)(v2 + 10) )
    return (WDFREQUEST__ *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
  return 0LL;
}
