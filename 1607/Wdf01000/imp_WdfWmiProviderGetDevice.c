/*
 * XREFs of imp_WdfWmiProviderGetDevice @ 0x1C006F580
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfWmiProviderGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIPROVIDER__ *WmiProvider)
{
  FxDeviceBase *m_DeviceBase; // rax
  FxWmiProvider *pProvider; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)WmiProvider,
    0x1004u,
    (void **)&pProvider);
  m_DeviceBase = pProvider->m_Parent->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
