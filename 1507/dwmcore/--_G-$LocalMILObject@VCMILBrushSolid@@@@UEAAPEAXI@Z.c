/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushSolid@@@@UEAAPEAXI@Z @ 0x1800F1040
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

_QWORD *__fastcall LocalMILObject<CMILBrushSolid>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  a1[3] = &CMILBrushSolid::`vftable'{for `CMILBrush'};
  a1[7] = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  *a1 = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
