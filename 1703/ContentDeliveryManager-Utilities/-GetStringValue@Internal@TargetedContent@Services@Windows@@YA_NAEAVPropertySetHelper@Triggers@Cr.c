/*
 * XREFs of ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18004CEA8
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004CF38 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x18004DE7C (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::GetValue_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce___ @ 0x18004F674 (CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundation_Collections_.c)
 */

char __fastcall Windows::Services::TargetedContent::Internal::GetStringValue(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        const wchar_t *a3,
        HSTRING *a4)
{
  int HasKey; // eax
  __int64 v8; // r8
  int Value_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v12 = 0;
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             this,
             a2,
             &v12);
  if ( HasKey < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)HasKey);
    __debugbreak();
  }
  if ( v12 )
  {
    Value_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce = CreativeFramework::Triggers::PropertySetHelperBase__RuntimeClass_Windows_Foundation_Collections_PropertySet_::GetValue_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce___(this, a2, v8, a3);
    if ( Value_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)Value_HSTRING_______ptr64__lambda_1c1defa02a02766d33552de44ddbb30d___lambda_cc2d649c88b5efb424e949cbd08ec0ce);
      JUMPOUT(0x18004CF36LL);
    }
  }
  return v12;
}
