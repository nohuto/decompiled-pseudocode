/*
 * XREFs of _dynamic_atexit_destructor_for__GestureTargetingComponent::s_pTargetingComponent__ @ 0x1800A3D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__GestureTargetingComponent::s_pTargetingComponent__()
{
  GestureTargetingComponent *v0; // rcx
  __int64 result; // rax

  v0 = GestureTargetingComponent::s_pTargetingComponent;
  GestureTargetingComponent::s_pTargetingComponent = 0LL;
  if ( v0 )
    return (*(__int64 (__fastcall **)(GestureTargetingComponent *))(*(_QWORD *)v0 + 16LL))(v0);
  return result;
}
