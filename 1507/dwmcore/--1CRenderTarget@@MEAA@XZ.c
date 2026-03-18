/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x180058538
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18004D4A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1800EAEC0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1800EBD78 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x1800F9E70 (--_GCRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CAnalogRenderTarget@@EEAA@XZ @ 0x180126088 (--1CAnalogRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x180058508 (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800585D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
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
