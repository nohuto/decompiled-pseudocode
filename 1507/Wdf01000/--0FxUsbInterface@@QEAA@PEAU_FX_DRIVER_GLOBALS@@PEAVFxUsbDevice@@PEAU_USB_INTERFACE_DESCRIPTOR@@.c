/*
 * XREFs of ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C008F128
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008BB00 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020A64 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxUsbInterface::FxUsbInterface(
        FxUsbInterface *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxUsbDevice *UsbDevice,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  unsigned int RefCount; // edx
  FxTagTracker *v8; // rcx
  unsigned __int8 bInterfaceSubClass; // al

  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1204, 0x98u, FxDriverGlobals);
  this->m_UsbDevice = UsbDevice;
  this->__vftable = (FxUsbInterface_vtbl *)&FxUsbInterface::`vftable';
  RefCount = _InterlockedIncrement(&UsbDevice->m_Refcnt);
  if ( SLOBYTE(UsbDevice->m_ObjectFlags) >= 0 )
    v8 = 0LL;
  else
    v8 = *(FxTagTracker **)&UsbDevice[-1].m_InterfaceIterationLock.m_Event.m_DbgFlagIsInitialized;
  if ( v8 )
    FxTagTracker::UpdateTagHistory(
      v8,
      this,
      35,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbinterface.cpp",
      TagAddRef,
      RefCount);
  this->m_InterfaceNumber = InterfaceDescriptor->bInterfaceNumber;
  this->m_Protocol = InterfaceDescriptor->bInterfaceProtocol;
  this->m_Class = InterfaceDescriptor->bInterfaceClass;
  bInterfaceSubClass = InterfaceDescriptor->bInterfaceSubClass;
  this->m_ConfiguredPipes = 0LL;
  this->m_Settings = 0LL;
  this->m_ObjectFlags |= 2u;
  this->m_SubClass = bInterfaceSubClass;
  this->m_CurAlternateSetting = 0;
  *(_WORD *)&this->m_NumSettings = 0;
}
