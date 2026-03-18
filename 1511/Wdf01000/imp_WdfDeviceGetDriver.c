/*
 * XREFs of imp_WdfDeviceGetDriver @ 0x1C0033B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFDRIVER__ *__fastcall imp_WdfDeviceGetDriver(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxDriver *m_Driver; // rax
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Driver = pDevice->m_Driver;
  if ( m_Driver->m_ObjectSize )
    return (WDFDRIVER__ *)((unsigned __int64)m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
