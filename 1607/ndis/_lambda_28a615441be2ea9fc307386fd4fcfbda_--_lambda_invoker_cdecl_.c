/*
 * XREFs of _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00E2B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_(__int64 a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(a1 + 8) + 5208LL), RunSynchronous, 0);
  Ndis::Initmode::DisableIfNeeded(*(Ndis::Initmode **)(a1 + 8), 0LL, v2);
}
