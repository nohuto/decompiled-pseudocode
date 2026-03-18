/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800AD304
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18007E754 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801068E0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180107890 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x180113C80 (--_GCRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x18013BDA0 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 *     ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x18013CD6C (--1CAnalogCompositorTarget@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800AD24C (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AD390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  *(_QWORD *)this = &CRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  CRenderTarget::SetVisualTree(this, 0LL);
  CRenderTarget::ReleaseDrawingContext(this);
  CResource::~CResource(this);
}
