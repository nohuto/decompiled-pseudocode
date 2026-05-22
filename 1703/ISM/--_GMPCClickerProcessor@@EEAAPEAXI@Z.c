/*
 * XREFs of ??_GMPCClickerProcessor@@EEAAPEAXI@Z @ 0x180049370
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18004EB18 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

MPCClickerProcessor *__fastcall MPCClickerProcessor::`scalar deleting destructor'(MPCClickerProcessor *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &MPCClickerProcessor::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &MPCClickerProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,0>'};
  v4 = *((_QWORD *)this + 257);
  if ( v4 )
  {
    *((_QWORD *)this + 257) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 41) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
