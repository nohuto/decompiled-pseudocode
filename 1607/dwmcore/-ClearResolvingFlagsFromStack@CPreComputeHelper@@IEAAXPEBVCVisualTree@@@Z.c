/*
 * XREFs of ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18018D994
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B500 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800AEE6C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 */

void __fastcall CPreComputeHelper::ClearResolvingFlagsFromStack(CPreComputeHelper *this, const struct CVisualTree *a2)
{
  int *v2; // rdi
  CVisual *v4; // rbx
  struct _LIST_ENTRY *TreeData; // rax
  CVisual *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (int *)((char *)this + 8);
  while ( (unsigned int)CWatermarkStack<CVisual *,64,2,10>::Pop(v2, &v6) )
  {
    v4 = v6;
    TreeData = CVisual::FindTreeData(v6, a2);
    if ( (*(_DWORD *)(*((_QWORD *)v4 + 34) + 4LL) & 0x10000000) != 0 )
      LOBYTE(TreeData[1].Flink) &= ~8u;
  }
}
