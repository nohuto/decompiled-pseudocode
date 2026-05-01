/*
 * XREFs of ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@7@2@Z @ 0x18002718C
 * Callers:
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180011714 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180018128 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180025AA8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025BAC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_::__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_ @ 0x18002753C (_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_--__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_.c)
 *     ??$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG00@Z @ 0x180027A50 (--$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG00@Z.c)
 *     ??$WrapWithTask@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@Z @ 0x180027B24 (--$WrapWithTask@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180028150 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ExperienceManagerUtils::RaiseReactivatedEvent(
        ExperienceManagerUtils *this,
        struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6)
{
  int v8; // r12d
  struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *v10; // rdx
  int v11; // ebx
  __int64 v12; // rdi
  HRESULT v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  PCWSTR v17; // rbx
  __int64 v18; // rcx
  PCWSTR v19; // rcx
  PCWSTR v20; // rcx
  __int64 v21; // rax
  HSTRING v22; // rbx
  IUnknown **v23; // rax
  __int64 v24; // r9
  PCWSTR v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  HSTRING newString; // [rsp+48h] [rbp-B8h] BYREF
  HRESULT v33; // [rsp+50h] [rbp-B0h]
  PCWSTR v34; // [rsp+58h] [rbp-A8h]
  PCWSTR v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v38; // [rsp+78h] [rbp-88h] BYREF
  HRESULT v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  void **v42; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v43[40]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v36 = -2LL;
  v8 = (int)a2;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v34 = WindowsGetStringRawBuffer(a4, 0LL);
  v35 = WindowsGetStringRawBuffer(a3, 0LL);
  SingleViewExperienceTelemetry::Reactivate::Start<unsigned short const *,unsigned short const *,unsigned short const *>((SingleViewExperienceTelemetry::Reactivate *)v43);
  v11 = -2147023496;
  if ( this )
  {
    v12 = ExperienceManagerUtils::WindowFromViewWrapper(this, v10);
    if ( !v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)0x80070578LL);
      goto LABEL_35;
    }
    WindowsDeleteString(0LL);
    newString = 0LL;
    v13 = WindowsDuplicateString(string, &newString);
    v11 = v13;
    v33 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)v13);
LABEL_34:
      WindowsDeleteString(newString);
      newString = 0LL;
      goto LABEL_35;
    }
    v14 = 0LL;
    v30 = 0LL;
    if ( a6 )
    {
      StringRawBuffer = 0LL;
      v15 = RoCreatePropertySetSerializer(&StringRawBuffer);
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = 162LL;
        goto LABEL_13;
      }
      v17 = StringRawBuffer;
      v18 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v15 = (*(__int64 (__fastcall **)(PCWSTR, HSTRING, __int64 *))(*(_QWORD *)v17 + 48LL))(v17, a6, &v30);
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = 163LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v15);
        v19 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          StringRawBuffer = 0LL;
          (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v19 + 16LL))(v19);
        }
LABEL_32:
        v27 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_34;
      }
      v20 = StringRawBuffer;
      if ( StringRawBuffer )
      {
        StringRawBuffer = 0LL;
        (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v14 = v30;
      v11 = v33;
    }
    v21 = 0LL;
    v31 = 0LL;
    v37 = v12;
    v38 = 0LL;
    v39 = v11;
    if ( v11 >= 0 )
    {
      v22 = newString;
      WindowsDeleteString(0LL);
      v38 = 0LL;
      v39 = WindowsDuplicateString(v22, &v38);
      v14 = v30;
      v21 = v31;
    }
    v40 = v14;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v21 = v31;
    }
    v41 = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v42,
      v43);
    v42 = &SingleViewExperienceTelemetry::Reactivate::`vftable';
    v23 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask<_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_>(
                         &StringRawBuffer,
                         &v37);
    v11 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v8, v24, *v23);
    v25 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      StringRawBuffer = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v25 + 16LL))(v25);
    }
    lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_::__lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_(&v37);
    if ( v11 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)v11);
    v26 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    goto LABEL_32;
  }
LABEL_35:
  v43[0] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v43);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v43);
  return (unsigned int)v11;
}
