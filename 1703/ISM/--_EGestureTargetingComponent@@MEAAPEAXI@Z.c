/*
 * XREFs of ??_EGestureTargetingComponent@@MEAAPEAXI@Z @ 0x18000D764
 * Callers:
 *     ??_EGestureTargetingComponent@@OBA@EAAPEAXI@Z @ 0x18000EF30 (--_EGestureTargetingComponent@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
GestureTargetingComponent *__fastcall GestureTargetingComponent::`vector deleting destructor'(
        GestureTargetingComponent *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &GestureTargetingComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &GestureTargetingComponent::`vftable'{for `IPointerInfoAdapterClient'};
  *((_QWORD *)this + 2) = &GestureTargetingComponent::`vftable'{for `RefCountedObject'};
  *((_BYTE *)this + 40) = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 4) = 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 6) = 0LL;
  operator delete(*((void **)this + 10));
  v6 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
