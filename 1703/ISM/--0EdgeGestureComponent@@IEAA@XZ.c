/*
 * XREFs of ??0EdgeGestureComponent@@IEAA@XZ @ 0x1800227EC
 * Callers:
 *     ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180022984 (-Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAUIInputTargetingCo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
EdgeGestureComponent *__fastcall EdgeGestureComponent::EdgeGestureComponent(EdgeGestureComponent *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &EdgeGestureComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &EdgeGestureComponent::`vftable'{for `RefCountedObject'};
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 13) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 13) = &InputEdgyNotifier::`vftable';
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 22) = 0;
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
