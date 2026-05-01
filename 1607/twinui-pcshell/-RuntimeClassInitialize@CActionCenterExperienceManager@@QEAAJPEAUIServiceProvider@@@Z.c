/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800102D4
 * Callers:
 *     ?GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180013B40 (-GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002E14 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180010860 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011574 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@details@0@$$QEAV_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@Z @ 0x180014BC0 (--$ScopeExit@V_lambda_4c551f96b4d47870eead9a7d5ac91a0d_@@@wil@@YA-AV-$ScopeExitFn@V_lambda_4c551.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001B8D4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18001C220 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180027744 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // eax
  unsigned int LastError; // ebx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  char *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  const char *v19; // r9
  HMONITOR v20; // r14
  __int64 v21; // r15
  __int64 v22; // rcx
  _QWORD *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  int HostExperiencePriorityManipulator; // eax
  __int64 v27; // rdx
  int v28; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  HRESULT v32; // eax
  __int64 v33; // rcx
  CActionCenterExperienceManager *v35; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-21h] BYREF
  HSTRING string; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER v39; // [rsp+80h] [rbp-1h] BYREF
  HSTRING v40; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v36[1] = -2LL;
  v4 = (struct IWeakReferenceSource *)((char *)this + 16);
  if ( !this )
    v4 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v40 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v39, &v40);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize((HSTRING *)this + 14, v4, a2, v40, string);
  LastError = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return LastError;
  }
  v35 = this;
  wil::ScopeExit<_lambda_4c551f96b4d47870eead9a7d5ac91a0d_>(&hstringHeader, &v35);
  v9 = (_QWORD *)((char *)this + 464);
  v10 = *((_QWORD *)this + 58);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          (char *)this + 464);
  LastError = v11;
  if ( v11 >= 0 )
  {
    v13 = (char *)this + 48;
    if ( !this )
      v13 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v9 + 32LL))(*v9, v13, (char *)this + 472);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 268LL;
      goto LABEL_27;
    }
    v14 = *((_QWORD *)this + 60);
    if ( v14 )
    {
      *((_QWORD *)this + 60) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &SID_InputHostLayout,
            &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
            (char *)this + 480);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 270LL;
      goto LABEL_27;
    }
    v15 = (_QWORD *)((char *)this + 528);
    v16 = *((_QWORD *)this + 66);
    if ( v16 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            (char *)this + 528);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 272LL;
      goto LABEL_27;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v15 + 24LL))(
            *v15,
            (char *)this + 64,
            (char *)this + 512);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 273LL;
      goto LABEL_27;
    }
    v36[0] = 0LL;
    v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v36);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 276LL;
LABEL_44:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_64;
    }
    v35 = 0LL;
    v20 = MonitorFromPoint(0LL, 1u);
    if ( v20 == (HMONITOR)-1LL )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x118,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                    v19);
      goto LABEL_64;
    }
    v21 = v36[0];
    v22 = *((_QWORD *)this + 61);
    if ( v22 )
    {
      *((_QWORD *)this + 61) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, char *))(*(_QWORD *)v21 + 72LL))(
            v21,
            v20,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            (char *)this + 488);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 281LL;
      goto LABEL_44;
    }
    v23 = (_QWORD *)((char *)this + 520);
    v24 = *((_QWORD *)this + 65);
    if ( v24 )
    {
      *v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            (char *)this + 520);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 285LL;
      goto LABEL_44;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)*v23 + 24LL))(
            *v23,
            0LL,
            (char *)this + 56,
            (char *)this + 504);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 287LL;
      goto LABEL_44;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v23 + 24LL))(
            *v23,
            26LL,
            (char *)this + 56,
            (char *)this + 508);
    LastError = v17;
    if ( v17 < 0 )
    {
      v18 = 288LL;
      goto LABEL_44;
    }
    v35 = 0LL;
    v25 = *((_QWORD *)this + 68);
    if ( v25 )
    {
      *((_QWORD *)this + 68) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                          a2,
                                          &IID_IRealmActivationHistory,
                                          &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                                          (char *)this + 544);
    LastError = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      v28 = RtlSubscribeWnfStateChangeNotification(
              (char *)this + 432,
              WNF_SHEL_LOGON_COMPLETE,
              0LL,
              CActionCenterExperienceManager::ShellReadyCallback,
              this,
              0LL,
              0,
              1,
              v35);
      LastError = v28 | 0x10000000;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)LastError);
        v30 = LastError;
        v27 = 293LL;
LABEL_62:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)v30);
        goto LABEL_64;
      }
      v31 = *((_QWORD *)this + 13);
      if ( v31 )
      {
        *((_QWORD *)this + 13) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                            (ExperienceManagerUtils *)a2,
                                            (struct IServiceProvider *)this + 13,
                                            v29);
      LastError = HostExperiencePriorityManipulator;
      if ( HostExperiencePriorityManipulator >= 0 )
      {
        HostExperiencePriorityManipulator = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
        LastError = HostExperiencePriorityManipulator;
        if ( HostExperiencePriorityManipulator >= 0 )
        {
          v40 = 0LL;
          v32 = WindowsCreateStringReference(L"ShellExperienceHostVS_ccv6fwk6gx0xp!App", 0x27u, &v39, &v40);
          if ( v32 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32);
          HostExperiencePriorityManipulator = CSingleViewShellExperience::AddTestAumid(
                                                (CActionCenterExperienceManager *)((char *)this + 112),
                                                v40);
          LastError = HostExperiencePriorityManipulator;
          if ( HostExperiencePriorityManipulator >= 0 )
          {
            hstringHeader.Reserved.Reserved2[8] = 0;
            LastError = 0;
LABEL_64:
            v33 = v36[0];
            if ( v36[0] )
            {
              v36[0] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
            goto LABEL_66;
          }
          v27 = 300LL;
        }
        else
        {
          v27 = 298LL;
        }
      }
      else
      {
        v27 = 295LL;
      }
    }
    else
    {
      v27 = 291LL;
    }
    v30 = (unsigned int)HostExperiencePriorityManipulator;
    goto LABEL_62;
  }
  v12 = 267LL;
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_66:
  if ( hstringHeader.Reserved.Reserved2[8] )
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)hstringHeader.Reserved.Reserved1
                                                                           + 72));
  return LastError;
}
