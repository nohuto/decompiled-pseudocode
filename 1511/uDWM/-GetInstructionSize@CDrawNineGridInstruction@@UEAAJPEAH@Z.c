/*
 * XREFs of ?GetInstructionSize@CDrawNineGridInstruction@@UEAAJPEAH@Z @ 0x180013B70
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180022E20 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawNineGridInstruction::GetInstructionSize(CDrawNineGridInstruction *this, int *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 30);
  if ( v2 )
    *a2 = 32 * v2 - 4;
  else
    *a2 = 0;
  return 0LL;
}
