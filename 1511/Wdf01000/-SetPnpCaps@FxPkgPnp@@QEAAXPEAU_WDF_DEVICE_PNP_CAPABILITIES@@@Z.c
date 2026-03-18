/*
 * XREFs of ?SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z @ 0x1C0017868
 * Callers:
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C002FEC0 (imp_WdfDeviceSetPnpCapabilities.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxPkgPnp::SetPnpCaps(FxPkgPnp *this, _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  _WDF_TRI_STATE LockSupported; // r9d
  int v3; // r8d
  int v5; // ebx
  _WDF_TRI_STATE EjectSupported; // ecx
  int v7; // eax
  _WDF_TRI_STATE Removable; // ecx
  int v9; // ebx
  int v10; // eax
  _WDF_TRI_STATE DockDevice; // ecx
  int v12; // ebx
  int v13; // eax
  _WDF_TRI_STATE UniqueID; // ecx
  int v15; // ebx
  int v16; // eax
  _WDF_TRI_STATE SilentInstall; // ecx
  int v18; // ebx
  int v19; // eax
  _WDF_TRI_STATE SurpriseRemovalOK; // ecx
  int v21; // ebx
  int v22; // eax
  _WDF_TRI_STATE HardwareDisabled; // ecx
  int v24; // ebx
  int v25; // eax
  _WDF_TRI_STATE NoDisplayInUI; // ecx
  int v27; // ebx
  unsigned int Address; // eax
  int v29; // ebx
  unsigned int UINumber; // eax
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  LockSupported = PnpCapabilities->LockSupported;
  v3 = 0;
  if ( LockSupported )
  {
    if ( LockSupported == WdfTrue )
      v5 = 4096;
    else
      v5 = 0x2000;
  }
  else
  {
    v5 = 0;
  }
  EjectSupported = PnpCapabilities->EjectSupported;
  if ( EjectSupported )
  {
    if ( EjectSupported == WdfTrue )
      v7 = 0x4000;
    else
      v7 = 0x8000;
  }
  else
  {
    v7 = 0;
  }
  Removable = PnpCapabilities->Removable;
  v9 = v7 | v5;
  if ( Removable )
  {
    if ( Removable == WdfTrue )
      v10 = 0x10000;
    else
      v10 = 0x20000;
  }
  else
  {
    v10 = 0;
  }
  DockDevice = PnpCapabilities->DockDevice;
  v12 = v10 | v9;
  if ( DockDevice )
  {
    if ( DockDevice == WdfTrue )
      v13 = 0x40000;
    else
      v13 = 0x80000;
  }
  else
  {
    v13 = 0;
  }
  UniqueID = PnpCapabilities->UniqueID;
  v15 = v13 | v12;
  if ( UniqueID )
  {
    if ( UniqueID == WdfTrue )
      v16 = 0x100000;
    else
      v16 = 0x200000;
  }
  else
  {
    v16 = 0;
  }
  SilentInstall = PnpCapabilities->SilentInstall;
  v18 = v16 | v15;
  if ( SilentInstall )
  {
    if ( SilentInstall == WdfTrue )
      v19 = 0x400000;
    else
      v19 = 0x800000;
  }
  else
  {
    v19 = 0;
  }
  SurpriseRemovalOK = PnpCapabilities->SurpriseRemovalOK;
  v21 = v19 | v18;
  if ( SurpriseRemovalOK )
  {
    if ( SurpriseRemovalOK == WdfTrue )
      v22 = 0x1000000;
    else
      v22 = 0x2000000;
  }
  else
  {
    v22 = 0;
  }
  HardwareDisabled = PnpCapabilities->HardwareDisabled;
  v24 = v22 | v21;
  if ( HardwareDisabled )
  {
    if ( HardwareDisabled == WdfTrue )
      v25 = 0x4000000;
    else
      v25 = 0x8000000;
  }
  else
  {
    v25 = 0;
  }
  NoDisplayInUI = PnpCapabilities->NoDisplayInUI;
  v27 = v25 | v24;
  if ( NoDisplayInUI )
  {
    v3 = 0x20000000;
    if ( NoDisplayInUI == WdfTrue )
      v3 = 0x10000000;
  }
  Address = PnpCapabilities->Address;
  v29 = v3 | v27;
  if ( Address != -1 )
    this->m_PnpCapsAddress = Address;
  UINumber = PnpCapabilities->UINumber;
  if ( UINumber != -1 )
    this->m_PnpCapsUINumber = UINumber;
  FxNonPagedObject::Lock(this, &irql, v3);
  v31 = irql;
  this->m_PnpStateAndCaps.Value = v29 | this->m_PnpStateAndCaps.Value & 0xFFF;
  FxNonPagedObject::Unlock(this, v31, v32);
}
