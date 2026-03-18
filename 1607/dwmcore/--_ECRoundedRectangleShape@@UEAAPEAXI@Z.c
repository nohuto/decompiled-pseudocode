/*
 * XREFs of ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x18018A4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::`vector deleting destructor'(
        CRoundedRectangleShape *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRoundedRectangleShape *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
