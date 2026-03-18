/*
 * XREFs of ?SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C009E94C
 * Callers:
 *     imp_WdfDeviceSetDeviceState @ 0x1C0071D60 (imp_WdfDeviceSetDeviceState.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgPnp::SetPnpState(FxPkgPnp *this, _WDF_DEVICE_STATE *State)
{
  _WDF_TRI_STATE Disabled; // r8d
  int v4; // ebx
  _WDF_TRI_STATE DontDisplayInUI; // ecx
  int v6; // eax
  _WDF_TRI_STATE Failed; // ecx
  int v8; // ebx
  int v9; // eax
  _WDF_TRI_STATE NotDisableable; // ecx
  int v11; // ebx
  int v12; // eax
  _WDF_TRI_STATE Removed; // ecx
  int v14; // ebx
  int v15; // eax
  _WDF_TRI_STATE ResourcesChanged; // ecx
  int v17; // ebx
  int v18; // edi
  unsigned __int8 v19; // r8
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Disabled = State->Disabled;
  if ( Disabled )
  {
    if ( Disabled == WdfTrue )
      v4 = 1;
    else
      v4 = 2;
  }
  else
  {
    v4 = 0;
  }
  DontDisplayInUI = State->DontDisplayInUI;
  if ( DontDisplayInUI )
  {
    if ( DontDisplayInUI == WdfTrue )
      v6 = 4;
    else
      v6 = 8;
  }
  else
  {
    v6 = 0;
  }
  Failed = State->Failed;
  v8 = v6 | v4;
  if ( Failed )
  {
    if ( Failed == WdfTrue )
      v9 = 16;
    else
      v9 = 32;
  }
  else
  {
    v9 = 0;
  }
  NotDisableable = State->NotDisableable;
  v11 = v9 | v8;
  if ( NotDisableable )
  {
    if ( NotDisableable == WdfTrue )
      v12 = 64;
    else
      v12 = 128;
  }
  else
  {
    v12 = 0;
  }
  Removed = State->Removed;
  v14 = v12 | v11;
  if ( Removed )
  {
    if ( Removed == WdfTrue )
      v15 = 256;
    else
      v15 = 512;
  }
  else
  {
    v15 = 0;
  }
  ResourcesChanged = State->ResourcesChanged;
  v17 = v15 | v14;
  if ( ResourcesChanged )
  {
    if ( ResourcesChanged == WdfTrue )
      v18 = 1024;
    else
      v18 = 2048;
  }
  else
  {
    v18 = 0;
  }
  FxNonPagedObject::Lock(this, &irql, Disabled);
  this->m_PnpStateAndCaps.Value = v17 | v18 | this->m_PnpStateAndCaps.Value & 0x3FFFF000;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Method = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)m_Method, irql, v19);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
}
