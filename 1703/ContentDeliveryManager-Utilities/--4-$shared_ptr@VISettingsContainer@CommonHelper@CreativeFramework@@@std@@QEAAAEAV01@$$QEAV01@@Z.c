/*
 * XREFs of ??4?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049850
 * Callers:
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180047074 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180047454 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::operator=(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  if ( &v8 == (__int128 *)a2 )
  {
    v3 = *((_QWORD *)&v8 + 1);
    v4 = v8;
  }
  else
  {
    v3 = a2[1];
    a2[1] = 0LL;
    v4 = *a2;
    *a2 = 0LL;
    *(_QWORD *)&v8 = v4;
  }
  v5 = a1[1];
  a1[1] = v3;
  *((_QWORD *)&v8 + 1) = v5;
  *a1 = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v8 + 1);
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
  }
  return a1;
}
