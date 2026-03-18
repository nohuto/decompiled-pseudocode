/*
 * XREFs of imp_WdfDmaTransactionExecute @ 0x1C0065830
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006AAD0 (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 */

int __fastcall imp_WdfDmaTransactionExecute(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        void *Context)
{
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  return FxDmaTransactionBase::Execute(pDmaTrans, Context);
}
