/*
 * XREFs of imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0088110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qLd @ 0x1C002E0B8 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x1C007C8B8 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C00872AC (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00873E0 (WPP_IFR_SF_qqLd.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008B9D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008CA2C (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008ECC4 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EFAC (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *v4; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned __int16 v10; // r9
  unsigned int v11; // ebx
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  FxUsbDevice *v15; // r10
  unsigned __int8 m_NumInterfaces; // dl
  unsigned int v17; // esi
  _USB_CONFIGURATION_DESCRIPTOR *_a3; // rax
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rcx
  const void *v21; // r10
  unsigned __int8 NumberConfiguredPipes; // cl
  const void *v23; // r10
  unsigned int v24; // ebx
  _USB_INTERFACE_DESCRIPTOR **v25; // r14
  const void *v26; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+80h] [rbp+8h] BYREF
  FxUsbInterface *pUsbInterface; // [rsp+98h] [rbp+20h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( Params->Size != 32 )
    {
      v11 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, 0x20u, 0xEu, 0xFu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Params->Size, 32, -1073741820);
      return v11;
    }
    if ( (unsigned int)(Params->Type - 1) > 5 )
    {
      v11 = -1073741811;
      WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDeviceAPI_cpp_Traceguids, 32, -1073741811);
      return v11;
    }
    result = FxValidateObjectAttributes(m_Globals, PipesAttributes, 1, v10);
    if ( (int)result < 0 )
      return result;
    v15 = pUsbDevice;
    if ( pUsbDevice->m_MismatchedInterfacesInConfigDescriptor )
    {
      v11 = -1073741808;
      WPP_IFR_SF_qLd(
        m_Globals,
        v12,
        0xEu,
        0x12u,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        UsbDevice,
        Params->Type,
        -1073741808);
      return v11;
    }
    m_NumInterfaces = pUsbDevice->m_NumInterfaces;
    if ( !m_NumInterfaces )
    {
      WPP_IFR_SF_qLd(m_Globals, 0, 0xEu, 0x13u, WPP_FxUsbDeviceAPI_cpp_Traceguids, UsbDevice, Params->Type, 0);
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
              v17 = -1073741811;
              WPP_IFR_SF_qqDLd(
                m_Globals,
                m_NumInterfaces,
                v13,
                v14,
                _a1,
                UsbDevice,
                InterfaceDescriptors,
                Params->Types.Descriptor.NumInterfaceDescriptors,
                5u);
              return v17;
            }
            return (unsigned int)FxUsbDevice::SelectConfigDescriptor(pUsbDevice, PipesAttributes, Params);
          }
          else
          {
            if ( Params->Type != WdfUsbTargetDeviceSelectConfigTypeUrb )
              return (unsigned int)-1073741811;
            _a3 = Params->Types.Descriptor.ConfigurationDescriptor;
            if ( !_a3 || _a3->wTotalLength || *(_WORD *)&_a3->bLength < 0x40u )
            {
              v17 = -1073741811;
              WPP_IFR_SF_qqLd(
                m_Globals,
                m_NumInterfaces,
                0xEu,
                0x15u,
                WPP_FxUsbDeviceAPI_cpp_Traceguids,
                UsbDevice,
                _a3,
                6u,
                -1073741811);
              return v17;
            }
            return (unsigned int)FxUsbDevice::SelectConfig(
                                   pUsbDevice,
                                   PipesAttributes,
                                   Params->Types.Urb.Urb,
                                   (_FX_URB_TYPE)v14,
                                   0LL);
          }
        }
        if ( !Params->Types.Descriptor.InterfaceDescriptors )
        {
          v17 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v21 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v21 = 0LL;
          WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x16u, WPP_FxUsbDeviceAPI_cpp_Traceguids, v21, -1073741811);
          return v17;
        }
        NumberConfiguredPipes = Params->Types.SingleInterface.NumberConfiguredPipes;
        if ( NumberConfiguredPipes != m_NumInterfaces )
        {
          v17 = -1073741811;
          if ( pUsbDevice->m_ObjectSize )
            v23 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v23 = 0LL;
          WPP_IFR_SF_qddd(
            m_Globals,
            m_NumInterfaces,
            0xEu,
            0x17u,
            WPP_FxUsbDeviceAPI_cpp_Traceguids,
            v23,
            NumberConfiguredPipes,
            m_NumInterfaces,
            -1073741811);
          return v17;
        }
      }
      v24 = 0;
      if ( Params->Types.SingleInterface.NumberConfiguredPipes )
      {
        while ( 1 )
        {
          v25 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v24];
          FxObjectHandleGetPtr(v4, (unsigned __int64)*v25, 0x1204u, (void **)&pUsbInterface);
          if ( *((_BYTE *)v25 + 8) >= pUsbInterface->m_NumSettings )
            break;
          if ( ++v24 >= Params->Types.SingleInterface.NumberConfiguredPipes )
          {
            v15 = pUsbDevice;
            return (unsigned int)FxUsbDevice::SelectConfigMulti(v15, PipesAttributes, Params);
          }
        }
        if ( pUsbDevice->m_ObjectSize )
          v26 = (const void *)((unsigned __int64)pUsbDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v26 = 0LL;
        v11 = -1073741811;
        WPP_IFR_SF_qqddd(
          m_Globals,
          pUsbInterface->m_NumSettings - 1,
          0xEu,
          0x18u,
          WPP_FxUsbDeviceAPI_cpp_Traceguids,
          v26,
          *v25,
          *((unsigned __int8 *)v25 + 8),
          pUsbInterface->m_NumSettings - 1,
          -1073741811);
        return v11;
      }
      return (unsigned int)FxUsbDevice::SelectConfigMulti(v15, PipesAttributes, Params);
    }
    return (unsigned int)FxUsbDevice::SelectConfigSingle(pUsbDevice, PipesAttributes, Params);
  }
  return result;
}
