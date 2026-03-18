/*
 * XREFs of ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C008D184
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008B16C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dddd @ 0x1C0076550 (WPP_IFR_SF_dddd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C008A42C (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C008A574 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     WPP_IFR_SF_dddddd @ 0x1C008DD24 (WPP_IFR_SF_dddddd.c)
 */

__int64 __fastcall FxUsbInterface::CreateSettings(FxUsbInterface *this)
{
  FxUsbDevice *m_UsbDevice; // rdi
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  unsigned __int8 m_InterfaceNumber; // r11
  unsigned int v5; // edi
  FxUsbInterfaceSetting *v6; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 *p_bLength; // r8
  unsigned __int8 bDescriptorType; // al
  _USB_COMMON_DESCRIPTOR *v11; // rax
  _USB_INTERFACE_DESCRIPTOR *v12; // r9
  unsigned __int8 v13; // di
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // r11
  unsigned __int8 bNumEndpoints; // bp
  _USB_CONFIGURATION_DESCRIPTOR *v16; // rsi
  __int64 v17; // rdx
  _USB_COMMON_DESCRIPTOR *v18; // r9
  char *v19; // r11
  int v20; // esi
  const _GUID *Tag; // [rsp+20h] [rbp-48h]
  FxUsbValidateDescriptorOp globals; // [rsp+30h] [rbp-38h]
  int v23; // [rsp+50h] [rbp-18h]
  void *Caller; // [rsp+68h] [rbp+0h]

  m_UsbDevice = this->m_UsbDevice;
  DescriptorType = FxUsbFindDescriptorType(
                     (char *)m_UsbDevice->m_ConfigDescriptor,
                     m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                     &m_UsbDevice->m_ConfigDescriptor->bLength,
                     4);
  if ( DescriptorType )
  {
    m_InterfaceNumber = this->m_InterfaceNumber;
    do
    {
      if ( m_InterfaceNumber == DescriptorType[1].bLength )
        ++this->m_NumSettings;
      DescriptorType = FxUsbFindDescriptorType(
                         (char *)m_UsbDevice->m_ConfigDescriptor,
                         m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                         &DescriptorType->bLength + DescriptorType->bLength,
                         4);
    }
    while ( DescriptorType );
  }
  v5 = 8 * this->m_NumSettings;
  v6 = (FxUsbInterfaceSetting *)FxPoolAllocator(
                                  this->m_Globals,
                                  &this->m_Globals->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  v5,
                                  this->m_Globals->Tag,
                                  Caller);
  this->m_Settings = v6;
  if ( v6 )
  {
    memset(v6, 0, v5);
    m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    p_bLength = &m_ConfigDescriptor->bLength;
    while ( 1 )
    {
      v11 = FxUsbFindDescriptorType((char *)m_ConfigDescriptor, m_ConfigDescriptor->wTotalLength, p_bLength, 4);
      v12 = (_USB_INTERFACE_DESCRIPTOR *)v11;
      if ( !v11 )
        break;
      if ( this->m_InterfaceNumber == v11[1].bLength )
      {
        bDescriptorType = v11[1].bDescriptorType;
        if ( bDescriptorType >= this->m_NumSettings )
        {
          WPP_IFR_SF_dddd(
            this->m_Globals,
            2u,
            0xEu,
            0xBu,
            WPP_FxUsbInterface_cpp_Traceguids,
            v12->bInterfaceNumber,
            this->m_NumSettings,
            v12->bAlternateSetting,
            -1073741808);
          return 3221225488LL;
        }
        this->m_Settings[bDescriptorType].InterfaceDescriptor = v12;
      }
      p_bLength = &v12->bLength + v12->bLength;
      m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    }
    v13 = 0;
    if ( !this->m_NumSettings )
      return 0LL;
    while ( 1 )
    {
      InterfaceDescriptor = this->m_Settings[v13].InterfaceDescriptor;
      if ( !InterfaceDescriptor )
        break;
      bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
      if ( bNumEndpoints )
      {
        v16 = this->m_UsbDevice->m_ConfigDescriptor;
        v18 = FxUsbFindDescriptorType((char *)v16, v16->wTotalLength, &InterfaceDescriptor->bLength, 4);
        if ( !v18 )
          v18 = (_USB_COMMON_DESCRIPTOR *)(&v16->bLength + v17);
        v20 = FxUsbValidateDescriptorType(this->m_Globals, v16, v19, v18, 5, 7uLL, globals, bNumEndpoints);
        if ( v20 < 0 )
        {
          WPP_IFR_SF_dd(
            this->m_Globals,
            2u,
            0xEu,
            0xDu,
            WPP_FxUsbInterface_cpp_Traceguids,
            this->m_InterfaceNumber,
            v20);
          return (unsigned int)v20;
        }
      }
      if ( ++v13 >= this->m_NumSettings )
        return 0LL;
    }
    WPP_IFR_SF_dddd(
      this->m_Globals,
      2u,
      0xEu,
      0xCu,
      WPP_FxUsbInterface_cpp_Traceguids,
      this->m_InterfaceNumber,
      this->m_NumSettings,
      v13,
      -1073741808);
    return 3221225488LL;
  }
  else
  {
    WPP_IFR_SF_dddddd(
      this->m_Globals,
      this->m_Protocol,
      this->m_InterfaceNumber,
      this->m_NumSettings,
      Tag,
      this->m_NumSettings,
      this->m_InterfaceNumber,
      this->m_Protocol,
      this->m_Class,
      this->m_SubClass,
      v23);
    return 3221225626LL;
  }
}
