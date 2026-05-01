/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@wil@@QEAA@XZ @ 0x18001ED74
 * Callers:
 *     _CSingleViewShellExperience::OnViewDestroyedBase_::_1_::dtor$0 @ 0x180031770 (_CSingleViewShellExperience--OnViewDestroyedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x18001C7AC (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_4c551f96b4d47870eead9a7d5ac91a0d_>::~ScopeExitFn<_lambda_4c551f96b4d47870eead9a7d5ac91a0d_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSingleViewShellExperience::ResetViews(*(CSingleViewShellExperience **)a1);
  }
}
