/*
 * XREFs of ??1CD3DResource@@MEAA@XZ @ 0x180027D28
 * Callers:
 *     ??1CD3DSurface@@MEAA@XZ @ 0x18002A104 (--1CD3DSurface@@MEAA@XZ.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x18002DCD8 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x180072B20 (--1CSwapChainBase@@MEAA@XZ.c)
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x18008B540 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ??_ECD3DResource@@MEAAPEAXI@Z @ 0x1801487E0 (--_ECD3DResource@@MEAAPEAXI@Z.c)
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180149914 (--1CD3DConstantBuffer@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD3DResource::~CD3DResource(CD3DResource *this)
{
  *(_QWORD *)this = &CD3DResource::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 80);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
