/*
 * XREFs of ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z @ 0x18000C618
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x18000D5D0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180005F54 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

Windows::System::AppMemoryUsageLimitChangingEventArgs *__fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::AppMemoryUsageLimitChangingEventArgs(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r14
  struct Microsoft::WRL::Details::ModuleBase *v7; // rsi
  Windows::System::AppMemoryUsageLimitChangingEventArgs *result; // rax

  v3 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::System::AppMemoryUsageLimitChangingEventArgs *)((char *)this + 16));
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 6) = 1LL;
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)this = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  result = this;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 7) = a2;
  return result;
}
