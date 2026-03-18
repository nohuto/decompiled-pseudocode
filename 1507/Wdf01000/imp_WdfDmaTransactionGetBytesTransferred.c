/*
 * XREFs of imp_WdfDmaTransactionGetBytesTransferred @ 0x1C005E860
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDmaTransactionGetBytesTransferred(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction)
{
  __int64 Offset; // r8
  FxDmaTransactionBase *v3; // rcx
  FxDmaTransactionBase *pDmaTrans; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1401uLL);
  v3 = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DmaTransaction & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxDmaTransactionBase *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 5121 )
  {
    pDmaTrans = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDmaTrans, (void *)DmaTransaction, 0x1401u, Offset);
    v3 = pDmaTrans;
  }
  return v3->m_Transferred;
}
