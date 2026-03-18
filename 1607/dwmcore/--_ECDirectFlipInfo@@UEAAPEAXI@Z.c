/*
 * XREFs of ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180126260
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800795E0 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`vector deleting destructor'(CDirectFlipInfo *this, char a2)
{
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDirectFlipInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
