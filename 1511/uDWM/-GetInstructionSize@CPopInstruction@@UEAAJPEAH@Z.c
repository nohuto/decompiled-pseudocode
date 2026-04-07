/*
 * XREFs of ?GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z @ 0x18003D110
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180022E20 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18003D120 (-WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPopInstruction::GetInstructionSize(CPopInstruction *this, int *a2)
{
  *a2 = 4;
  return 0LL;
}
