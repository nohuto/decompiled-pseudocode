/*
 * XREFs of ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001E63C
 * Callers:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011B44 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x18001CE88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@0@$$QEAV_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@Z @ 0x180014BC0 (--$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA-AV-$ScopeExitFn@V_lambda_4c551.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18001E4C0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18001EA90 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001EBE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x1800201F4 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x1800226C4 (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@W4NavigationLevel@45678@@Z @ 0x180024E30 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800262A8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026D5C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::Hide(__int64 a1)
{
  struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h]
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-C0h]
  PCWSTR v13; // [rsp+50h] [rbp-B8h]
  CSingleViewShellExperience *v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h]
  __int64 v16; // [rsp+68h] [rbp-A0h]
  _QWORD v17[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v16 = -2LL;
  v10 = a1;
  wil::ScopeExit<_lambda_4c551f96b4d47870eead9a7d5ac91a0d_>((__int64)&v14, &v10);
  v3 = *(ExperienceManagerUtils **)(a1 + 32);
  if ( v3 )
    v10 = (__int64)ExperienceManagerUtils::WindowFromViewWrapper(v3, v2);
  else
    v10 = 0LL;
  LODWORD(v11) = *(_DWORD *)(a1 + 48);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v13 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::Hide::Start<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
    (SingleViewExperienceTelemetry::Hide *)v17,
    (__int64)&v10);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation((HSTRING *)a1);
  v4 = *(_DWORD *)(a1 + 48);
  if ( !v4 )
  {
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
LABEL_17:
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
      goto LABEL_18;
    }
LABEL_16:
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 76) = 0;
    goto LABEL_17;
  }
  if ( v4 == 1 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(*(_QWORD *)(a1 + 88), a1);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45E,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_19;
  }
  if ( *(_QWORD *)(a1 + 32) && *(_DWORD *)(a1 + 48) == 2 )
  {
    *(_DWORD *)(a1 + 48) = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24), 1LL);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46D,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7);
    v8 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(a1 + 80, *(_QWORD *)(a1 + 32), 1LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v8);
  }
  SingleViewExperienceTelemetry::Hide::Stop((SingleViewExperienceTelemetry::Hide *)v17, *(_DWORD *)(a1 + 48));
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 80LL))(*(_QWORD *)(a1 + 88), a1);
LABEL_18:
  v6 = 0;
LABEL_19:
  v17[0] = &SingleViewExperienceTelemetry::Hide::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v17);
  if ( (_BYTE)v15 )
  {
    CSingleViewShellExperience::UnboostPriority(v14, 1LL);
    CSingleViewShellExperience::UnboostDiskIo(v14);
  }
  return v6;
}
