/*
 * XREFs of imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0082D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C0025C18 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetAllocAndQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        __int32 DeviceProperty,
        __int32 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFIOTARGET__ *_a1; // rdi
  FxIoTarget *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int64 result; // rax
  _DEVICE_OBJECT *m_TargetPdo; // r9
  int Property; // eax
  unsigned int v15; // esi
  FxIoTarget *pTarget; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

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
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  *PropertyMemory = 0LL;
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
    if ( FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType((_POOL_TYPE)PoolType, retaddr, m_Globals->Tag);
  }
  result = FxValidateObjectAttributes(m_Globals, PropertyMemoryAttributes, 0, PoolType);
  if ( (int)result >= 0 )
  {
    m_TargetPdo = pTarget->m_TargetPdo;
    if ( !m_TargetPdo )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPIKm_cpp_Traceguids, _a1, -1073741808);
      return 3221225488LL;
    }
    Property = FxDevice::_AllocAndQueryProperty(
                 m_Globals,
                 0LL,
                 0LL,
                 m_TargetPdo,
                 (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                 (_POOL_TYPE)PoolType,
                 PropertyMemoryAttributes,
                 PropertyMemory);
    v15 = Property;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTargetAPIKm_cpp_Traceguids, _a1, DeviceProperty, Property);
    return v15;
  }
  return result;
}
