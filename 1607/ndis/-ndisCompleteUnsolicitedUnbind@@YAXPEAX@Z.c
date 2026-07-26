/*
 * XREFs of ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00CDBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisCompleteUnsolicitedUnbind(void *a1)
{
  Ndis::BindEngine *v2; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = (Ndis::BindEngine *)(*((_QWORD *)a1 + 2) + 5208LL);
  Ndis::BindEngine::BeginPolicyUpdates(v2);
  if ( Ndis::BindState::SetBinding(
         (Ndis::BindState *)(*((_QWORD *)a1 + 119) + 8LL),
         BindingDisabled,
         Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(*((struct NDIS_BIND_PROTOCOL_LINK **)a1 + 119), (struct NDIS_PNPTRACE_LOCALS *)v4);
    WPP_SF_Zq(0xEu, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, (unsigned __int16 *)v4[1], v4[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(v2, v3);
  Ndis::BindEngine::ApplyBindChanges(v2, RunSynchronous, 0);
}
