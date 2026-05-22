/*
 * XREFs of ??_EPTPProcessor@@MEAAPEAXI@Z @ 0x18005AE48
 * Callers:
 *     ??_EPTPProcessor@@OBA@EAAPEAXI@Z @ 0x18005C2C0 (--_EPTPProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180058810 (--1MouseProcessor@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
PTPProcessor *__fastcall PTPProcessor::`vector deleting destructor'(PTPProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &PTPProcessor::`vftable';
  *((_QWORD *)this + 1) = &PTPProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &PTPProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 22) = &PTPProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 23) = &PTPProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 24) = &PTPProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 25) = &PTPProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  v4 = *((_QWORD *)this + 81);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 81) = 0LL;
  v5 = *((_QWORD *)this + 82);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 321) = 0LL;
  v6 = *((_QWORD *)this + 83);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 83) = 0LL;
  v7 = *((_QWORD *)this + 83);
  *((_QWORD *)this + 83) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 82);
  *((_QWORD *)this + 82) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 81);
  *((_QWORD *)this + 81) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  MouseProcessor::~MouseProcessor((PTPProcessor *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
