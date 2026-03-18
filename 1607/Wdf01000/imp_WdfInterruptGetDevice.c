/*
 * XREFs of imp_WdfInterruptGetDevice @ 0x1C00112D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  FxInterrupt *v2; // rcx
  __int64 Offset; // r8
  FxDeviceBase *m_DeviceBase; // rax
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1027uLL);
  v2 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxInterrupt *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4135 )
  {
    pFxInterrupt = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v2 = pFxInterrupt;
  }
  m_DeviceBase = v2->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
