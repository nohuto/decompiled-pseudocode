/*
 * XREFs of ??_GMagnifierComponent@@MEAAPEAXI@Z @ 0x180080F00
 * Callers:
 *     ??_EMagnifierComponent@@O7EAAPEAXI@Z @ 0x1800818A0 (--_EMagnifierComponent@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
MagnifierComponent *__fastcall MagnifierComponent::`scalar deleting destructor'(MagnifierComponent *this, char a2)
{
  HMODULE v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &MagnifierComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &MagnifierComponent::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 9) = 0LL;
  v4 = (HMODULE)*((_QWORD *)this + 8);
  if ( v4 )
  {
    FreeLibrary(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_BYTE *)this + 56) = 0;
  *((_BYTE *)this + 88) = 0;
  v5 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
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
