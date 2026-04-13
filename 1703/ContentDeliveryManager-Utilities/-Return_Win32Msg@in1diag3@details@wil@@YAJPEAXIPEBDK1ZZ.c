/*
 * XREFs of ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180022CC8
 * Callers:
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x180025844 (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x1800258E4 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180025B64 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18002A2B0 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z @ 0x180022C24 (-ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Return_Win32Msg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return wil::details::ReportFailure_Win32Msg(
           (__int64)this,
           (unsigned int)a2,
           a3,
           (__int64)a4,
           v7,
           retaddr,
           v8,
           (int)a4,
           a5,
           (char *)&a6);
}
