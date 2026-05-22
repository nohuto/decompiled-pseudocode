/*
 * XREFs of ??_GEdgeGestureComponent@@MEAAPEAXI@Z @ 0x18002289C
 * Callers:
 *     ??_EEdgeGestureComponent@@O7EAAPEAXI@Z @ 0x1800233E0 (--_EEdgeGestureComponent@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1InputEdgyNotifier@@UEAA@XZ @ 0x180024B74 (--1InputEdgyNotifier@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
EdgeGestureComponent *__fastcall EdgeGestureComponent::`scalar deleting destructor'(
        EdgeGestureComponent *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &EdgeGestureComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &EdgeGestureComponent::`vftable'{for `RefCountedObject'};
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 22) = 0;
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  InputEdgyNotifier::~InputEdgyNotifier((EdgeGestureComponent *)((char *)this + 104));
  v6 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
