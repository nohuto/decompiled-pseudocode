/*
 * XREFs of ??$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@0@$$QEAV_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@Z @ 0x180014BC0
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800102D4 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18001D074 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001E2C0 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001E63C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ScopeExit<_lambda_4c551f96b4d47870eead9a7d5ac91a0d_>(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
