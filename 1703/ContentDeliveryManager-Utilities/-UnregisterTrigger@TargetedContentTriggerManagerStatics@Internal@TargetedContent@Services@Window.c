/*
 * XREFs of ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x1800483D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x1800476F0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800485F4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800530BC (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTrigger(
        __int64 a1,
        __int64 a2,
        HSTRING a3,
        char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  _QWORD *v13; // rbx
  unsigned int v14; // eax
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  _QWORD v22[3]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-11h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-9h]
  __int64 v25; // [rsp+60h] [rbp-1h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp+7h]
  __int64 v27; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+80h] [rbp+1Fh] BYREF
  _QWORD v29[3]; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  unsigned int v31; // [rsp+D0h] [rbp+6Fh] BYREF

  v22[1] = -2LL;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v31);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Windows::Services::TargetedContent::Internal::GetCorrelationVector((__int64)&v25, a3);
    v10 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
            &v27,
            &v25);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v23, v10);
    v11 = 0;
    if ( v31 )
    {
      while ( 1 )
      {
        v22[0] = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v11, v22);
        if ( v12 < 0 )
          break;
        v13 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
                &v28,
                &v23);
        v14 = (unsigned int)std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
                              v29,
                              &v25);
        LOBYTE(v15) = a4;
        v17 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTriggerInternal(
                v16,
                v22[0],
                v14,
                v15,
                (__int64)v13);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x16C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v17);
          __debugbreak();
        }
        v18 = v22[0];
        if ( v22[0] )
        {
          v22[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( ++v11 >= v31 )
          goto LABEL_12;
      }
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v12);
    }
LABEL_12:
    if ( *(_BYTE *)(v23 + 24) )
    {
      v19 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
      if ( v19 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x1349,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          (const char *)(unsigned int)v19);
    }
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        v20 = v24;
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    v21 = v26;
    if ( v26 && _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x165,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
