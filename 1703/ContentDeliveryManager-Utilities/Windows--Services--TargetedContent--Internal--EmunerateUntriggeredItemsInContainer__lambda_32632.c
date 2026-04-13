/*
 * XREFs of Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd___ @ 0x18004F110
 * Callers:
 *     _lambda_a20a6b3776b39db881c9be8aadce65fd_::operator() @ 0x180048B94 (_lambda_a20a6b3776b39db881c9be8aadce65fd_--operator().c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18004C09C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18004C194 (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004C1A0 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004CF38 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x18004DE7C (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x18004FECC (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x180069330 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd___(
        _QWORD *a1,
        _QWORD *a2)
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
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v20; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  void (__fastcall ***v35)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 result; // rax
  volatile signed __int32 *v37; // rbx
  int v38; // [rsp+20h] [rbp-69h] BYREF
  __int64 v39; // [rsp+28h] [rbp-61h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v40; // [rsp+30h] [rbp-59h] BYREF
  __int64 v41; // [rsp+38h] [rbp-51h] BYREF
  __int64 v42; // [rsp+40h] [rbp-49h] BYREF
  void (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-41h] BYREF
  __int64 v44; // [rsp+50h] [rbp-39h] BYREF
  int v45; // [rsp+58h] [rbp-31h]
  __int64 v46; // [rsp+60h] [rbp-29h] BYREF
  __int64 v47; // [rsp+68h] [rbp-21h] BYREF
  __int64 v48; // [rsp+70h] [rbp-19h]
  __int64 v49; // [rsp+80h] [rbp-9h]
  __int64 v50; // [rsp+88h] [rbp-1h]
  char v51[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v52; // [rsp+98h] [rbp+Fh]
  _QWORD v53[8]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  char v55; // [rsp+100h] [rbp+77h] BYREF
  bool v56; // [rsp+108h] [rbp+7Fh] BYREF

  v50 = -2LL;
  v4 = **(_QWORD **)CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, v51);
  v49 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = v52;
  if ( v52 )
  {
    if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v4 = v49;
  }
  v43 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v4)(v4, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v43);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v42 = 0LL;
  (**v43)(v43, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v42);
  v39 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, &v39);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v55 = 1;
  while ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 56LL))(v39, &v55) >= 0 )
  {
    if ( !v55 )
      break;
    v41 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 48LL))(v39, &v41);
    v9 = retaddr;
    if ( v8 < 0 )
      goto LABEL_65;
    v44 = 0LL;
    v45 = 0;
    v10 = RoVariant::operator&((__int64)&v44, v53);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v41 + 56LL))(v41, v10 + 1);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_64;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v53);
    v13 = (unsigned int)v45;
    if ( v45 >= 0 )
    {
      if ( v45 )
      {
        if ( v45 == 1 || v45 == 3 )
        {
          v38 = 13;
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 48LL))(v44, &v38);
          v13 = (unsigned int)v14;
          if ( v14 < 0 )
            goto LABEL_25;
        }
      }
      else
      {
        v38 = 0;
      }
      v13 = 0LL;
    }
LABEL_25:
    v15 = retaddr;
    if ( (v13 & 0x80000000) != 0LL )
      goto LABEL_63;
    v16 = 0LL;
    v40 = 0LL;
    if ( v38 == 13 )
    {
      v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v44)(
              v44,
              &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
              &v40);
      v16 = v40;
    }
    else
    {
      v17 = -2147418113;
    }
    v18 = retaddr;
    if ( v17 < 0 )
      goto LABEL_62;
    CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
      (CreativeFramework::Triggers::PropertySetHelper *)&v47,
      v16);
    v56 = 0;
    HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
               &v47,
               L"executed",
               &v56);
    if ( HasKey < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)HasKey);
LABEL_62:
      wil::details::in1diag3::_Throw_Hr(
        v18,
        (void *)0xC1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v17);
LABEL_63:
      wil::details::in1diag3::_Throw_Hr(
        v15,
        (void *)0xBF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)v13);
LABEL_64:
      wil::details::in1diag3::_Throw_Hr(
        v12,
        (void *)0xBD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v11);
LABEL_65:
      wil::details::in1diag3::_Throw_Hr(
        v9,
        (void *)0xBA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v8);
      break;
    }
    if ( !v56 )
    {
      v46 = 0LL;
      TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                         (Windows::Services::TargetedContent::Internal *)&v47,
                                         (struct CreativeFramework::Triggers::PropertySetHelper *)&v46,
                                         v20);
      if ( TriggerRegistrationFromSetting < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x124,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)TriggerRegistrationFromSetting);
LABEL_50:
        if ( v26 )
        {
          v48 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v30 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v31 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v31 + 16LL))(v31);
        }
        if ( v44 && ((v45 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (**)(void))(*(_QWORD *)v44 + 16LL))();
        v32 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        break;
      }
      v23 = v46;
      v46 = 0LL;
      LOBYTE(v22) = 1;
      v24 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
              *a2,
              0LL,
              v23,
              v22);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x125,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v24);
        __debugbreak();
      }
    }
    v25 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 64LL))(v39, &v55);
    v26 = v48;
    if ( v25 < 0 )
      goto LABEL_50;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    if ( v44 && ((v45 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v44 + 16LL))();
    v29 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  v33 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v35)[2])(v35);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v37 = (volatile signed __int32 *)a1[1];
  if ( v37 )
  {
    result = (unsigned int)_InterlockedDecrement(v37 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
      result = (unsigned int)_InterlockedDecrement(v37 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
    }
  }
  return result;
}
