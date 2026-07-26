/*
 * XREFs of ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00CF000
 * Callers:
 *     NdisFRestartFilter @ 0x1C0053080 (NdisFRestartFilter.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00CF0E0 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueueFilterRestart(struct _NDIS_FILTER_BLOCK *a1)
{
  _QWORD v2[20]; // [rsp+20h] [rbp-B8h] BYREF

  Ndis::BindEngine::BeginPolicyUpdates(&a1->Miniport->BindEngine);
  if ( Ndis::BindState::SetPause(&a1->Bind->BindState, DatapathPaused, PauseReason_RestartNeeded) )
  {
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v2);
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
        WPP_SF_Zq(0x26u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64 *)v2[1], v2[0]);
    }
  }
  a1->Bind->BindState.NeedsPauseAction = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->Miniport->BindEngine, RunAsynchronous);
}
