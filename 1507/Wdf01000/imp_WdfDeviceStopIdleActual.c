/*
 * XREFs of imp_WdfDeviceStopIdleActual @ 0x1C0028290
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

__int64 __fastcall imp_WdfDeviceStopIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  WDFDEVICE__ *v8; // rbx
  FxObject *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxPowerIdleMachine *v11; // rcx
  int _a3; // eax
  unsigned int v13; // esi
  unsigned __int8 CurrentIrql; // al
  void *PPObject; // [rsp+40h] [rbp-28h] BYREF
  int v17; // [rsp+78h] [rbp+10h] BYREF

  v8 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    Device = LOWORD(v9->__vftable);
    v9 = (FxObject *)((char *)v9 - Device);
  }
  if ( v9->m_Type == 4098 )
  {
    PPObject = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, &PPObject, v8, 0x1002u, Device);
    v9 = (FxObject *)PPObject;
  }
  m_Globals = v9->m_Globals;
  if ( WaitForD0 && m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v17 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v17,
      m_Globals->Public.DriverName,
      (const char *)&v17);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return (unsigned int)-1073741808;
  }
  else
  {
    v11 = *(FxPowerIdleMachine **)(*(_QWORD *)&v9[6].m_ObjectFlags + 880LL);
    if ( v11 )
    {
      _a3 = FxPowerIdleMachine::PowerReferenceWorker(v11, WaitForD0, FxPowerReferenceDefault, Tag, Line, File);
      v13 = _a3;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, v8, WaitForD0, _a3);
    }
    else
    {
      v13 = -1073741436;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x24u, WPP_FxDeviceApi_cpp_Traceguids, v8, -1073741436);
    }
  }
  return v13;
}
