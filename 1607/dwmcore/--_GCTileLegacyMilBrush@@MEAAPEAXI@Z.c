/*
 * XREFs of ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x18012B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x180024714 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CTileLegacyMilBrush *__fastcall CTileLegacyMilBrush::`scalar deleting destructor'(CTileLegacyMilBrush *this, char a2)
{
  CTileLegacyMilBrush::~CTileLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTileLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
