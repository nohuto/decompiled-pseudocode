/*
 * XREFs of ?WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x1800181B0
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x18001873C (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 */

__int64 __fastcall CDrawVisualTreeInstruction::WriteInstruction(
        CDrawVisualTreeInstruction *this,
        void *a2,
        const struct CVisual *a3)
{
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  CRenderDataInstruction::WriteInstructionSize(this, &v8, 0);
  v4 = v8;
  *(_DWORD *)v8 = 212;
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v6 = 0;
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 24);
  v4[1] = v6;
  return 0LL;
}
