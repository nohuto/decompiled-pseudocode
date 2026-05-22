/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x18002D084
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002D410 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x18002EE3C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x18004E434 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  MPCGamepadProcessor *result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IRawInputProvider'};
  *((_DWORD *)this + 43) = 1;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 2) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &MPCGamepadProcessor::`vftable'{for `IRawInputProvider'};
  *v1 = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 2) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 524) = 0;
  *((_DWORD *)this + 632) = 0;
  *(_WORD *)((char *)this + 2533) = 0;
  *((_DWORD *)this + 634) = 1045220557;
  *((_DWORD *)this + 635) = 1036831949;
  *((_DWORD *)this + 636) = 1097859072;
  *((_DWORD *)this + 637) = 1022739087;
  *((_QWORD *)this + 319) = 1025087898LL;
  *((_QWORD *)this + 320) = 0LL;
  *((_QWORD *)this + 321) = 0LL;
  *((_QWORD *)this + 322) = 0LL;
  *((_QWORD *)this + 323) = 0LL;
  *((_QWORD *)this + 324) = 0LL;
  *((_DWORD *)this + 650) = 0;
  *((_QWORD *)this + 326) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 327) = 0LL;
  *((_DWORD *)this + 656) = 1065353216;
  if ( *((_DWORD *)this + 27) )
  {
    *((_QWORD *)this + 13) = 0LL;
    RayStabilizer::Reset((MPCGamepadProcessor *)((char *)this + 64));
  }
  QueryPerformanceFrequency(&Frequency);
  result = this;
  *((double *)this + 326) = 1.0 / (double)(int)Frequency.LowPart;
  return result;
}
