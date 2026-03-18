/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z @ 0x18012B3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x180017F70 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CMILBrushLinearGradient *__fastcall LocalMILObject<CMILBrushLinearGradient>::`scalar deleting destructor'(
        CMILBrushLinearGradient *a1,
        char a2)
{
  CMILBrushLinearGradient::~CMILBrushLinearGradient(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILBrushLinearGradient *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
