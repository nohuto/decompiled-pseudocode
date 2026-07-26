/*
 * XREFs of _lambda_1ce06b2b40968439b229a98218e85867_::_helper_func_cdecl_ @ 0x1C00E2E00
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 */

void __fastcall lambda_1ce06b2b40968439b229a98218e85867_::_helper_func_cdecl_(__int64 a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(a1 + 8) + 5208LL), RunSynchronous);
  Ndis::Initmode::DisableIfNeeded(*(Ndis::Initmode **)(a1 + 8), 0LL, v2);
}
