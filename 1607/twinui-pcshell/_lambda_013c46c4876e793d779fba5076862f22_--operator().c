/*
 * XREFs of _lambda_013c46c4876e793d779fba5076862f22_::operator() @ 0x18001E058
 * Callers:
 *     ?Invoke@?$InvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@V_lambda_013c46c4876e793d779fba5076862f22_@@$01@Details@WRL@Microsoft@@UEAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789Windows@@@Z @ 0x1800205F0 (-Invoke@-$InvokeHelper@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@S.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800188F8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001F040 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_Tlg.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18001F144 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ??$ScopeExit@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@wil@@YA?AV?$ScopeExitFn@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@details@0@$$QEAV_lambda_6914baa2bbb41478f35591fe55a15932_@@@Z @ 0x180020030 (--$ScopeExit@V_lambda_6914baa2bbb41478f35591fe55a15932_@@@wil@@YA-AV-$ScopeExitFn@V_lambda_6914b.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18002248C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180023624 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_013c46c4876e793d779fba5076862f22_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v17; // rax
  __int64 v19; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-51h] BYREF
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *v21; // [rsp+40h] [rbp-41h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h]
  char v23; // [rsp+50h] [rbp-31h]
  __int64 v24; // [rsp+58h] [rbp-29h]
  _BYTE v25[16]; // [rsp+68h] [rbp-19h] BYREF
  void *Block; // [rsp+78h] [rbp-9h]
  char v27; // [rsp+80h] [rbp-1h]
  _BYTE v28[24]; // [rsp+88h] [rbp+7h] BYREF
  int v29; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  char v31; // [rsp+E8h] [rbp+67h] BYREF
  void *v32; // [rsp+100h] [rbp+7Fh] BYREF

  v24 = -2LL;
  v6 = a1 + 24;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    (wil::ActivityThreadWatcher *)v25);
  v7 = *(_QWORD *)(a1 + 8);
  v20[0] = v6;
  v20[1] = v7;
  wil::ScopeExit<_lambda_6914baa2bbb41478f35591fe55a15932_>(&v21, v20);
  ExperienceManagerUtils::AsStrong<IInspectable>(&v19, a1);
  if ( !v19 )
    goto LABEL_14;
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v31);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C9,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_15;
  }
  if ( !v31 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x3D3,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80070015LL);
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  v32 = 0LL;
  v10 = CMarshaledInterface::_Unmarshal(
          (CMarshaledInterface *)(a1 + 16),
          &GUID_dd20e800_99e3_507c_9901_bc9d1d4360aa,
          &v32,
          0);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = 974LL;
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v32 + 24LL))(v32, a2, a3);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v13 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_14;
  }
  v11 = 975LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v10);
  v12 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_15:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v23 )
  {
    v15 = v22;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v22 + 16), 0LL);
    v17 = WindowsGetStringRawBuffer(*(HSTRING *)(v15 + 8), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v21, v17, StringRawBuffer);
  }
  if ( v29 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v28);
  if ( v27 )
    free(Block);
  return v9;
}
