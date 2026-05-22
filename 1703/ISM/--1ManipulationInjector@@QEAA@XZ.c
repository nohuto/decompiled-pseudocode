/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x180096454
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18004F52C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x1800A1012 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 *     _ControllerProcessor::_ControllerProcessor_::_1_::dtor$8 @ 0x1800A10EF (_ControllerProcessor--_ControllerProcessor_--_1_--dtor$8.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1800A1955 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     _MPCGestureHandler::_MPCGestureHandler_::_1_::dtor$1 @ 0x1800A19C7 (_MPCGestureHandler--_MPCGestureHandler_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::~ManipulationInjector(ManipulationInjector *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 12) )
    RemoveInjectionDevice();
  v2 = (void *)*((_QWORD *)this + 96);
  if ( v2 )
    CloseHandle(v2);
}
