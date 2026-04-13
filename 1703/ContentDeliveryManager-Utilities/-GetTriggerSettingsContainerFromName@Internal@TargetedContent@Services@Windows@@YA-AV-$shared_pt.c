/*
 * XREFs of ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180047454
 * Callers:
 *     _lambda_a20a6b3776b39db881c9be8aadce65fd_::operator() @ 0x180048B94 (_lambda_a20a6b3776b39db881c9be8aadce65fd_--operator().c)
 * Callees:
 *     ??4?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049850 (--4-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z @ 0x1800498F4 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetWnfRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C398 (-GetWnfRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     ?GetEventRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C45C (-GetEventRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$sha.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x180069120 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName(
        _QWORD *a1,
        HSTRING a2,
        HSTRING a3)
{
  WCHAR *StringRawBuffer; // rax
  __int64 v7; // r8
  _QWORD *EventRootRegistrationSettingsContainer; // r8
  __int64 v9; // r9
  char v10; // dl
  __int64 v11; // rcx
  char v12; // dl
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 Container; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  char v21; // [rsp+20h] [rbp-59h]
  _BYTE v22[8]; // [rsp+38h] [rbp-41h] BYREF
  volatile signed __int32 *v23; // [rsp+40h] [rbp-39h]
  _BYTE v24[8]; // [rsp+48h] [rbp-31h] BYREF
  volatile signed __int32 *v25; // [rsp+50h] [rbp-29h]
  _BYTE v26[8]; // [rsp+58h] [rbp-21h] BYREF
  volatile signed __int32 *v27; // [rsp+60h] [rbp-19h]
  _BYTE v28[8]; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v29; // [rsp+70h] [rbp-9h]
  void *v30[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v31; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v32; // [rsp+90h] [rbp+17h]

  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  v32 = 7LL;
  v31 = 0LL;
  LOWORD(v30[0]) = 0;
  if ( *StringRawBuffer )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( StringRawBuffer[v7] );
  }
  std::wstring::assign(v30, StringRawBuffer);
  if ( std::wstring::find(v30, L"WNF_", 0LL) )
  {
    EventRootRegistrationSettingsContainer = (_QWORD *)Windows::Services::TargetedContent::Internal::GetEventRootRegistrationSettingsContainer(v22);
    v10 = 2;
  }
  else
  {
    EventRootRegistrationSettingsContainer = (_QWORD *)Windows::Services::TargetedContent::Internal::GetWnfRootRegistrationSettingsContainer(v24);
    v10 = 1;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a1 != EventRootRegistrationSettingsContainer )
  {
    a1[1] = EventRootRegistrationSettingsContainer[1];
    EventRootRegistrationSettingsContainer[1] = 0LL;
    v11 = *a1;
    *a1 = *EventRootRegistrationSettingsContainer;
    *EventRootRegistrationSettingsContainer = v11;
  }
  v12 = v10 | 4;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    v21 = v12;
    v13 = v23;
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
      v12 = v21;
    }
  }
  if ( (v12 & 1) != 0 )
  {
    v14 = v25;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  if ( v32 >= 8 )
    operator delete(v30[0]);
  v32 = 7LL;
  v31 = 0LL;
  LOWORD(v30[0]) = 0;
  LOBYTE(v9) = 1;
  Container = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(*a1, v26, a2, v9);
  std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(a1, Container);
  v16 = v27;
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  if ( !WindowsIsStringEmpty(a3) )
  {
    LOBYTE(v17) = 1;
    v18 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(*a1, v28, a3, v17);
    std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(a1, v18);
    v19 = v29;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  return a1;
}
