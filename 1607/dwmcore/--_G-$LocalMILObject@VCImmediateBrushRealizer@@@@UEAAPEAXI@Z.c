/*
 * XREFs of ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x1801213F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18002EA8C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CLegacyMilBrushRealizer *__fastcall LocalMILObject<CImmediateBrushRealizer>::`scalar deleting destructor'(
        CLegacyMilBrushRealizer *a1,
        char a2)
{
  *(_QWORD *)a1 = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLegacyMilBrushRealizer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
