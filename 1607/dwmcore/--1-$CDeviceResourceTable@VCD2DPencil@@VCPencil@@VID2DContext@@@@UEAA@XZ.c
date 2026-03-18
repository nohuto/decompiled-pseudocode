/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAA@XZ @ 0x18012B198
 * Callers:
 *     ??1CPencil@@UEAA@XZ @ 0x18012B258 (--1CPencil@@UEAA@XZ.c)
 *     ??_G?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAAPEAXI@Z @ 0x18012B360 (--_G-$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x1800151A8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 */

void __fastcall CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::~CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>(
        struct IDeviceResourceNotify *a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::`vftable';
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::ReleaseResourcesNoAddRef(a1);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)a1 + 16);
}
