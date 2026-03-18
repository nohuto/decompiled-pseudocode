/*
 * XREFs of ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C0091530
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredSettingIndex @ 0x1C008A8C0 (imp_WdfUsbInterfaceGetConfiguredSettingIndex.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008C6BC (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxUsbInterface::GetConfiguredSettingIndex(FxUsbInterface *this)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rcx

  if ( this->m_ConfiguredPipes )
    return this->m_CurAlternateSetting;
  m_ObjectSize = this->m_ObjectSize;
  p_m_Globals = &this->m_Globals;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(*p_m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbInterface_cpp_Traceguids, _a1);
  FxVerifierDbgBreakPoint(*p_m_Globals);
  return 0;
}
