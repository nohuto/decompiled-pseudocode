/*
 * XREFs of imp_WdfIoTargetQueryTargetProperty @ 0x1C0083150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        __int32 DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        unsigned int *ResultLength)
{
  WDFIOTARGET__ *_a1; // rdi
  FxIoTarget *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // dl
  _DEVICE_OBJECT *m_TargetPdo; // rcx
  NTSTATUS _a3; // eax
  unsigned int v15; // esi
  FxIoTarget *pTarget; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  _a1 = (WDFIOTARGET__ *)IoTarget;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1200uLL);
  v9 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    IoTarget = LOWORD(v9->__vftable);
    v9 = (FxIoTarget *)((char *)v9 - IoTarget);
  }
  if ( v9->m_Type == 4608 )
  {
    pTarget = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pTarget, _a1, 0x1200u, IoTarget);
    v9 = pTarget;
  }
  m_Globals = v9->m_Globals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  m_TargetPdo = v9->m_TargetPdo;
  if ( !m_TargetPdo )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetAPIKm_cpp_Traceguids, _a1, -1073741808);
    return 3221225488LL;
  }
  _a3 = IoGetDeviceProperty(
          m_TargetPdo,
          (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
          BufferLength,
          PropertyBuffer,
          ResultLength);
  v15 = _a3;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qdd(m_Globals, 5u, 0xEu, 0x11u, WPP_FxIoTargetAPIKm_cpp_Traceguids, _a1, DeviceProperty, _a3);
  return v15;
}
