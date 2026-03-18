/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C009FE8C
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C009D05C (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C00A1894 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
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
  __int64 v15; // rcx
  const void *v16; // r10

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
        v15 = *(_QWORD *)(v10 + 144);
        if ( *(_WORD *)(v10 + 10) )
          v16 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v16 = 0LL;
        WPP_IFR_SF_qid(DriverGlobals, 2u, 0xCu, 0xFu, WPP_PowerPolicyStateMachine_cpp_Traceguids, v16, v15, -1073741808);
LABEL_15:
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        if ( DriverGlobals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
        goto LABEL_22;
      }
      if ( v12 == 1 )
      {
        v6 = -1073741808;
        v13 = *(_QWORD *)(v10 + 144);
        if ( *(_WORD *)(v10 + 10) )
          v14 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v14 = 0LL;
        WPP_IFR_SF_qid(
          DriverGlobals,
          2u,
          0xCu,
          0x10u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          v14,
          v13,
          -1073741808);
        goto LABEL_15;
      }
    }
    v6 = -1073741595;
LABEL_22:
    this->m_PoxSettings = 0LL;
    return v6;
  }
  v6 = -1073741808;
  _a2 = *((_QWORD *)ComponentIdleConditionCallback + 18);
  if ( *((_WORD *)ComponentIdleConditionCallback + 5) )
    _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qid(DriverGlobals, 2u, 0xCu, 0xEu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2, -1073741808);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( DriverGlobals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return v6;
}
