/*
 * XREFs of ?CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIAppServiceResponse@AppService@ApplicationModel@Windows@@@Z @ 0x18003F438
 * Callers:
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     _lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator() @ 0x18004138C (_lambda_a8dac312d343c3f34a0a00c8a64736dd_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?GetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z @ 0x18003B358 (-GetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z.c)
 *     ??$MakeAndInitialize@VContentCollectionImpl@TargetedContent@ContentManagement@@UITargetedContentCollection@23@PEAUHSTRING__@@PEAU5@PEAUIJsonObject@Json@Data@Windows@@PEAI@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1$$QEAPEAUIJsonObject@Json@Data@Windows@@$$QEAPEAI@Z @ 0x180043058 (--$MakeAndInitialize@VContentCollectionImpl@TargetedContent@ContentManagement@@UITargetedContent.c)
 *     ??$SubscribedContentFileTokensRedeemed@PEBGPEBG_NAEAI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG0$$QEA_NAEAI@Z @ 0x1800431F4 (--$SubscribedContentFileTokensRedeemed@PEBGPEBG_NAEAI@ContentDeliveryManagerTelemetry@Background.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall ContentManagement::TargetedContent::CollectionFromAppServiceResponse(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  bool v11; // zf
  HSTRING *v12; // rax
  int v13; // eax
  HSTRING *v14; // rax
  int v15; // eax
  HSTRING *v16; // rax
  int v17; // eax
  HSTRING v18; // rbx
  __int64 v19; // rcx
  int ActivationFactory; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v27; // [rsp+38h] [rbp-79h] BYREF
  bool v28[7]; // [rsp+39h] [rbp-78h] BYREF
  __int64 v29; // [rsp+40h] [rbp-71h] BYREF
  int v30; // [rsp+48h] [rbp-69h] BYREF
  __int64 v31; // [rsp+50h] [rbp-61h] BYREF
  __int64 v32; // [rsp+58h] [rbp-59h] BYREF
  HSTRING v33; // [rsp+60h] [rbp-51h] BYREF
  HSTRING v34; // [rsp+68h] [rbp-49h] BYREF
  __int64 v35; // [rsp+70h] [rbp-41h] BYREF
  int v36; // [rsp+78h] [rbp-39h]
  HSTRING v37; // [rsp+80h] [rbp-31h] BYREF
  void *v38; // [rsp+88h] [rbp-29h] BYREF
  void *StringRawBuffer; // [rsp+90h] [rbp-21h] BYREF
  int v40[2]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v41[3]; // [rsp+A0h] [rbp-11h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v41[1] = -2LL;
  v41[2] = a1;
  v36 = 0;
  v35 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v35);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = v35;
  v31 = v35;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  *a1 = 0LL;
  v36 = 1;
  v5 = *(_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, (const WCHAR **)off_18006EA68);
  v6 = 0LL;
  v29 = 0LL;
  if ( !v4 )
  {
    v7 = -2147467261;
    goto LABEL_11;
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
         v4,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v29);
  v7 = v8;
  if ( v8 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v8);
  v6 = v29;
  if ( v7 < 0 )
  {
LABEL_11:
    if ( v6 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    goto LABEL_18;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v29 + 64LL))(v29, v5, &v27);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9);
    v6 = v29;
    goto LABEL_11;
  }
  v10 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v7 = 0;
LABEL_18:
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v30 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v11 = v27 == 0;
  if ( v27 )
  {
    v37 = 0LL;
    v12 = (HSTRING *)Windows::Internal::StringReference::StringReference(
                       (__int64)&string,
                       (const WCHAR **)off_18006EA68);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::GetString(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
            *v12,
            &v37);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xCD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = (HSTRING *)Windows::Internal::StringReference::StringReference(
                       (__int64)&string,
                       (const WCHAR **)off_18006EA60);
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::GetString(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
            *v14,
            &v34);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v16 = (HSTRING *)Windows::Internal::StringReference::StringReference(
                       (__int64)&string,
                       (const WCHAR **)off_18006EA58);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::GetString(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
            *v16,
            &v33);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v29 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v18 = string;
    v19 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    ActivationFactory = RoGetActivationFactory(v18, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v29);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)ActivationFactory);
      __debugbreak();
    }
    v32 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v29 + 48LL))(v29, v37, &v32);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    *(_QWORD *)v40 = &v30;
    v41[0] = v32;
    v38 = v33;
    StringRawBuffer = v34;
    v22 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::ContentCollectionImpl,ContentManagement::TargetedContent::ITargetedContentCollection,HSTRING__ *,HSTRING__ *,Windows::Data::Json::IJsonObject *,unsigned int *>(
            (_DWORD)a1,
            (unsigned int)&StringRawBuffer,
            (unsigned int)&v38,
            (unsigned int)v41,
            (__int64)v40);
    if ( v22 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v22);
    v23 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v37 )
      WindowsDeleteString(v37);
    v4 = v31;
    v11 = v27 == 0;
  }
  v28[0] = !v11;
  StringRawBuffer = (void *)WindowsGetStringRawBuffer(v33, 0LL);
  v38 = (void *)WindowsGetStringRawBuffer(v34, 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscribedContentFileTokensRedeemed<unsigned short const *,unsigned short const *,bool,unsigned int &>(
    &v38,
    &StringRawBuffer,
    v28,
    &v30);
  if ( v33 )
    WindowsDeleteString(v33);
  if ( v34 )
    WindowsDeleteString(v34);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v25 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return a1;
}
