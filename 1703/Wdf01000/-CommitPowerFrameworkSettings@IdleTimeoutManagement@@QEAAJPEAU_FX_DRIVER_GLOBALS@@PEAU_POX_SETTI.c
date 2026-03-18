/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C002E324
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00252E8 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C002E2E4 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  char v5; // si
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  int updated; // edx
  int v8; // ebx
  unsigned __int16 v10; // r9
  __int64 _a2; // rcx
  __int16 v12; // ax
  const void *_a1; // r10
  int v14; // edx
  int v15; // edx

  v5 = 0;
  ComponentIdleConditionCallback = this[-5].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    v10 = 14;
  }
  else
  {
    v5 = 1;
    updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
    if ( !updated )
    {
      v8 = 0;
      goto $exit_9;
    }
    v14 = updated - 1;
    if ( !v14 )
      goto LABEL_15;
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        v10 = 16;
        goto LABEL_8;
      }
LABEL_15:
      v8 = -1073741595;
      goto $exit_9;
    }
    v10 = 15;
  }
LABEL_8:
  v8 = -1073741808;
  _a2 = *((_QWORD *)ComponentIdleConditionCallback + 18);
  v12 = *((_WORD *)ComponentIdleConditionCallback + 5);
  _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v12 )
    _a1 = 0LL;
  WPP_IFR_SF_qid(DriverGlobals, 2u, 0xCu, v10, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2, -1073741808);
  FxVerifierDbgBreakPoint(DriverGlobals);
$exit_9:
  if ( v8 < 0 && v5 )
    this->m_PoxSettings = 0LL;
  return (unsigned int)v8;
}
