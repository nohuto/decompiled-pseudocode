/*
 * XREFs of ?AttemptCreateAppServiceConnection@TargetedContent@ContentManagement@@YAJPEBG0IAEAVOpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAW4AppServiceConnectionStatus@89Windows@@@Z @ 0x18003EB78
 * Callers:
 *     ?CreateAppServiceConnection@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEBG2@Z @ 0x18003EDA8 (-CreateAppServiceConnection@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppServiceConnect.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180029AF4 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002DFC4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 *     ??$AppServiceConnectionStatus@HAEAI@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX$$QEAHAEAI@Z @ 0x180042D00 (--$AppServiceConnectionStatus@HAEAI@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryM.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::TargetedContent::AttemptCreateAppServiceConnection(
        ContentManagement::TargetedContent *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *a5,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a6)
{
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  int v14; // eax
  int v15; // edx
  void **v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 (__fastcall ***v19)(__int64, GUID *, __int64 *); // rdi
  __int64 v20; // rax
  __int64 (__fastcall ***v21)(__int64, GUID *, __int64 *); // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+28h] [rbp-49h] BYREF
  __int64 (__fastcall ***v25)(__int64, GUID *, __int64 *); // [rsp+30h] [rbp-41h] BYREF
  _DWORD v26[4]; // [rsp+38h] [rbp-39h] BYREF
  const WCHAR *v27[2]; // [rsp+48h] [rbp-29h] BYREF
  const WCHAR *v28[3]; // [rsp+58h] [rbp-19h] BYREF
  HSTRING string; // [rsp+70h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+4Fh]

  v28[2] = (const WCHAR *)-2LL;
  v26[0] = (_DWORD)a3;
  v27[0] = L"microsoft-contentdeliverymanager";
  v28[0] = L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy";
  *(_QWORD *)a5 = 0LL;
  *(_DWORD *)a6 = 4;
  v24 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         (__int64)string,
         &v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 59LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_21;
  }
  v10 = v24;
  v11 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, v27);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 56LL))(v10, *v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 60LL;
    goto LABEL_9;
  }
  v12 = v24;
  v13 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, v28);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 72LL))(v12, *v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 61LL;
    goto LABEL_9;
  }
  v25 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v24 + 80LL))(
          v24,
          &v25);
  v8 = v14;
  if ( v14 < 0 )
  {
    v17 = (unsigned int)v14;
    v18 = 64LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)v17);
    goto LABEL_19;
  }
  v19 = v25;
  v8 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>>(
         v25,
         v15,
         v16);
  if ( v8 < 0
    || (v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), struct Windows::ApplicationModel::AppService::IAppServiceConnection **))(*v19)[8])(
               v19,
               a6),
        v8 < 0) )
  {
    v17 = (unsigned int)v8;
    v18 = 67LL;
    goto LABEL_18;
  }
  LODWORD(v27[0]) = *(_DWORD *)a6;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity::AppServiceConnectionStatus<int,unsigned int &>(
    a4,
    v27,
    v26);
  if ( *(_DWORD *)a6 )
  {
    v8 = -2147023660;
  }
  else
  {
    v20 = v24;
    v24 = 0LL;
    *(_QWORD *)a5 = v20;
    v8 = 0;
  }
LABEL_19:
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v21)[2])(v21);
  }
LABEL_21:
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v8;
}
