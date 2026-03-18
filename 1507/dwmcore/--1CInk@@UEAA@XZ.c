/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x1800F8B90
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x1800F93A0 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x1800F8B0C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void __fastcall CInk::~CInk(void **this)
{
  *this = &CInk::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((__int64)(this + 5));
  CResource::~CResource((CResource *)this);
}
