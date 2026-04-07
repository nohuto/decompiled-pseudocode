/*
 * XREFs of ?GetInstructionSize@CDrawNineGridInstruction@@UEAAJPEAH@Z @ 0x180011C10
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
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
