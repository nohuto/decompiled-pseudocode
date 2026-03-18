/*
 * XREFs of ??_GHANDLE_TABLE@@UEAAPEAXI@Z @ 0x180116520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

HANDLE_TABLE *__fastcall HANDLE_TABLE::`scalar deleting destructor'(HANDLE_TABLE *this, char a2)
{
  *(_QWORD *)this = &HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 3));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, HANDLE_TABLE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
