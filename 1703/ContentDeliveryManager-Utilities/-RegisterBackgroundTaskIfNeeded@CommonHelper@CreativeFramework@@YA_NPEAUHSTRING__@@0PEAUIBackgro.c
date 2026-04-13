/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067B74
 * Callers:
 *     _lambda_69582238324f545b86bbebe50f8ed5ac_::operator() @ 0x1800683A0 (_lambda_69582238324f545b86bbebe50f8ed5ac_--operator().c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067AF8 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_0a057cecd063e9fd0dcc901606d00cc2___ @ 0x18006864C (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_0a057cecd063e9fd0dcc901606d00c.c)
 *     ??$query@UIBackgroundCondition@Background@ApplicationModel@Windows@@@?$com_ptr_t@UISystemCondition@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundCondition@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F18 (--$query@UIBackgroundCondition@Background@ApplicationModel@Windows@@@-$com_ptr_t@UISystemConditi.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 *a6)
{
  volatile signed __int32 *v10; // rbx
  _QWORD *v12; // rax
  HRESULT v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  HRESULT v20; // eax
  __int64 v21; // rcx
  int ActivationFactory; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  int v25; // eax
  __int64 *v26; // rax
  int v27; // eax
  __int64 v28; // rdi
  int v29; // eax
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdi
  int v35; // eax
  __int64 *v36; // rax
  __int64 v37; // rdi
  int v38; // eax
  int v39; // eax
  volatile signed __int32 *v40; // rbx
  int v41; // [rsp+20h] [rbp-C9h] BYREF
  __int64 v42; // [rsp+28h] [rbp-C1h] BYREF
  __int64 v43; // [rsp+30h] [rbp-B9h] BYREF
  __int64 v44; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v45; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v46; // [rsp+48h] [rbp-A1h]
  __int64 v47; // [rsp+50h] [rbp-99h] BYREF
  __int64 v48; // [rsp+58h] [rbp-91h] BYREF
  PCWSTR StringRawBuffer; // [rsp+60h] [rbp-89h] BYREF
  __int64 v50; // [rsp+68h] [rbp-81h] BYREF
  __int64 v51; // [rsp+70h] [rbp-79h] BYREF
  _QWORD v52[4]; // [rsp+78h] [rbp-71h] BYREF
  __int64 v53; // [rsp+98h] [rbp-51h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-41h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-29h] BYREF
  HSTRING_HEADER v56; // [rsp+C8h] [rbp-21h] BYREF
  HSTRING v57; // [rsp+E0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  v52[2] = -2LL;
  v52[3] = a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  LOBYTE(v41) = 0;
  v52[0] = &v41;
  v52[1] = &StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_0a057cecd063e9fd0dcc901606d00cc2___(v52);
  if ( (_BYTE)v41 )
  {
    if ( (unsigned int)(a5 - 1) > 1 )
    {
      v10 = (volatile signed __int32 *)a6[1];
      if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      return 0;
    }
    if ( a5 == 1 )
    {
      v12 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
              &v53,
              a6);
      CreativeFramework::CommonHelper::UnregisterTask((__int64)a1, (__int64)v12);
    }
  }
  v42 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
          0x39u,
          &hstringHeader,
          &string);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  v14 = v42;
  v42 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v42 = 0LL;
  v15 = RoActivateInstance(string, &v45);
  if ( v15 < 0 )
    goto LABEL_19;
  if ( *(_QWORD *)&GUID_0351550e_3e64_4572_a93a_84075a37c917.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    || *(_QWORD *)GUID_0351550e_3e64_4572_a93a_84075a37c917.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v45)(
            v45,
            &GUID_0351550e_3e64_4572_a93a_84075a37c917,
            &v42);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
LABEL_19:
    v16 = v42;
    goto LABEL_20;
  }
  v16 = v45;
  v42 = v45;
LABEL_20:
  if ( v15 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v15);
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v16 + 80LL))(v16, a1);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 48LL))(v42, a2);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 64LL))(v42, a3);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v44 = 0LL;
  v57 = 0LL;
  v20 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.SystemCondition", 0x33u, &v56, &v57);
  if ( v20 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
  v21 = v44;
  v44 = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  ActivationFactory = RoGetActivationFactory(v57, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v44);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v23 = 0LL;
  v24 = 0LL;
  v46 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    v43 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v44 + 48LL))(
            v44,
            (a4 & 4) != 0 ? 3 : 7,
            &v43);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v25);
      __debugbreak();
    }
    v26 = (__int64 *)wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
                       &v43,
                       &v50);
    v24 = *v26;
    *v26 = 0LL;
    v46 = v24;
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 72LL))(v42, v24);
    if ( v27 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v27);
      __debugbreak();
    }
    v23 = v43;
  }
  if ( (a4 & 2) != 0 )
  {
    v28 = v44;
    v43 = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, 5LL, &v43);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x9C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v29);
      __debugbreak();
    }
    v30 = (__int64 *)wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
                       &v43,
                       &v51);
    v31 = *v30;
    *v30 = 0LL;
    v32 = v24;
    v24 = v31;
    v46 = v31;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 72LL))(v42, v31);
    if ( v33 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x9E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v33);
      __debugbreak();
    }
    v23 = v43;
  }
  v34 = v44;
  v43 = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, 8LL, &v43);
  if ( v35 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xA4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v35);
    __debugbreak();
  }
  v36 = (__int64 *)wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
                     &v43,
                     &v48);
  v37 = *v36;
  *v36 = 0LL;
  v46 = v37;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  v38 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 72LL))(v42, v37);
  if ( v38 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v38);
  v47 = 0LL;
  v39 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 96LL))(v42, &v47);
  if ( v39 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xAA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v39);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v40 = (volatile signed __int32 *)a6[1];
  if ( v40 )
  {
    if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
      if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
    }
  }
  return 1;
}
