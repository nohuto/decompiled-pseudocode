/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x18005A4E0
 * Callers:
 *     ??_EButtonProcessor@@UEAAPEAXI@Z @ 0x18002FD78 (--_EButtonProcessor@@UEAAPEAXI@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x18003B4B4 (--_EHeatProcessor@@MEAAPEAXI@Z.c)
 *     ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x18003C3D0 (--_GKeyboardProcessor@@MEAAPEAXI@Z.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x18005A49C (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     _ButtonProcessor::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A0DC0 (_ButtonProcessor--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _ButtonProcessor::Create_::_1_::dtor$1 @ 0x1800A0E08 (_ButtonProcessor--Create_--_1_--dtor$1.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x1800A0F81 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     _ControllerProcessor::_ControllerProcessor_::_1_::dtor$0 @ 0x1800A105E (_ControllerProcessor--_ControllerProcessor_--_1_--dtor$0.c)
 *     _HeatProcessor::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A11C9 (_HeatProcessor--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _HeatProcessor::Create_::_1_::dtor$1 @ 0x1800A1201 (_HeatProcessor--Create_--_1_--dtor$1.c)
 *     _KeyboardProcessor::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A121D (_KeyboardProcessor--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _KeyboardProcessor::Create_::_1_::dtor$1 @ 0x1800A1255 (_KeyboardProcessor--Create_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 5) = 0LL;
  v3 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
