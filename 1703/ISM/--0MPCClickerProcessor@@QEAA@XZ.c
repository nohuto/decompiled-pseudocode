/*
 * XREFs of ??0MPCClickerProcessor@@QEAA@XZ @ 0x18004A590
 * Callers:
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800491E0 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x18002EE3C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

MPCClickerProcessor *__fastcall MPCClickerProcessor::MPCClickerProcessor(MPCClickerProcessor *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  MPCClickerProcessor *result; // rax

  MPCInputProviderBase::MPCInputProviderBase(this);
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_DWORD *)this + 41) = 1;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  *(_QWORD *)this = &MPCClickerProcessor::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &MPCClickerProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 257) = 0LL;
  *((_QWORD *)this + 258) = 0LL;
  *((_DWORD *)this + 518) = 0;
  *((_DWORD *)this + 534) = 1000593162;
  *((_DWORD *)this + 535) = 1000593162;
  result = this;
  *((_BYTE *)this + 2076) = 0;
  *((_QWORD *)this + 260) = 0LL;
  *((_QWORD *)this + 261) = 0LL;
  *((_QWORD *)this + 262) = 0LL;
  *((_DWORD *)this + 526) = 0;
  *((_BYTE *)this + 2108) = 0;
  *((_DWORD *)this + 536) = 1077936128;
  *((_DWORD *)this + 537) = 1036831949;
  return result;
}
