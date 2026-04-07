/*
 * XREFs of ??_GCNullAnimatedVisual@@UEAAPEAXI@Z @ 0x180042E38
 * Callers:
 *     ??_ECNullAnimatedVisual@@W7EAAPEAXI@Z @ 0x180050B50 (--_ECNullAnimatedVisual@@W7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CNullAnimatedVisual *__fastcall CNullAnimatedVisual::`scalar deleting destructor'(CNullAnimatedVisual *this, char a2)
{
  *((_QWORD *)this + 1) = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CNullAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
