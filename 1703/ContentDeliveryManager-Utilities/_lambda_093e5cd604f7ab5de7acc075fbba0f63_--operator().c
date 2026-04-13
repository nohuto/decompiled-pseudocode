/*
 * XREFs of _lambda_093e5cd604f7ab5de7acc075fbba0f63_::operator() @ 0x180052698
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_093e5cd604f7ab5de7acc075fbba0f63__0__wistd::details::function_allocator_wistd::_Func_class_void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180054BD0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_093e5cd604f7ab5de7acc075fbba0f63__0__wistd--detai.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180022D98 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?AssetPath@CreativeRule@RuleSetHandlers@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18005228C (-AssetPath@CreativeRule@RuleSetHandlers@CreativeFramework@@QEAA-AV-$basic_string@_WU-$char_trait.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800535B8 (-ContinueOnCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliver.c)
 *     ??$ActivateInstance@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180053A20 (--$ActivateInstance@UIStorageFileStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorageFileSt.c)
 *     ??$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180053AF8 (--$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@@@.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_093e5cd604f7ab5de7acc075fbba0f63_::operator()(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  HSTRING_HEADER *v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  const WCHAR *v14; // rax
  HSTRING_HEADER *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rbx
  const WCHAR *v20; // rcx
  HANDLE ProcessHeap; // rax
  const WCHAR *v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v26[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-90h] BYREF
  LPVOID lpMem; // [rsp+88h] [rbp-80h]
  char v29; // [rsp+90h] [rbp-78h]
  _BYTE v30[48]; // [rsp+98h] [rbp-70h] BYREF
  void *v31[4]; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING_HEADER v32; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v33; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v26[1] = -2LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    *(struct wil::details::IFailureCallback **)(a1 + 48),
    (wil::ActivityThreadWatcher *)v27);
  if ( a2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)a2);
    __debugbreak();
  }
  wil::ActivateInstance<Windows::Storage::IStorageFileStatics>(v26);
  v24 = 0LL;
  v6 = CreativeFramework::RuleSetHandlers::CreativeRule::AssetPath(*(_QWORD *)a1, (__int64)v31);
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v6 = *(_QWORD *)v6;
  v22 = (const WCHAR *)v6;
  v7 = v26[0];
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, &v22);
  v9 = v24;
  v24 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v7 + 48LL))(
          v7,
          v8[1].Reserved.Reserved1,
          &v24);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v10);
  v33 = 0LL;
  if ( v31[3] >= (void *)8 )
    operator delete(v31[0]);
  v11 = (__int64 *)wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
                     &v25,
                     v24);
  v12 = *v11;
  *v11 = 0LL;
  v26[2] = v12;
  v13 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *(_QWORD *)v23 = 0LL;
  v14 = (const WCHAR *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    v14 = *(const WCHAR **)v14;
  v22 = v14;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, &v22);
  v16 = *(_QWORD *)v23;
  *(_QWORD *)v23 = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, PVOID, __int64, int *))(*(_QWORD *)v12 + 96LL))(
          v12,
          a3,
          v15[1].Reserved.Reserved1,
          1LL,
          v23);
  if ( v17 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v17);
  v18 = (__int64 *)wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
                     &v22,
                     *(_QWORD *)v23);
  v19 = *v18;
  *v18 = 0LL;
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( *(_QWORD *)v23 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 16LL))(*(_QWORD *)v23);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v30);
  if ( v29 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
