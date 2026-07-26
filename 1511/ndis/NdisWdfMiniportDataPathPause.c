/*
 * XREFs of NdisWdfMiniportDataPathPause @ 0x1C00CCC60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD09C (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall NdisWdfMiniportDataPathPause(struct _NDIS_MINIPORT_BLOCK *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_Wdf)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v4);
    WPP_SF_Zq(0x70u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64 *)v4[1], v4[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine, v3);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunSynchronous);
}
