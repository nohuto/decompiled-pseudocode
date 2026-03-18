/*
 * XREFs of imp_WdfUsbInterfaceSelectSetting @ 0x1C0088C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C008FCEC (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C008FE1C (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 */

__int64 __fastcall imp_WdfUsbInterfaceSelectSetting(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbInterface,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS *Params)
{
  FxUsbInterface *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  unsigned int Size; // ecx
  unsigned int v12; // ebx
  _USB_INTERFACE_DESCRIPTOR *_a1; // rax
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // r8
  FxUsbInterface *pUsbInterface; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  if ( !UsbInterface )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1204uLL);
  v6 = (FxUsbInterface *)(~UsbInterface & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbInterface & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxUsbInterface *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4612 )
  {
    pUsbInterface = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pUsbInterface, (void *)UsbInterface, 0x1204u, Offset);
    v6 = pUsbInterface;
  }
  m_Globals = v6->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Size = Params->Size;
    if ( Params->Size != 16 )
    {
      v12 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, UsbInterface, 0xEu, 0xAu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, Size, 16, -1073741820);
      return v12;
    }
    result = FxValidateObjectAttributes(m_Globals, PipesAttributes, 1, (unsigned __int16)Params);
    if ( (int)result < 0 )
      return result;
    switch ( Params->Type )
    {
      case WdfUsbInterfaceSelectSettingTypeDescriptor:
        InterfaceDescriptor = Params->Types.Descriptor.InterfaceDescriptor;
        if ( !InterfaceDescriptor )
        {
          v12 = -1073741811;
          WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0xBu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, -1073741811);
          return v12;
        }
        return (unsigned int)FxUsbInterface::SelectSettingByDescriptor(
                               pUsbInterface,
                               PipesAttributes,
                               InterfaceDescriptor);
      case WdfUsbInterfaceSelectSettingTypeSetting:
        return (unsigned int)FxUsbInterface::SelectSettingByIndex(
                               pUsbInterface,
                               PipesAttributes,
                               Params->Types.Interface.SettingIndex);
      case WdfUsbInterfaceSelectSettingTypeUrb:
        _a1 = Params->Types.Descriptor.InterfaceDescriptor;
        if ( !_a1 || *(_WORD *)&_a1->bInterfaceNumber != 1 || *(_WORD *)&_a1->bLength < 0x38u )
        {
          v12 = -1073741811;
          WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, _a1, -1073741811);
          return v12;
        }
        return (unsigned int)FxUsbInterface::SelectSetting(pUsbInterface, PipesAttributes, Params->Types.Urb.Urb);
      default:
        return (unsigned int)-1073741811;
    }
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
