/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18002BBB4
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x18002BCBC (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18002A484 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18002BB50 (-UnmapSection@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  bool v1; // zf
  __int64 i; // rcx
  CMILRefCountBase *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  CGdiSpriteBitmap **v7; // rdx
  CGdiSpriteBitmap **v8; // rcx

  v1 = *((_BYTE *)this + 232) == 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CGdiSpriteBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CGdiSpriteBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 18) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 19) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
    --*(_DWORD *)(*((_QWORD *)this + 4) + 360LL);
  CGdiSpriteBitmap::ReleaseDeviceResources(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 128); i = (unsigned int)(i + 1) )
  {
    *((_QWORD *)this + i + 32) = 0LL;
    *((_DWORD *)this + 2 * i + 96) = 0;
    *((_DWORD *)this + 2 * i + 97) = 0;
  }
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 79);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  if ( (*((_BYTE *)this + 516) & 8) != 0 )
  {
    v7 = (CGdiSpriteBitmap **)*((_QWORD *)this + 69);
    v8 = (CGdiSpriteBitmap **)*((_QWORD *)this + 70);
    if ( v7[1] != (CGdiSpriteBitmap *)((char *)this + 552) || *v8 != (CGdiSpriteBitmap *)((char *)this + 552) )
      __fastfail(3u);
    *v8 = (CGdiSpriteBitmap *)v7;
    v7[1] = (CGdiSpriteBitmap *)v8;
    *((_BYTE *)this + 516) &= ~8u;
  }
  CGdiSpriteBitmap::UnmapSection(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 568, v5, v6);
  CBitmapResource::~CBitmapResource(this);
}
