/*
 * XREFs of _lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_ @ 0x1C00DDDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  enum CallRunMode v2; // edi

  p_BindEngine = &a1->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  v2 = RunSynchronous;
  if ( !p_BindEngine->m_isBeingDestroyed )
    p_BindEngine->m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  LOBYTE(v2) = byte_1C0085248 != 0;
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, v2);
}
