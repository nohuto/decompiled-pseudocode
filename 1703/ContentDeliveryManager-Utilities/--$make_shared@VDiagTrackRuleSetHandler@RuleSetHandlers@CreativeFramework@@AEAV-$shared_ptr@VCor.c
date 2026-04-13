/*
 * XREFs of ??$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@std@@YA?AV?$shared_ptr@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@@0@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@@Z @ 0x180053D40
 * Callers:
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800530BC (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 * Callees:
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper> &>(
        _QWORD *a1,
        __int64 *a2)
{
  char *v4; // rax
  char *v5; // rdi
  _QWORD *v6; // r14
  __int64 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (char *)operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler>::`vftable';
    v6 = v4 + 16;
    if ( v4 != (char *)-16LL )
    {
      v7 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
             v10,
             a2);
      *v6 = &CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::`vftable';
      std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
        (_QWORD *)v5 + 3,
        v7);
      v5[40] = 0;
      v8 = (volatile signed __int32 *)v7[1];
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
    }
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 16;
  return a1;
}
