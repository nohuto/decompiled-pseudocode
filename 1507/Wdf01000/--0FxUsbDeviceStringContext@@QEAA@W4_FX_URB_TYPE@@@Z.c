/*
 * XREFs of ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008B320
 * Callers:
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C008DD30 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     memset @ 0x1C00333C0 (memset.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C008B3CC (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbDeviceStringContext::FxUsbDeviceStringContext(
        FxUsbDeviceStringContext *this,
        _FX_URB_TYPE FxUrbType)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x14u);
  this->m_USBDHandle = 0LL;
  this->m_StringDescriptor = 0LL;
  this->m_StringDescriptorLength = 0;
  this->__vftable = (FxUsbDeviceStringContext_vtbl *)&FxUsbDeviceStringContext::`vftable';
  memset(&this->m_UrbLegacy, 0, sizeof(this->m_UrbLegacy));
  if ( FxUrbType )
  {
    this->m_Urb = 0LL;
  }
  else
  {
    this->m_Urb = &this->m_UrbLegacy;
    this->m_UrbLegacy.Hdr.Function = 11;
    this->m_Urb->Hdr.Length = 136;
    this->m_Urb->DescriptorType = 3;
  }
}
