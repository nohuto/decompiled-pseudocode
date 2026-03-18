/*
 * XREFs of ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EFAC
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0088110 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008A29C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C008D67C (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigSingle(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipeAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 m_NumInterfaces; // al
  const void *_a1; // rbx
  const void *v9; // rbx
  __int64 v10; // r11
  _FILE_OBJECT *ConfigRequest; // rax
  _FX_URB_TYPE v12; // r9
  _FILE_OBJECT *v13; // r14
  int v14; // esi
  FxUsbInterface **m_Interfaces; // rcx
  _USB_INTERFACE_DESCRIPTOR **v16; // rdx
  _USBD_INTERFACE_LIST_ENTRY listEntry[2]; // [rsp+40h] [rbp-28h] BYREF

  Params->Types.Descriptor.ConfigurationDescriptor = 0LL;
  Params->Types.Descriptor.InterfaceDescriptors = 0LL;
  m_NumInterfaces = this->m_NumInterfaces;
  if ( m_NumInterfaces > 1u )
  {
    _a1 = 0LL;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qdd(
      this->m_Globals,
      2u,
      0xEu,
      0x1Bu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      _a1,
      m_NumInterfaces,
      -1073741811);
    return 3221225485LL;
  }
  memset(listEntry, 0, sizeof(listEntry));
  v9 = 0LL;
  listEntry[0].InterfaceDescriptor = FxUsbInterface::GetSettingDescriptor(*this->m_Interfaces, 0);
  if ( !listEntry[0].InterfaceDescriptor )
  {
    if ( this->m_ObjectSize )
      v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xEu,
      0x1Cu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      v9,
      *(unsigned __int8 *)(*(_QWORD *)v10 + 146LL));
    return 3221225485LL;
  }
  ConfigRequest = (_FILE_OBJECT *)FxUsbCreateConfigRequest(
                                    this->m_Globals,
                                    this->m_ConfigDescriptor,
                                    listEntry,
                                    0xFFFFFFFF);
  v13 = ConfigRequest;
  if ( ConfigRequest )
  {
    v14 = FxUsbDevice::SelectConfig(this, PipeAttributes, ConfigRequest, v12, 0LL);
    if ( v14 >= 0 )
    {
      Params->Types.SingleInterface.NumberConfiguredPipes = (*this->m_Interfaces)->m_NumberOfConfiguredPipes;
      m_Interfaces = this->m_Interfaces;
      if ( (*m_Interfaces)->m_ObjectSize )
        v16 = (_USB_INTERFACE_DESCRIPTOR **)((unsigned __int64)*m_Interfaces ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      Params->Types.Descriptor.InterfaceDescriptors = v16;
    }
    FxPoolFree(v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v14;
}
