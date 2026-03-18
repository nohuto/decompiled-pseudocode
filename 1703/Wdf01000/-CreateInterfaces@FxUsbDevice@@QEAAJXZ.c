/*
 * XREFs of ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008F020
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C008ACEC (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqd @ 0x1C006C118 (WPP_IFR_SF_dqd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C008E29C (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C008E330 (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C008E3D4 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C0090E50 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C009110C (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxUsbDevice::CreateInterfaces(FxUsbDevice *this)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 wTotalLength; // r12
  int _a1; // edi
  unsigned __int16 v6; // r9
  unsigned __int8 bNumInterfaces; // cl
  unsigned int v8; // eax
  size_t v9; // rsi
  FxUsbInterface **v10; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v11; // r14
  unsigned __int8 v12; // si
  _USB_INTERFACE_DESCRIPTOR *DescriptorType; // r15
  unsigned __int8 v14; // al
  _POOL_TYPE v15; // edx
  FxUsbInterface *v16; // rax
  FxUsbInterface *v17; // rax
  FxUsbInterface *v18; // r14
  __int64 v19; // rcx
  unsigned __int8 m_NumInterfaces; // al
  unsigned __int8 v21; // cl
  FxUsbValidateDescriptorOp _a2; // [rsp+30h] [rbp-148h]
  unsigned __int8 descCountBitMap[256]; // [rsp+40h] [rbp-138h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  m_Globals = this->m_Globals;
  wTotalLength = m_ConfigDescriptor->wTotalLength;
  _a1 = FxUsbValidateConfigDescriptorHeaders(m_Globals, m_ConfigDescriptor, wTotalLength);
  if ( _a1 < 0 )
  {
    v6 = 10;
LABEL_3:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v6, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
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
  if ( _a1 < 0 )
  {
    v6 = 11;
    goto LABEL_3;
  }
  bNumInterfaces = this->m_ConfigDescriptor->bNumInterfaces;
  if ( bNumInterfaces )
    v8 = 8 * bNumInterfaces;
  else
    v8 = 8;
  v9 = v8;
  v10 = (FxUsbInterface **)FxPoolAllocator(
                             m_Globals,
                             &m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             v8,
                             m_Globals->Tag,
                             retaddr);
  this->m_Interfaces = v10;
  if ( v10 )
  {
    memset(v10, 0, v9);
    v11 = this->m_ConfigDescriptor;
    this->m_NumInterfaces = v11->bNumInterfaces;
    memset(descCountBitMap, 0, 0xFFuLL);
    v12 = 0;
    DescriptorType = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                                    (char *)v11,
                                                    v11->wTotalLength,
                                                    &v11->bLength,
                                                    4);
    if ( DescriptorType )
    {
      do
      {
        if ( v12 >= v11->bNumInterfaces )
          break;
        v14 = descCountBitMap[DescriptorType->bInterfaceNumber];
        if ( (v14 & 1) == 0 )
        {
          v15 = ExDefaultNonPagedPoolType;
          descCountBitMap[DescriptorType->bInterfaceNumber] = v14 | 1;
          v16 = (FxUsbInterface *)FxObjectHandleAlloc(this->m_Globals, v15, 0x98uLL, 0, 0LL, 0, FxObjectTypeExternal);
          if ( v16 )
          {
            FxUsbInterface::FxUsbInterface(v16, m_Globals, this, DescriptorType);
            v18 = v17;
          }
          else
          {
            v18 = 0LL;
          }
          if ( !v18 )
          {
            _a1 = -1073741670;
            WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxUsbDevice_cpp_Traceguids, v12, -1073741670);
            return (unsigned int)_a1;
          }
          _a1 = FxObject::Commit(v18, 0LL, 0LL, this, 1u);
          if ( _a1 < 0 )
            return (unsigned int)_a1;
          _a1 = FxUsbInterface::CreateSettings(v18);
          if ( _a1 < 0 )
            return (unsigned int)_a1;
          v19 = v12++;
          this->m_Interfaces[v19] = v18;
        }
        v11 = this->m_ConfigDescriptor;
        DescriptorType = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                                        (char *)v11,
                                                        wTotalLength,
                                                        &DescriptorType->bLength + DescriptorType->bLength,
                                                        4);
      }
      while ( DescriptorType );
      if ( v12 )
        goto LABEL_27;
    }
    m_NumInterfaces = this->m_NumInterfaces;
    if ( m_NumInterfaces )
    {
      _a1 = -1073741808;
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
        v21 = this->m_NumInterfaces;
        if ( v12 < v21 )
        {
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDevice_cpp_Traceguids, v21, v12);
          this->m_NumInterfaces = v12;
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
    _a1 = -1073741670;
    WPP_IFR_SF_dd(
      m_Globals,
      2u,
      0xEu,
      0xCu,
      WPP_FxUsbDevice_cpp_Traceguids,
      this->m_ConfigDescriptor->bNumInterfaces,
      -1073741670);
  }
  return (unsigned int)_a1;
}
