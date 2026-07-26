/*
 * XREFs of _lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_ @ 0x1C00D7720
 * Callers:
 *     <none>
 * Callees:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  struct _NDIS_MINIPORT_BLOCK *v2; // rdx

  p_BindEngine = &a1->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  p_BindEngine->m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine, v2);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, (enum CallRunMode)(*((_BYTE *)&WPP_MAIN_CB.Reserved + 8) != 0));
}
