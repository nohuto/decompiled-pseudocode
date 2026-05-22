/*
 * XREFs of ??_GMobileTouchProcessor@@MEAAPEAXI@Z @ 0x1800578A8
 * Callers:
 *     ??_EMobileTouchProcessor@@O7EAAPEAXI@Z @ 0x180058540 (--_EMobileTouchProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1PointerProcessor@@MEAA@XZ @ 0x18005D888 (--1PointerProcessor@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
MobileTouchProcessor *__fastcall MobileTouchProcessor::`scalar deleting destructor'(
        MobileTouchProcessor *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &MobileTouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MobileTouchProcessor::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 21) = 0LL;
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 24) = 0LL;
  v6 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  PointerProcessor::~PointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
