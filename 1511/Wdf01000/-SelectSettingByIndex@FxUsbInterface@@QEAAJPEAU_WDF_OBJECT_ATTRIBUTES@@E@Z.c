/*
 * XREFs of ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C007EF5C
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C0079600 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007E85C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByIndex(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        unsigned __int8 SettingIndex)
{
  unsigned __int16 bNumEndpoints; // r14
  _URB *v8; // rax
  _URB *v9; // rsi
  unsigned int v10; // ebx
  void *Caller; // [rsp+38h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == SettingIndex )
    return 0LL;
  if ( SettingIndex >= this->m_NumSettings )
    return 3221225485LL;
  bNumEndpoints = this->m_Settings[SettingIndex].InterfaceDescriptor->bNumEndpoints;
  v8 = (_URB *)FxPoolAllocator(
                 this->m_Globals,
                 &this->m_Globals->FxPoolFrameworks,
                 ExDefaultNonPagedPoolType,
                 (unsigned __int16)(24 * (bNumEndpoints - 1) + 80),
                 this->m_Globals->Tag,
                 Caller);
  v9 = v8;
  if ( v8 )
  {
    FxUsbInterface::FormatSelectSettingUrb(this, v8, bNumEndpoints, SettingIndex);
    v10 = FxUsbInterface::SelectSetting(this, PipesAttributes, v9);
    FxPoolFree(v9);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
