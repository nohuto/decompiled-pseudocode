/*
 * XREFs of ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00D07B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisMQueuedPromoteMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  Ndis::BindEngine *p_BindEngine; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingEnabled, Reason_SecondaryMiniport)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v4);
    WPP_SF_Zq(0x63u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v4[1], v4[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine, v3);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunSynchronous, 0);
  IoSetDeviceInterfaceState(&a1->SymbolicLinkName, 1u);
  ndisDereferenceMiniport((__int64)a1);
}
