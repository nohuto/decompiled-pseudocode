/*
 * XREFs of FxUsbTargetDeviceCreate @ 0x1C0086364
 * Callers:
 *     imp_WdfUsbTargetDeviceCreate @ 0x1C0086B70 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x1C0086D20 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 * Callees:
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0014228 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008B220 (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008BB00 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E1B0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 */

__int64 __fastcall FxUsbTargetDeviceCreate(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDeviceBase *Device,
        unsigned int USBDClientContractVersion,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  WDFUSBDEVICE__ **v5; // rsi
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  FxUsbDevice *v12; // rax
  FxUsbDevice *v13; // rax
  FxUsbDevice *v14; // rdi
  int inited; // ebx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  v5 = UsbDevice;
  if ( !UsbDevice )
    FxVerifierNullBugCheck(FxDriverGlobals, retaddr);
  *UsbDevice = 0LL;
  if ( FxDriverGlobals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    LODWORD(UsbDevice) = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else
  {
    result = FxValidateObjectAttributes(FxDriverGlobals, Attributes, 1, (unsigned __int16)Attributes);
    if ( (int)result >= 0 )
    {
      v12 = (FxUsbDevice *)FxObjectHandleAlloc(
                             FxDriverGlobals,
                             ExDefaultNonPagedPoolType,
                             0x1F0uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
      if ( v12 )
      {
        FxUsbDevice::FxUsbDevice(v12, FxDriverGlobals);
        v14 = v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        inited = FxIoTarget::Init(v14, Device);
        if ( inited < 0
          || (UsbDevice = 0LL, inited = FxUsbDevice::InitDevice(v14, USBDClientContractVersion), inited < 0)
          || (inited = FxUsbDevice::CreateInterfaces(v14), inited < 0)
          || (inited = Device->AddIoTarget(Device, v14), inited < 0)
          || (inited = FxObject::Commit(v14, Attributes, (void **)&UsbDevice, Device, 1u), inited < 0) )
        {
          FxObject::DeleteFromFailedCreate(v14);
        }
        else
        {
          *v5 = (WDFUSBDEVICE__ *)UsbDevice;
        }
        return (unsigned int)inited;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
