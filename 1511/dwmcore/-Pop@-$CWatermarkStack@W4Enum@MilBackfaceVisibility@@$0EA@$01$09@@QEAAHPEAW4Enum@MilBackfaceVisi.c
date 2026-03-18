/*
 * XREFs of ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x180006300
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z @ 0x18015AEBC (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(_DWORD *a1)
{
  if ( !*a1 )
    return 0LL;
  --*a1;
  return 1LL;
}
