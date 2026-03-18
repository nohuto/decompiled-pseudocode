/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x18012B21C
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x18012B8E0 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x18012B16C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void __fastcall CInk::~CInk(CInk *this)
{
  *(_QWORD *)this = &CInk::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 208);
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((CInk *)((char *)this + 112));
  CResource::~CResource(this);
}
