/*
 * XREFs of ??_GMoveOptimizationInfo@@MEAAPEAXI@Z @ 0x18010B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1MoveOptimizationInfo@@MEAA@XZ @ 0x18010AF18 (--1MoveOptimizationInfo@@MEAA@XZ.c)
 */

MoveOptimizationInfo *__fastcall MoveOptimizationInfo::`scalar deleting destructor'(
        MoveOptimizationInfo *this,
        char a2)
{
  MoveOptimizationInfo::~MoveOptimizationInfo(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, MoveOptimizationInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
