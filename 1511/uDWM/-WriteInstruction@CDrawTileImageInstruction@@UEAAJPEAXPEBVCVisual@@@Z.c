/*
 * XREFs of ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18000E500
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x18001873C (-WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z.c)
 */

__int64 __fastcall CDrawTileImageInstruction::WriteInstruction(
        CDrawTileImageInstruction *this,
        void *a2,
        const struct CVisual *a3)
{
  char *v4; // r8
  __int64 v5; // rcx
  float *v6; // rax
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  CRenderDataInstruction::WriteInstructionSize(this, &v8, 0);
  v4 = (char *)v8;
  v5 = 4LL;
  *(_DWORD *)v8 = 214;
  v6 = (float *)(v4 + 8);
  *((_DWORD *)v4 + 1) = *(_DWORD *)(*((_QWORD *)this + 6) + 24LL);
  do
  {
    *v6 = (float)*(int *)((char *)v6 + this - (CDrawTileImageInstruction *)v4 + 8);
    ++v6;
    --v5;
  }
  while ( v5 );
  *((float *)v4 + 7) = (float)*((int *)this + 8);
  *((float *)v4 + 8) = (float)*((int *)this + 9);
  *((_DWORD *)v4 + 6) = *((_DWORD *)this + 10);
  return 0LL;
}
