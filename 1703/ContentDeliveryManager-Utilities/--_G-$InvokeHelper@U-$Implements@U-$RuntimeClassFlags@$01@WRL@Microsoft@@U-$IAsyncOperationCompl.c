/*
 * XREFs of ??_G?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@UIUnknown@@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_8e62d2c99bb5771e806bbbda3acff7ed_@@$01$0?0@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800549E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::StorageFolder *>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,_lambda_8e62d2c99bb5771e806bbbda3acff7ed_,2,-1>::`scalar deleting destructor'(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  char v5; // si
  __int64 v6; // rcx

  v2 = a1 + 24;
  v4 = *(_QWORD *)(a1 + 128);
  v5 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  v6 = *(_QWORD *)(v2 + 104);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2);
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  *(_DWORD *)(a1 + 20) = -1073741823;
  if ( (v5 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
