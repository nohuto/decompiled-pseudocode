/*
 * XREFs of imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0087CC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qLd @ 0x1C0028BB8 (WPP_IFR_SF_qLd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x1C007A20C (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C0086548 (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008667C (WPP_IFR_SF_qqLd.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008C4D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008D5AC (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EA70 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EDA0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  WDFUSBDEVICE__ *v6; // r15
  FxUsbDevice *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  unsigned int v12; // ebx
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  FxUsbDevice *v16; // r10
  unsigned __int8 m_NumInterfaces; // dl
  unsigned int v18; // esi
  _USB_CONFIGURATION_DESCRIPTOR *ConfigurationDescriptor; // rax
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rcx
  const void *_a1; // r10
  unsigned __int8 NumberConfiguredPipes; // cl
  const void *v24; // r10
  unsigned int v25; // ebx
  _USB_INTERFACE_DESCRIPTOR **v26; // rsi
  _USB_INTERFACE_DESCRIPTOR *v27; // r8
  FxUsbInterface *v28; // rcx
  __int64 v29; // rdx
  const void *v30; // rax
  const _GUID *Offset; // [rsp+20h] [rbp-40h]
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]
  FxUsbInterface *pUsbInterface; // [rsp+98h] [rbp+38h] BYREF

  v6 = (WDFUSBDEVICE__ *)UsbDevice;
  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v8 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(UsbDevice) = 0;
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    UsbDevice = LOWORD(v8->__vftable);
    v8 = (FxUsbDevice *)((char *)v8 - UsbDevice);
  }
  if ( v8->m_Type == 4610 )
  {
    pUsbDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pUsbDevice, v6, 0x1202u, UsbDevice);
    v8 = pUsbDevice;
  }
  m_Globals = v8->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(pUsbInterface) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  if ( Params->Size == 32 )
  {
    if ( (unsigned int)(Params->Type - 1) > 5 )
    {
      v12 = -1073741811;
      WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDeviceAPI_cpp_Traceguids, 32, -1073741811);
      return v12;
    }
    result = FxValidateObjectAttributes(m_Globals, PipesAttributes, 1, (unsigned __int16)Params);
    if ( (int)result < 0 )
      return result;
    v16 = pUsbDevice;
    if ( pUsbDevice->m_MismatchedInterfacesInConfigDescriptor )
    {
      WPP_IFR_SF_qLd(m_Globals, v13, 0xEu, 0x12u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v6, Params->Type, -1073741808);
      return 3221225488LL;
    }
    m_NumInterfaces = pUsbDevice->m_NumInterfaces;
    if ( !m_NumInterfaces )
    {
      WPP_IFR_SF_qLd(m_Globals, 0, 0xEu, 0x13u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v6, Params->Type, 0);
      return 0LL;
    }
    if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeDeconfig )
      return (unsigned int)FxUsbDevice::Deconfig(pUsbDevice);
    if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeSingleInterface )
    {
      if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
      {
        if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeInterfacesPairs )
        {
          if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeInterfacesDescriptor )
          {
            InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
            if ( !InterfaceDescriptors || !Params->Types.Descriptor.NumInterfaceDescriptors )
            {
              v18 = -1073741811;
              WPP_IFR_SF_qqDLd(
                m_Globals,
                m_NumInterfaces,
                v14,
                v15,
                Offset,
                v6,
                InterfaceDescriptors,
                Params->Types.Descriptor.NumInterfaceDescriptors,
                5u);
              return v18;
            }
            return (unsigned int)FxUsbDevice::SelectConfigDescriptor(pUsbDevice, PipesAttributes, Params);
          }
          else
          {
            if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeUrb )
              return (unsigned int)-1073741811;
            ConfigurationDescriptor = Params->Types.Descriptor.ConfigurationDescriptor;
            if ( !ConfigurationDescriptor
              || ConfigurationDescriptor->wTotalLength
              || *(_WORD *)&ConfigurationDescriptor->bLength < 0x40u )
            {
              v18 = -1073741811;
              WPP_IFR_SF_qqLd(
                m_Globals,
                m_NumInterfaces,
                0xEu,
                0x15u,
                WPP_FxUsbDeviceAPI_cpp_Traceguids,
                v6,
                ConfigurationDescriptor,
                6u,
                -1073741811);
              return v18;
            }
            return (unsigned int)FxUsbDevice::SelectConfig(
                                   pUsbDevice,
                                   PipesAttributes,
                                   Params->Types.Urb.Urb,
                                   (_FX_URB_TYPE)v15,
                                   0LL);
          }
        }
        if ( !Params->Types.Descriptor.InterfaceDescriptors )
        {
          v18 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            _a1 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a1 = 0LL;
          WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x16u, WPP_FxUsbDeviceAPI_cpp_Traceguids, _a1, -1073741811);
          return v18;
        }
        NumberConfiguredPipes = Params->Types.SingleInterface.NumberConfiguredPipes;
        if ( NumberConfiguredPipes != m_NumInterfaces )
        {
          v18 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v24 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v24 = 0LL;
          WPP_IFR_SF_qddd(
            m_Globals,
            m_NumInterfaces,
            0xEu,
            0x17u,
            WPP_FxUsbDeviceAPI_cpp_Traceguids,
            v24,
            NumberConfiguredPipes,
            m_NumInterfaces,
            -1073741811);
          return v18;
        }
      }
      v25 = 0;
      if ( Params->Types.SingleInterface.NumberConfiguredPipes )
      {
        while ( 1 )
        {
          v26 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v25];
          v27 = *v26;
          if ( !*v26 )
            FxVerifierBugCheckWorker(
              (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
              WDF_INVALID_HANDLE,
              0LL,
              0x1204uLL);
          v28 = (FxUsbInterface *)(~(unsigned __int64)v27 & 0xFFFFFFFFFFFFFFF8uLL);
          LOWORD(v29) = 0;
          if ( ((unsigned __int8)v27 & 1) != 0 )
          {
            v29 = LOWORD(v28->__vftable);
            v28 = (FxUsbInterface *)((char *)v28 - v29);
          }
          if ( v28->m_Type == 4612 )
          {
            pUsbInterface = v28;
          }
          else
          {
            FxObjectHandleGetPtrQI(v28, (void **)&pUsbInterface, v27, 0x1204u, v29);
            v28 = pUsbInterface;
          }
          if ( *((_BYTE *)v26 + 8) >= v28->m_NumSettings )
            break;
          if ( ++v25 >= Params->Types.SingleInterface.NumberConfiguredPipes )
          {
            v16 = pUsbDevice;
            return (unsigned int)FxUsbDevice::SelectConfigMulti(v16, PipesAttributes, Params);
          }
        }
        if ( pUsbDevice->m_ObjectSize )
          v30 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v30 = 0LL;
        v12 = -1073741811;
        WPP_IFR_SF_qqddd(
          m_Globals,
          v28->m_NumSettings - 1,
          0xEu,
          0x18u,
          WPP_FxUsbDeviceAPI_cpp_Traceguids,
          v30,
          *v26,
          *((unsigned __int8 *)v26 + 8),
          v28->m_NumSettings - 1,
          -1073741811);
        return v12;
      }
      return (unsigned int)FxUsbDevice::SelectConfigMulti(v16, PipesAttributes, Params);
    }
    return (unsigned int)FxUsbDevice::SelectConfigSingle(pUsbDevice, PipesAttributes, Params);
  }
  v12 = -1073741820;
  WPP_IFR_SF_DDd(m_Globals, 0x20u, 0xEu, 0xFu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Params->Size, 32, -1073741820);
  return v12;
}
