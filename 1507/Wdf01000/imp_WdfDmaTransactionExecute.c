/*
 * XREFs of imp_WdfDmaTransactionExecute @ 0x1C005E670
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006100C (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 */

int __fastcall imp_WdfDmaTransactionExecute(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        void *Context)
{
  __int64 Offset; // r10
  FxDmaTransactionBase *v5; // rcx
  FxDmaTransactionBase *pDmaTrans; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v5 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DmaTransaction & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxDmaTransactionBase *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 5121 )
  {
    pDmaTrans = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDmaTrans, (void *)DmaTransaction, 0x1401u, Offset);
    v5 = pDmaTrans;
  }
  return FxDmaTransactionBase::Execute(v5, Context);
}
