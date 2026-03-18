/*
 * XREFs of ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C007AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxIoTarget@@MEAA@XZ @ 0x1C0075728 (--1FxIoTarget@@MEAA@XZ.c)
 */

FxUsbDevice *__fastcall FxUsbDevice::`vector deleting destructor'(FxUsbDevice *this, char a2, unsigned int a3)
{
  void (__fastcall *m_BusInterfaceDereference)(void *); // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  FxUsbInterface **m_Interfaces; // rcx
  FxUsbDevice *v8; // rcx

  this->__vftable = (FxUsbDevice_vtbl *)&FxUsbDevice::`vftable';
  m_BusInterfaceDereference = this->m_BusInterfaceDereference;
  if ( m_BusInterfaceDereference )
  {
    m_BusInterfaceDereference(this->m_BusInterfaceContext);
    this->m_BusInterfaceDereference = 0LL;
  }
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  if ( m_ConfigDescriptor )
  {
    FxPoolFree(m_ConfigDescriptor);
    this->m_ConfigDescriptor = 0LL;
  }
  m_Interfaces = this->m_Interfaces;
  if ( m_Interfaces )
  {
    FxPoolFree(m_Interfaces);
    this->m_Interfaces = 0LL;
  }
  this->m_NumInterfaces = 0;
  FxIoTarget::~FxIoTarget(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v8 = (FxUsbDevice *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v8 = this;
    FxPoolFree(v8);
  }
  return this;
}
