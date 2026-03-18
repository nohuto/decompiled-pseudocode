/*
 * XREFs of imp_WdfIoTargetCreate @ 0x1C0020B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0020C1C (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoTargetCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_OBJECT_ATTRIBUTES *IoTargetAttributes,
        WDFIOTARGET__ **IoTarget)
{
  WDFDEVICE__ *_a1; // rdi
  FxDeviceBase *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  WDFIOTARGET__ *v10; // rcx
  unsigned __int8 CurrentIrql; // al
  FxDeviceBase *pDevice; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxIoTargetRemote *pTarget; // [rsp+78h] [rbp+10h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  v7 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v7->FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDeviceBase *)((char *)v7 - Device);
  }
  if ( v7->m_Type == 4144 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, _a1, 0x1030u, Device);
    v7 = pDevice;
  }
  m_Globals = v7->m_Globals;
  if ( !IoTarget )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTargetAPI_cpp_Traceguids, _a1);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    LODWORD(pTarget) = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&pTarget,
      m_Globals->Public.DriverName,
      (const char *)&pTarget);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  else
  {
    result = FxValidateObjectAttributes(m_Globals, IoTargetAttributes, 0, (unsigned __int16)IoTarget);
    if ( result >= 0 )
    {
      result = FxIoTargetRemote::_Create(m_Globals, IoTargetAttributes, pDevice, &pTarget);
      if ( result >= 0 )
      {
        if ( pTarget->m_ObjectSize )
          v10 = (WDFIOTARGET__ *)((unsigned __int64)pTarget ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v10 = 0LL;
        *IoTarget = v10;
      }
    }
  }
  return result;
}
