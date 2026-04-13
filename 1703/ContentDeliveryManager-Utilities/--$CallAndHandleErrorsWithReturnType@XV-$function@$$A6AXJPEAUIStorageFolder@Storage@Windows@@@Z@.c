/*
 * XREFs of ??$CallAndHandleErrorsWithReturnType@XV?$function@$$A6AXJPEAUIStorageFolder@Storage@Windows@@@Z@wistd@@AEAJPEAUIStorageFolder@Storage@Windows@@$0A@@details@wil@@YAJAEBV?$function@$$A6AXJPEAUIStorageFolder@Storage@Windows@@@Z@wistd@@AEAJ$$QEAPEAUIStorageFolder@Storage@Windows@@@Z @ 0x180054874
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::StorageFolder_____ptr64__IUnknown_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_8e62d2c99bb5771e806bbbda3acff7ed__2__1_::Invoke @ 0x1800546E0 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--Ru_ea_1800546E0.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002E34 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::CallAndHandleErrorsWithReturnType<void,wistd::function<void (long,Windows::Storage::IStorageFolder *)>,long &,Windows::Storage::IStorageFolder *,0>(
        __int64 a1,
        int *a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v8 = *a3;
    v7 = *a2;
    v3 = *(_QWORD *)(a1 + 104);
    if ( !v3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
    (*(void (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v7, &v8);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4EC,
                           (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
                           v4);
  }
  return 0LL;
}
