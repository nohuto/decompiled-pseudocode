/*
 * XREFs of ?GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046CD8
 * Callers:
 *     ?GetTaskNameForWnfTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046DF8 (-GetTaskNameForWnfTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$ch.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180047074 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4 (-RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windo.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveTriggerTaskName@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800469C8 (-ResolveTriggerTaskName@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::GetWnfNameForTrigger(
        HSTRING *a1,
        __int64 a2,
        char a3)
{
  int v5; // eax
  int v6; // eax
  HSTRING *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+18h] BYREF
  HSTRING string; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  if ( (a3 & 8) != 0 )
  {
    WindowsDeleteString(0LL);
    *a1 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, a1);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    if ( WindowsIsStringEmpty(*a1) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v10);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = Windows::Services::TargetedContent::Internal::ResolveTriggerTaskName(&string, v10);
    WindowsDeleteString(*a1);
    *a1 = 0LL;
    *a1 = *v7;
    *v7 = 0LL;
    WindowsDeleteString(string);
  }
  return a1;
}
