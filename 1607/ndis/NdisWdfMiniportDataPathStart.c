/*
 * XREFs of NdisWdfMiniportDataPathStart @ 0x1C005F650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall NdisWdfMiniportDataPathStart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  _QWORD v3[21]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_Wdf)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v3);
    WPP_SF_Zq(0x6Fu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (unsigned __int16 *)v3[1], v3[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunSynchronous, 0);
}
