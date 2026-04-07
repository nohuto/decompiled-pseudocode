/*
 * XREFs of ?GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z @ 0x180014CB0
 * Callers:
 *     ?WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180014CC0 (-WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPopInstruction::GetInstructionSize(CPopInstruction *this, int *a2)
{
  *a2 = 4;
  return 0LL;
}
