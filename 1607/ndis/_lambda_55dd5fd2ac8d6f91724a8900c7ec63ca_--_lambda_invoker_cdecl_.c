/*
 * XREFs of _lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_ @ 0x1C00DD5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  struct _NDIS_MINIPORT_BLOCK *v2; // rdx

  p_BindEngine = &a1->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  p_BindEngine->m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine, v2);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, (enum CallRunMode)(byte_1C00890D8 != 0), 0);
}
