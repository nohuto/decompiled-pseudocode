/*
 * XREFs of _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00AAC80
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges(&a1->BindState.Miniport->BindEngine, RunAsynchronous, 0);
  Ndis::Initmode::DisableIfNeeded((Ndis::Initmode *)a1->BindState.Miniport, (struct _NDIS_MINIPORT_BLOCK *)1, v2);
}
