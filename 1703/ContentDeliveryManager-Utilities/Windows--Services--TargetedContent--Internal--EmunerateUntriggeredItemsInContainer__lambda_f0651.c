/*
 * XREFs of Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925___ @ 0x18004E128
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800485F4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18004C09C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18004C194 (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004C1A0 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x18004DE7C (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x180069330 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925___(
        _QWORD *a1,
        _BYTE **a2)
{
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v16; // rdx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int HasKey; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  void (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 result; // rax
  volatile signed __int32 *v32; // rbx
  int v33; // [rsp+20h] [rbp-69h] BYREF
  __int64 v34; // [rsp+28h] [rbp-61h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v35; // [rsp+30h] [rbp-59h] BYREF
  __int64 v36; // [rsp+38h] [rbp-51h] BYREF
  __int64 v37; // [rsp+40h] [rbp-49h] BYREF
  void (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-41h] BYREF
  __int64 v39; // [rsp+50h] [rbp-39h] BYREF
  int v40; // [rsp+58h] [rbp-31h]
  __int64 v41; // [rsp+60h] [rbp-29h] BYREF
  __int64 v42; // [rsp+68h] [rbp-21h]
  __int64 v43; // [rsp+78h] [rbp-11h]
  __int64 v44; // [rsp+80h] [rbp-9h]
  char v45[8]; // [rsp+88h] [rbp-1h] BYREF
  volatile signed __int32 *v46; // [rsp+90h] [rbp+7h]
  _QWORD v47[9]; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  char v49; // [rsp+100h] [rbp+77h] BYREF
  bool v50; // [rsp+108h] [rbp+7Fh] BYREF

  v44 = -2LL;
  v4 = **(_QWORD **)CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, v45);
  v43 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = v46;
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v4 = v43;
  }
  v38 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v4)(v4, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v38);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v37 = 0LL;
  (**v38)(v38, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v37);
  v34 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, &v34);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v49 = 1;
  while ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v34 + 56LL))(v34, &v49) >= 0 )
  {
    if ( !v49 )
      break;
    v36 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, &v36);
    v9 = retaddr;
    if ( v8 < 0 )
      goto LABEL_62;
    v39 = 0LL;
    v40 = 0;
    v10 = RoVariant::operator&((__int64)&v39, v47);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v36 + 56LL))(v36, v10 + 1);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_61;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v47);
    v13 = (unsigned int)v40;
    if ( v40 >= 0 )
    {
      if ( v40 )
      {
        if ( v40 == 1 || v40 == 3 )
        {
          v33 = 13;
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 48LL))(v39, &v33);
          v13 = (unsigned int)v14;
          if ( v14 < 0 )
            goto LABEL_25;
        }
      }
      else
      {
        v33 = 0;
      }
      v13 = 0LL;
    }
LABEL_25:
    v15 = retaddr;
    if ( (v13 & 0x80000000) != 0LL )
      goto LABEL_60;
    v16 = 0LL;
    v35 = 0LL;
    if ( v33 == 13 )
    {
      v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v39)(
              v39,
              &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
              &v35);
      v16 = v35;
    }
    else
    {
      v17 = -2147418113;
    }
    v18 = retaddr;
    if ( v17 < 0 )
      goto LABEL_59;
    CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
      (CreativeFramework::Triggers::PropertySetHelper *)&v41,
      v16);
    v50 = 0;
    HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
               &v41,
               L"executed",
               &v50);
    if ( HasKey < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)HasKey);
LABEL_59:
      wil::details::in1diag3::_Throw_Hr(
        v18,
        (void *)0xC1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v17);
LABEL_60:
      wil::details::in1diag3::_Throw_Hr(
        v15,
        (void *)0xBF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)v13);
LABEL_61:
      wil::details::in1diag3::_Throw_Hr(
        v12,
        (void *)0xBD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v11);
LABEL_62:
      wil::details::in1diag3::_Throw_Hr(
        v9,
        (void *)0xBA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v8);
      break;
    }
    if ( !v50 )
    {
      **a2 = 0;
LABEL_47:
      v24 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v26 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v26 + 16LL))(v26);
      }
      if ( v39 && ((v40 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v39 + 16LL))();
      v27 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      break;
    }
    if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v34 + 64LL))(v34, &v49) < 0 )
      goto LABEL_47;
    v20 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( v39 && ((v40 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v39 + 16LL))();
    v23 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  v28 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v32 = (volatile signed __int32 *)a1[1];
  if ( v32 )
  {
    result = (unsigned int)_InterlockedDecrement(v32 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
      result = (unsigned int)_InterlockedDecrement(v32 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
    }
  }
  return result;
}
