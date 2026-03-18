/*
 * XREFs of ?SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C009C1A0
 * Callers:
 *     imp_WdfDeviceSetDeviceState @ 0x1C0077D00 (imp_WdfDeviceSetDeviceState.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxPkgPnp::SetPnpState(FxPkgPnp *this, _WDF_DEVICE_STATE *State)
{
  _WDF_TRI_STATE Disabled; // r8d
  int v3; // ebx
  int v5; // r8d
  _WDF_TRI_STATE DontDisplayInUI; // ecx
  int v7; // edi
  _WDF_TRI_STATE Failed; // ecx
  int v9; // edi
  int v10; // eax
  _WDF_TRI_STATE NotDisableable; // ecx
  int v12; // edi
  int v13; // eax
  _WDF_TRI_STATE Removed; // ecx
  int v15; // edi
  int v16; // eax
  _WDF_TRI_STATE ResourcesChanged; // ecx
  int v18; // edi
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Disabled = State->Disabled;
  v3 = 0;
  if ( Disabled )
  {
    if ( Disabled == WdfTrue )
      v5 = 1;
    else
      v5 = 2;
  }
  else
  {
    v5 = 0;
  }
  DontDisplayInUI = State->DontDisplayInUI;
  if ( DontDisplayInUI )
  {
    if ( DontDisplayInUI == WdfTrue )
      v7 = 4;
    else
      v7 = 8;
  }
  else
  {
    v7 = 0;
  }
  Failed = State->Failed;
  v9 = v5 | v7;
  if ( Failed )
  {
    if ( Failed == WdfTrue )
      v10 = 16;
    else
      v10 = 32;
  }
  else
  {
    v10 = 0;
  }
  NotDisableable = State->NotDisableable;
  v12 = v10 | v9;
  if ( NotDisableable )
  {
    if ( NotDisableable == WdfTrue )
      v13 = 64;
    else
      v13 = 128;
  }
  else
  {
    v13 = 0;
  }
  Removed = State->Removed;
  v15 = v13 | v12;
  if ( Removed )
  {
    if ( Removed == WdfTrue )
      v16 = 256;
    else
      v16 = 512;
  }
  else
  {
    v16 = 0;
  }
  ResourcesChanged = State->ResourcesChanged;
  v18 = v16 | v15;
  if ( ResourcesChanged )
  {
    v3 = 2048;
    if ( ResourcesChanged == WdfTrue )
      v3 = 1024;
  }
  FxNonPagedObject::Lock(this, &irql, v5);
  v19 = irql;
  this->m_PnpStateAndCaps.Value = v18 | v3 | this->m_PnpStateAndCaps.Value & 0x3FFFF000;
  FxNonPagedObject::Unlock(this, v19, v20);
}
