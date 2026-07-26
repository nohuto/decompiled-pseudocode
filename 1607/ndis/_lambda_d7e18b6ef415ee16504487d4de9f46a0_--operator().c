/*
 * XREFs of _lambda_d7e18b6ef415ee16504487d4de9f46a0_::operator() @ 0x1C005A238
 * Callers:
 *     _lambda_d7e18b6ef415ee16504487d4de9f46a0_::_lambda_invoker_cdecl_ @ 0x1C005A230 (_lambda_d7e18b6ef415ee16504487d4de9f46a0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall lambda_d7e18b6ef415ee16504487d4de9f46a0_::operator()(__int64 a1, Ndis::BindState *a2)
{
  Ndis::BindEngine *p_BindEngine; // rdi
  _QWORD v4[20]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &a2->Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  if ( Ndis::BindState::SetBinding(
         a2,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(
      (struct NDIS_BIND_PROTOCOL_LINK *)&a2[-1].m_bindContext._p,
      (struct NDIS_PNPTRACE_LOCALS *)v4);
    WPP_SF_Zq(0x20u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (unsigned __int16 *)v4[1], v4[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
}
