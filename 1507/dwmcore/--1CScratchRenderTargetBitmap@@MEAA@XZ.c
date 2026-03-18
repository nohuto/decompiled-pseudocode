/*
 * XREFs of ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x180003010
 * Callers:
 *     ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180003050 (--_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(CScratchRenderTargetBitmap *this)
{
  *(_QWORD *)this = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 15) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 23) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  CHwTextureRenderTarget::~CHwTextureRenderTarget(this);
}
