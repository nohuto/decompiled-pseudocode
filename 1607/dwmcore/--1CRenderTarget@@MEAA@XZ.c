/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800B9BB4
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800B8CA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18011CD64 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18011E474 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x18012BFD0 (--_GCRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x180165F38 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 *     ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x180166E60 (--1CAnalogCompositorTarget@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800B828C (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B8390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  *(_QWORD *)this = &CRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CRenderTarget::`vftable'{for `IVisualTreeClient'};
  CRenderTarget::SetVisualTree(this, 0LL);
  CRenderTarget::ReleaseDrawingContext(this);
  CResource::~CResource(this);
}
