/*
 * XREFs of ??1BufferTarget@BufferedInputTarget@@QEAA@XZ @ 0x18000E380
 * Callers:
 *     _GestureTargetingComponent::OnHitTest_::_1_::dtor$0 @ 0x18009F6AA (_GestureTargetingComponent--OnHitTest_--_1_--dtor$0.c)
 *     _MagnifierComponent::OnHitTest_::_1_::dtor$0 @ 0x18009FAAB (_MagnifierComponent--OnHitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::s_HitTestHandler_::_1_::dtor$8 @ 0x18009FC0B (_DWMInputRouter--s_HitTestHandler_--_1_--dtor$8.c)
 *     _InputRedirectionComponent::OnHitTest_::_1_::dtor$0 @ 0x1800A058F (_InputRedirectionComponent--OnHitTest_--_1_--dtor$0.c)
 *     _TargetingArbitrationComponent::OnHitTest_::_1_::dtor$1 @ 0x1800A3386 (_TargetingArbitrationComponent--OnHitTest_--_1_--dtor$1.c)
 *     _TargetingArbitrationComponent::OnHitTest_::_1_::dtor$3 @ 0x1800A33BF (_TargetingArbitrationComponent--OnHitTest_--_1_--dtor$3.c)
 *     _TargetingArbitrationComponent::OnHitTest_::_1_::dtor$5 @ 0x1800A33CB (_TargetingArbitrationComponent--OnHitTest_--_1_--dtor$5.c)
 *     _TargetingArbitrationComponent::OnGetTargetWithFocus_::_1_::dtor$1 @ 0x1800A33E3 (_TargetingArbitrationComponent--OnGetTargetWithFocus_--_1_--dtor$1.c)
 *     _TargetingArbitrationComponent::OnGetTargetWithFocus_::_1_::dtor$3 @ 0x1800A341C (_TargetingArbitrationComponent--OnGetTargetWithFocus_--_1_--dtor$3.c)
 *     _TargetingArbitrationComponent::OnGetTargetWithFocus_::_1_::dtor$5 @ 0x1800A3428 (_TargetingArbitrationComponent--OnGetTargetWithFocus_--_1_--dtor$5.c)
 *     _TargetingArbitrationComponent::DoConvergedTargetingDecision_::_1_::dtor$2 @ 0x1800A346D (_TargetingArbitrationComponent--DoConvergedTargetingDecision_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BufferedInputTarget::BufferTarget::~BufferTarget(BufferedInputTarget::BufferTarget *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
