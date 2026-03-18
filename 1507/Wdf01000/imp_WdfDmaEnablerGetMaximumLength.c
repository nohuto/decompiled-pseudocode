/*
 * XREFs of imp_WdfDmaEnablerGetMaximumLength @ 0x1C005FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDmaEnablerGetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler)
{
  __int64 Offset; // r8
  FxDmaEnabler *v3; // rcx
  FxDmaEnabler *pDmaEnabler; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !DmaEnabler )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1400uLL);
  v3 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DmaEnabler & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxDmaEnabler *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 5120 )
  {
    pDmaEnabler = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDmaEnabler, (void *)DmaEnabler, 0x1400u, Offset);
    v3 = pDmaEnabler;
  }
  return v3->m_SimplexAdapterInfo.DeviceDescription.MaximumLength;
}
