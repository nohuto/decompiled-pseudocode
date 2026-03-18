/*
 * XREFs of ??$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z @ 0x18004868C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18007C618 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CFlipChain>(CResource *a1, struct CResource **a2)
{
  struct CResource *v3; // rdx

  v3 = *a2;
  if ( v3 )
    v3 = (struct CResource *)((char *)v3 + 16);
  CResource::UnRegisterNotifierInternal(a1, v3);
  *a2 = 0LL;
}
