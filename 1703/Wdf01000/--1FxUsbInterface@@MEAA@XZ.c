/*
 * XREFs of ??1FxUsbInterface@@MEAA@XZ @ 0x1C0090F00
 * Callers:
 *     ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x1C0090FC0 (--_EFxUsbInterface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxUsbInterface::~FxUsbInterface(FxUsbInterface *this)
{
  FxUsbDevice *m_UsbDevice; // rax
  FxUsbInterface **m_Interfaces; // rdx
  unsigned __int8 m_NumInterfaces; // r8
  unsigned __int8 v5; // cl
  FxUsbPipe **m_ConfiguredPipes; // rcx
  FxUsbInterfaceSetting *m_Settings; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r8d

  this->__vftable = (FxUsbInterface_vtbl *)FxUsbInterface::`vftable';
  m_UsbDevice = this->m_UsbDevice;
  m_Interfaces = m_UsbDevice->m_Interfaces;
  if ( m_Interfaces )
  {
    m_NumInterfaces = m_UsbDevice->m_NumInterfaces;
    v5 = 0;
    if ( m_NumInterfaces )
    {
      while ( m_Interfaces[v5] != this )
      {
        if ( ++v5 >= m_NumInterfaces )
          goto LABEL_7;
      }
      m_Interfaces[v5] = 0LL;
    }
  }
LABEL_7:
  m_ConfiguredPipes = this->m_ConfiguredPipes;
  if ( m_ConfiguredPipes )
  {
    FxPoolFree(m_ConfiguredPipes);
    this->m_ConfiguredPipes = 0LL;
  }
  m_Settings = this->m_Settings;
  this->m_NumberOfConfiguredPipes = 0;
  if ( m_Settings )
  {
    FxPoolFree(m_Settings);
    this->m_Settings = 0LL;
  }
  this->m_UsbDevice->Release(
    this->m_UsbDevice,
    this,
    76,
    "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbinterface.cpp");
  FxNonPagedObject::~FxNonPagedObject(this, v8, v9);
}
