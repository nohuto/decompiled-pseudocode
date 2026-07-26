/*
 * XREFs of ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0055D88
 * Callers:
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C0055E70 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     NdisUnbindAdapter @ 0x1C0056280 (NdisUnbindAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisUnbindAdapterInner(struct _NDIS_OPEN_BLOCK *a1)
{
  _QWORD v2[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x34u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)a1);
  Ndis::BindEngine::BeginPolicyUpdates(&a1->MiniportHandle->BindEngine);
  if ( Ndis::BindState::SetBinding(&a1->Bind->BindState, BindingDisabled, Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v2);
    WPP_SF_Zq(0x35u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)v2[1], v2[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->MiniportHandle->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->MiniportHandle->BindEngine, RunAsynchronous);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x36u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)a1);
}
