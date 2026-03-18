/*
 * XREFs of ?ClearInertiaVelocity@CScrollPositionAnimation@@MEAAXXZ @ 0x18015F9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollPositionAnimation::ClearInertiaVelocity(CScrollPositionAnimation *this)
{
  *((float *)this + 96) = (*(float (__fastcall **)(CScrollPositionAnimation *))(*(_QWORD *)this + 224LL))(this);
}
