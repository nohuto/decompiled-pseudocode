/*
 * XREFs of ?GetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C0096C34
 * Callers:
 *     imp_WdfDeviceGetDeviceState @ 0x1C0073920 (imp_WdfDeviceGetDeviceState.c)
 * Callees:
 *     ?GetPnpStateInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0062790 (-GetPnpStateInternal@FxPkgPnp@@IEAAJXZ.c)
 */

void __fastcall FxPkgPnp::GetPnpState(FxPkgPnp *this, _WDF_DEVICE_STATE *State, unsigned __int8 a3)
{
  __int16 PnpStateInternal; // ax
  _WDF_TRI_STATE v5; // ecx
  __int16 v6; // dx
  int v7; // eax
  int v8; // edx

  PnpStateInternal = FxPkgPnp::GetPnpStateInternal(this, (__int64)State, a3);
  v5 = WdfFalse;
  v6 = PnpStateInternal;
  v7 = PnpStateInternal & 3;
  if ( v7 )
  {
    if ( v7 == 1 )
      State->Disabled = WdfTrue;
    else
      State->Disabled = WdfUseDefault;
  }
  else
  {
    State->Disabled = WdfFalse;
  }
  if ( (v6 & 0xC) != 0 )
    State->DontDisplayInUI = ((v6 & 0xC) != 4) + 1;
  else
    State->DontDisplayInUI = WdfFalse;
  if ( (v6 & 0x30) != 0 )
    State->Failed = ((v6 & 0x30) != 16) + 1;
  else
    State->Failed = WdfFalse;
  if ( (v6 & 0xC0) != 0 )
    State->NotDisableable = ((v6 & 0xC0) != 64) + 1;
  else
    State->NotDisableable = WdfFalse;
  if ( (v6 & 0x300) != 0 )
    State->Removed = ((v6 & 0x300) != 256) + 1;
  else
    State->Removed = WdfFalse;
  v8 = v6 & 0xC00;
  if ( v8 )
  {
    LOBYTE(v5) = v8 != 1024;
    ++v5;
  }
  State->ResourcesChanged = v5;
}
