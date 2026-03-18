/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092CBC
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C008BD80 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008E108 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C008E2C8 (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C009024C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C009161C (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // rbp
  _FX_DRIVER_GLOBALS **p_m_Globals; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _POOL_TYPE v8; // r8d
  _WDF_OBJECT_ATTRIBUTES *v9; // r13
  unsigned __int8 v10; // si
  unsigned int v11; // ebx
  _USBD_INTERFACE_LIST_ENTRY *v12; // rax
  _USBD_INTERFACE_LIST_ENTRY *v13; // r14
  unsigned __int8 v15; // bl
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  __int64 v17; // r11
  FxUsbInterface *v18; // rcx
  __int64 m_ObjectSize; // rax
  const void *v20; // rdi
  unsigned int v21; // ebx
  unsigned __int8 v22; // bp
  _USB_INTERFACE_DESCRIPTOR **v23; // rbx
  unsigned __int8 v24; // r13
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r8
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  _USB_COMMON_DESCRIPTOR *v28; // rax
  unsigned __int8 m_NumInterfaces; // al
  int _a4; // ecx
  unsigned __int16 v31; // r9
  int v32; // edx
  unsigned __int16 v33; // ax
  const void *v34; // rdi
  _FILE_OBJECT *ConfigRequest; // rax
  _FX_URB_TYPE v36; // r9
  _FILE_OBJECT *v37; // rsi
  unsigned __int8 v38; // [rsp+50h] [rbp-168h]
  void *PPObject; // [rsp+58h] [rbp-160h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v40; // [rsp+60h] [rbp-158h]
  unsigned __int8 *v41; // [rsp+68h] [rbp-150h]
  unsigned __int8 bitArray[256]; // [rsp+70h] [rbp-148h] BYREF
  void *Caller; // [rsp+1B8h] [rbp+0h]

  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  p_m_Globals = &this->m_Globals;
  v40 = PipesAttributes;
  m_Globals = this->m_Globals;
  v8 = ExDefaultNonPagedPoolType;
  v9 = PipesAttributes;
  v10 = 0;
  v41 = p_NumberOfConfiguredInterfaces;
  *p_NumberOfConfiguredInterfaces = 0;
  v11 = 16 * (this->m_NumInterfaces + 1);
  v12 = (_USBD_INTERFACE_LIST_ENTRY *)FxPoolAllocator(
                                        m_Globals,
                                        &m_Globals->FxPoolFrameworks,
                                        v8,
                                        v11,
                                        m_Globals->Tag,
                                        Caller);
  v13 = v12;
  if ( !v12 )
    return 3221225626LL;
  memset(v12, 0, v11);
  if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
  {
    v15 = 0;
    if ( this->m_NumInterfaces )
    {
      while ( 1 )
      {
        SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this->m_Interfaces[v15], 0);
        v13[v17].InterfaceDescriptor = SettingDescriptor;
        if ( !SettingDescriptor )
          break;
        if ( ++v15 >= this->m_NumInterfaces )
          goto LABEL_24;
      }
      v18 = this->m_Interfaces[v15];
      m_ObjectSize = this->m_ObjectSize;
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        v20 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxusbDeviceKm_cpp_Traceguids, v20, v18->m_InterfaceNumber);
      v21 = -1073741811;
      goto $Done_57;
    }
LABEL_24:
    ConfigRequest = (_FILE_OBJECT *)FxUsbCreateConfigRequest(*p_m_Globals, this->m_ConfigDescriptor, v13, 0xFFFFFFFF);
    v37 = ConfigRequest;
    if ( ConfigRequest )
    {
      v21 = FxUsbDevice::SelectConfig(this, v9, ConfigRequest, v36, p_NumberOfConfiguredInterfaces);
      FxPoolFree(v37);
    }
    else
    {
      v21 = -1073741670;
    }
    goto $Done_57;
  }
  memset(bitArray, 0, 0xFFuLL);
  v22 = 0;
  if ( !Params->Types.SingleInterface.NumberConfiguredPipes )
  {
LABEL_17:
    m_NumInterfaces = this->m_NumInterfaces;
    if ( m_NumInterfaces > v10 )
    {
      v21 = -1073741811;
      _a4 = m_NumInterfaces;
      v31 = 31;
      v32 = v10;
      goto LABEL_20;
    }
    p_NumberOfConfiguredInterfaces = v41;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v23 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v22];
    FxObjectHandleGetPtr(*p_m_Globals, (unsigned __int64)*v23, 0x1204u, &PPObject);
    v38 = *((_BYTE *)v23 + 8);
    v24 = *((_BYTE *)PPObject + 146);
    v25 = bitArray[v24];
    if ( (v25 & 1) == 0 )
      break;
LABEL_15:
    if ( ++v22 >= Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      v9 = v40;
      goto LABEL_17;
    }
  }
  v26 = *((_BYTE *)v23 + 8);
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  bitArray[*((unsigned __int8 *)PPObject + 146)] = v25 | 1;
  v28 = FxUsbParseConfigurationDescriptor(m_ConfigDescriptor, v24, v26);
  v13[v10].InterfaceDescriptor = (_USB_INTERFACE_DESCRIPTOR *)v28;
  if ( v28 )
  {
    ++v10;
    goto LABEL_15;
  }
  v21 = -1073741811;
  v32 = v38;
  v31 = 30;
  _a4 = v24;
LABEL_20:
  v33 = this->m_ObjectSize;
  v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v33 )
    v34 = 0LL;
  WPP_IFR_SF_qddd(*p_m_Globals, v32, 0xEu, v31, WPP_FxusbDeviceKm_cpp_Traceguids, v34, v32, _a4, -1073741811);
$Done_57:
  FxPoolFree(v13);
  return v21;
}
