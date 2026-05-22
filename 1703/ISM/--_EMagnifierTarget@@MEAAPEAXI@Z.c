/*
 * XREFs of ??_EMagnifierTarget@@MEAAPEAXI@Z @ 0x180081968
 * Callers:
 *     ??_EMagnifierTarget@@OBI@EAAPEAXI@Z @ 0x180082430 (--_EMagnifierTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
MagnifierTarget *__fastcall MagnifierTarget::`vector deleting destructor'(MagnifierTarget *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &MagnifierTarget::`vftable'{for `IBufferedInputClient'};
  *((_QWORD *)this + 1) = &MagnifierTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 2) = &MagnifierTarget::`vftable'{for `ITouchInfoAdapterClient'};
  *((_QWORD *)this + 3) = &MagnifierTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 7) = 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 6) = 0LL;
  v6 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
