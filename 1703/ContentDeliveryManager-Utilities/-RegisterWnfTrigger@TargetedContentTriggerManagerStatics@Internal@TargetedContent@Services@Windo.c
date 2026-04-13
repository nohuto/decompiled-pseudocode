/*
 * XREFs of ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180047CA0 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800136E0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180038088 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800468CC (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046CD8 (-GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Micro.c)
 *     ?GetTaskNameForWnfTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046DF8 (-GetTaskNameForWnfTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$ch.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEB_W@Z @ 0x1800491E4 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180055094 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800681D4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18006A6F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterWnfTrigger(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 *a4)
{
  int v7; // eax
  const WCHAR *StringRawBuffer; // rax
  const struct _WNF_STATE_NAME **v9; // r8
  int WellKnownWnfStateByName; // eax
  wchar_t *v11; // rbx
  int v12; // eax
  wchar_t **v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  volatile signed __int32 *v17; // rbx
  const WCHAR *v19; // rax
  _QWORD *v20; // rdx
  void **v21; // rdx
  const WCHAR *v22; // rax
  HSTRING_HEADER *v23; // rdi
  HSTRING_HEADER *v24; // rax
  volatile signed __int32 *v25; // rbx
  HSTRING v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING v31; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v33[4]; // [rsp+78h] [rbp-88h] BYREF
  int *v34; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v35[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  void *v37[3]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+C8h] [rbp-38h]
  void *v39[3]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v40; // [rsp+E8h] [rbp-18h]
  _QWORD v41[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v42; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v43; // [rsp+110h] [rbp+10h] BYREF
  HSTRING_HEADER v44; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v35[1] = -2LL;
  v35[2] = a4;
  if ( (a3 & 8) != 0 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &string);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    if ( WindowsIsStringEmpty(string) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    WellKnownWnfStateByName = CreativeFramework::Triggers::GetWellKnownWnfStateByName(StringRawBuffer, v33, v9);
    if ( WellKnownWnfStateByName < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)WellKnownWnfStateByName);
      __debugbreak();
    }
    v11 = **(wchar_t ***)v33;
    WindowsDeleteString(string);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v30);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = (wchar_t **)&unk_1800F3390;
    while ( *(_DWORD *)v13 != v30 )
    {
      v13 += 3;
      if ( v13 == &off_1800F33F0 )
      {
        v14 = wil::verify_hresult<long>(0x80070057);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x70,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)v14);
        __debugbreak();
      }
    }
    v11 = v13[2];
  }
  v27 = 0;
  pv = 0LL;
  WindowsDeleteString(0LL);
  v26 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &v26);
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( (a3 & 2) != 0 || !WindowsIsStringEmpty(v26) )
    {
      Windows::Services::TargetedContent::Internal::GetWnfNameForTrigger(&v31, a2, a3);
      v19 = WindowsGetStringRawBuffer(v31, 0LL);
      Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(v41, v19);
      v34 = &v27;
      v35[0] = v26;
      if ( !v42 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(_QWORD *, _QWORD *, LPVOID *, int **))(*v42 + 16LL))(v42, v35, &pv, &v34);
      if ( v42 )
      {
        v20 = v41;
        LOBYTE(v20) = v42 != v41;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v42 + 32LL))(v42, v20);
        v42 = 0LL;
      }
      WindowsDeleteString(v31);
    }
    Windows::Services::TargetedContent::Internal::GetTaskNameForWnfTrigger(v39, a2, a3);
    v21 = v39;
    if ( v40 >= 8 )
      v21 = (void **)v39[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v37, (__int64)v21);
    v22 = (const WCHAR *)v37;
    if ( v38 >= 8 )
      v22 = (const WCHAR *)v37[0];
    v32 = v22;
    std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
      &v36,
      a4);
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)off_180089128);
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, &v32);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(
      v24[1].Reserved.Reserved1,
      v23[1].Reserved.Reserved1,
      (_DWORD)v11,
      (_DWORD)pv,
      v27);
    if ( v38 >= 8 )
      operator delete(v37[0]);
    v38 = 7LL;
    v37[2] = 0LL;
    LOWORD(v37[0]) = 0;
    if ( v40 >= 8 )
      operator delete(v39[0]);
    v40 = 7LL;
    v39[2] = 0LL;
    LOWORD(v39[0]) = 0;
    WindowsDeleteString(v26);
    v26 = 0LL;
    if ( pv )
      CoTaskMemFree(pv);
    v25 = (volatile signed __int32 *)a4[1];
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x204,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v15);
    WindowsDeleteString(v26);
    v26 = 0LL;
    if ( pv )
      CoTaskMemFree(pv);
    v17 = (volatile signed __int32 *)a4[1];
    if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
    return v16;
  }
}
