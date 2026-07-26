/*
 * XREFs of ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B02D0
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C0020258 (ndisInitialBindCompleted.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A0880 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00B0260 (ndisInitModeTimeoutWorkItem.c)
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00B032C (ndisCancelInitModeTimeoutTimer.c)
 */

void __fastcall ndisMExitInitMode(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  Ndis::BindEngine *p_BindEngine; // rbx

  if ( !a1->InitModeNotNeededAnymore )
  {
    a1->InitModeNotNeededAnymore = 1;
    ndisCancelInitModeTimeoutTimer(a1, 0LL);
    p_BindEngine = &a1->BindEngine;
    Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
    if ( !p_BindEngine->m_isBeingDestroyed )
      p_BindEngine->m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
    Ndis::BindEngine::ApplyBindChanges(p_BindEngine, a2);
  }
}
