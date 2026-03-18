/*
 * XREFs of ??1CFlipChain@@MEAA@XZ @ 0x18010857C
 * Callers:
 *     ??_ECFlipChain@@MEAAPEAXI@Z @ 0x180108788 (--_ECFlipChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180109984 (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180109AC8 (-Reset@CFlipChain@@IEAAXXZ.c)
 */

void __fastcall CFlipChain::~CFlipChain(CFlipChain *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rsi
  void (__fastcall ***v3)(_QWORD, __int64); // rsi

  *(_QWORD *)this = &CFlipChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CFlipChain::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CFlipChain::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CFlipChain::`vftable';
  CFlipChain::ReleaseDeviceResources(this);
  CFlipChain::Reset(this);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 26);
  if ( v2 )
    (**v2)(*((_QWORD *)this + 26), 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 25);
  if ( v3 )
    (**v3)(*((_QWORD *)this + 25), 1LL);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 16);
  CBitmapResource::~CBitmapResource(this);
}
