/*
 * XREFs of ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007EE28
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C0079600 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007E85C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByDescriptor(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  const void *_a2; // rdi
  unsigned __int8 bInterfaceNumber; // al
  unsigned __int8 m_InterfaceNumber; // dl
  _URB *v10; // rax
  _URB *v11; // rbp
  unsigned int v12; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]

  _a2 = 0LL;
  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == InterfaceDescriptor->bAlternateSetting )
    return 0LL;
  bInterfaceNumber = InterfaceDescriptor->bInterfaceNumber;
  m_InterfaceNumber = this->m_InterfaceNumber;
  if ( bInterfaceNumber == m_InterfaceNumber )
  {
    v10 = (_URB *)FxPoolAllocator(
                    this->m_Globals,
                    &this->m_Globals->FxPoolFrameworks,
                    ExDefaultNonPagedPoolType,
                    (unsigned __int16)(24 * (InterfaceDescriptor->bNumEndpoints - 1) + 80),
                    this->m_Globals->Tag,
                    retaddr);
    v11 = v10;
    if ( v10 )
    {
      FxUsbInterface::FormatSelectSettingUrb(
        this,
        v10,
        InterfaceDescriptor->bNumEndpoints,
        InterfaceDescriptor->bAlternateSetting);
      v12 = FxUsbInterface::SelectSetting(this, PipesAttributes, v11);
      FxPoolFree(v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v12;
  }
  else
  {
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qddd(
      this->m_Globals,
      m_InterfaceNumber,
      0xEu,
      0xEu,
      WPP_FxUsbInterface_cpp_Traceguids,
      _a2,
      m_InterfaceNumber,
      bInterfaceNumber,
      -1073741811);
    return 3221225485LL;
  }
}
