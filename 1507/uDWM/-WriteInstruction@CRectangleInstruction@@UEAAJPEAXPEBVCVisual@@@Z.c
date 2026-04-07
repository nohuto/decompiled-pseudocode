/*
 * XREFs of ?WriteInstruction@CRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180039C20
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x180035174 (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 */

__int64 __fastcall CRectangleInstruction::WriteInstruction(
        CRectangleInstruction *this,
        void *a2,
        const struct CVisual *a3)
{
  _DWORD *v4; // rcx
  __int64 v5; // rax
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  CRenderDataInstruction::WriteInstructionSize(this, &v7, 0);
  v4 = v7;
  *(_DWORD *)v7 = 208;
  v4[1] = *((_DWORD *)this + 6);
  v4[2] = *((_DWORD *)this + 7);
  v4[3] = *((_DWORD *)this + 8);
  v4[4] = *((_DWORD *)this + 9);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    v4[5] = *(_DWORD *)(v5 + 24);
  return 0LL;
}
