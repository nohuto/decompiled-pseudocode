/*
 * XREFs of imp_WdfDeviceCreate @ 0x1C001D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  _FX_DRIVER_GLOBALS *v8; // rbx
  __int64 result; // rax
  WDFDEVICE_INIT *v10; // rcx
  WDFDEVICE__ *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !*DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(v4, retaddr);
  v8 = (*DeviceInit)->DriverGlobals;
  *Device = 0LL;
  if ( v8->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v8, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(v8);
      return 3221225488LL;
    }
  }
  result = FxValidateObjectAttributes(v8, DeviceAttributes, 7, (unsigned __int16)Device);
  if ( (int)result >= 0 )
  {
    v10 = *DeviceInit;
    if ( (*DeviceInit)->CreatedDevice )
    {
      WPP_IFR_SF_q(v8, 2u, 0x12u, 0x19u, WPP_FxDeviceApi_cpp_Traceguids, Device);
      return 3221225860LL;
    }
    else
    {
      if ( (v10->Security.Sddl || v10->Security.DeviceClassSet)
        && !v10->DeviceName
        && (v10->Characteristics & 0x80u) == 0 )
      {
        WPP_IFR_SF_d(v8, 2u, 0x12u, 0x1Au, WPP_FxDeviceApi_cpp_Traceguids, -1073741703);
        return 3221225593LL;
      }
      if ( v10->RequiresSelfIoTarget && v10->InitType )
      {
        WPP_IFR_SF_d(v8, 2u, 0x12u, 0x1Bu, WPP_FxDeviceApi_cpp_Traceguids, -1073741808);
        return 3221225488LL;
      }
      result = FxDevice::_Create(v8, DeviceInit, DeviceAttributes, &pDevice);
      if ( (int)result >= 0 )
      {
        if ( pDevice->m_ObjectSize )
          v11 = (WDFDEVICE__ *)((unsigned __int64)pDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v11 = 0LL;
        *Device = v11;
      }
    }
  }
  return result;
}
