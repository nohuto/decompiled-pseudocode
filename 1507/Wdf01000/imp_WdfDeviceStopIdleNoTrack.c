/*
 * XREFs of imp_WdfDeviceStopIdleNoTrack @ 0x1C0072100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall imp_WdfDeviceStopIdleNoTrack(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 WaitForD0)
{
  WDFDEVICE__ *_a1; // rsi
  FxObject *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned int v8; // ebx
  FxPowerIdleMachine *v9; // rcx
  int _a3; // eax
  void *PPObject; // [rsp+78h] [rbp+20h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v5->__vftable);
    v5 = (FxObject *)((char *)v5 - Device);
  }
  if ( v5->m_Type == 4098 )
  {
    PPObject = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, &PPObject, _a1, 0x1002u, Device);
    v5 = (FxObject *)PPObject;
  }
  m_Globals = v5->m_Globals;
  if ( WaitForD0 && m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return (unsigned int)-1073741808;
  }
  else
  {
    v9 = *(FxPowerIdleMachine **)(*(_QWORD *)&v5[6].m_ObjectFlags + 880LL);
    if ( v9 )
    {
      _a3 = FxPowerIdleMachine::PowerReferenceWorker(v9, WaitForD0, FxPowerReferenceDefault, 0LL, 0, 0LL);
      v8 = _a3;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, _a1, WaitForD0, _a3);
    }
    else
    {
      v8 = -1073741436;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x24u, WPP_FxDeviceApi_cpp_Traceguids, _a1, -1073741436);
    }
  }
  return v8;
}
