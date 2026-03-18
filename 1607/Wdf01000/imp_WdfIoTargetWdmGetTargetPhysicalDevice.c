/*
 * XREFs of imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x1C00832A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfIoTargetWdmGetTargetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  FxIoTarget *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _DEVICE_OBJECT *_a2; // rbx
  FxIoTarget *pTarget; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  v3 = pTarget;
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget);
    v3 = pTarget;
  }
  _a2 = v3->m_TargetPdo;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xDu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, _a2);
  return _a2;
}
