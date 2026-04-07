/*
 * XREFs of ?GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z @ 0x1800351F0
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x180035174 (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawVisualTreeInstruction::GetInstructionSize(CDrawVisualTreeInstruction *this, int *a2)
{
  *a2 = 8;
  return 0LL;
}
