/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0019324
 * Callers:
 *     ??1FxCollection@@UEAA@XZ @ 0x1C0019408 (--1FxCollection@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C001AC60 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0020E90 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C002F9B0 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0030480 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C00385C0 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C0063208 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C00667C0 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C006CF2C (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C006F650 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C006F9E0 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0070680 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C00771E4 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C007A750 (--1FxTimer@@UEAA@XZ.c)
 *     ??1FxIoTarget@@MEAA@XZ @ 0x1C00836C8 (--1FxIoTarget@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C008CF88 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C008F7E4 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C009003C (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C009ADE4 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C009CC40 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C009E220 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2, unsigned int a3)
{
  FxVerifierLock *m_DeviceBase; // rcx

  this->__vftable = (FxNonPagedObject_vtbl *)&FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_DeviceBase = (FxVerifierLock *)this[-1].m_DeviceBase;
    if ( m_DeviceBase )
    {
      FxVerifierLock::`scalar deleting destructor'(m_DeviceBase, a2);
      this[-1].m_DeviceBase = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this, a2, a3);
}
