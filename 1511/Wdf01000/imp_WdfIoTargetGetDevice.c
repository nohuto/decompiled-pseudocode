/*
 * XREFs of imp_WdfIoTargetGetDevice @ 0x1C002A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoTargetGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  FxIoTarget *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDeviceBase *m_DeviceBase; // rbx
  const void *_a2; // rbx
  FxIoTarget *pTarget; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  v3 = pTarget;
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
    v3 = pTarget;
  }
  m_DeviceBase = v3->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a2 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, _a2);
  return (WDFDEVICE__ *)_a2;
}
