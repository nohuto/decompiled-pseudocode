/*
 * XREFs of imp_WdfDpcEnqueue @ 0x1C0066940
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

BOOLEAN __fastcall imp_WdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Dpc)
{
  __int64 Offset; // r8
  FxDpc *v3; // rcx
  FxDpc *pFxDpc; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Dpc )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1015uLL);
  v3 = (FxDpc *)(~Dpc & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Dpc & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxDpc *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4117 )
  {
    pFxDpc = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxDpc, (void *)Dpc, 0x1015u, Offset);
    v3 = pFxDpc;
  }
  return KeInsertQueueDpc(&v3->m_Dpc, 0LL, 0LL);
}
