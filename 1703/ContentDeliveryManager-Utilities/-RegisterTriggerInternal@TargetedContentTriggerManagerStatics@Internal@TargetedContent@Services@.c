/*
 * XREFs of ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180047CA0
 * Callers:
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180047A40 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18004687C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180047074 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180047818 (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4 (-RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windo.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C7C8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_18004C7C8.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004D4A8 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800522D0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
        __int64 a1,
        __int64 a2,
        HSTRING a3,
        __int64 *a4,
        _QWORD *a5)
{
  int v8; // r15d
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rdx
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // r15
  __int64 v31; // rbx
  __int64 CreativeRule; // rax
  volatile signed __int32 *v33; // rbx
  _QWORD *v34; // rax
  int v35; // eax
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  HSTRING string; // [rsp+30h] [rbp-61h] BYREF
  HSTRING v39; // [rsp+38h] [rbp-59h] BYREF
  int v40; // [rsp+40h] [rbp-51h] BYREF
  __int64 v41; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v42; // [rsp+50h] [rbp-41h]
  __int64 v43; // [rsp+60h] [rbp-31h]
  __int64 v44; // [rsp+68h] [rbp-29h] BYREF
  __int64 v45; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v46[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v47; // [rsp+90h] [rbp-1h]
  _QWORD v48[9]; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]
  __int64 v50; // [rsp+F0h] [rbp+5Fh] BYREF
  UINT32 length; // [rsp+F8h] [rbp+67h] BYREF
  __int64 *v52; // [rsp+108h] [rbp+77h]

  v52 = a4;
  v50 = a1;
  v43 = -2LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &string);
  if ( v8 < 0 )
  {
    v9 = 315LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8);
    WindowsDeleteString(string);
    string = 0LL;
LABEL_4:
    v10 = (volatile signed __int32 *)a4[1];
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    v11 = (volatile signed __int32 *)a5[1];
    if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    return (unsigned int)v8;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  v14 = WindowsGetStringRawBuffer(a3, (UINT32 *)&v50);
  if ( CompareStringOrdinal(StringRawBuffer, length, v14, v50, 1) != 2 )
  {
    WindowsDeleteString(string);
    string = 0LL;
    v15 = (volatile signed __int32 *)a4[1];
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = (volatile signed __int32 *)a5[1];
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    return 2147483658LL;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v40);
  if ( v8 < 0 )
  {
    v9 = 322LL;
    goto LABEL_3;
  }
  if ( !v40 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    WindowsDeleteString(string);
    string = 0LL;
    v17 = (volatile signed __int32 *)a4[1];
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
    if ( !v18 )
      return 2147942487LL;
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) != 1 )
      return 2147942487LL;
    (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
    if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) != 1 )
      return 2147942487LL;
    goto LABEL_33;
  }
  v19 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v40);
  Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer((const WCHAR *)&v41, a2, v19);
  v20 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
          &v44,
          &v41);
  if ( !(unsigned __int8)Windows::Services::TargetedContent::Internal::AlreadyRegistered(v20, a2) )
  {
    v39 = 0LL;
    WindowsDeleteString(0LL);
    v39 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL))(a2, &v39);
    if ( v8 >= 0 )
    {
      if ( WindowsIsStringEmpty(v39) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)0x80070057LL);
        WindowsDeleteString(v39);
        v39 = 0LL;
        v26 = v42;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          }
        }
        WindowsDeleteString(string);
        string = 0LL;
        v27 = (volatile signed __int32 *)a4[1];
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          }
        }
        v18 = (volatile signed __int32 *)a5[1];
        if ( !v18 )
          return 2147942487LL;
        if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) != 1 )
          return 2147942487LL;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) != 1 )
          return 2147942487LL;
LABEL_33:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        return 2147942487LL;
      }
      if ( (v19 & 1) == 0
        || (v28 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
                    &v45,
                    a4),
            v8 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterWnfTrigger(
                   v29,
                   a2,
                   v19,
                   v28),
            v8 >= 0) )
      {
        v30 = a5;
        if ( (v19 & 0x20) != 0 )
        {
          v31 = *a5;
          CreativeRule = Windows::Services::TargetedContent::Internal::CreateCreativeRule((__int64)v46, a2);
          CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule(v31, CreativeRule);
          v33 = v47;
          if ( v47 )
          {
            if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
              if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            }
          }
        }
        v34 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
                v48,
                &v41);
        v35 = Windows::Services::TargetedContent::Internal::SetTriggerRegistration(v34, a2);
        if ( v35 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x15A,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v35);
        WindowsDeleteString(v39);
        v39 = 0LL;
        v36 = v42;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          }
        }
        WindowsDeleteString(string);
        string = 0LL;
        v37 = (volatile signed __int32 *)a4[1];
        if ( v37 )
        {
          if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          }
        }
        v23 = (volatile signed __int32 *)v30[1];
        goto LABEL_84;
      }
      v24 = 338LL;
    }
    else
    {
      v24 = 333LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8);
    WindowsDeleteString(v39);
    v39 = 0LL;
    v25 = v42;
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_4;
  }
  v21 = v42;
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  WindowsDeleteString(string);
  string = 0LL;
  v22 = (volatile signed __int32 *)a4[1];
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  v23 = (volatile signed __int32 *)a5[1];
LABEL_84:
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  return 0LL;
}
