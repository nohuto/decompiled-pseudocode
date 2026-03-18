/*
 * XREFs of ?FindRenderParameter@CVisual@@AEBAPEAUMilVisualRenderParameter@@W4Enum@MilVisualRenderParameterType@@PEAI@Z @ 0x180103A78
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x180103548 (-AddRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z.c)
 *     ?ProcessAddRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_ADDRENDERPARAMETER@@@Z @ 0x180104360 (-ProcessAddRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_ADDRENDERPARAMETE.c)
 *     ?ProcessRemoveRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_REMOVERENDERPARAMETER@@@Z @ 0x180104484 (-ProcessRemoveRenderParameter@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_REMOVERENDERPA.c)
 *     ?RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z @ 0x18010493C (-RemoveRenderParameter@CVisual@@QEAAJPEBUMilVisualRenderParameter@@@Z.c)
 *     ?AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x180106DA8 (-AddRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z.c)
 *     ?RemoveRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z @ 0x1801071D8 (-RemoveRenderParameters@CVisualGroup@@QEAAJPEAUVisualContextualizedOpacityData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::FindRenderParameter(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rbx

  v3 = *(_DWORD *)(a1 + 752);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 728);
    while ( *(_DWORD *)(v6 + 24 * v5) != a2 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v3 )
        return v4;
    }
    v4 = v6 + 24 * v5;
    if ( a3 )
      *a3 = v5;
  }
  return v4;
}
