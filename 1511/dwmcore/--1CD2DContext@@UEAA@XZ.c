/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x180021FD0
 * Callers:
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x180024514 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1801450C0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180022020 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 344);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 304);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 168);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 120);
}
