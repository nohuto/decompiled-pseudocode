/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EA70
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0087CC0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C008F94C (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C009295C (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C0092B10 (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // rbp
  _FX_DRIVER_GLOBALS **p_m_Globals; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _POOL_TYPE v8; // r8d
  _WDF_OBJECT_ATTRIBUTES *v9; // r12
  unsigned __int8 v10; // si
  unsigned int v11; // edi
  _USBD_INTERFACE_LIST_ENTRY *v12; // rax
  _USBD_INTERFACE_LIST_ENTRY *v13; // r15
  unsigned __int8 v15; // di
  FxUsbInterface ***p_m_Interfaces; // rsi
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  __int64 v18; // r11
  const void *v19; // rbx
  unsigned int v20; // edi
  __int64 v21; // rdx
  unsigned __int8 v22; // bp
  _USB_INTERFACE_DESCRIPTOR **v23; // rdi
  _USB_INTERFACE_DESCRIPTOR *v24; // r8
  FxObject *v25; // rcx
  __int64 v26; // r12
  unsigned __int8 v27; // al
  unsigned __int8 v28; // r8
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  _USB_INTERFACE_DESCRIPTOR *v30; // rax
  int _a4; // eax
  const void *v32; // rbx
  int v33; // ecx
  unsigned __int16 v34; // r9
  _URB *ConfigRequest; // rax
  _FX_URB_TYPE v36; // r9
  _URB *v37; // rsi
  unsigned __int8 v38; // [rsp+50h] [rbp-168h]
  void *PPObject; // [rsp+58h] [rbp-160h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v40; // [rsp+60h] [rbp-158h]
  unsigned __int8 *v41; // [rsp+68h] [rbp-150h]
  unsigned __int8 bitArray[256]; // [rsp+70h] [rbp-148h] BYREF
  _LIST_ENTRY *Caller; // [rsp+1B8h] [rbp+0h]

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
                                        (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
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
          goto LABEL_38;
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
      goto $Done_54;
    }
LABEL_38:
    ConfigRequest = FxUsbCreateConfigRequest(*p_m_Globals, this->m_ConfigDescriptor, v13, 0xFFFFFFFF);
    v37 = ConfigRequest;
    if ( ConfigRequest )
    {
      v20 = FxUsbDevice::SelectConfig(this, v9, ConfigRequest, v36, p_NumberOfConfiguredInterfaces);
      FxPoolFree(v37);
    }
    else
    {
      v20 = -1073741670;
    }
    goto $Done_54;
  }
  memset(bitArray, 0, 0xFFuLL);
  LOWORD(v21) = 0;
  v22 = 0;
  if ( !Params->Types.SingleInterface.NumberConfiguredPipes )
  {
LABEL_26:
    LOBYTE(_a4) = this->m_NumInterfaces;
    if ( (unsigned __int8)_a4 > v10 )
    {
      v20 = -1073741811;
      if ( this->m_ObjectSize )
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v32 = 0LL;
      _a4 = (unsigned __int8)_a4;
      v34 = 31;
      v33 = v10;
      goto LABEL_36;
    }
    p_NumberOfConfiguredInterfaces = v41;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v23 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v22];
    v24 = *v23;
    if ( !*v23 )
      FxVerifierBugCheckWorker(*p_m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1204uLL);
    v25 = (FxObject *)(~(unsigned __int64)v24 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( ((unsigned __int8)v24 & 1) != 0 )
    {
      v21 = LOWORD(v25->__vftable);
      v25 = (FxObject *)((char *)v25 - v21);
    }
    if ( v25->m_Type == 4612 )
    {
      PPObject = v25;
    }
    else
    {
      FxObjectHandleGetPtrQI(v25, &PPObject, v24, 0x1204u, v21);
      v25 = (FxObject *)PPObject;
    }
    v26 = BYTE2(v25[1].m_ChildListHead.Blink);
    v38 = *((_BYTE *)v23 + 8);
    v27 = bitArray[v26];
    if ( (v27 & 1) != 0 )
    {
      LOWORD(v21) = 0;
      goto LABEL_24;
    }
    v28 = *((_BYTE *)v23 + 8);
    m_ConfigDescriptor = this->m_ConfigDescriptor;
    bitArray[(unsigned int)v26] = v27 | 1;
    v30 = FxUsbParseConfigurationDescriptor(m_ConfigDescriptor, v26, v28);
    LOWORD(v21) = 0;
    v13[v10].InterfaceDescriptor = v30;
    if ( !v30 )
      break;
    ++v10;
LABEL_24:
    if ( ++v22 >= Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      v9 = v40;
      goto LABEL_26;
    }
  }
  v20 = -1073741811;
  if ( this->m_ObjectSize )
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v32 = 0LL;
  v33 = v38;
  v34 = 30;
  _a4 = (unsigned __int8)v26;
LABEL_36:
  WPP_IFR_SF_qddd(*p_m_Globals, 0, 0xEu, v34, WPP_FxusbDeviceKm_cpp_Traceguids, v32, v33, _a4, -1073741811);
$Done_54:
  FxPoolFree(v13);
  return v20;
}
