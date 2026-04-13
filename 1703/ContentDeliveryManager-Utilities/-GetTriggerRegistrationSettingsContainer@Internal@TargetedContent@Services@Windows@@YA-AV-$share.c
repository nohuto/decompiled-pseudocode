/*
 * XREFs of ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C2D4
 * Callers:
 *     ?GetWnfRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C398 (-GetWnfRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     ?GetEventRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C45C (-GetEventRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$sha.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x180069120 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x180069948 (-MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer(__int64 a1)
{
  __int64 v2; // rbx
  HSTRING_HEADER *v3; // rax
  __int64 v4; // r9
  volatile signed __int32 *v5; // rbx
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v8; // [rsp+38h] [rbp-40h]
  HSTRING_HEADER v9; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]

  v2 = *(_QWORD *)CreativeFramework::CommonHelper::MakeRootSettingsContainer(&v7);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, (const WCHAR **)off_180089130);
  LOBYTE(v4) = 1;
  CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(v2, a1, v3[1].Reserved.Reserved1, v4);
  v10 = 0LL;
  v5 = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
