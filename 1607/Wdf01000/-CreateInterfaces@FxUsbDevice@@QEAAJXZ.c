/*
 * XREFs of ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008B16C
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C0087144 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqd @ 0x1C0068884 (WPP_IFR_SF_dqd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C008A42C (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C008A4D8 (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C008A574 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C008CEDC (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C008D184 (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxUsbDevice::CreateInterfaces(FxUsbDevice *this)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 wTotalLength; // r12
  int _a1; // eax
  unsigned int Settings; // edi
  unsigned __int16 v7; // r9
  unsigned __int8 bNumInterfaces; // cl
  unsigned int v9; // eax
  size_t v10; // rsi
  FxUsbInterface **v11; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v12; // r14
  unsigned __int8 v13; // si
  _USB_INTERFACE_DESCRIPTOR *DescriptorType; // r15
  unsigned __int8 v15; // al
  _POOL_TYPE v16; // edx
  FxUsbInterface *v17; // rax
  FxUsbInterface *v18; // rax
  FxUsbInterface *v19; // r14
  __int64 v20; // rcx
  unsigned __int8 m_NumInterfaces; // al
  unsigned __int8 v22; // cl
  FxUsbValidateDescriptorOp _a2; // [rsp+30h] [rbp-148h]
  unsigned __int8 descCountBitMap[256]; // [rsp+40h] [rbp-138h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  m_Globals = this->m_Globals;
  wTotalLength = m_ConfigDescriptor->wTotalLength;
  _a1 = FxUsbValidateConfigDescriptorHeaders(m_Globals, m_ConfigDescriptor, wTotalLength);
  Settings = _a1;
  if ( _a1 < 0 )
  {
    v7 = 10;
LABEL_3:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v7, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    return Settings;
  }
  _a1 = FxUsbValidateDescriptorType(
          m_Globals,
          this->m_ConfigDescriptor,
          (char *)this->m_ConfigDescriptor,
          &this->m_ConfigDescriptor->bLength + this->m_ConfigDescriptor->wTotalLength,
          4,
          9uLL,
          _a2,
          0);
  Settings = _a1;
  if ( _a1 < 0 )
  {
    v7 = 11;
    goto LABEL_3;
  }
  bNumInterfaces = this->m_ConfigDescriptor->bNumInterfaces;
  if ( bNumInterfaces )
    v9 = 8 * bNumInterfaces;
  else
    v9 = 8;
  v10 = v9;
  v11 = (FxUsbInterface **)FxPoolAllocator(
                             m_Globals,
                             &m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             v9,
                             m_Globals->Tag,
                             retaddr);
  this->m_Interfaces = v11;
  if ( v11 )
  {
    memset(v11, 0, v10);
    v12 = this->m_ConfigDescriptor;
    this->m_NumInterfaces = v12->bNumInterfaces;
    memset(descCountBitMap, 0, 0xFFuLL);
    v13 = 0;
    DescriptorType = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                                    (char *)v12,
                                                    v12->wTotalLength,
                                                    &v12->bLength,
                                                    4);
    if ( DescriptorType )
    {
      do
      {
        if ( v13 >= v12->bNumInterfaces )
          break;
        v15 = descCountBitMap[DescriptorType->bInterfaceNumber];
        if ( (v15 & 1) == 0 )
        {
          v16 = ExDefaultNonPagedPoolType;
          descCountBitMap[DescriptorType->bInterfaceNumber] = v15 | 1;
          v17 = (FxUsbInterface *)FxObjectHandleAlloc(this->m_Globals, v16, 0x98uLL, 0, 0LL, 0, FxObjectTypeExternal);
          if ( v17 )
          {
            FxUsbInterface::FxUsbInterface(v17, m_Globals, this, DescriptorType);
            v19 = v18;
          }
          else
          {
            v19 = 0LL;
          }
          if ( !v19 )
          {
            Settings = -1073741670;
            WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxUsbDevice_cpp_Traceguids, v13, -1073741670);
            return Settings;
          }
          Settings = FxObject::Commit(v19, 0LL, 0LL, this, 1u);
          if ( (Settings & 0x80000000) != 0 )
            return Settings;
          Settings = FxUsbInterface::CreateSettings(v19);
          if ( (Settings & 0x80000000) != 0 )
            return Settings;
          v20 = v13++;
          this->m_Interfaces[v20] = v19;
        }
        v12 = this->m_ConfigDescriptor;
        DescriptorType = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                                        (char *)v12,
                                                        wTotalLength,
                                                        &DescriptorType->bLength + DescriptorType->bLength,
                                                        4);
      }
      while ( DescriptorType );
      if ( v13 )
        goto LABEL_27;
    }
    m_NumInterfaces = this->m_NumInterfaces;
    if ( m_NumInterfaces )
    {
      Settings = -1073741808;
      WPP_IFR_SF_dqd(
        this->m_Globals,
        2u,
        0xEu,
        0xEu,
        WPP_FxUsbDevice_cpp_Traceguids,
        m_NumInterfaces,
        this->m_ConfigDescriptor,
        -1073741808);
    }
    else
    {
LABEL_27:
      if ( !DescriptorType || this->m_NumInterfaces )
      {
        v22 = this->m_NumInterfaces;
        if ( v13 < v22 )
        {
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDevice_cpp_Traceguids, v22, v13);
          this->m_NumInterfaces = v13;
        }
      }
      else
      {
        WPP_IFR_SF_(this->m_Globals, 3u, 0xEu, 0xFu, WPP_FxUsbDevice_cpp_Traceguids);
        this->m_MismatchedInterfacesInConfigDescriptor = 1;
      }
    }
  }
  else
  {
    Settings = -1073741670;
    WPP_IFR_SF_dd(
      m_Globals,
      2u,
      0xEu,
      0xCu,
      WPP_FxUsbDevice_cpp_Traceguids,
      this->m_ConfigDescriptor->bNumInterfaces,
      -1073741670);
  }
  return Settings;
}
