/*
 * XREFs of ?GetUsbdStatus@FxUsbDeviceControlContext@@UEAAJXZ @ 0x1C0036F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbDeviceControlContext::GetUsbdStatus(FxUsbDeviceStringContext *this)
{
  return (unsigned int)this->m_Urb->Hdr.Status;
}
