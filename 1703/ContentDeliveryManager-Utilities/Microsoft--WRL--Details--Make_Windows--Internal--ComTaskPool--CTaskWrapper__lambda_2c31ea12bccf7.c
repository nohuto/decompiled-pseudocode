/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_____lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___ @ 0x18003F4C8
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___ @ 0x18003E760 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_____lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  bool v6; // zf

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v4 = off_18007BE40;
    *((_QWORD *)v4 + 2) = 0LL;
    if ( v4 + 4 != (_DWORD *)a2 )
    {
      *((_QWORD *)v4 + 2) = *a2;
      *a2 = 0LL;
    }
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
