/*
 * XREFs of ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AD3D0
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C0013804 (ndisInitialBindCompleted.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AAAB4 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00AD360 (ndisInitModeTimeoutWorkItem.c)
 * Callees:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00AD438 (ndisCancelInitModeTimeoutTimer.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisMExitInitMode(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx

  if ( !a1->InitModeNotNeededAnymore )
  {
    a1->InitModeNotNeededAnymore = 1;
    ndisCancelInitModeTimeoutTimer(a1, 0LL);
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    a1->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v4);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, a2, 0);
  }
}
