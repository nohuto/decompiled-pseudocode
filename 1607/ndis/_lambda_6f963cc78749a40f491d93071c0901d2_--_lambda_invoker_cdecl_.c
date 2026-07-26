/*
 * XREFs of _lambda_6f963cc78749a40f491d93071c0901d2_::_lambda_invoker_cdecl_ @ 0x1C00B0430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall lambda_6f963cc78749a40f491d93071c0901d2_::_lambda_invoker_cdecl_(Ndis::BindState *this)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx

  Miniport = this->Miniport;
  Ndis::BindEngine::BeginPolicyUpdates(&Miniport->BindEngine);
  if ( Ndis::BindState::SetBinding(
         this,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    WPP_SF_Zq(0x14u, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids, 0LL, 0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine, v3);
}
