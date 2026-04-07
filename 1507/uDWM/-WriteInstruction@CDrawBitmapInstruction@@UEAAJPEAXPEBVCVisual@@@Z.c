/*
 * XREFs of ?WriteInstruction@CDrawBitmapInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180035370
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x180035174 (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 */

__int64 __fastcall CDrawBitmapInstruction::WriteInstruction(
        CDrawBitmapInstruction *this,
        void *a2,
        const struct CVisual *a3)
{
  _DWORD *v4; // rdx
  __int64 result; // rax
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  CRenderDataInstruction::WriteInstructionSize(this, &v6, 0);
  v4 = v6;
  *(_DWORD *)v6 = 200;
  result = 0LL;
  v4[1] = *(_DWORD *)(*((_QWORD *)this + 2) + 24LL);
  return result;
}
