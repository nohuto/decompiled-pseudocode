/*
 * XREFs of ?GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z @ 0x1800181A0
 * Callers:
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x18001873C (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180022E20 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawVisualTreeInstruction::GetInstructionSize(CDrawVisualTreeInstruction *this, int *a2)
{
  *a2 = 8;
  return 0LL;
}
