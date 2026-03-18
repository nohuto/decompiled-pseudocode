/*
 * XREFs of ??1FxUsbPipe@@MEAA@XZ @ 0x1C007F454
 * Callers:
 *     ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x1C007F640 (--_GFxUsbPipe@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbPipe::~FxUsbPipe(FxUsbPipe *this, unsigned int a2, unsigned int a3)
{
  FxUsbInterface *m_UsbInterface; // rax
  FxUsbPipe **m_ConfiguredPipes; // rdx
  __int64 v6; // rcx

  this->__vftable = (FxUsbPipe_vtbl *)&FxUsbPipe::`vftable';
  m_UsbInterface = this->m_UsbInterface;
  if ( m_UsbInterface )
  {
    m_ConfiguredPipes = m_UsbInterface->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      v6 = 0LL;
      if ( m_UsbInterface->m_NumberOfConfiguredPipes )
      {
        while ( m_ConfiguredPipes[v6] != this )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= m_UsbInterface->m_NumberOfConfiguredPipes )
            goto LABEL_8;
        }
        m_ConfiguredPipes[v6] = 0LL;
      }
    }
LABEL_8:
    this->m_UsbInterface->Release(
      this->m_UsbInterface,
      this,
      1095,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  }
  FxIoTarget::~FxIoTarget(this, a2, a3);
}
