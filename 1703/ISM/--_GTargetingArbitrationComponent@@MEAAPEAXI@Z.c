/*
 * XREFs of ??_GTargetingArbitrationComponent@@MEAAPEAXI@Z @ 0x18007F5C0
 * Callers:
 *     ??_ETargetingArbitrationComponent@@O7EAAPEAXI@Z @ 0x180080330 (--_ETargetingArbitrationComponent@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF10 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
TargetingArbitrationComponent *__fastcall TargetingArbitrationComponent::`scalar deleting destructor'(
        TargetingArbitrationComponent *this,
        char a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rdi

  *(_QWORD *)this = &TargetingArbitrationComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &TargetingArbitrationComponent::`vftable'{for `RefCountedObject'};
  v4 = 0;
  v5 = (_QWORD *)((char *)this + 24);
  do
  {
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
    *v5 = 0LL;
    ++v4;
    ++v5;
  }
  while ( v4 < 5 );
  `eh vector destructor iterator'(
    (char *)this + 24,
    8uLL,
    5uLL,
    (void (*)(void *))RefPtr<TouchDeviceCollection>::~RefPtr<TouchDeviceCollection>);
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
