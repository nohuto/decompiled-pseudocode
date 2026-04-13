/*
 * XREFs of ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180021D10
 * Callers:
 *     ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800220F0 (-IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x1800223F0 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800227B0 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x1800214B8 (-GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180021814 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z @ 0x180021900 (-SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::GetSettingsContainer(
        ContentManagement *this,
        struct Windows::Storage::IApplicationDataContainer **a2)
{
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // r9
  __int64 v12; // rdx
  unsigned __int64 *v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  ContentManagement *v20; // rcx
  __int64 v21; // rcx
  ContentManagement *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int16 v27; // [rsp+38h] [rbp-19h] BYREF
  __int64 v28; // [rsp+40h] [rbp-11h] BYREF
  ContentManagement *v29; // [rsp+48h] [rbp-9h] BYREF
  __int64 v30; // [rsp+50h] [rbp-1h] BYREF
  __int64 v31; // [rsp+58h] [rbp+7h] BYREF
  __int64 v32; // [rsp+60h] [rbp+Fh] BYREF
  unsigned __int16 v33[4]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v34; // [rsp+70h] [rbp+1Fh]
  HSTRING string; // [rsp+78h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v34 = -2LL;
  *(_QWORD *)this = 0LL;
  v31 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Storage.ApplicationData", 0x1Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_5612147b_e843_45e3_94d8_06169e3c8e17, &v31);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_42;
  }
  v32 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v32);
  v4 = v5;
  if ( v5 >= 0 )
  {
    v30 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 80LL))(v32, &v30);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x283,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v6);
LABEL_38:
      v23 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      goto LABEL_40;
    }
    v28 = 0LL;
    v7 = v30;
    v8 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, off_180068EC8);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 80LL))(v7, *v8, 0LL, &v28);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x286,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_35;
    }
    v29 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, ContentManagement **))(*(_QWORD *)v28 + 64LL))(v28, &v29);
    v4 = v10;
    if ( v10 < 0 )
    {
      v12 = 649LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v10);
      v21 = v28;
LABEL_33:
      v22 = v29;
      if ( !v29 )
        goto LABEL_36;
      v29 = 0LL;
      (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_35:
      v21 = v28;
LABEL_36:
      if ( v21 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_38;
    }
    if ( (int)ContentManagement::HasKey(
                (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v29,
                (struct Windows::Foundation::Collections::IPropertySet *)L"SchemaVersion",
                &v27,
                v11) < 0
      || !(_BYTE)v27
      || (int)ContentManagement::GetUint64FromSetting(
                (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v29,
                (struct Windows::Foundation::Collections::IPropertySet *)L"SchemaVersion",
                v33,
                v13) < 0
      || *(_QWORD *)v33 != 2LL )
    {
      v14 = v30;
      v15 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, off_180068EC8);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, *v15);
      v4 = v10;
      if ( v10 < 0 )
      {
        v12 = 661LL;
        goto LABEL_29;
      }
      v16 = v30;
      v17 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, off_180068EC8);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v16 + 80LL))(
              v16,
              *v18,
              0LL,
              &v28);
      v4 = v10;
      if ( v10 < 0 )
      {
        v12 = 664LL;
        goto LABEL_29;
      }
      v19 = v28;
      v20 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v10 = (*(__int64 (__fastcall **)(__int64, ContentManagement **))(*(_QWORD *)v19 + 64LL))(v19, &v29);
      v4 = v10;
      if ( v10 < 0 )
      {
        v12 = 665LL;
        goto LABEL_29;
      }
      v10 = ContentManagement::SetUInt64(
              (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v29,
              (struct Windows::Foundation::Collections::IPropertySet *)L"SchemaVersion",
              (const unsigned __int16 *)2);
      v4 = v10;
      if ( v10 < 0 )
      {
        v12 = 667LL;
        goto LABEL_29;
      }
    }
    v21 = v28;
    if ( v28 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v21 = v28;
    }
    *(_QWORD *)this = v21;
    v4 = 0;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x280,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v5);
LABEL_40:
  v24 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_42:
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v4;
}
