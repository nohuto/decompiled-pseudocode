/*
 * XREFs of imp_WdfDmaTransactionGetTransferInfo @ 0x1C005EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x1C0061488 (-GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z.c)
 */

void __fastcall imp_WdfDmaTransactionGetTransferInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  __int64 Offset; // r10
  FxDmaTransactionBase *v7; // rcx
  FxDmaTransactionBase *pDmaTrans; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v7 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DmaTransaction & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxDmaTransactionBase *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 5121 )
  {
    pDmaTrans = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDmaTrans, (void *)DmaTransaction, 0x1401u, Offset);
    v7 = pDmaTrans;
  }
  FxDmaTransactionBase::GetTransferInfo(v7, MapRegisterCount, ScatterGatherElementCount);
}
