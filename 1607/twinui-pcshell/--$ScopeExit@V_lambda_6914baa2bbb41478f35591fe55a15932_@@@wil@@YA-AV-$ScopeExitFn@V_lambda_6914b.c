/*
 * XREFs of ??$ScopeExit@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@details@0@$$QEAV_lambda_6914baa2bbb41478f35591fe55a15932_@@@Z @ 0x180020030
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001DB6C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_013c46c4876e793d779fba5076862f22_::operator() @ 0x18001E058 (_lambda_013c46c4876e793d779fba5076862f22_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ScopeExit<_lambda_6914baa2bbb41478f35591fe55a15932_>(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
