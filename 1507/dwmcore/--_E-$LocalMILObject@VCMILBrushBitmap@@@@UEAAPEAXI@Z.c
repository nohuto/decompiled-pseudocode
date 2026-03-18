/*
 * XREFs of ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x18008DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x18008128C (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CMILBrushBitmap *__fastcall LocalMILObject<CMILBrushBitmap>::`vector deleting destructor'(CMILBrushBitmap *a1, char a2)
{
  CMILBrushBitmap::~CMILBrushBitmap(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILBrushBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
