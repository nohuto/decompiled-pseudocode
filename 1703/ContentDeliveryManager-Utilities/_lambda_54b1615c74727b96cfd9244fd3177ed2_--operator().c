/*
 * XREFs of _lambda_54b1615c74727b96cfd9244fd3177ed2_::operator() @ 0x180052CFC
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_54b1615c74727b96cfd9244fd3177ed2__0__wistd::details::function_allocator_wistd::_Func_class_void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180054AA0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_54b1615c74727b96cfd9244fd3177ed2__0__ea_180054AA0.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180022D98 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180040424 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800535B8 (-ContinueOnCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliver.c)
 *     ??$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180053AF8 (--$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@@@.c)
 *     ??$query@UIStorageItem@Storage@Windows@@@?$com_ptr_t@UIStorageFile@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStorageItem@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180053CF0 (--$query@UIStorageItem@Storage@Windows@@@-$com_ptr_t@UIStorageFile@Storage@Windows@@Uerr_excepti.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_54b1615c74727b96cfd9244fd3177ed2_::operator()(__int64 a1, int a2, __int64 a3)
{
  const WCHAR *v6; // rax
  HSTRING_HEADER *v7; // rbx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rbx
  const WCHAR *v11; // rcx
  int v12; // eax
  DWORD v13; // edx
  int v14; // r8d
  int v15; // eax
  HANDLE ProcessHeap; // rax
  __int64 v17; // [rsp+28h] [rbp-69h] BYREF
  const WCHAR *v18; // [rsp+30h] [rbp-61h] BYREF
  void (__fastcall ***v19)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-59h] BYREF
  __int64 v20; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v22[16]; // [rsp+58h] [rbp-39h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-29h]
  char v24; // [rsp+70h] [rbp-21h]
  _BYTE v25[48]; // [rsp+78h] [rbp-19h] BYREF
  HSTRING_HEADER v26; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v21[1] = -2LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    *(struct wil::details::IFailureCallback **)(a1 + 48),
    (wil::ActivityThreadWatcher *)v22);
  if ( a2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)a2);
    __debugbreak();
  }
  v17 = 0LL;
  v6 = (const WCHAR *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    v6 = *(const WCHAR **)v6;
  v18 = v6;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, &v18);
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)a3 + 80LL))(a3, v7[1].Reserved.Reserved1, &v17);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v8);
  v9 = (__int64 *)wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
                    &v18,
                    v17);
  v10 = *v9;
  *v9 = 0LL;
  v21[0] = v10;
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !v10 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  wil::com_ptr_t<Windows::Storage::IStorageFile,wil::err_exception_policy>::query<Windows::Storage::IStorageItem>(
    v21,
    &v20);
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 72LL))(v20, 1LL, &v19);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v15 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v19, v13, v14);
  if ( v15 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x630,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v15);
  if ( v19 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v19)[2])(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v25);
  if ( v24 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
