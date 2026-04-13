/*
 * XREFs of ??$RunWhenComplete@UIUnknown@@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@V?$function@$$A6AXJPEAUIStorageFolder@Storage@Windows@@@Z@wistd@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@$$QEAV?$function@$$A6AXJPEAUIStorageFolder@Storage@Windows@@@Z@wistd@@@Z @ 0x180053F2C
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800522D0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::StorageFolder_____ptr64__IUnknown_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_8e62d2c99bb5771e806bbbda3acff7ed___ @ 0x180054250 (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla_ea_180054250.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RunWhenComplete<IUnknown,Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder *> *,wistd::function<void (long,Windows::Storage::IStorageFolder *)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rdx
  _BYTE *v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v10[104]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE *v11; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 104);
  if ( v3 )
  {
    if ( v3 == (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2 )
      v4 = v10;
    else
      v4 = 0LL;
    v11 = (_BYTE *)(**v3)(v3, v4);
  }
  else
  {
    v11 = 0LL;
  }
  Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::StorageFolder_____ptr64__IUnknown_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_8e62d2c99bb5771e806bbbda3acff7ed___(
    &v9,
    v10);
  if ( v11 )
  {
    v5 = v10;
    LOBYTE(v5) = v11 != v10;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v11 + 24LL))(v11, v5);
  }
  v6 = v9;
  if ( v9 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x551,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)0x8007000ELL);
  }
  return v7;
}
