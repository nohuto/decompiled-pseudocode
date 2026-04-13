/*
 * XREFs of ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180047A40
 * Callers:
 *     <none>
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x1800476F0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180047CA0 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800530BC (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTrigger(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        HSTRING a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // rcx
  int v20; // eax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  _QWORD v23[3]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp-19h]
  __int64 v26; // [rsp+60h] [rbp-11h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-9h]
  __int64 v28; // [rsp+70h] [rbp-1h] BYREF
  __int64 v29; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v30[3]; // [rsp+90h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  unsigned int v32; // [rsp+E0h] [rbp+6Fh] BYREF

  v23[1] = -2LL;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v32);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Windows::Services::TargetedContent::Internal::GetCorrelationVector((__int64)&v26, a4);
    v10 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
            &v28,
            &v26);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v24, v10);
    v11 = 0;
    if ( v32 )
    {
      while ( 1 )
      {
        v23[0] = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v11, v23);
        if ( v12 < 0 )
          break;
        v13 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
                &v29,
                &v24);
        v14 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
                v30,
                &v26);
        v16 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
                v15,
                v23[0],
                a3,
                v14,
                v13);
        v17 = v16;
        if ( ((v16 + 0x80000000) & 0x80000000) == 0 && v16 != -2147483638 )
        {
          wil::details::OriginateError();
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x12D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)v17);
          __debugbreak();
        }
        v19 = v23[0];
        if ( v23[0] )
        {
          v23[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        if ( ++v11 >= v32 )
          goto LABEL_16;
      }
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x12B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v12);
    }
LABEL_16:
    if ( *(_BYTE *)(v24 + 24) )
    {
      v20 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
      if ( v20 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x1349,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          (const char *)(unsigned int)v20);
    }
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        v21 = v25;
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    v22 = v27;
    if ( v27 && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x124,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
