/*
 * XREFs of ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800AEE6C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18018D05C (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18018D994 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18018DA50 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x18018DBE8 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x18018DCD0 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CVisual *,64,2,10>::Pop(int *a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rcx

  v3 = *a1;
  if ( !v3 )
    return 0LL;
  v4 = (unsigned int)(v3 - 1);
  *a1 = v4;
  if ( a2 )
    *a2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v4);
  return 1LL;
}
