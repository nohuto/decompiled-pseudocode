/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C008AB7C
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C0087DD0 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C008C224 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  unsigned int v6; // edi
  __int64 _a2; // rcx
  const void *_a1; // r10
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // edx
  __int64 v10; // r10
  __int32 v11; // edx
  __int32 v12; // edx
  __int64 v13; // rcx
  const void *v14; // r10
  unsigned __int16 v15; // r9

  ComponentIdleConditionCallback = this[-5].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
    if ( updated == IdleTimeoutStatusFlagsUpdated )
      return 0;
    v11 = updated - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v6 = -1073741808;
        v13 = *(_QWORD *)(v10 + 144);
        if ( *(_WORD *)(v10 + 10) )
          v14 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v14 = 0LL;
        v15 = 15;
        goto LABEL_14;
      }
      if ( v12 == 1 )
      {
        v6 = -1073741808;
        v13 = *(_QWORD *)(v10 + 144);
        if ( *(_WORD *)(v10 + 10) )
          v14 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v14 = 0LL;
        v15 = 16;
LABEL_14:
        WPP_IFR_SF_qid(DriverGlobals, 2u, 0xCu, v15, WPP_PowerPolicyStateMachine_cpp_Traceguids, v14, v13, -1073741808);
        FxVerifierDbgBreakPoint(DriverGlobals);
LABEL_20:
        this->m_PoxSettings = 0LL;
        return v6;
      }
    }
    v6 = -1073741595;
    goto LABEL_20;
  }
  v6 = -1073741808;
  _a2 = *((_QWORD *)ComponentIdleConditionCallback + 18);
  if ( *((_WORD *)ComponentIdleConditionCallback + 5) )
    _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qid(DriverGlobals, 2u, 0xCu, 0xEu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2, -1073741808);
  FxVerifierDbgBreakPoint(DriverGlobals);
  return v6;
}
