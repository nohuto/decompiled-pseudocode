/*
 * XREFs of ??1PointerProcessor@@MEAA@XZ @ 0x18005D888
 * Callers:
 *     ??_GMobileTouchProcessor@@MEAAPEAXI@Z @ 0x1800578A8 (--_GMobileTouchProcessor@@MEAAPEAXI@Z.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180058810 (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_EPointerProcessor@@MEAAPEAXI@Z @ 0x18005D844 (--_EPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x18005FA48 (--_GTouchProcessor@@MEAAPEAXI@Z.c)
 *     _MobileTouchProcessor::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A1E5B (_MobileTouchProcessor--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x1800A1E8D (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _MouseProcessor::_MouseProcessor_::_1_::dtor$0 @ 0x1800A1F0B (_MouseProcessor--_MouseProcessor_--_1_--dtor$0.c)
 *     _TouchProcessor::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A20DB (_TouchProcessor--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall PointerProcessor::~PointerProcessor(PointerProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &PointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &PointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
