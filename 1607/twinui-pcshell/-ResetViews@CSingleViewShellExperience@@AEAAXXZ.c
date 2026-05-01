/*
 * XREFs of ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x18001C7AC
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18001CC24 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18001D074 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ??1?$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@wil@@QEAA@XZ @ 0x18001ED74 (--1-$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18001E4C0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSingleViewShellExperience::ResetViews(CSingleViewShellExperience *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 1;
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
