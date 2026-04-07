/*
 * XREFs of ?GetInstructionSize@CDrawOcclusionRectangleInstruction@@UEAAJPEAH@Z @ 0x180016B50
 * Callers:
 *     ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016B60 (-WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::GetInstructionSize(
        CDrawOcclusionRectangleInstruction *this,
        int *a2)
{
  *a2 = 20;
  return 0LL;
}
