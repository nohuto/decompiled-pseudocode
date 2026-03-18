/*
 * XREFs of ??1FxUsbDevice@@MEAA@XZ @ 0x1C008EA08
 * Callers:
 *     ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C008EB00 (--_EFxUsbDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxUsbDevice::~FxUsbDevice(FxUsbDevice *this, unsigned int a2, unsigned int a3)
{
  void (__fastcall *m_BusInterfaceDereference)(void *); // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  FxUsbInterface **m_Interfaces; // rcx

  this->__vftable = (FxUsbDevice_vtbl *)FxUsbDevice::`vftable';
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
  this->__vftable = (FxUsbDevice_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
