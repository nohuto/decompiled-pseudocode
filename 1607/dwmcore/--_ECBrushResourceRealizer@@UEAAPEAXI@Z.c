/*
 * XREFs of ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x18002EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18002EA8C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBrushResourceRealizer *__fastcall CBrushResourceRealizer::`vector deleting destructor'(
        CBrushResourceRealizer *this,
        char a2)
{
  *(_QWORD *)this = &CBrushResourceRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBrushResourceRealizer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
