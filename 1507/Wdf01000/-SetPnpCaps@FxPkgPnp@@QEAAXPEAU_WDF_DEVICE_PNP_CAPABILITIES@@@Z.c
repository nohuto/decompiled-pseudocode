/*
 * XREFs of ?SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z @ 0x1C001AC64
 * Callers:
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C002B500 (imp_WdfDeviceSetPnpCapabilities.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgPnp::SetPnpCaps(FxPkgPnp *this, _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  _WDF_TRI_STATE LockSupported; // r8d
  int v4; // ebx
  _WDF_TRI_STATE EjectSupported; // ecx
  int v6; // eax
  _WDF_TRI_STATE Removable; // ecx
  int v8; // ebx
  int v9; // eax
  _WDF_TRI_STATE DockDevice; // ecx
  int v11; // ebx
  int v12; // eax
  _WDF_TRI_STATE UniqueID; // ecx
  int v14; // ebx
  int v15; // eax
  _WDF_TRI_STATE SilentInstall; // ecx
  int v17; // ebx
  int v18; // eax
  _WDF_TRI_STATE SurpriseRemovalOK; // ecx
  int v20; // ebx
  int v21; // eax
  _WDF_TRI_STATE HardwareDisabled; // ecx
  int v23; // ebx
  int v24; // eax
  _WDF_TRI_STATE NoDisplayInUI; // ecx
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  unsigned int Address; // eax
  unsigned int UINumber; // eax
  unsigned __int8 v31; // r8
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  LockSupported = PnpCapabilities->LockSupported;
  if ( LockSupported )
  {
    if ( LockSupported == WdfTrue )
      v4 = 4096;
    else
      v4 = 0x2000;
  }
  else
  {
    v4 = 0;
  }
  EjectSupported = PnpCapabilities->EjectSupported;
  if ( EjectSupported )
  {
    if ( EjectSupported == WdfTrue )
      v6 = 0x4000;
    else
      v6 = 0x8000;
  }
  else
  {
    v6 = 0;
  }
  Removable = PnpCapabilities->Removable;
  v8 = v6 | v4;
  if ( Removable )
  {
    if ( Removable == WdfTrue )
      v9 = 0x10000;
    else
      v9 = 0x20000;
  }
  else
  {
    v9 = 0;
  }
  DockDevice = PnpCapabilities->DockDevice;
  v11 = v9 | v8;
  if ( DockDevice )
  {
    if ( DockDevice == WdfTrue )
      v12 = 0x40000;
    else
      v12 = 0x80000;
  }
  else
  {
    v12 = 0;
  }
  UniqueID = PnpCapabilities->UniqueID;
  v14 = v12 | v11;
  if ( UniqueID )
  {
    if ( UniqueID == WdfTrue )
      v15 = 0x100000;
    else
      v15 = 0x200000;
  }
  else
  {
    v15 = 0;
  }
  SilentInstall = PnpCapabilities->SilentInstall;
  v17 = v15 | v14;
  if ( SilentInstall )
  {
    if ( SilentInstall == WdfTrue )
      v18 = 0x400000;
    else
      v18 = 0x800000;
  }
  else
  {
    v18 = 0;
  }
  SurpriseRemovalOK = PnpCapabilities->SurpriseRemovalOK;
  v20 = v18 | v17;
  if ( SurpriseRemovalOK )
  {
    if ( SurpriseRemovalOK == WdfTrue )
      v21 = 0x1000000;
    else
      v21 = 0x2000000;
  }
  else
  {
    v21 = 0;
  }
  HardwareDisabled = PnpCapabilities->HardwareDisabled;
  v23 = v21 | v20;
  if ( HardwareDisabled )
  {
    if ( HardwareDisabled == WdfTrue )
      v24 = 0x4000000;
    else
      v24 = 0x8000000;
  }
  else
  {
    v24 = 0;
  }
  NoDisplayInUI = PnpCapabilities->NoDisplayInUI;
  v26 = v24 | v23;
  if ( NoDisplayInUI )
  {
    if ( NoDisplayInUI == WdfTrue )
      v27 = 0x10000000;
    else
      v27 = 0x20000000;
  }
  else
  {
    v27 = 0;
  }
  v28 = v27 | v26;
  Address = PnpCapabilities->Address;
  if ( Address != -1 )
    this->m_PnpCapsAddress = Address;
  UINumber = PnpCapabilities->UINumber;
  if ( UINumber != -1 )
    this->m_PnpCapsUINumber = UINumber;
  FxNonPagedObject::Lock(this, &irql, LockSupported);
  this->m_PnpStateAndCaps.Value = v28 | this->m_PnpStateAndCaps.Value & 0xFFF;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Method = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)m_Method, irql, v31);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
}
