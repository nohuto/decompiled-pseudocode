/*
 * XREFs of ??0TargetingArbitrationComponent@@IEAA@XZ @ 0x18007F514
 * Callers:
 *     ?Create@TargetingArbitrationComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x18007F680 (-Create@TargetingArbitrationComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E04C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
TargetingArbitrationComponent *__fastcall TargetingArbitrationComponent::TargetingArbitrationComponent(
        TargetingArbitrationComponent *this)
{
  _QWORD *v2; // rbx
  unsigned int i; // esi

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TargetingArbitrationComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &TargetingArbitrationComponent::`vftable'{for `RefCountedObject'};
  v2 = (_QWORD *)((char *)this + 24);
  `eh vector constructor iterator'(
    (char *)this + 24,
    8uLL,
    5uLL,
    (void (*)(void *))RefPtr<IInputTargetingComponent>::RefPtr<IInputTargetingComponent>,
    (void (*)(void *))RefPtr<TouchDeviceCollection>::~RefPtr<TouchDeviceCollection>);
  for ( i = 0; i < 5; ++i )
  {
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    *v2++ = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
  return this;
}
