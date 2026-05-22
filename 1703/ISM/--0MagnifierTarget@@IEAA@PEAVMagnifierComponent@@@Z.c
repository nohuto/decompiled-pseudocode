/*
 * XREFs of ??0MagnifierTarget@@IEAA@PEAVMagnifierComponent@@@Z @ 0x1800818BC
 * Callers:
 *     ?Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z @ 0x180081C7C (-Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
MagnifierTarget *__fastcall MagnifierTarget::MagnifierTarget(MagnifierTarget *this, struct MagnifierComponent *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &MagnifierTarget::`vftable'{for `IBufferedInputClient'};
  *((_QWORD *)this + 1) = &MagnifierTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 2) = &MagnifierTarget::`vftable'{for `ITouchInfoAdapterClient'};
  *((_QWORD *)this + 3) = &MagnifierTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 36) = 1;
  *((_QWORD *)this + 5) = a2;
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 7) = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
