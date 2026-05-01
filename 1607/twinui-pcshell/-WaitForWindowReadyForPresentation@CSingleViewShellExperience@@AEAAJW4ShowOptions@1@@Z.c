/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001DB6C
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001D86C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800188F8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Start@PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAI$$QEA_N2AEA_N@Z @ 0x18001FF30 (--$Start@PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA-.c)
 *     ??$ScopeExit@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@details@0@$$QEAV_lambda_6914baa2bbb41478f35591fe55a15932_@@@Z @ 0x180020030 (--$ScopeExit@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@wil@@YA-AV-$ScopeExitFn@V_lambda_6914b.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@VCSingleViewShellExperience@@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@@01@PEAVCSingleViewShellExperience@@P83@EAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@56789@@Z@Z @ 0x180020048 (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Intern.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@V_lambda_013c46c4876e793d779fba5076862f22_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@@01@V_lambda_013c46c4876e793d779fba5076862f22_@@@Z @ 0x1800200C8 (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop_ea_1800200C8.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180021604 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180023624 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180025F24 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800262A8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, char a2)
{
  int v4; // eax
  unsigned int v5; // r14d
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  PCWSTR v11; // rdi
  __int64 v12; // r8
  PCWSTR v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  const unsigned __int16 *v19; // rbx
  const unsigned __int16 *v20; // rax
  bool v22; // [rsp+48h] [rbp-C0h] BYREF
  bool v23; // [rsp+49h] [rbp-BFh] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR v28; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-90h] BYREF
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *v30; // [rsp+88h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h]
  char v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  _QWORD v34[3]; // [rsp+A8h] [rbp-60h] BYREF
  void **v35; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v36[40]; // [rsp+1F8h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v33 = -2LL;
  LODWORD(v25) = -1;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 32) + 128LL))(*(_QWORD *)(a1 + 32), &v25);
  v22 = *(_QWORD *)(a1 + 136) != 0LL;
  v23 = *(_DWORD *)(a1 + 80) != 0;
  LODWORD(v24) = v25;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v28 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Start<unsigned short const *,unsigned short const *,unsigned int,bool,bool,bool &>(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v36,
    (__int64)&v23,
    (__int64)&v22,
    a1 + 61);
  v29[0] = v36;
  v29[1] = a1;
  wil::ScopeExit<_lambda_6914baa2bbb41478f35591fe55a15932_>(&v30, v29);
  v26 = 0LL;
  v4 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32))(
         *(_QWORD *)(a1 + 32),
         &GUID_05e09815_e232_4cf4_8f2a_e5565368f312,
         &v26);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A5,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_44;
  }
  if ( *(_DWORD *)(a1 + 80) )
  {
    *(_DWORD *)(a1 + 80) = 4;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32), 4LL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *(_DWORD *)(a1 + 84) = 4;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v6);
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v7);
      goto LABEL_11;
    }
  }
  v7 = 0;
LABEL_11:
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3A8,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  if ( (a2 & 1) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 64LL))(*(_QWORD *)(a1 + 24));
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3AC,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v8);
      if ( (a2 & 4) != 0 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3AE,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v9);
        goto LABEL_44;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x3DD,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x800704DALL);
LABEL_43:
    v5 = 0;
    goto LABEL_44;
  }
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,CSingleViewShellExperience,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>(
    &v28,
    a1);
  v10 = *(_QWORD *)(a1 + 96);
  v29[0] = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v24 = 0LL;
  v11 = v28;
  CMarshaledInterface::Marshal(&v24, &GUID_dd20e800_99e3_507c_9901_bc9d1d4360aa, v28);
  v34[0] = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v34[1] = a1;
  v34[2] = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    &v35,
    v36);
  v35 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_013c46c4876e793d779fba5076862f22_>(
    &StringRawBuffer,
    v34);
  v12 = a1 + 136;
  v13 = StringRawBuffer;
  v14 = (*(__int64 (__fastcall **)(__int64, PCWSTR, __int64))(*(_QWORD *)v26 + 64LL))(v26, StringRawBuffer, v12);
  v5 = v14;
  if ( v14 >= 0 )
  {
    v32 = 0;
    if ( v13 )
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v13 + 16LL))(v13);
    v16 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v11 )
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_43;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D8,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v14);
  if ( v13 )
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v13 + 16LL))(v13);
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_44:
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v32 )
  {
    v18 = v31;
    v19 = WindowsGetStringRawBuffer(*(HSTRING *)(v31 + 16), 0LL);
    v20 = WindowsGetStringRawBuffer(*(HSTRING *)(v18 + 8), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v30, v20, v19);
  }
  v36[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v36);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v36);
  return v5;
}
