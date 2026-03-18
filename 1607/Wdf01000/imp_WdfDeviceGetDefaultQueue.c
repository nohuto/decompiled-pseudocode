/*
 * XREFs of imp_WdfDeviceGetDefaultQueue @ 0x1C0073840
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 */

WDFQUEUE__ *__fastcall imp_WdfDeviceGetDefaultQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxIoQueue *m_DefaultQueue; // rax
  FxDevice *pFxDevice; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pFxDevice);
  m_DefaultQueue = pFxDevice->m_PkgIo->m_DefaultQueue;
  if ( m_DefaultQueue )
  {
    if ( m_DefaultQueue->m_ObjectSize )
      return (WDFQUEUE__ *)((unsigned __int64)m_DefaultQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_q(pFxDevice->m_Globals, 3u, 0xDu, 0x34u, WPP_FxDeviceApi_cpp_Traceguids, Device);
    return 0LL;
  }
}
