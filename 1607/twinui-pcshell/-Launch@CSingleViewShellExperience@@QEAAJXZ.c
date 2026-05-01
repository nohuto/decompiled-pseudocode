/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18001C3C4
 * Callers:
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800119D8 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001D9C8 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180018128 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18001E8D8 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18001EA90 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??$Start@PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0AEBQEAUHWND__@@@Z @ 0x18001F304 (--$Start@PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0AEBQEAU.c)
 *     ??$WrapWithTask@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Z @ 0x180020AA4 (--$WrapWithTask@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180025F24 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800262A8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSingleViewShellExperience::Launch(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  HSTRING v4; // rbx
  HRESULT v5; // eax
  int v6; // edi
  __int64 v7; // rbx
  HSTRING v8; // rdi
  int v9; // edi
  IUnknown **v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  HSTRING newString; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h]
  HWND v17; // [rsp+48h] [rbp-C0h]
  _QWORD v18[5]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-90h] BYREF
  HSTRING string; // [rsp+88h] [rbp-80h] BYREF
  HRESULT v21; // [rsp+90h] [rbp-78h]
  _QWORD v22[40]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v23[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v18[3] = -2LL;
  if ( (dword_18004CCE4 & 1) == 0 )
  {
    dword_18004CCE4 |= 1u;
    dword_18004CCE8 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 4);
  if ( v3 )
    v17 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  else
    v17 = 0LL;
  v18[1] = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v18[2] = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::Launch::Start<unsigned short const *,unsigned short const *,HWND__ * const &>((SingleViewExperienceTelemetry::Launch *)v23);
  v4 = *(HSTRING *)this;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v5 = WindowsDuplicateString(v4, &newString);
  v6 = v5;
  LODWORD(v16) = v5;
  if ( v5 >= 0 )
  {
    CSingleViewShellExperience::BoostPriority(this, 0LL);
    v7 = *((_QWORD *)this + 12);
    v18[4] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v19[0] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v19[1] = this;
    string = 0LL;
    v21 = v16;
    if ( (int)v16 >= 0 )
    {
      v8 = newString;
      WindowsDeleteString(0LL);
      string = 0LL;
      v21 = WindowsDuplicateString(v8, &string);
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      v22,
      v23);
    v22[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
    v9 = dword_18004CCE8;
    v10 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>(v18, v19);
    v6 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v9, v11, *v10);
    v12 = v18[0];
    if ( v18[0] )
    {
      v18[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v22[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v22);
    WindowsDeleteString(string);
    string = 0LL;
    v13 = v19[0];
    if ( v19[0] )
    {
      v19[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v6 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority(this, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A3,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
  }
  WindowsDeleteString(newString);
  newString = 0LL;
  v23[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v23);
  return (unsigned int)v6;
}
