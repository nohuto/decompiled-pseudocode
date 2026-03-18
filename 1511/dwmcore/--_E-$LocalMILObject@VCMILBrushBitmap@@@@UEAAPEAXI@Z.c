/*
 * XREFs of ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1800895F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180089B08 (--1CMILBrushBitmap@@MEAA@XZ.c)
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
