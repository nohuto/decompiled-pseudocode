/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::StorageFolder_____ptr64__IUnknown_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_8e62d2c99bb5771e806bbbda3acff7ed__2__1_::Invoke @ 0x1800546E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800181BC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180022E00 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ??$CallAndHandleErrorsWithReturnType@XV?$function@$$A6AXJPEAUIStorageFolder@Storage@Windows@@@Z@wistd@@AEAJPEAUIStorageFolder@Storage@Windows@@$0A@@details@wil@@YAJAEBV?$function@$$A6AXJPEAUIStorageFolder@Storage@Windows@@@Z@wistd@@AEAJ$$QEAPEAUIStorageFolder@Storage@Windows@@@Z @ 0x180054874 (--$CallAndHandleErrorsWithReturnType@XV-$function@$$A6AXJPEAUIStorageFolder@Storage@Windows@@@Z@.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::StorageFolder_____ptr64__IUnknown_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_8e62d2c99bb5771e806bbbda3acff7ed__2__1_::Invoke(
        __int64 a1,
        void (__fastcall ***a2)(__int64, GUID *, __int64 *),
        int a3)
{
  void (__fastcall **v5)(__int64, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  int v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v14 = 0;
  if ( a3 == 1 )
  {
    v14 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), __int64 *))(*a2)[8])(a2, &v15);
  }
  else
  {
    v13 = 0LL;
    v5 = *a2;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v13);
    (*v5)((__int64)a2, &GUID_00000036_0000_0000_c000_000000000046, v6);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 64LL))(v13, &v14);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v12 = v15;
  v8 = wil::details::CallAndHandleErrorsWithReturnType<void,wistd::function<void (long,Windows::Storage::IStorageFolder *)>,long &,Windows::Storage::IStorageFolder *,0>(
         a1 + 24,
         &v14,
         &v12);
  v9 = v15;
  v10 = v8;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v10 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v10);
  return (unsigned int)v10;
}
