/*
 * XREFs of ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18001D074
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001C808 (-OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x18001CE88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@0@$$QEAV_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@Z @ 0x180014BC0 (--$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA-AV-$ScopeExitFn@V_lambda_4c551.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x18001C7AC (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18001EA90 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001EBE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewDestroyedBase(CSingleViewShellExperience *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CSingleViewShellExperience *v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CSingleViewShellExperience *v8; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 42) = 1;
  CSingleViewShellExperience::UnboostPriority(this, 0LL);
  CSingleViewShellExperience::UnboostPriority(this, 1LL);
  CSingleViewShellExperience::UnboostDiskIo(this);
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  v8 = this;
  wil::ScopeExit<_lambda_4c551f96b4d47870eead9a7d5ac91a0d_>((__int64)&v5, &v8);
  v2 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 8LL))(
         *((_QWORD *)this + 11),
         this);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v2);
  if ( v6 )
    CSingleViewShellExperience::ResetViews(v5);
  return v3;
}
