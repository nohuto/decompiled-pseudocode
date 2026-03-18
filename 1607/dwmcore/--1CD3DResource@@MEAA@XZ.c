/*
 * XREFs of ??1CD3DResource@@MEAA@XZ @ 0x18009F0D8
 * Callers:
 *     ??1CD3DSurface@@MEAA@XZ @ 0x180079B34 (--1CD3DSurface@@MEAA@XZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x180079F9C (--1CSwapChainBase@@MEAA@XZ.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180081578 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x1800819C0 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ??_ECD3DResource@@MEAAPEAXI@Z @ 0x180178B10 (--_ECD3DResource@@MEAAPEAXI@Z.c)
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180178EF4 (--1CD3DConstantBuffer@@MEAA@XZ.c)
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x18017A134 (--1CD3DPixelShader@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD3DResource::~CD3DResource(CD3DResource *this)
{
  *(_QWORD *)this = &CD3DResource::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 80);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
