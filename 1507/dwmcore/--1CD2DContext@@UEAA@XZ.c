/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x18008B704
 * Callers:
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x18008B1E4 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x180133880 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18008B754 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 */

void __fastcall CD2DContext::~CD2DContext(void **this)
{
  *this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources((CD2DContext *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 45);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 21);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 15);
}
