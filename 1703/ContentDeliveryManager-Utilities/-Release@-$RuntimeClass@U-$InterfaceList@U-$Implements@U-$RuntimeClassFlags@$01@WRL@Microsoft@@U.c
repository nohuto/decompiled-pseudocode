/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@UIUnknown@@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054560
 * Callers:
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::StorageFolder_____ptr64__IUnknown_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_8e62d2c99bb5771e806bbbda3acff7ed___ @ 0x180054250 (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla_ea_180054250.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::StorageFolder_____ptr64__IUnknown_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_8e62d2c99bb5771e806bbbda3acff7ed__2__1___lambda_8e62d2c99bb5771e806bbbda3acff7ed___ @ 0x1800548C4 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL-_ea_1800548C4.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@UIUnknown@@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180054DD0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$Implements@U-$RuntimeClassFlags@$01@WRL_ea_180054DD0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::StorageFolder *>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 5);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 5, i - 1, i);
        i = *((_DWORD *)a1 + 5) )
  {
    ;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
