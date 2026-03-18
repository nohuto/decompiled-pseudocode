/*
 * XREFs of ??1CFlipChain@@MEAA@XZ @ 0x180141BA0
 * Callers:
 *     ??_ECFlipChain@@MEAAPEAXI@Z @ 0x180141D34 (--_ECFlipChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180142264 (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x1801422A8 (-Reset@CFlipChain@@IEAAXXZ.c)
 */

void __fastcall CFlipChain::~CFlipChain(CFlipChain *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CFlipChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CFlipChain::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CFlipChain::`vftable'{for `CContent'};
  *((_QWORD *)this + 18) = &CFlipChain::`vftable';
  CFlipChain::ReleaseDeviceResources(this);
  CFlipChain::Reset(this);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 35);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 34);
  if ( v3 )
    (**v3)(v3, 1LL);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 288);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 200);
  CBitmapResource::~CBitmapResource(this);
}
