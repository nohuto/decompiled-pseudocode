/*
 * XREFs of ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x18003B4B4
 * Callers:
 *     ??_EHeatProcessor@@O7EAAPEAXI@Z @ 0x18003BAF0 (--_EHeatProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x18005A4E0 (--1NonPointerProcessor@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
HeatProcessor *__fastcall HeatProcessor::`vector deleting destructor'(HeatProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  HMODULE v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &HeatProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &HeatProcessor::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 8) = 0LL;
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 7) = 0LL;
  v6 = (HMODULE)*((_QWORD *)this + 6);
  if ( v6 )
  {
    FreeLibrary(v6);
    *((_QWORD *)this + 6) = 0LL;
  }
  v7 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
