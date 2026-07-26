/*
 * XREFs of _lambda_771a8e8e365bef8cca390f7125e613d4_::_helper_func_cdecl_ @ 0x1C00A8370
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 */

void __fastcall lambda_771a8e8e365bef8cca390f7125e613d4_::_helper_func_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges(&a1->BindState.Miniport->BindEngine, RunAsynchronous);
  Ndis::Initmode::DisableIfNeeded((Ndis::Initmode *)a1->BindState.Miniport, (struct _NDIS_MINIPORT_BLOCK *)1, v2);
}
