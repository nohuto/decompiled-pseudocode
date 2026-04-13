/*
 * XREFs of ?UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004971C
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800485F4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800468CC (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForWnfTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046DF8 (-GetTaskNameForWnfTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$ch.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067AF8 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnRegisterWnfTrigger(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  void **v5; // rdx
  const WCHAR *v6; // rax
  _QWORD *v7; // rbx
  HSTRING_HEADER *v8; // rax
  volatile signed __int32 *v9; // rbx
  const WCHAR *v11[3]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-31h] BYREF
  void *v13[3]; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-9h]
  void *v15[3]; // [rsp+70h] [rbp-1h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+17h]
  HSTRING_HEADER v17; // [rsp+90h] [rbp+1Fh] BYREF

  v11[1] = (const WCHAR *)-2LL;
  v11[2] = (const WCHAR *)a4;
  Windows::Services::TargetedContent::Internal::GetTaskNameForWnfTrigger(v15, a2, a3);
  v5 = v15;
  if ( v16 >= 8 )
    v5 = (void **)v15[0];
  Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v13, (__int64)v5);
  v6 = (const WCHAR *)v13;
  if ( v14 >= 8 )
    v6 = (const WCHAR *)v13[0];
  v11[0] = v6;
  v7 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
         &v12,
         (__int64 *)a4);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, v11);
  CreativeFramework::CommonHelper::UnregisterTask(v8[1].Reserved.Reserved1, v7);
  if ( v14 >= 8 )
    operator delete(v13[0]);
  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  if ( v16 >= 8 )
    operator delete(v15[0]);
  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  v9 = *(volatile signed __int32 **)(a4 + 8);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return 0LL;
}
