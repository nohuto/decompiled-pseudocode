/*
 * XREFs of ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x18018DBE8
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B500 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800AEE6C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x18011350C (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18018DA00 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 */

__int64 __fastcall CPreComputeHelper::ResolveTransformParentCycle(
        CPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct _LIST_ENTRY *a3,
        struct CVisual *a4)
{
  unsigned int v4; // ebx
  int *v5; // rsi
  int v9; // eax
  CVisual *v10; // rdi
  struct TransformParentData *TransformParentDataInternal; // rax
  CPreComputeHelper *v12; // rcx
  __int64 v13; // r10
  CVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (int *)((char *)this + 8);
  v15 = 0LL;
  while ( *v5 )
  {
    v9 = CWatermarkStack<CVisual *,64,2,10>::Top(v5, &v15);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x15Du);
      return v4;
    }
    v10 = v15;
    if ( (*(_DWORD *)(*((_QWORD *)v15 + 34) + 4LL) & 0x10000000) != 0 )
    {
      CVisual::FindTreeData(v15, a2);
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v10);
      *(_BYTE *)(v13 + 16) &= ~8u;
      if ( *((_BYTE *)TransformParentDataInternal + 8) )
      {
        if ( (*(_BYTE *)(v13 + 16) & 4) == 0 || *(struct _LIST_ENTRY **)(v13 + 216) != a3 )
          CPreComputeHelper::InvalidateVisual(v12, v10, a2, a3);
        if ( a4 == v10 )
          return v4;
      }
    }
    CWatermarkStack<CVisual *,64,2,10>::Pop(v5, 0LL);
  }
  return v4;
}
