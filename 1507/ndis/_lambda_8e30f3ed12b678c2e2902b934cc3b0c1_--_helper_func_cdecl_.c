/*
 * XREFs of _lambda_8e30f3ed12b678c2e2902b934cc3b0c1_::_helper_func_cdecl_ @ 0x1C0055BB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall lambda_8e30f3ed12b678c2e2902b934cc3b0c1_::_helper_func_cdecl_(Ndis::BindState *this)
{
  Ndis::BindEngine *p_BindEngine; // rdi
  _QWORD v3[20]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &this->Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  if ( Ndis::BindState::SetBinding(
         this,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing(
      (struct NDIS_BIND_PROTOCOL_LINK *)&this[-1].m_bindContext._p,
      (struct NDIS_PNPTRACE_LOCALS *)v3);
    WPP_SF_Zq(0x20u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)v3[1], v3[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous);
}
