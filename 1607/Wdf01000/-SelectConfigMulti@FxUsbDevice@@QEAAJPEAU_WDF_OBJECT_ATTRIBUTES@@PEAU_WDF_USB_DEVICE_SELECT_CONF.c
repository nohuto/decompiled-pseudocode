/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008ECC4
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0088110 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008A29C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C008A450 (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C008D67C (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
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
  FxUsbInterface ***p_m_Interfaces; // rsi
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  __int64 v18; // r11
  const void *v19; // rdi
  unsigned int v20; // ebx
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // bp
  _USB_INTERFACE_DESCRIPTOR **v23; // rbx
  unsigned __int8 v24; // r13
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r8
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  _USB_COMMON_DESCRIPTOR *v28; // rax
  int _a4; // eax
  const void *v30; // rdi
  int v31; // ecx
  unsigned __int16 v32; // r9
  _FILE_OBJECT *ConfigRequest; // rax
  _FX_URB_TYPE v34; // r9
  _FILE_OBJECT *v35; // rsi
  unsigned __int8 v36; // [rsp+50h] [rbp-168h]
  void *PPObject; // [rsp+58h] [rbp-160h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v38; // [rsp+60h] [rbp-158h]
  unsigned __int8 *v39; // [rsp+68h] [rbp-150h]
  unsigned __int8 bitArray[256]; // [rsp+70h] [rbp-148h] BYREF
  void *Caller; // [rsp+1B8h] [rbp+0h]

  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  p_m_Globals = &this->m_Globals;
  v38 = PipesAttributes;
  m_Globals = this->m_Globals;
  v8 = ExDefaultNonPagedPoolType;
  v9 = PipesAttributes;
  v10 = 0;
  v39 = p_NumberOfConfiguredInterfaces;
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
      p_m_Interfaces = &this->m_Interfaces;
      while ( 1 )
      {
        SettingDescriptor = FxUsbInterface::GetSettingDescriptor((*p_m_Interfaces)[v15], 0);
        v13[v18].InterfaceDescriptor = SettingDescriptor;
        if ( !SettingDescriptor )
          break;
        if ( ++v15 >= this->m_NumInterfaces )
          goto LABEL_30;
      }
      if ( this->m_ObjectSize )
        v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v19 = 0LL;
      WPP_IFR_SF_qd(
        *p_m_Globals,
        2u,
        0xEu,
        0x1Du,
        WPP_FxusbDeviceKm_cpp_Traceguids,
        v19,
        (*p_m_Interfaces)[v15]->m_InterfaceNumber);
      v20 = -1073741811;
      goto $Done_58;
    }
LABEL_30:
    ConfigRequest = (_FILE_OBJECT *)FxUsbCreateConfigRequest(*p_m_Globals, this->m_ConfigDescriptor, v13, 0xFFFFFFFF);
    v35 = ConfigRequest;
    if ( ConfigRequest )
    {
      v20 = FxUsbDevice::SelectConfig(this, v9, ConfigRequest, v34, p_NumberOfConfiguredInterfaces);
      FxPoolFree(v35);
    }
    else
    {
      v20 = -1073741670;
    }
    goto $Done_58;
  }
  memset(bitArray, 0, 0xFFuLL);
  v22 = 0;
  if ( !Params->Types.SingleInterface.NumberConfiguredPipes )
  {
LABEL_19:
    LOBYTE(_a4) = this->m_NumInterfaces;
    if ( (unsigned __int8)_a4 > v10 )
    {
      v20 = -1073741811;
      if ( this->m_ObjectSize )
        v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v30 = 0LL;
      _a4 = (unsigned __int8)_a4;
      v32 = 31;
      v31 = v10;
      goto LABEL_26;
    }
    p_NumberOfConfiguredInterfaces = v39;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v23 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v22];
    FxObjectHandleGetPtr(*p_m_Globals, (unsigned __int64)*v23, 0x1204u, &PPObject);
    v36 = *((_BYTE *)v23 + 8);
    v24 = *((_BYTE *)PPObject + 146);
    v21 = v24;
    v25 = bitArray[v24];
    if ( (v25 & 1) == 0 )
      break;
LABEL_17:
    if ( ++v22 >= Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      v9 = v38;
      goto LABEL_19;
    }
  }
  v26 = *((_BYTE *)v23 + 8);
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  bitArray[v24] = v25 | 1;
  v28 = FxUsbParseConfigurationDescriptor(m_ConfigDescriptor, v24, v26);
  v13[v10].InterfaceDescriptor = (_USB_INTERFACE_DESCRIPTOR *)v28;
  if ( v28 )
  {
    ++v10;
    goto LABEL_17;
  }
  v20 = -1073741811;
  if ( this->m_ObjectSize )
    v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v30 = 0LL;
  v31 = v36;
  v32 = 30;
  _a4 = v24;
LABEL_26:
  WPP_IFR_SF_qddd(*p_m_Globals, v21, 0xEu, v32, WPP_FxusbDeviceKm_cpp_Traceguids, v30, v31, _a4, -1073741811);
$Done_58:
  FxPoolFree(v13);
  return v20;
}
