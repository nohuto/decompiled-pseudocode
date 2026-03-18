/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18007F930
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x18007FA2C (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18007E14C (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18007F8CC (-UnmapSection@CGdiSpriteBitmap@@IEAAXXZ.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  bool v1; // zf
  __int64 i; // rcx
  CMILCOMBase *v4; // rcx
  CGdiSpriteBitmap **v5; // rdx
  CGdiSpriteBitmap **v6; // rcx

  v1 = *((_BYTE *)this + 160) == 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CGdiSpriteBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CGdiSpriteBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 10) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
    --*(_DWORD *)(*((_QWORD *)this + 4) + 360LL);
  CGdiSpriteBitmap::ReleaseDeviceResources(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 110); i = (unsigned int)(i + 1) )
  {
    *((_QWORD *)this + i + 23) = 0LL;
    *((_DWORD *)this + 2 * i + 78) = 0;
    *((_DWORD *)this + 2 * i + 79) = 0;
  }
  v4 = (CMILCOMBase *)*((_QWORD *)this + 70);
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  if ( (*((_BYTE *)this + 444) & 8) != 0 )
  {
    v5 = (CGdiSpriteBitmap **)*((_QWORD *)this + 60);
    v6 = (CGdiSpriteBitmap **)*((_QWORD *)this + 61);
    if ( v5[1] != (CGdiSpriteBitmap *)((char *)this + 480) || *v6 != (CGdiSpriteBitmap *)((char *)this + 480) )
      __fastfail(3u);
    *v6 = (CGdiSpriteBitmap *)v5;
    v5[1] = (CGdiSpriteBitmap *)v6;
    *((_BYTE *)this + 444) &= ~8u;
  }
  CGdiSpriteBitmap::UnmapSection(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 62);
  CBitmapResource::~CBitmapResource(this);
}
