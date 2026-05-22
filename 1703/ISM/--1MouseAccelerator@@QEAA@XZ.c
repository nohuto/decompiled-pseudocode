/*
 * XREFs of ??1MouseAccelerator@@QEAA@XZ @ 0x1800587B0
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$4 @ 0x1800A1ED2 (_MouseProcessor--MouseProcessor_--_1_--dtor$4.c)
 *     _MouseProcessor::_MouseProcessor_::_1_::dtor$4 @ 0x1800A1F50 (_MouseProcessor--_MouseProcessor_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseAccelerator::~MouseAccelerator(MouseAccelerator *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
