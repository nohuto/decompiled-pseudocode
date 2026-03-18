/*
 * XREFs of ?InitPipe@FxUsbPipe@@QEAAXPEAU_USBD_PIPE_INFORMATION@@EPEAVFxUsbInterface@@@Z @ 0x1C0091468
 * Callers:
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C008FF14 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxUsbPipe::InitPipe(
        FxUsbPipe *this,
        _USBD_PIPE_INFORMATION *PipeInfo,
        unsigned __int8 InterfaceNumber,
        FxUsbInterface *UsbInterface)
{
  FxUsbInterface *m_UsbInterface; // rcx
  unsigned int RefCount; // ecx
  FxTagTracker *m_UsbDevice; // rax

  this->m_PipeInformation = *PipeInfo;
  this->m_InterfaceNumber = InterfaceNumber;
  m_UsbInterface = this->m_UsbInterface;
  if ( m_UsbInterface )
  {
    m_UsbInterface->Release(
      m_UsbInterface,
      this,
      1083,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
    this->m_UsbInterface = 0LL;
  }
  this->m_UsbInterface = UsbInterface;
  RefCount = _InterlockedIncrement(&UsbInterface->m_Refcnt);
  if ( SLOBYTE(UsbInterface->m_ObjectFlags) >= 0 )
    m_UsbDevice = 0LL;
  else
    m_UsbDevice = (FxTagTracker *)UsbInterface[-1].m_UsbDevice;
  if ( m_UsbDevice )
    FxTagTracker::UpdateTagHistory(
      m_UsbDevice,
      this,
      1088,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp",
      TagAddRef,
      RefCount);
}
