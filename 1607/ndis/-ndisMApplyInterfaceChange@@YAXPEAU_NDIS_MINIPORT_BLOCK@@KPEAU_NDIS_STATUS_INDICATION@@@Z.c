/*
 * XREFs of ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00D05F8
 * Callers:
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C290 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisPowerSaveClearStop @ 0x1C009C320 (ndisPowerSaveClearStop.c)
 *     ndisPowerSaveStop @ 0x1C009E190 (ndisPowerSaveStop.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00C4B80 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00C4C44 (ndisIfUpdateL2MtuSizeAndNotify.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisMApplyInterfaceChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        struct _NDIS_STATUS_INDICATION *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v8; // edx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  _QWORD v10[20]; // [rsp+20h] [rbp-148h] BYREF
  _QWORD v11[20]; // [rsp+C0h] [rbp-A8h] BYREF

  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, a2);
  ndisPowerSaveStop(a1, 11);
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v10);
    WPP_SF_Zq(0xA2u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v10[1], v10[0]);
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v6);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  ndisPowerSaveClearStop(a1, 11);
  ndisMRawIndicateStatusEx((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a1, a3);
  if ( a3->StatusCode == 1073873072 )
  {
    ndisIfUpdateCurrentMacAddressAndNotify(a1->IfBlock, (unsigned __int16 *)a3->StatusBuffer);
  }
  else if ( a3->StatusCode == 1073873073 )
  {
    IfBlock = a1->IfBlock;
    v8 = *(_DWORD *)a3->StatusBuffer;
    a1->TopFilterRestartAttributes.MtuSize = v8;
    ndisIfUpdateL2MtuSizeAndNotify((__int64)IfBlock, v8);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, ~a2);
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_InterfaceChangeInProgress)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v11);
    WPP_SF_Zq(0xA3u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v11[1], v11[0]);
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v9);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunAsynchronous, 0);
}
