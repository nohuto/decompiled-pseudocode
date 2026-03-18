/*
 * XREFs of ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C008D59C
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredSettingIndex @ 0x1C0086D60 (imp_WdfUsbInterfaceGetConfiguredSettingIndex.c)
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00889F0 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxUsbInterface::GetConfiguredSettingIndex(FxUsbInterface *this)
{
  const void *_a1; // rax

  _a1 = 0LL;
  if ( this->m_ConfiguredPipes )
    return this->m_CurAlternateSetting;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbInterface_cpp_Traceguids, _a1);
  FxVerifierDbgBreakPoint(this->m_Globals);
  return 0;
}
