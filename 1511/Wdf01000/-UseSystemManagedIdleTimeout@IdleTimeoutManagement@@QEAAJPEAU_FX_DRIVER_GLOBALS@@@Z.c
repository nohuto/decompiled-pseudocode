/*
 * XREFs of ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008C264
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0017D80 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C008C224 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 */

__int64 __fastcall IdleTimeoutManagement::UseSystemManagedIdleTimeout(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  const void *v2; // r11
  int updated; // eax
  unsigned __int8 v5; // dl
  __int64 v6; // r10
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 _a2; // rcx
  const void *_a1; // r10
  unsigned __int16 v12; // r9

  LODWORD(v2) = 0;
  if ( !FxLibraryGlobals.PoxRegisterDevice )
    return (unsigned int)v2;
  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutSystemManaged);
  if ( !updated )
    return (unsigned int)v2;
  v7 = updated - 1;
  if ( !v7 )
    return (unsigned int)v2;
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = -1073741808;
    _a2 = *(_QWORD *)(v6 + 144);
    if ( *(_WORD *)(v6 + 10) <= (unsigned __int16)v2 )
      _a1 = v2;
    else
      _a1 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v12 = 10;
    goto LABEL_15;
  }
  if ( v8 == 1 )
  {
    v9 = -1073741808;
    _a2 = *(_QWORD *)(v6 + 144);
    if ( *(_WORD *)(v6 + 10) <= (unsigned __int16)v2 )
      _a1 = v2;
    else
      _a1 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v12 = 11;
LABEL_15:
    WPP_IFR_SF_qid(DriverGlobals, v5, 0xCu, v12, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2, -1073741808);
    FxVerifierDbgBreakPoint(DriverGlobals);
    return v9;
  }
  return (unsigned int)-1073741595;
}
