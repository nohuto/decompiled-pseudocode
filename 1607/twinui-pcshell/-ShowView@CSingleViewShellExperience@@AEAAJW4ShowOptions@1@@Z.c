/*
 * XREFs of ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001E2C0
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@34567@@Z @ 0x18001D4E0 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001D86C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@0@$$QEAV_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@Z @ 0x180014BC0 (--$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA-AV-$ScopeExitFn@V_lambda_4c551.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001EBE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::ShowView(__int64 a1, char a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  CSingleViewShellExperience *v12; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  wil::ScopeExit<_lambda_4c551f96b4d47870eead9a7d5ac91a0d_>((__int64)&v12, &v15);
  if ( (a2 & 2) == 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1004LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_26;
    }
  }
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    *(_DWORD *)(a1 + 80) = 4;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32), 4LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 84) = 4;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v7);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v8);
      goto LABEL_12;
    }
  }
  v8 = 0;
LABEL_12:
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F3,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
  if ( (a2 & 1) != 0
    || (v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 64LL))(*(_QWORD *)(a1 + 24)), v9 >= 0)
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3F6,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v9),
        (a2 & 4) == 0) )
  {
    if ( (a2 & 2) == 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24), 0LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1026LL;
        goto LABEL_22;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88), a1);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), a1);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F9,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
  }
  v5 = 0;
LABEL_26:
  if ( v13 )
    CSingleViewShellExperience::UnboostDiskIo(v12);
  return v5;
}
