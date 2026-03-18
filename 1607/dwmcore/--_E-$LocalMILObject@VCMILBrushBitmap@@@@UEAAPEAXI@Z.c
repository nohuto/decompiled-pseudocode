/*
 * XREFs of ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1800844A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180084528 (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
