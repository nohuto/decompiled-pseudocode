/*
 * XREFs of ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00A18D4
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001B130 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C00A1894 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 */

__int64 __fastcall IdleTimeoutManagement::UseSystemManagedIdleTimeout(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  int updated; // eax
  unsigned __int8 v4; // dl
  __int64 v5; // r10
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 _a2; // rcx
  const void *_a1; // r10
  unsigned __int16 v11; // r9

  if ( !FxLibraryGlobals.PoxRegisterDevice )
    return 0;
  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutSystemManaged);
  if ( !updated )
    return 0;
  v6 = updated - 1;
  if ( !v6 )
    return 0;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return (unsigned int)-1073741595;
    v8 = -1073741808;
    _a2 = *(_QWORD *)(v5 + 144);
    if ( *(_WORD *)(v5 + 10) )
      _a1 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = 11;
  }
  else
  {
    v8 = -1073741808;
    _a2 = *(_QWORD *)(v5 + 144);
    if ( *(_WORD *)(v5 + 10) )
      _a1 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v11 = 10;
  }
  WPP_IFR_SF_qid(DriverGlobals, v4, 0xCu, v11, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2, -1073741808);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( DriverGlobals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return v8;
}
