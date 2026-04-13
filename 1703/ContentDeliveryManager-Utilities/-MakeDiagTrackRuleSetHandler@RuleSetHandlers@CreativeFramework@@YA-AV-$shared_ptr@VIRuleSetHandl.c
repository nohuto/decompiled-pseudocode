/*
 * XREFs of ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800530BC
 * Callers:
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180047A40 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x1800483D0 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ??$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@std@@YA?AV?$shared_ptr@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@@0@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@@Z @ 0x180053D40 (--$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV-$shared_ptr@VCor.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+38h] [rbp-10h]

  v4 = (_QWORD *)std::make_shared<CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper> &>(&v8);
  *a1 = *v4;
  a1[1] = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  v5 = v9;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a2 + 8);
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
