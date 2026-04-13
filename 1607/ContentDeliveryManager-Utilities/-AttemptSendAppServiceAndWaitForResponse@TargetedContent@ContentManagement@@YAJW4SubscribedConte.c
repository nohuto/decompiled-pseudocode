/*
 * XREFs of ?AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@IAEAVRequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceResponse@678@PEAW4AppServiceResponseStatus@678@@Z @ 0x18003EF0C
 * Callers:
 *     ?SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceResponse@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003F274 (-SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18002A2D4 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002DD88 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     ??$_SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180042AA0 (--$_SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     ??$AppServiceResponseStatus@HAEAI@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX$$QEAHAEAI@Z @ 0x180042EAC (--$AppServiceResponseStatus@HAEAI@RequestSubscribedContentFromAppServiceActivity@ContentDelivery.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::TargetedContent::AttemptSendAppServiceAndWaitForResponse(
        int a1,
        HSTRING a2,
        HSTRING a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7,
        int *a8)
{
  _QWORD *v12; // r13
  int *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // r8
  int v26; // eax
  int v27; // edx
  void **v28; // r8
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 (__fastcall ***v34)(__int64, GUID *, __int64 *); // rcx
  __int64 v35; // rcx
  __int64 v37; // [rsp+28h] [rbp-79h] BYREF
  __int64 (__fastcall ***v38)(__int64, GUID *, __int64 *); // [rsp+30h] [rbp-71h] BYREF
  __int64 v39; // [rsp+38h] [rbp-69h] BYREF
  __int64 v40; // [rsp+40h] [rbp-61h] BYREF
  int v41; // [rsp+48h] [rbp-59h] BYREF
  __int64 v42; // [rsp+50h] [rbp-51h]
  __int64 v43; // [rsp+58h] [rbp-49h]
  HSTRING string; // [rsp+60h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v46[32]; // [rsp+80h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+3Fh]

  v43 = -2LL;
  v42 = a6;
  v12 = a7;
  v13 = a8;
  *a7 = 0LL;
  *v13 = 3;
  v39 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          (__int64)string,
          &v39);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_42;
  }
  v40 = v39;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
  v16 = *(_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, (const WCHAR **)off_18006EA88);
  v17 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v46, (const WCHAR **)off_18006EA80);
  v19 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetValue<HSTRING__ *>(&v40, *v17, v18, v16);
  v15 = v19;
  if ( v19 < 0 )
  {
    v20 = 127LL;
LABEL_20:
    v21 = (unsigned int)v19;
    goto LABEL_21;
  }
  if ( a1 )
  {
    if ( !WindowsGetStringRawBuffer(a3, 0LL) )
    {
      v15 = -2147024809;
      v21 = 2147942487LL;
      v20 = 136LL;
      goto LABEL_21;
    }
    if ( a1 != 1 )
    {
      v15 = -2147418113;
      v21 = 2147549183LL;
      v20 = 137LL;
      goto LABEL_21;
    }
    v24 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v46, (const WCHAR **)off_18006EA78);
    v19 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetValue<HSTRING__ *>(&v40, *v24, v25, a3);
    v15 = v19;
    if ( v19 < 0 )
    {
      v20 = 138LL;
      goto LABEL_20;
    }
LABEL_22:
    v38 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 88LL))(a4, v39, &v38);
    v15 = v26;
    if ( v26 < 0 )
    {
      v29 = 142LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v26);
LABEL_38:
      v34 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v34)[2])(v34);
      }
      goto LABEL_40;
    }
    v26 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>(
            v38,
            v27,
            v28);
    v15 = v26;
    if ( v26 < 0 )
    {
      v29 = 143LL;
      goto LABEL_26;
    }
    v37 = 0LL;
    v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64 *))(*v38)[8])(
            v38,
            &v37);
    v15 = v30;
    if ( v30 >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 56LL))(v37, v13);
      v15 = v30;
      if ( v30 >= 0 )
      {
        v41 = *v13;
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::AppServiceResponseStatus<int,unsigned int &>(
          v42,
          &v41,
          &a5);
        if ( !*v13 )
        {
          v33 = v37;
          v32 = 0LL;
          v37 = 0LL;
          *v12 = v33;
          v15 = 0;
LABEL_36:
          if ( v32 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          goto LABEL_38;
        }
        v15 = -2147023269;
LABEL_34:
        v32 = v37;
        goto LABEL_36;
      }
      v31 = 149LL;
    }
    else
    {
      v31 = 146LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_34;
  }
  if ( WindowsGetStringRawBuffer(a2, 0LL) )
  {
    v22 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v46, (const WCHAR **)off_18006EA70);
    v19 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetValue<HSTRING__ *>(&v40, *v22, v23, a2);
    v15 = v19;
    if ( v19 < 0 )
    {
      v20 = 132LL;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  v15 = -2147024809;
  v21 = 2147942487LL;
  v20 = 131LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
    (const char *)v21);
LABEL_40:
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
LABEL_42:
  v35 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return v15;
}
