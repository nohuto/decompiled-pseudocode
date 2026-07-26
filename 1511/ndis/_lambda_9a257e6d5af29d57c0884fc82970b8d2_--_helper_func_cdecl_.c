/*
 * XREFs of _lambda_9a257e6d5af29d57c0884fc82970b8d2_::_helper_func_cdecl_ @ 0x1C00AC720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall lambda_9a257e6d5af29d57c0884fc82970b8d2_::_helper_func_cdecl_(Ndis::BindState *this)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx

  Miniport = this->Miniport;
  Ndis::BindEngine::BeginPolicyUpdates(&Miniport->BindEngine);
  if ( Ndis::BindState::SetBinding(
         this,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    WPP_SF_Zq(0x14u, &WPP_10e48bb64bbb401b7e1b3e1f08acf4e0_Traceguids, 0LL, 0LL);
  }
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine, v3);
}
