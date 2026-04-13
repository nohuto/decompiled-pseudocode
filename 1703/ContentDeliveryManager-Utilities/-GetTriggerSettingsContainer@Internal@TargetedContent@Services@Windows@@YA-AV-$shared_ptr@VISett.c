/*
 * XREFs of ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180047074
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180047CA0 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800485F4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ResolveEventNameFromTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180046ACC (-ResolveEventNameFromTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-.c)
 *     ?GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046CD8 (-GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Micro.c)
 *     ??4?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049850 (--4-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetWnfRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C398 (-GetWnfRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     ?GetEventRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C45C (-GetEventRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$sha.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x180069120 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
const WCHAR *__fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
        const WCHAR *a1,
        __int64 a2,
        char a3)
{
  __int64 WnfRootRegistrationSettingsContainer; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // r9
  __int64 Container; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  __int64 EventRootRegistrationSettingsContainer; // rax
  volatile signed __int32 *v16; // rbx
  const WCHAR *v17; // rax
  __int64 v18; // rbx
  HSTRING_HEADER *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  volatile signed __int32 *v22; // rbx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rax
  volatile signed __int32 *v26; // rbx
  HSTRING string; // [rsp+28h] [rbp-A9h] BYREF
  HSTRING v29; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v30; // [rsp+38h] [rbp-99h]
  HSTRING v31; // [rsp+40h] [rbp-91h] BYREF
  const WCHAR *v32[3]; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-71h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-69h]
  _BYTE v35[8]; // [rsp+70h] [rbp-61h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-59h]
  _BYTE v37[8]; // [rsp+80h] [rbp-51h] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp-49h]
  _BYTE v39[8]; // [rsp+90h] [rbp-41h] BYREF
  volatile signed __int32 *v40; // [rsp+98h] [rbp-39h]
  _BYTE v41[8]; // [rsp+A0h] [rbp-31h] BYREF
  volatile signed __int32 *v42; // [rsp+A8h] [rbp-29h]
  _BYTE v43[8]; // [rsp+B0h] [rbp-21h] BYREF
  volatile signed __int32 *v44; // [rsp+B8h] [rbp-19h]
  void *v45[4]; // [rsp+C0h] [rbp-11h] BYREF
  HSTRING_HEADER v46; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v47; // [rsp+F8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v32[1] = (const WCHAR *)-2LL;
  v32[2] = a1;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  LODWORD(v30) = 1;
  if ( (a3 & 1) != 0 )
  {
    WnfRootRegistrationSettingsContainer = Windows::Services::TargetedContent::Internal::GetWnfRootRegistrationSettingsContainer(v33);
    std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(
      a1,
      WnfRootRegistrationSettingsContainer);
    v7 = v34;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    Windows::Services::TargetedContent::Internal::GetWnfNameForTrigger(&v31, a2, a3);
    LOBYTE(v8) = 1;
    Container = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(*(_QWORD *)a1, v35, v31, v8);
    std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(a1, Container);
    v10 = v36;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    WindowsDeleteString(0LL);
    string = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &string);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xDE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    if ( !WindowsIsStringEmpty(string) )
    {
      LOBYTE(v12) = 1;
      v13 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(*(_QWORD *)a1, v37, string, v12);
      std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(a1, v13);
      v14 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v31);
  }
  if ( (a3 & 0x10) != 0 )
  {
    EventRootRegistrationSettingsContainer = Windows::Services::TargetedContent::Internal::GetEventRootRegistrationSettingsContainer(v39);
    std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(
      a1,
      EventRootRegistrationSettingsContainer);
    v16 = v40;
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v17 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveEventNameFromTrigger(v45, a2);
    if ( *((_QWORD *)v17 + 3) >= 8uLL )
      v17 = *(const WCHAR **)v17;
    v32[0] = v17;
    v18 = *(_QWORD *)a1;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, v32);
    LOBYTE(v20) = 1;
    v21 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(v18, v41, v19[1].Reserved.Reserved1, v20);
    std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(a1, v21);
    v22 = v42;
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    v47 = 0LL;
    if ( v45[3] >= (void *)8 )
      operator delete(v45[0]);
    v29 = 0LL;
    WindowsDeleteString(0LL);
    v29 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 160LL))(a2, &v29);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xEA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v23);
      __debugbreak();
    }
    LOBYTE(v24) = 1;
    v25 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(*(_QWORD *)a1, v43, v29, v24);
    std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(a1, v25);
    v26 = v44;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
    }
    WindowsDeleteString(v29);
  }
  return a1;
}
