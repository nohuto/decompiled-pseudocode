/*
 * XREFs of ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180069ABC
 * Callers:
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x180069120 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x180069454 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 *     ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x180069948 (-MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ??$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContainer@Storage@Windows@@@std@@YA?AV?$shared_ptr@VSettingsContainer@CommonHelper@CreativeFramework@@@0@AEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180069E28 (--$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContain.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreativeFramework::CommonHelper::MakeSettingsContainer(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (__int64 *)std::make_shared<CreativeFramework::CommonHelper::SettingsContainer,Windows::Storage::IApplicationDataContainer * &>(
                    v8,
                    &v9);
  v4 = *v3;
  *v3 = 0LL;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  v6 = (volatile signed __int32 *)v8[1];
  a1[1] = v5;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}
