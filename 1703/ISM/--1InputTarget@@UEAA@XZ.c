/*
 * XREFs of ??1InputTarget@@UEAA@XZ @ 0x18006C0F4
 * Callers:
 *     _InputTargetWithHostRegistration::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A2941 (_InputTargetWithHostRegistration--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _InputAttemptedTarget::InputAttemptedTarget_::_1_::dtor$0 @ 0x1800A295D (_InputAttemptedTarget--InputAttemptedTarget_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputTarget::~InputTarget(InputTarget *this)
{
  __int64 v1; // rdx

  *(_QWORD *)this = &InputTarget::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
