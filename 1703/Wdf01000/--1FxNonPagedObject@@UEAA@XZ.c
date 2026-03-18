/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C001B738
 * Callers:
 *     ??1FxCollection@@UEAA@XZ @ 0x1C001B6F4 (--1FxCollection@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C001C2E0 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C002E560 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0035BD0 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C0066528 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C0069F70 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C00708C4 (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C0072FF0 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C00733C0 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0073FC0 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C007AFBC (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C007E220 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C007E654 (--1FxTimer@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C007F140 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C007F884 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C008C998 (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C008EA08 (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C0090F00 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0093828 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C00940B4 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009A3F8 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C009F838 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C00A1840 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C00A3030 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2, unsigned int a3)
{
  _LIST_ENTRY *Blink; // rcx

  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ChildEntry.Blink;
    if ( Blink )
    {
      FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Blink, a2);
      this[-1].m_ChildEntry.Blink = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this, a2, a3);
}
