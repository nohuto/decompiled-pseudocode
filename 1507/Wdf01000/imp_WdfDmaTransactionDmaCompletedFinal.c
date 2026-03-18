/*
 * XREFs of imp_WdfDmaTransactionDmaCompletedFinal @ 0x1C005E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C0060D1C (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfDmaTransactionDmaCompletedFinal(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned __int64 FinalTransferredLength,
        int *pStatus)
{
  FxDmaTransactionBase *v6; // rcx
  __int64 Offset; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+48h] [rbp+10h] BYREF

  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v6 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DmaTransaction & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxDmaTransactionBase *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 5121 )
  {
    pDmaTrans = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pDmaTrans, (void *)DmaTransaction, 0x1401u, Offset);
    v6 = pDmaTrans;
  }
  if ( !pStatus )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  return FxDmaTransactionBase::DmaCompleted(v6, FinalTransferredLength, pStatus, FxDmaCompletionTypeAbort);
}
