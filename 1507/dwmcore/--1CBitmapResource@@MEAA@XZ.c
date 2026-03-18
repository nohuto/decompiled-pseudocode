/*
 * XREFs of ??1CBitmapResource@@MEAA@XZ @ 0x1800829F8
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18001211C (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18007F930 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x180082A3C (--_GCBitmapResource@@MEAAPEAXI@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x18010857C (--1CFlipChain@@MEAA@XZ.c)
 * Callees:
 *     ?Dispose@CBitmapResource@@IEAAXXZ @ 0x1800829A8 (-Dispose@CBitmapResource@@IEAAXXZ.c)
 */

void __fastcall CBitmapResource::~CBitmapResource(CBitmapResource *this)
{
  CResource *v1; // rbx

  *(_QWORD *)this = &CBitmapResource::`vftable'{for `IPixelFormat'};
  v1 = (CBitmapResource *)((char *)this + 16);
  *((_QWORD *)this + 1) = &CBitmapResource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CBitmapResource::`vftable'{for `CContent'};
  CBitmapResource::Dispose(this);
  CResource::~CResource(v1);
}
