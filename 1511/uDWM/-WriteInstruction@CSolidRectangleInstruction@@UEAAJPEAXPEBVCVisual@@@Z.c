/*
 * XREFs of ?WriteInstruction@CSolidRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016270
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x18001873C (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 */

__int64 __fastcall CSolidRectangleInstruction::WriteInstruction(
        CSolidRectangleInstruction *this,
        void *a2,
        const struct CVisual *a3)
{
  char *v4; // rdx
  __int64 result; // rax
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  CRenderDataInstruction::WriteInstructionSize(this, &v6, 0);
  v4 = (char *)v6;
  *(_DWORD *)v6 = 213;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 8);
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 9);
  *((_DWORD *)v4 + 3) = *((_DWORD *)this + 10);
  *((_DWORD *)v4 + 4) = *((_DWORD *)this + 11);
  result = 0LL;
  *(_OWORD *)(v4 + 20) = *((_OWORD *)this + 1);
  return result;
}
