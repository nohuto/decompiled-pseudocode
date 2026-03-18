/*
 * XREFs of ??_ECSpringDamperEndpointForce@@UEAAPEAXI@Z @ 0x18015D654
 * Callers:
 *     ??_ECSpringForce@@W7EAAPEAXI@Z @ 0x1800C08F0 (--_ECSpringForce@@W7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CSpringDamperEndpointForce *__fastcall CSpringDamperEndpointForce::`vector deleting destructor'(
        CSpringDamperEndpointForce *this,
        char a2)
{
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSpringDamperEndpointForce *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
