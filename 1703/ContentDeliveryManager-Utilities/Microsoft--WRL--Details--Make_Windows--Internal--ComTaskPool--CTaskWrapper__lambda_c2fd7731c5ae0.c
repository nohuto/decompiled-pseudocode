/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_____lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___ @ 0x180019DD8
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___ @ 0x180018178 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_____lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___(
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
    *(_QWORD *)v4 = off_180079110;
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
