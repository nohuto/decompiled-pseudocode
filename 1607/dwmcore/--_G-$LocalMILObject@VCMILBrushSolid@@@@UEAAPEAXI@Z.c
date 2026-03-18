/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushSolid@@@@UEAAPEAXI@Z @ 0x180121440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
