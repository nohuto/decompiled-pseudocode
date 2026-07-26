/*
 * XREFs of ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00CEF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisCompleteUnsolicitedUnbind(void *a1)
{
  Ndis::BindEngine *v2; // rbx
  _QWORD v3[21]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = (Ndis::BindEngine *)(*((_QWORD *)a1 + 2) + 5208LL);
  Ndis::BindEngine::BeginPolicyUpdates(v2);
  if ( Ndis::BindState::SetBinding(
         (Ndis::BindState *)(*((_QWORD *)a1 + 119) + 8LL),
         BindingDisabled,
         Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing(*((struct NDIS_BIND_PROTOCOL_LINK **)a1 + 119), (struct NDIS_PNPTRACE_LOCALS *)v3);
    WPP_SF_Zq(0xEu, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, (__int64 *)v3[1], v3[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(v2);
  Ndis::BindEngine::ApplyBindChanges(v2, RunSynchronous);
}
