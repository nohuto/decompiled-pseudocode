/*
 * XREFs of ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C00919CC
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C008AB50 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C00913EC (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C009165C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByDescriptor(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  unsigned __int8 bInterfaceNumber; // al
  unsigned __int8 m_InterfaceNumber; // cl
  int _a3; // r10d
  const void *_a2; // rcx
  _URB *v11; // rax
  _URB *v12; // rsi
  unsigned int v13; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == InterfaceDescriptor->bAlternateSetting )
    return 0LL;
  bInterfaceNumber = InterfaceDescriptor->bInterfaceNumber;
  m_InterfaceNumber = this->m_InterfaceNumber;
  if ( bInterfaceNumber == m_InterfaceNumber )
  {
    v11 = (_URB *)FxPoolAllocator(
                    this->m_Globals,
                    &this->m_Globals->FxPoolFrameworks,
                    ExDefaultNonPagedPoolType,
                    24LL * InterfaceDescriptor->bNumEndpoints + 56,
                    this->m_Globals->Tag,
                    retaddr);
    v12 = v11;
    if ( v11 )
    {
      FxUsbInterface::FormatSelectSettingUrb(
        this,
        v11,
        InterfaceDescriptor->bNumEndpoints,
        InterfaceDescriptor->bAlternateSetting);
      v13 = FxUsbInterface::SelectSetting(this, PipesAttributes, v12);
      FxPoolFree(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v13;
  }
  else
  {
    _a3 = m_InterfaceNumber;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qddd(
      this->m_Globals,
      bInterfaceNumber,
      0xEu,
      0xEu,
      WPP_FxUsbInterface_cpp_Traceguids,
      _a2,
      _a3,
      bInterfaceNumber,
      -1073741811);
    return 3221225485LL;
  }
}
