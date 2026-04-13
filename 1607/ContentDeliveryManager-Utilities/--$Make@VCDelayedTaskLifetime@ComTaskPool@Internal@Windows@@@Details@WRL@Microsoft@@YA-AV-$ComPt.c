/*
 * XREFs of ??$Make@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDelayedTaskLifetime@ComTaskPool@Internal@Windows@@@12@XZ @ 0x18000DF34
 * Callers:
 *     ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004618 (-s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CDelayedTaskLifetime>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  bool v4; // zf

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v4 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v2[3] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( !v4 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v2 = &Windows::Internal::ComTaskPool::CDelayedTaskLifetime::`vftable';
    *((_QWORD *)v2 + 2) = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
