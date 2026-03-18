/*
 * XREFs of ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x1800841E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRealizer@@MEAA@XZ @ 0x180081448 (--1CBrushRealizer@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBrushRealizer *__fastcall LocalMILObject<CImmediateBrushRealizer>::`scalar deleting destructor'(
        CBrushRealizer *a1,
        char a2)
{
  *(_QWORD *)a1 = &CImmediateBrushRealizer::`vftable';
  CBrushRealizer::~CBrushRealizer(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBrushRealizer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
