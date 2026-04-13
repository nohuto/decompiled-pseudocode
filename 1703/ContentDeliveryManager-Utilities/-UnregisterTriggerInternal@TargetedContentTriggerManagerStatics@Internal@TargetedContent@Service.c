/*
 * XREFs of ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800485F4
 * Callers:
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x1800483D0 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18004687C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180047074 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180047818 (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ?UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004971C (-UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Win.c)
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C874 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004CCA0 (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925___ @ 0x18004E128 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_f0651.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTriggerInternal(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        _QWORD *a5)
{
  int v8; // eax
  unsigned int v9; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  char v14; // r15
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // r15
  __int64 v22; // rbx
  __int64 CreativeRule; // rax
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  __int64 *v28; // [rsp+20h] [rbp-71h] BYREF
  __int64 v29; // [rsp+28h] [rbp-69h] BYREF
  volatile signed __int32 *v30; // [rsp+30h] [rbp-61h]
  __int64 *v31; // [rsp+38h] [rbp-59h]
  __int64 v32; // [rsp+40h] [rbp-51h]
  __int64 v33; // [rsp+48h] [rbp-49h] BYREF
  __int64 v34; // [rsp+58h] [rbp-39h] BYREF
  __int64 v35; // [rsp+68h] [rbp-29h] BYREF
  __int64 v36; // [rsp+78h] [rbp-19h] BYREF
  __int64 v37; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v38[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v39; // [rsp+A0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]
  __int64 v41; // [rsp+F0h] [rbp+5Fh] BYREF
  int v42; // [rsp+F8h] [rbp+67h] BYREF
  __int64 *v43; // [rsp+100h] [rbp+6Fh]

  v43 = a3;
  v41 = a1;
  v32 = -2LL;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v42);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x17A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  if ( !v42 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x17B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v9 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v42);
  Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer((const WCHAR *)&v29, a2, v9);
  if ( a4 )
  {
    v10 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
            &v33,
            &v29);
    Windows::Services::TargetedContent::Internal::RemoveRegisteredTrigger(v10, a2);
  }
  else
  {
    v11 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
            &v34,
            &v29);
    Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted(v11, a2);
  }
  v12 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
          &v35,
          &v29);
  v31 = v12;
  LOBYTE(v41) = 1;
  v13 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
          &v36,
          v12);
  v28 = &v41;
  Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925___(
    v13,
    &v28);
  v14 = v41;
  v15 = (volatile signed __int32 *)v12[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  if ( v14 )
  {
    if ( (v9 & 1) != 0 && (v9 & 4) == 0 )
    {
      v19 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
              &v37,
              a3);
      Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnRegisterWnfTrigger(
        v20,
        a2,
        v9,
        v19);
    }
    v21 = a5;
    if ( (v9 & 0x20) != 0 )
    {
      v22 = *a5;
      CreativeRule = Windows::Services::TargetedContent::Internal::CreateCreativeRule((__int64)v38, a2);
      CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(v22, CreativeRule);
      v24 = v39;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
    }
    v25 = v30;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    v26 = (volatile signed __int32 *)a3[1];
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
    }
    v18 = (volatile signed __int32 *)v21[1];
  }
  else
  {
    v16 = v30;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v17 = (volatile signed __int32 *)a3[1];
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    v18 = (volatile signed __int32 *)a5[1];
  }
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  return 0LL;
}
