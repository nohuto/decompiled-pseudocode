/*
 * XREFs of ?WriteInstruction@CDrawMesh2DInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18006D530
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x180035174 (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 */

__int64 __fastcall CDrawMesh2DInstruction::WriteInstruction(
        CDrawMesh2DInstruction *this,
        void *a2,
        const struct CVisual *a3)
{
  _DWORD *v4; // r8
  __int64 result; // rax
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  CRenderDataInstruction::WriteInstructionSize(this, &v6, 0);
  v4 = v6;
  *(_DWORD *)v6 = 202;
  v4[1] = *(_DWORD *)(*((_QWORD *)this + 2) + 24LL);
  result = 0LL;
  v4[2] = *(_DWORD *)(*((_QWORD *)this + 3) + 24LL);
  return result;
}
