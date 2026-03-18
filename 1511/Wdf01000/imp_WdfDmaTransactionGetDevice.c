/*
 * XREFs of imp_WdfDmaTransactionGetDevice @ 0x1C0058510
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfDmaTransactionGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  FxDeviceBase *m_DeviceBase; // rax
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_DeviceBase = pDmaTrans->m_DmaEnabler->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
