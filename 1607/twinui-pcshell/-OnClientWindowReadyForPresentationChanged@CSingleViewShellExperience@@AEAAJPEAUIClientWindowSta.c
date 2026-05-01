/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@34567@@Z @ 0x18001D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001E2C0 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18001E4C0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$Start@PEBGPEBGI@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAI@Z @ 0x18001FB70 (--$Start@PEBGPEBGI@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@SA-AV01@$$QEA.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180024674 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800262A8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h]
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp-C8h]
  PCWSTR v14; // [rsp+48h] [rbp-C0h]
  __int64 v15; // [rsp+50h] [rbp-B8h]
  _QWORD v16[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v15 = -2LL;
  LODWORD(v12) = *((_DWORD *)this + 12);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v14 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::Start<unsigned short const *,unsigned short const *,unsigned int>((SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)v16);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  v11 = 0LL;
  (**(void (__fastcall ***)(struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *, GUID *, __int64 *))a2)(
    a2,
    &GUID_52dc4f51_333e_4e4c_b089_72bd9a2293f0,
    &v11);
  v5 = *((_QWORD *)this + 4);
  if ( v5
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, v11, &v10) >= 0
    && (_BYTE)v10
    && *((_DWORD *)this + 18) == 1 )
  {
    v6 = (*((_BYTE *)this + 76) & 1) != 0;
    if ( (*((_BYTE *)this + 76) & 2) != 0 )
      v6 = (unsigned int)v6 | 2;
    if ( (*((_BYTE *)this + 76) & 4) != 0 )
      v6 = (unsigned int)v6 | 4;
    v7 = CSingleViewShellExperience::ShowView(this, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x307,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7);
  }
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::Stop(
    (SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)v16,
    *((_DWORD *)this + 12));
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v16[0] = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v16);
  return 0LL;
}
